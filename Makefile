# ================================================================
# BLogic MCU — Ana Makefile
# TEKNOFEST 2026 Çip Tasarım Yarışması
# ================================================================
# Kullanım:
#   make compile                   → Firmware derle
#   make sim                       → Tam simülasyon (compile + verilate + run)
#   make sim TRACE=1               → VCD trace ile
#   make sim COVERAGE=1            → Coverage ile
#   make sim FW_SRC=sw/tests/gpio_led_test.c  → Farklı test
#   make regression                → Tüm testleri koş + PASS/FAIL raporu
#   make clean                     → Temizle
# ================================================================

# --- Araçlar ---
VERILATOR    = verilator
RV_PREFIX    = riscv32-unknown-elf-
CC           = $(RV_PREFIX)gcc
OBJCOPY      = $(RV_PREFIX)objcopy
OBJDUMP      = $(RV_PREFIX)objdump
PYTHON       = python3

# --- Dizinler ---
BUILD_DIR    = build
OBJ_DIR      = obj_dir

# --- Dosyalar ---
SOC_FILES    = soc_files.f
SIM_MAIN     = verif/tb/sim_main.cpp
TOP_MODULE   = soc_top
SIM_EXE      = $(OBJ_DIR)/blogic_sim

# --- RISC-V derleme ---
RV_ARCH      = rv32imc
RV_ABI       = ilp32
CFLAGS       = -march=$(RV_ARCH) -mabi=$(RV_ABI) -nostdlib -O2
LDFLAGS      = -T sw/common/link.ld
STARTUP      = sw/common/crt0.S

# --- Firmware kaynak (değiştirilebilir) ---
FW_SRC       ?= sw/tests/uart_hello.c

# --- Verilator flags ---
VERILATOR_FLAGS = \
    --cc --timing \
    -Wno-fatal \
    -Wno-TIMESCALEMOD \
    -Wno-WIDTHEXPAND \
    -Wno-WIDTHTRUNC \
    -Wno-MODDUP \
    -Wno-CASEINCOMPLETE \
    -Wno-UNSIGNED \
    -Wno-UNUSEDSIGNAL \
    -DVERILATOR \
    --top-module $(TOP_MODULE)

ifdef TRACE
VERILATOR_FLAGS += --trace
endif

ifdef COVERAGE
VERILATOR_FLAGS += --coverage
endif

# ================================================================
# 1. FIRMWARE DERLEME
# ================================================================
.PHONY: compile
compile: $(BUILD_DIR)/firmware.hex $(BUILD_DIR)/data_mem.hex $(BUILD_DIR)/test.disasm
	@echo ">>> Firmware derleme tamam"

$(BUILD_DIR)/test.elf: $(STARTUP) $(FW_SRC) sw/common/link.ld
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) $(STARTUP) $(FW_SRC) -o $@

$(BUILD_DIR)/test.disasm: $(BUILD_DIR)/test.elf
	$(OBJDUMP) -d $< > $@

$(BUILD_DIR)/firmware.hex: $(BUILD_DIR)/test.elf
	$(OBJCOPY) -O binary -j .text.init -j .text $< $(BUILD_DIR)/instr.bin
	$(PYTHON) scripts/elf2hex.py $(BUILD_DIR)/instr.bin $@

$(BUILD_DIR)/data_mem.hex: $(BUILD_DIR)/test.elf
	$(OBJCOPY) -O binary -j .rodata -j .data $< $(BUILD_DIR)/data.bin 2>/dev/null || printf '' > $(BUILD_DIR)/data.bin
	$(PYTHON) scripts/elf2hex.py $(BUILD_DIR)/data.bin $@

# ================================================================
# 2. VERILATOR DERLEME
# ================================================================
.PHONY: verilate
verilate: $(SIM_EXE)

$(SIM_EXE): $(SOC_FILES) $(SIM_MAIN)
	@echo ">>> Verilator RTL derleme..."
	$(VERILATOR) $(VERILATOR_FLAGS) \
		-f $(SOC_FILES) \
		--exe $(SIM_MAIN) \
		-o blogic_sim
	@echo ">>> C++ derleniyor..."
	make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk blogic_sim -j$$(nproc)
	@echo ">>> Binary hazır: $(SIM_EXE)"

# ================================================================
# 3. SİMÜLASYON (compile + verilate + run)
# ================================================================
.PHONY: sim sim_run
sim: compile $(SIM_EXE) sim_run

sim_run:
	@echo ""
	@echo "═══════════════════════════════════════"
	@echo " BLogic MCU Simülasyon"
	@echo " Test: $(FW_SRC)"
	@echo "═══════════════════════════════════════"
	cp $(BUILD_DIR)/firmware.hex $(OBJ_DIR)/firmware.hex
	cp $(BUILD_DIR)/data_mem.hex $(OBJ_DIR)/data_mem.hex
	cd $(OBJ_DIR) && ./blogic_sim 2>&1 | tee ../$(BUILD_DIR)/sim.log
	@echo ""
	@echo "--- Protocol Check Özeti ---"
	@grep -E "(PASS|FAIL|WARN|PROTOKOL)" $(BUILD_DIR)/sim.log || echo "(checker çıktısı yok — simülasyon sonu beklenmedi mi?)"
	@echo ""

# ================================================================
# 4. REGRESSION — scripts/run_regression.sh ile tüm testleri koş
# ================================================================
.PHONY: regression
regression: $(SIM_EXE)
	bash scripts/run_regression.sh

# ================================================================
# 5. SPIKE ISS
# ================================================================
.PHONY: spike
spike: $(BUILD_DIR)/test.elf
	spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 $<

# ================================================================
# 6. TEMİZLİK
# ================================================================
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR) $(OBJ_DIR) sim_trace.vcd sim_output.vcd
	@echo ">>> Temizlendi"

# ================================================================
# 7. YARDIM
# ================================================================
.PHONY: help
help:
	@echo "═══════════════════════════════════════════════"
	@echo " BLogic MCU — Build Hedefleri"
	@echo "═══════════════════════════════════════════════"
	@echo "  make compile            Firmware derle"
	@echo "  make verilate           Sadece RTL derle"
	@echo "  make sim                Tam simülasyon"
	@echo "  make sim TRACE=1        VCD trace ile"
	@echo "  make sim COVERAGE=1     Coverage ile"
	@echo "  make regression         Tüm testleri koş"
	@echo "  make spike              Spike ISS ile koş"
	@echo "  make clean              Temizle"
	@echo ""
	@echo " Firmware değiştir:"
	@echo "  make sim FW_SRC=sw/tests/gpio_led_test.c"
	@echo "═══════════════════════════════════════════════"
