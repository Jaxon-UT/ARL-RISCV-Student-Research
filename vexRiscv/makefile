# Jaxon Coward
# 7/7/2020


CODE_PATH=VexRiscvSocSoftware/projects/murax/
RAM_PATH=src/main/ressource/hex/
SIM_PATH=src/test/cpp/


jmurax_code:
	$(MAKE) -C $(CODE_PATH)/jaxon_demo all
	cp $(CODE_PATH)jaxon_demo/build/jaxon_demo.elf $(RAM_PATH)
	cp $(CODE_PATH)jaxon_demo/build/jaxon_demo.hex $(RAM_PATH)

jmurax_verilog:
	sbt "runMain vexriscv.demo.MuraxWithJaxonRamInit"

jmurax_run:
	$(MAKE) -C $(SIM_PATH)/jaxon_murax run

jmurax_all:	jmurax_code jmurax_verilog jmurax_run


jmurax_clean:
	$(MAKE) -C $(CODE_PATH)/jaxon_demo clean
	$(MAKE) -C $(SIM_PATH)/jaxon_murax clean
	rm -f $(RAM_PATH)jaxon_demo.elf
	rm -f $(RAM_PATH)jaxon_demo.hex
