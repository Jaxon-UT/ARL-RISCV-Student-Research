# Jaxon Coward
# 7/7/2020


CODE_PATH=VexRiscvSocSoftware/projects/murax/
RAM_PATH=src/main/ressource/hex/
SIM_PATH=src/test/cpp/


murax_code:
	$(MAKE) -C $(CODE_PATH)/arl_demo all
	cp $(CODE_PATH)arl_demo/build/arl_demo.elf $(RAM_PATH)
	cp $(CODE_PATH)arl_demo/build/arl_demo.hex $(RAM_PATH)

murax_verilog:
	sbt "runMain vexriscv.demo.MuraxWithARLRamInit"

murax_run:
	$(MAKE) -C $(SIM_PATH)/arl_murax run

murax_all:	murax_code murax_verilog murax_run


murax_clean:
	$(MAKE) -C $(CODE_PATH)/arl_demo clean
	$(MAKE) -C $(SIM_PATH)/arl_murax clean
	rm -f $(RAM_PATH)arl_demo.elf
	rm -f $(RAM_PATH)arl_demo.hex
