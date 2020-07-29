`timescale 1 ns / 1 ps

`ifndef VERILATOR
module testbench #(
	parameter VERBOSE = 0
);
	reg clk = 1;
	reg resetn = 1;
	wire trap;

	always #5 clk = ~clk;

	initial begin
		repeat (100) @(posedge clk);
		resetn <= 0;
	end

	initial begin
		if ($test$plusargs("vcd")) begin
			$dumpfile("testbench.vcd");
			$dumpvars(0, testbench);
		end
		repeat (1000000) @(posedge clk);
		$display("TIMEOUT");
		$finish;
	end

	wire trace_valid;
	wire [35:0] trace_data;
	integer trace_file;

	initial begin
		if ($test$plusargs("trace")) begin
			trace_file = $fopen("testbench.trace", "w");
			repeat (10) @(posedge clk);
			while (!trap) begin
				@(posedge clk);
				if (trace_valid)
					$fwrite(trace_file, "%x\n", trace_data);
			end
			$fclose(trace_file);
			$display("Finished writing testbench.trace.");
		end
	end

	picorv32_wrapper #(
		.VERBOSE (VERBOSE)
	) top (
		.wb_clk(clk),
		.wb_rst(resetn),
		.trap(trap),
		.trace_valid(trace_valid),
		.trace_data(trace_data)
	);
endmodule
`endif

module picorv32_wrapper #(
	parameter VERBOSE = 0
) (
	input wb_clk,
	input wb_rst,
	output trap,
	output trace_valid,
	output [35:0] trace_data
);
	wire tests_passed;
	reg [31:0] irq = 0;
	wire mem_instr;

	reg [15:0] count_cycle = 0;
	always @(posedge wb_clk) count_cycle <= !wb_rst ? count_cycle + 1 : 0;

	always @* begin
		irq = 0;
		irq[4] = &count_cycle[12:0];
		irq[5] = &count_cycle[15:0];
	end



	wire [31:0] dwb_m2s_adr;
	wire [31:0] dwb_m2s_dat;
	wire [3:0] dwb_m2s_sel;
	wire dwb_m2s_we;
	wire dwb_m2s_cyc;
	wire dwb_m2s_stb;

	wire [31:0] iwb_m2s_adr;
	wire [31:0] iwb_m2s_dat;
	wire [3:0] iwb_m2s_sel;
	wire iwb_m2s_we;
	wire iwb_m2s_cyc;
	wire iwb_m2s_stb;
	wire [31:0] iwb_s2m_dat;
	wire iwb_s2m_ack;
	wire enable_iram = 1;


	wire [31:0] wb_s2m_dat_ram;
	wire [31:0] wb_s2m_dat_io1;
	wire [31:0] wb_s2m_dat_io2;
	wire wb_s2m_ack_ram;
	wire wb_s2m_ack_io1;
	wire wb_s2m_ack_io2;


	/**** Ties in wb_ram and wb_IO ****/
	wire enable_ram_gpio1;
	wire enable_ram_gpio2;
	wire enable_dram = 1;//enable_ram_gpio1 & enable_ram_gpio2;

	wire [31:0] dwb_s2m_dat = enable_dram ? wb_s2m_dat_ram : enable_ram_gpio1 ? wb_s2m_dat_io2 : wb_s2m_dat_io1;
	wire dwb_s2m_ack = enable_dram ? wb_s2m_ack_ram : enable_ram_gpio1 ? wb_s2m_ack_io2 : wb_s2m_ack_io1;
	/**** Ties in wb_ram and wb_IO ****/

	wb_ram #(
		.depth (128*1024),
		.VERBOSE (VERBOSE)
	) i_ram ( // Wishbone interface
		.wb_clk_i(wb_clk),
		.wb_rst_i(wb_rst),
		.enable(enable_iram),

		.wb_adr_i(iwb_m2s_adr),
		.wb_dat_i(iwb_m2s_dat),
		.wb_stb_i(iwb_m2s_stb),
		.wb_cyc_i(iwb_m2s_cyc),
		.wb_dat_o(iwb_s2m_dat),
		.wb_ack_o(iwb_s2m_ack),
		.wb_sel_i(iwb_m2s_sel),
		.wb_we_i(iwb_m2s_we),

		.mem_instr(mem_instr),
		.tests_passed(tests_passed)
	);

	wb_ram #(
		.depth (128*1024),
		.VERBOSE (VERBOSE)
	) d_ram ( // Wishbone interface
		.wb_clk_i(wb_clk),
		.wb_rst_i(wb_rst),
		.enable(enable_dram),

		.wb_adr_i(dwb_m2s_adr),
		.wb_dat_i(dwb_m2s_dat),
		.wb_stb_i(dwb_m2s_stb),
		.wb_cyc_i(dwb_m2s_cyc),
		.wb_dat_o(wb_s2m_dat_ram),
		.wb_ack_o(wb_s2m_ack_ram),
		.wb_sel_i(dwb_m2s_sel),
		.wb_we_i(dwb_m2s_we),

		.mem_instr(mem_instr),
		.tests_passed(tests_passed)
	);


	// wb_IO #(
	// 	.base_address(32'h3000_0000),
	// 	.extra_IO_addresses(2)
	// 	) gpio1 ( // Wishbone interface
	// 	.wb_clk_i(wb_clk),
	// 	.wb_rst_i(wb_rst),
	//
	// 	.wb_adr_i(wb_m2s_adr),
	// 	.wb_dat_i(wb_m2s_dat),
	// 	.wb_stb_i(wb_m2s_stb),
	// 	.wb_cyc_i(wb_m2s_cyc),
	// 	.wb_dat_o(wb_s2m_dat_io1),
	// 	.wb_ack_o(wb_s2m_ack_io1),
	// 	.wb_sel_i(wb_m2s_sel),
	// 	.wb_we_i(wb_m2s_we),
	// 	.enable_ram_o(enable_ram_gpio1)
	// );
	//
	// wb_IO #(
	// 	.base_address(32'h4000_0000),
	// 	.extra_IO_addresses(2)
	// 	) gpio2 ( // Wishbone interface
	// 	.wb_clk_i(wb_clk),
	// 	.wb_rst_i(wb_rst),
	//
	// 	.wb_adr_i(wb_m2s_adr),
	// 	.wb_dat_i(wb_m2s_dat),
	// 	.wb_stb_i(wb_m2s_stb),
	// 	.wb_cyc_i(wb_m2s_cyc),
	// 	.wb_dat_o(wb_s2m_dat_io2),
	// 	.wb_ack_o(wb_s2m_ack_io2),
	// 	.wb_sel_i(wb_m2s_sel),
	// 	.wb_we_i(wb_m2s_we),
	// 	.enable_ram_o(enable_ram_gpio2)
	// );

	VexRiscv uut (
		.clk(wb_clk),
		.reset(wb_rst),

		.iBusWishbone_ADR(iwb_m2s_adr),
		.iBusWishbone_DAT_MISO(iwb_s2m_dat),
		.iBusWishbone_STB(iwb_m2s_stb),
		.iBusWishbone_ACK(iwb_s2m_ack),
		.iBusWishbone_CYC(iwb_m2s_cyc),
		.iBusWishbone_DAT_MOSI(iwb_m2s_dat),
		.iBusWishbone_WE(iwb_m2s_we),
		.iBusWishbone_SEL(iwb_m2s_sel),

		.dBusWishbone_ADR(dwb_m2s_adr),
		.dBusWishbone_DAT_MISO(dwb_s2m_dat),
		.dBusWishbone_STB(dwb_m2s_stb),
		.dBusWishbone_ACK(dwb_s2m_ack),
		.dBusWishbone_CYC(dwb_m2s_cyc),
		.dBusWishbone_DAT_MOSI(dwb_m2s_dat),
		.dBusWishbone_WE(dwb_m2s_we),
		.dBusWishbone_SEL(dwb_m2s_sel)
	);

	reg [1023:0] firmware_file;
	initial begin
		if (!$value$plusargs("firmware=%s", firmware_file))
			firmware_file = "firmware/firmware.hex";
		$readmemh(firmware_file, i_ram.mem);
	end

	integer cycle_counter;
	always @(posedge wb_clk) begin
		cycle_counter <= !wb_rst ? cycle_counter + 1 : 0;
		if (!wb_rst && trap) begin
`ifndef VERILATOR
			repeat (10) @(posedge wb_clk);
`endif
			$display("TRAP after %1d clock cycles", cycle_counter);
			if (tests_passed) begin
				$display("ALL TESTS PASSED.");
				$finish;
			end else begin
				$display("ERROR!");
				if ($test$plusargs("noerror"))
					$finish;
				$stop;
			end
		end
	end
endmodule

/* ISC License
 *
 * Verilog on-chip RAM with Wishbone interface
 *
 * Copyright (C) 2014, 2016 Olof Kindgren <olof.kindgren@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

module wb_ram #(
	parameter depth = 256,
	parameter memfile = "",
	parameter VERBOSE = 0
) (
	input wb_clk_i,
	input wb_rst_i,
	input enable,

	input [31:0] wb_adr_i,
	input [31:0] wb_dat_i,
	input [3:0] wb_sel_i,
	input wb_we_i,
	input wb_cyc_i,
	input wb_stb_i,

	output reg wb_ack_o,
	output reg [31:0] wb_dat_o,

	input mem_instr,
	output reg tests_passed
);

	reg verbose;
	initial verbose = $test$plusargs("verbose") || VERBOSE;

	initial tests_passed = 0;

	reg [31:0] adr_r;
	wire valid = wb_cyc_i & wb_stb_i & enable;

	always @(posedge wb_clk_i) begin
		adr_r <= wb_adr_i;
		// Ack generation
		wb_ack_o <= valid & !wb_ack_o;

		if (wb_rst_i)
		begin
			adr_r <= {32{1'b0}};
			wb_ack_o <= 1'b0;
		end
	end

	wire ram_we = wb_we_i & valid & wb_ack_o;

	wire [31:0] waddr = adr_r[31:2];
	wire [31:0] raddr = wb_adr_i[31:2];
	wire [3:0] we = {4{ram_we}} & wb_sel_i;

	wire [$clog2(depth/4)-1:0] raddr2 = raddr[$clog2(depth/4)-1:0];
	wire [$clog2(depth/4)-1:0] waddr2 = waddr[$clog2(depth/4)-1:0];

	reg [31:0] mem [0:depth/4-1] /* verilator public */;




	always @(posedge wb_clk_i) begin
		if (ram_we) begin
			if (verbose)
				$display("WR: ADDR=%08x DATA=%08x STRB=%04b",
					adr_r, wb_dat_i, we);

			if (adr_r[31:0] == 32'h1000_0000)
				if (verbose) begin
					if (32 <= wb_dat_i[7:0] && wb_dat_i[7:0] < 128)
						$display("OUT: '%c'", wb_dat_i[7:0]);
					else
						$display("OUT: %3d", wb_dat_i[7:0]);
				end else begin
					$write("%c", wb_dat_i[7:0]);
`ifndef VERILATOR
					$fflush();
`endif
				end
			else
			if (adr_r[31:0] == 32'h2000_0000)
				if (wb_dat_i[31:0] == 123456789)
					tests_passed = 1;
		end
	end

	always @(posedge wb_clk_i) begin
		if(valid) begin
			if (waddr2 < 128 * 1024 / 4) begin
				if (we[0])
					mem[waddr2][7:0] <= wb_dat_i[7:0];

				if (we[1])
					mem[waddr2][15:8] <= wb_dat_i[15:8];

				if (we[2])
					mem[waddr2][23:16] <= wb_dat_i[23:16];

				if (we[3])
					mem[waddr2][31:24] <= wb_dat_i[31:24];

			end

			if (valid & wb_ack_o & !ram_we)
				if (verbose)
					$display("RD: ADDR=%08x DATA=%08x%s", adr_r, mem[raddr2], mem_instr ? " INSN" : "");

				wb_dat_o <= mem[raddr2];
		end
	end

	initial begin
		if (memfile != "")
			$readmemh(memfile, mem);
	end
endmodule


/***********************************************
* Jaxon Coward
* Wisbone enable memory mapped IO
* 6/24/2020
***********************************************/


module wb_IO #(
	parameter base_address = 32'h3000_0000,
	parameter extra_IO_addresses = 0
) (
	input wb_clk_i,
	input wb_rst_i,

	input [31:0] wb_adr_i,
	input [31:0] wb_dat_i,
	input [3:0] wb_sel_i,
	input wb_we_i,
	input wb_cyc_i,
	input wb_stb_i,

	output reg wb_ack_o,
	output reg [31:0] wb_dat_o,
	output reg enable_ram_o
);


	reg [31:0] mem_io[extra_IO_addresses:0];

	wire valid = wb_cyc_i & wb_stb_i & !enable_ram_o;
	wire [31:0]mem_elem = (wb_adr_i - base_address)>>2;


	integer i;
	initial begin
	  for (i=0;i<=extra_IO_addresses;i=i+1)
	    mem_io[i] = 0;

		i = 0;
	end

	always @(posedge wb_clk_i) begin
		enable_ram_o <= !(mem_elem >= 0 & mem_elem <= extra_IO_addresses);
		// Ack generation
		wb_ack_o <= valid & !wb_ack_o;
		if (wb_rst_i)
		begin
			wb_ack_o <= 1'b0;
		end
	end

	wire ram_we = wb_we_i & valid & wb_ack_o;


	always @(posedge wb_clk_i) begin
    if(ram_we) begin
      mem_io[mem_elem] <= wb_dat_i;
    end else begin
      //i <= i + 1;
    end

    wb_dat_o <= mem_io[mem_elem] + i;
	end

endmodule
