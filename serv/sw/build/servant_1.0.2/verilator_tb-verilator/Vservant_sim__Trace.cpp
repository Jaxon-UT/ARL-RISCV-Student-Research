// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vservant_sim__Syms.h"


//======================

void Vservant_sim::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vservant_sim* t=(Vservant_sim*)userthis;
    Vservant_sim__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vservant_sim::traceChgThis(Vservant_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vservant_sim::traceChgThis__2(Vservant_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgArray(c+1,(vlSymsp->TOP__servant_sim.__PVT__firmware_file),1024);
	vcdp->chgArray(c+33,(vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__signature_file),1024);
	vcdp->chgBus(c+65,(vlSymsp->TOP__servant_sim__dut.__PVT__servant_mux__DOT__genblk1__DOT__f),32);
    }
}

void Vservant_sim::traceChgThis__3(Vservant_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+66,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc));
	vcdp->chgBit(c+67,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_ack));
	vcdp->chgBus(c+68,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_sel),4);
	vcdp->chgBit(c+69,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc));
	vcdp->chgBit(c+70,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
			    & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					    >> 0x1eU))))));
	vcdp->chgBit(c+71,(((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
			    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc)))));
	vcdp->chgBus(c+72,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr),32);
	vcdp->chgBit(c+73,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				   >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_cyc))))));
	vcdp->chgBit(c+74,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_cyc));
	vcdp->chgBit(c+75,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
			    & (1U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					    >> 0x1eU))))));
	vcdp->chgBit(c+76,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc) 
			    & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
			       >> 0x1fU))));
	vcdp->chgBit(c+77,((((8U == (0xfU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					     >> 0x1cU))) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc)) 
			    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack))));
	vcdp->chgBit(c+78,((((9U == (0xfU & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
					     >> 0x1cU))) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_cyc)) 
			    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack))));
	vcdp->chgBit(c+79,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_wreq));
	vcdp->chgBit(c+80,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_rreq));
	vcdp->chgBus(c+81,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
			     ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))),6);
	vcdp->chgBus(c+82,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
			     ? 0x22U : (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr)))),6);
	vcdp->chgBit(c+83,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
			    | (((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						   >> 2U)) 
					       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						  >> 4U)) 
					      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
				  | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					  >> 2U)) & 
				      (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					  >> 3U))) 
				     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
				 & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))) 
				& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
			       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init))))));
	vcdp->chgBit(c+84,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
			    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en))));
	vcdp->chgBit(c+85,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0));
	vcdp->chgBit(c+86,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
				   ? vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr
				   : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in)))));
	vcdp->chgBus(c+87,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
			     ? 0x21U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret)
					 ? 0x22U : 
					((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en)
					  ? (0x20U 
					     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr))
					  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr))))),6);
	vcdp->chgBit(c+88,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ready));
	vcdp->chgBit(c+89,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1));
	vcdp->chgBus(c+90,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__waddr),10);
	vcdp->chgBus(c+91,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))
			     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
			     : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__wdata0) 
				 << 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r)))),2);
	vcdp->chgBus(c+92,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__raddr),10);
	vcdp->chgBus(c+93,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))
			     ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
				 ? 0x22U : (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr)))
			     : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
				 ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr)))),6);
	vcdp->chgBus(c+94,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))
			     ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap)
				 ? 0x21U : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret)
					     ? 0x22U
					     : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en)
						 ? 
						(0x20U 
						 | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr))
						 : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr))))
			     : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr))),6);
	vcdp->chgBit(c+95,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 4U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						 >> 2U))) 
				  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				     | (((0U == (3U 
						 & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						    >> 1U)))
					  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq)
					  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt)) 
					^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))))));
	vcdp->chgBit(c+96,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__e_op));
	vcdp->chgBit(c+97,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op));
	vcdp->chgBit(c+98,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op));
	vcdp->chgBit(c+99,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op));
	vcdp->chgBit(c+100,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op));
	vcdp->chgBit(c+101,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op));
	vcdp->chgBit(c+102,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype) 
			      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
			     | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
				& (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
	vcdp->chgBit(c+103,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
				      & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
					  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
					 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r))) 
				     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
					 >> 1U) & (
						   (1U 
						    & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
							>> 2U) 
						       ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped)))
						    ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
						    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit)))) 
				    | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
					 >> 2U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r)) 
				       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0))) 
				   | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel) 
				       >> 3U) & (0x8e96U 
						 >> 
						 ((0xcU 
						   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						      << 2U)) 
						  | ((2U 
						      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
							 << 1U)) 
						     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)))))))));
	vcdp->chgBit(c+104,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op) 
			     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
				 ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur)
				 : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
				    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					  >> 2U)))))));
	vcdp->chgBit(c+105,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_out));
	vcdp->chgBit(c+106,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl_pc_en));
	vcdp->chgBit(c+107,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__utype));
	vcdp->chgBit(c+108,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret));
	vcdp->chgBit(c+109,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm));
	vcdp->chgBit(c+110,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap));
	vcdp->chgBit(c+111,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt0));
	vcdp->chgBit(c+112,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2));
	vcdp->chgBit(c+113,((1U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
				   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
				      | (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op)))))));
	vcdp->chgBit(c+114,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en));
	vcdp->chgBit(c+115,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op_or_opimm));
	vcdp->chgBit(c+116,(((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					   >> 1U)))
			      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq)
			      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt))));
	vcdp->chgBit(c+117,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_shamt_en));
	vcdp->chgBus(c+118,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu_rd_sel),4);
	vcdp->chgBit(c+119,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign));
	vcdp->chgBit(c+120,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned));
	vcdp->chgBit(c+121,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mstatus_en));
	vcdp->chgBit(c+122,(((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
			       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
			      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
			     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20)))));
	vcdp->chgBit(c+123,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_mcause_en));
	vcdp->chgBit(c+124,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en));
	vcdp->chgBus(c+125,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_addr),2);
	vcdp->chgBit(c+126,(((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r)) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq))));
	vcdp->chgBit(c+127,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap_taken));
	vcdp->chgBit(c+128,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__csr_in));
	vcdp->chgBit(c+129,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__csr_en))));
	vcdp->chgBit(c+130,(((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__slt_op) 
			       | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_op)) 
			      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__branch_op)) 
			     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op))));
	vcdp->chgBit(c+131,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__trap_pending));
	vcdp->chgBit(c+132,(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__decode__i_wb_en));
	vcdp->chgBus(c+133,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__m2),2);
	vcdp->chgBit(c+134,((1U & (~ ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
				      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
					 | (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__shift_op))))))));
	vcdp->chgBit(c+135,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
				      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg_rs1_en)) 
				     + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__imm) 
					 & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					       >> 2U))) 
					& (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
				   >> 1U))));
	vcdp->chgBit(c+136,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
	vcdp->chgBit(c+137,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb));
	vcdp->chgBit(c+138,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
			     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret))));
	vcdp->chgBit(c+139,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4));
	vcdp->chgBit(c+140,((1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr) 
				     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt2)) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
				   >> 1U))));
	vcdp->chgBit(c+141,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
				   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)))));
	vcdp->chgBit(c+142,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
				     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
				   >> 1U))));
	vcdp->chgBit(c+143,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__trap) 
			      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mret))
			      ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata1) 
				 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r))
			      : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump)
				  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
				  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)))));
	vcdp->chgBit(c+144,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a));
	vcdp->chgBit(c+145,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b));
	vcdp->chgBit(c+146,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
				   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)))));
	vcdp->chgBit(c+147,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_eq));
	vcdp->chgBit(c+148,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt));
	vcdp->chgBit(c+149,(((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
			      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)
			      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1))));
	vcdp->chgBit(c+150,((1U & ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
				     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
				    + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)) 
				   >> 1U))));
	vcdp->chgBit(c+151,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1));
	vcdp->chgBit(c+152,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy));
	vcdp->chgBit(c+153,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b));
	vcdp->chgBit(c+154,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_b));
	vcdp->chgBit(c+155,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq));
	vcdp->chgBit(c+156,((1U & (0x8e96U >> ((0xcU 
						& ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						   << 2U)) 
					       | ((2U 
						   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0) 
						      << 1U)) 
						  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__op_b)))))));
	vcdp->chgBit(c+157,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd));
	vcdp->chgBit(c+158,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_misalign)
				    ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
				    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)))));
	vcdp->chgBit(c+159,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_cur));
	vcdp->chgBit(c+160,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid));
	vcdp->chgBit(c+161,(vlSymsp->TOP__servant_sim__dut.cpu__DOT__cpu__DOT____Vcellinp__genblk1__DOT__csr__i_d));
	vcdp->chgBit(c+162,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq));
	vcdp->chgBus(c+163,((0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__wb_mem_adr 
				       >> 2U))),11);
	vcdp->chgBus(c+164,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we),4);
    }
}

void Vservant_sim::traceChgThis__4(Vservant_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+165,(vlSymsp->TOP__servant_sim__dut.__PVT__q));
	vcdp->chgBit(c+166,(vlSymsp->TOP__servant_sim__dut.__PVT__timer_irq));
	vcdp->chgBus(c+167,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr),32);
	vcdp->chgBus(c+168,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt),32);
	vcdp->chgBus(c+169,((0xfffffffcU & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)),32);
	vcdp->chgBus(c+170,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat),32);
	vcdp->chgBit(c+171,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				   >> 3U))));
	vcdp->chgBus(c+172,(((0x80000000U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
			      ? vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime
			      : ((0x40000000U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
				  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt)
				  : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))),32);
	vcdp->chgBit(c+173,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_dbus_ack));
	vcdp->chgBit(c+174,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack));
	vcdp->chgBit(c+175,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__dat)));
	vcdp->chgBit(c+176,(vlSymsp->TOP__servant_sim__dut.__PVT__wb_gpio_rdt));
	vcdp->chgBus(c+177,(vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtime),32);
	vcdp->chgBus(c+178,((3U & (vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
				   >> 0x1eU))),2);
	vcdp->chgBus(c+179,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr),6);
	vcdp->chgBit(c+180,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))));
	vcdp->chgBit(c+181,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo) 
			     & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt)) 
				 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
				| ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt) 
				   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r))))));
	vcdp->chgBus(c+182,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rdata),2);
	vcdp->chgBit(c+183,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rgnt));
	vcdp->chgBus(c+184,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt),5);
	vcdp->chgBit(c+185,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wgo));
	vcdp->chgBit(c+186,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata0_r));
	vcdp->chgBus(c+187,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wdata1_r),2);
	vcdp->chgBit(c+188,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen0_r));
	vcdp->chgBit(c+189,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wen1_r));
	vcdp->chgBit(c+190,((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt)))));
	vcdp->chgBit(c+191,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wcnt))));
	vcdp->chgBit(c+192,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__wreq_r));
	vcdp->chgBus(c+193,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt),5);
	vcdp->chgBit(c+194,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rcnt))));
	vcdp->chgBit(c+195,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rtrig1));
	vcdp->chgBus(c+196,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0),2);
	vcdp->chgBit(c+197,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata1));
	vcdp->chgBit(c+198,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rreq_r));
	vcdp->chgBus(c+199,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr),5);
	vcdp->chgBus(c+200,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr),5);
	vcdp->chgBus(c+201,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs2_addr),5);
	vcdp->chgBit(c+202,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20));
	vcdp->chgBit(c+203,((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				>> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					       >> 2U)) 
					   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					      >> 4U)) 
					  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
			      | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				      >> 2U)) & (~ 
						 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						  >> 3U))) 
				 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
			     & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr)))));
	vcdp->chgBit(c+204,((1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
				    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				       >> 2U)) & (~ 
						  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						   >> 4U))))));
	vcdp->chgBit(c+205,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__jump));
	vcdp->chgBit(c+206,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				    >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
	vcdp->chgBit(c+207,((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
			      | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
			     | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					     >> 3U))))));
	vcdp->chgBit(c+208,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init));
	vcdp->chgBit(c+209,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en));
	vcdp->chgBit(c+210,((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))));
	vcdp->chgBit(c+211,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
				    >> 2U) | (3U == 
					      (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))));
	vcdp->chgBit(c+212,(((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
			     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
				>> 1U))));
	vcdp->chgBit(c+213,(((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
			     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
				>> 3U))));
	vcdp->chgBit(c+214,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
			     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
				>> 3U))));
	vcdp->chgBit(c+215,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done));
	vcdp->chgBit(c+216,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				      >> 2U)))));
	vcdp->chgBit(c+217,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data)));
	vcdp->chgBit(c+218,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 3U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30))));
	vcdp->chgBus(c+219,((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))),2);
	vcdp->chgBit(c+220,((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					  >> 1U)))));
	vcdp->chgBit(c+221,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				       >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						   >> 1U) 
						  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						     >> 2U))))));
	vcdp->chgBit(c+222,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30));
	vcdp->chgBit(c+223,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				   >> 2U))));
	vcdp->chgBit(c+224,(((0x1fU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt)) 
			     == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt))));
	vcdp->chgBit(c+225,((((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				  >> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						 >> 2U)) 
					     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						>> 4U)) 
					    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
				| (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
					>> 2U)) & (~ 
						   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
						    >> 3U))) 
				   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
			       & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rd_addr))) 
			      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en)) 
			     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__init)))));
	vcdp->chgBit(c+226,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				      >> 2U)))));
	vcdp->chgBit(c+227,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				   >> 1U))));
	vcdp->chgBit(c+228,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
	vcdp->chgBus(c+229,((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
				   >> 1U))),2);
	vcdp->chgBit(c+230,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__rs1_addr))));
	vcdp->chgBit(c+231,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__pending_irq));
	vcdp->chgBus(c+232,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb),2);
	vcdp->chgBit(c+233,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
			      >> 4U) & ((0U == (3U 
						& (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
					| (3U == (3U 
						  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))))));
	vcdp->chgBit(c+234,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb) 
				   >> 1U))));
	vcdp->chgBit(c+235,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))));
	vcdp->chgBit(c+236,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req));
	vcdp->chgBus(c+237,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt),3);
	vcdp->chgBus(c+238,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r),4);
	vcdp->chgBit(c+239,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__stage_two_pending));
	vcdp->chgBit(c+240,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__irq_sync));
	vcdp->chgBit(c+241,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync));
	vcdp->chgBus(c+242,((0x3fffffffU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
					    >> 2U))),30);
	vcdp->chgBus(c+243,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode),5);
	vcdp->chgBus(c+244,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3),3);
	vcdp->chgBit(c+245,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21));
	vcdp->chgBit(c+246,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22));
	vcdp->chgBit(c+247,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26));
	vcdp->chgBit(c+248,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
			     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
				 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op22))) 
				& (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__op21))))));
	vcdp->chgBit(c+249,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__signbit));
	vcdp->chgBus(c+250,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm19_12_20),9);
	vcdp->chgBit(c+251,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm7));
	vcdp->chgBus(c+252,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30_25),6);
	vcdp->chgBus(c+253,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm24_20),5);
	vcdp->chgBus(c+254,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm11_7),5);
	vcdp->chgBit(c+255,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
				   >> 4U))));
	vcdp->chgBit(c+256,((8U == (0xfU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
	vcdp->chgBit(c+257,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r));
	vcdp->chgBus(c+258,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data),32);
	vcdp->chgBit(c+259,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__en_pc_r));
	vcdp->chgBit(c+260,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r));
	vcdp->chgBit(c+261,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r));
	vcdp->chgBit(c+262,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__wb_ibus_adr)));
	vcdp->chgBit(c+263,((1U & ((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
					   >> 2U) ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped)))
				    ? vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__bufreg__DOT__data
				    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit)))));
	vcdp->chgBit(c+264,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__result_lt_r));
	vcdp->chgBus(c+265,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt),5);
	vcdp->chgBit(c+266,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shamt_msb));
	vcdp->chgBit(c+267,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r));
	vcdp->chgBit(c+268,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__b_inv_plus_1_cy_r));
	vcdp->chgBit(c+269,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__lt_r));
	vcdp->chgBit(c+270,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__eq_r));
	vcdp->chgBit(c+271,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
			     & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
				       >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						   >> 1U) 
						  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
						     >> 2U)))))));
	vcdp->chgBit(c+272,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
			     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__rf_ram_if__DOT__rdata0))));
	vcdp->chgBit(c+273,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__signbit));
	vcdp->chgBus(c+274,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__cnt),6);
	vcdp->chgBit(c+275,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__alu__DOT__shift__DOT__wrapped));
	vcdp->chgBit(c+276,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit));
	vcdp->chgBus(c+277,((7U & ((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
					  >> 1U)) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)))),3);
	vcdp->chgBit(c+278,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_en) 
			     & (~ (1U & (((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
						 >> 1U)) 
					  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__lsb)) 
					 >> 2U))))));
	vcdp->chgBit(c+279,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__mem_if__DOT__genblk1__DOT__misalign));
	vcdp->chgBit(c+280,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus));
	vcdp->chgBit(c+281,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mie));
	vcdp->chgBit(c+282,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mstatus_mpie));
	vcdp->chgBit(c+283,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mie_mtie));
	vcdp->chgBit(c+284,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31));
	vcdp->chgBus(c+285,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0),4);
	vcdp->chgBit(c+286,((1U & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
				    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause3_0)
				    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__cnt_done) 
				       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__mcause31))))));
	vcdp->chgBit(c+287,(vlSymsp->TOP__servant_sim__dut.__PVT__cpu__DOT__cpu__DOT__genblk1__DOT__csr__DOT__timer_irq_r));
	vcdp->chgBus(c+288,(vlSymsp->TOP__servant_sim__dut.__PVT__genblk1__DOT__timer__DOT__mtimecmp),32);
    }
}

void Vservant_sim::traceChgThis__5(Vservant_sim__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vservant_sim* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+289,(vlTOPp->wb_clk));
	vcdp->chgBit(c+290,(vlTOPp->wb_rst));
	vcdp->chgBit(c+291,(vlTOPp->q));
    }
}
