TARGET           := servant_1.0.2
TOPLEVEL         := servant_sim
IVERILOG_OPTIONS := 
EXTRA_OPTIONS    ?= +firmware=/home/jaxson/serv/sw/zephyr_hello.hex +uart_baudrate=57600

all: $(VPI_MODULES) $(TARGET)

$(TARGET):
	iverilog -s$(TOPLEVEL) -c $(TARGET).scr -o $@ $(IVERILOG_OPTIONS)

run: $(VPI_MODULES) $(TARGET)
	vvp -n -M. -l icarus.log $(patsubst %.vpi,-m%,$(VPI_MODULES)) $(TARGET) -fst $(EXTRA_OPTIONS)

clean:
	$(RM) $(VPI_MODULES) $(TARGET)
