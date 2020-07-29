
RISCV_GNU_TOOLCHAIN_INSTALL_PREFIX = /opt/riscv32
TOOLCHAIN_PREFIX = $(RISCV_GNU_TOOLCHAIN_INSTALL_PREFIX)i/bin/riscv32-unknown-elf-

%: %.hex
	fusesoc run --target=verilator_tb servant --uart_baudrate=57600 --firmware=$< --memsize=32768

%_vcd: %.hex
	fusesoc run --target=verilator_tb servant --vcd --uart_baudrate=57600 --firmware=$<

zephyr_hello:
	fusesoc run --target=verilator_tb servant --uart_baudrate=57600 --firmware=zephyr_examples/zephyr_hello.hex

zephyr_hello_vcd:
	fusesoc run --target=verilator_tb servant --vcd --uart_baudrate=57600 --firmware=zephyr_examples/zephyr_hello.hex

zephyr_hello_mt:
	fusesoc run --target=verilator_tb servant --uart_baudrate=57600 --firmware=zephyr_examples/zephyr_hello_mt.hex --memsize=16384

zephyr_phil:
	fusesoc run --target=verilator_tb servant --uart_baudrate=57600 --firmware=zephyr_examples/zephyr_phil.hex --memsize=32768

zephyr_sync:
	fusesoc run --target=verilator_tb servant --uart_baudrate=57600 --firmware=zephyr_examples/zephyr_sync.hex --memsize=16384


%.S: %.c link.ld
	$(TOOLCHAIN_PREFIX)gcc -S -nostartfiles -march=rv32i -mabi=ilp32 -Tlink.ld -o  $@ $<

%.elf: %.S link.ld
	$(TOOLCHAIN_PREFIX)gcc -nostartfiles -march=rv32i -mabi=ilp32 -Tlink.ld -o $@ $<
%.bin: %.elf
	$(TOOLCHAIN_PREFIX)objcopy -O binary $< $@
%.hex: %.bin
	python3 makehex.py $< 32768 > $@

clean:
	rm -f *.elf *.bin *.hex
