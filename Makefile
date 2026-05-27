# ================================================================
# BLogic MCU - Ana Makefile
# ================================================================
# Kullanım:
#   make compile      → Firmware derle (.elf, .hex, .disasm)
#   make sim_build    → Verilator ile RTL derle
#   make sim_run      → Simülasyonu koştur
#   make sim          → sim_build + sim_run
#   make clean        → Temizle
# ================================================================

# --- Toolchain ---
RISCV_PREFIX = riscv32-unknown-elf-
CC      = $(RISCV_PREFIX)gcc
OBJCOPY = $(RISCV_PREFIX)objcopy
OBJDUMP = $(RISCV_PREFIX)objdump

CFLAGS  = -march=rv32imc -mabi=ilp32 -nostdlib -O2
LDFLAGS = -T sw/common/link.ld

# --- Test programı (değiştirilebilir) ---
TEST ?= sw/tests/uart_hello.c

# --- RTL kaynak dosyaları ---
RTL_TOP = rtl/core/cv32e40p/rtl/soc_top.sv

# ================================================================
# 1. FIRMWARE DERLEME
# ================================================================
.PHONY: compile
compile: build/test.elf build/test.hex build/test.disasm
	@echo ">>> Derleme tamamlandı"

build/test.elf: sw/common/crt0.S $(TEST) sw/common/link.ld
	@mkdir -p build
	$(CC) $(CFLAGS) $(LDFLAGS) sw/common/crt0.S $(TEST) -o $@

build/test.hex: build/test.elf
	$(OBJCOPY) -O binary $< build/test.bin
	python3 -c "data=open('build/test.bin','rb').read(); open('build/test.hex','w').write('\n'.join([f'{int.from_bytes(data[i:i+4], \"little\"):08X}' for i in range(0, len(data), 4)]))"

build/test.disasm: build/test.elf
	$(OBJDUMP) -d $< > $@

# ================================================================
# 2. VERILATOR SİMÜLASYON
# ================================================================
.PHONY: sim_build sim_run sim

sim_build:
	@echo ">>> Verilator RTL derleme..."
	verilator --cc --exe --trace \
		-Wall -Wno-fatal \
		--top-module soc_top \
		-I rtl/core/cv32e40p/rtl \
		-I rtl/core/cv32e40p/rtl/include \
		-I rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src \
		-I rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
		-I rtl/bus/axi/src \
		-I rtl/bus/axi/include \
		-I rtl/peripherals/verilog-uart/rtl \
		$(RTL_TOP) \
		verif/tb/sim_main.cpp
	make -C obj_dir -f Vsoc_top.mk -j$$(nproc)

sim_run: build/test.hex
	@echo ">>> Simülasyon koşturuluyor..."
	./obj_dir/Vsoc_top
	@echo ">>> VCD dosyası: sim_output.vcd"

sim: sim_build sim_run

# ================================================================
# 3. SPIKE ISS
# ================================================================
.PHONY: spike
spike: build/test.elf
	spike --isa=rv32imc build/test.elf

# ================================================================
# TEMİZLİK
# ================================================================
.PHONY: clean
clean:
	rm -rf build/* obj_dir/ sim_output.vcd
