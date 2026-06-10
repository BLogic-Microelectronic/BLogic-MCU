# ================================================================
# BLogic MCU — Ana Makefile (thin wrapper)
# Tum gercek is Makefile.verilator'da. Bu dosya sadece kullanici
# aliskanligindaki hedef isimlerini (compile, sim, regression, ...)
# Makefile.verilator'a yonlendirir. Tek log akisi: logs/
# ================================================================
# Kullanim:
#   make compile                          → Firmware derle
#   make sim                              → Tam simulasyon (logs/sim/<test>/)
#   make sim TRACE=1                      → VCD trace ile
#   make sim COVERAGE=1                   → Coverage ile
#   make sim FW_SRC=sw/tests/gpio_led_test.c
#   make regression                       → Tum testleri kos
#   make boot                             → QSPI boot akisi testi (Min #2)
#   make ai                               → AI accel standalone TB (Min #4)
#   make soc-ai                           → SoC seviyesi AI C testi
#   make arch-test [ARCH_EXT=I]           → riscv-arch-test
#   make uvm                              → UVM GPIO testleri
#   make test-all                         → regression+boot+ai+soc-ai+arch-test
#   make spike                            → Spike ISS ile elf kos
#   make clean / logs-clean / help
# ================================================================

FW_SRC ?= sw/tests/uart_hello.c

# Opsiyonel flag'leri Makefile.verilator'a ilet
PASSTHROUGH = $(if $(TRACE),TRACE=1) $(if $(COVERAGE),COVERAGE=1)

BOOT_DIR  = obj_dir_boot
AI_DIR    = obj_dir_ai
ARCH_EXT ?= I

.PHONY: compile verilate sim regression boot ai soc-ai arch-test uvm test-all spike clean logs-clean help coverage qspi-modes

compile:
	$(MAKE) -f Makefile.verilator sw FW_SRC=$(FW_SRC)

verilate:
	$(MAKE) -f Makefile.verilator verilate $(PASSTHROUGH)

sim:
	$(MAKE) -f Makefile.verilator sim FW_SRC=$(FW_SRC) $(PASSTHROUGH)

regression:
	bash scripts/run_regression.sh

# --- QSPI boot akisi (Min Kriter #2): her seferinde temiz build ---
boot:
	rm -rf $(BOOT_DIR)
	verilator --binary --timing --top-module boot_flow_test_tb \
	    -Mdir $(BOOT_DIR) -o boot_flow_test_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv
	cp bootrom.hex flash.hex $(BOOT_DIR)/
	echo "00000000" > $(BOOT_DIR)/firmware.hex
	echo "00000000" > $(BOOT_DIR)/data_mem.hex
	echo "00000000" > $(BOOT_DIR)/ai_sram_init.hex
	cd $(BOOT_DIR) && ./boot_flow_test_sim 2>&1 | tee boot_run.log
	@grep -aq "TEST SUCCESS" $(BOOT_DIR)/boot_run.log \
	    && echo "[BOOT] PASS" || { echo "[BOOT] FAIL"; exit 1; }

# --- AI accelerator standalone TB (Min Kriter #4, 4 senaryo) ---
ai:
	@test -f sw/ai_model/golden_vectors/weights_conv.hex \
	    || { echo "[AI] golden_vectors eksik — once: python3 sw/ai_model/tiny_conv_reference.py"; exit 1; }
	rm -rf $(AI_DIR)
	verilator --binary -j 0 -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-CASEINCOMPLETE \
	    --top-module ai_accel_tb -Mdir $(AI_DIR) -o ai_accel_tb_sim \
	    verif/tb/ai_accel_tb.sv rtl/ai_accelerator/ai_accelerator.sv
	./$(AI_DIR)/ai_accel_tb_sim 2>&1 | tee $(AI_DIR)/ai_run.log
	@grep -aq "ADIM E] PASS" $(AI_DIR)/ai_run.log \
	    && echo "[AI] PASS (4/4 senaryo)" || { echo "[AI] FAIL"; exit 1; }

# --- SoC seviyesi AI C testi (ai_sram_init.hex preload ile) ---
soc-ai:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_micro_speech_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_micro_speech_test/result.log \
	    && echo "[SOC-AI] PASS" || { echo "[SOC-AI] FAIL"; exit 1; }

# --- riscv-arch-test (ISA uyumluluk) ---
arch-test:
	@test -d verif/arch_tests/riscv-arch-test \
	    || { echo "[ARCH] riscv-arch-test repo eksik:"; \
	         echo "  git clone --depth 1 https://github.com/riscv-non-isa/riscv-arch-test verif/arch_tests/riscv-arch-test"; \
	         exit 1; }
	bash verif/arch_tests/run_arch_test.sh $(ARCH_EXT)

# --- Line coverage: test seti + birlesik rapor ---
coverage:
	bash scripts/run_coverage.sh

# --- QSPI mod testi: x1/x2/x4 veri fazi + 4-bayt adresleme ---
MODES_DIR = obj_dir_qspi_modes
qspi-modes:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=sw/tests/qspi_modes_test.c
	rm -rf $(MODES_DIR)
	verilator --binary --timing --top-module qspi_modes_tb \
	    -Mdir $(MODES_DIR) -o qspi_modes_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/spi_flash_model.sv verif/tb/qspi_modes_tb.sv
	cp build/instr_mem.hex $(MODES_DIR)/firmware.hex
	cp build/data_mem.hex  $(MODES_DIR)/data_mem.hex
	cp bootrom.hex $(MODES_DIR)/
	echo "00000000" > $(MODES_DIR)/ai_sram_init.hex
	python3 -c "print(chr(10).join(format(i%256,'02x') for i in range(8192)))" > $(MODES_DIR)/flash.hex
	cd $(MODES_DIR) && ./qspi_modes_sim 2>&1 | tee modes_run.log
	@grep -aq "TEST SUCCESS" $(MODES_DIR)/modes_run.log \
	    && echo "[QSPI-MODES] PASS" || { echo "[QSPI-MODES] FAIL"; exit 1; }

# --- I2C sistem testi: CPU -> AXI -> decoder 0x4 -> i2c_master + echo slave ---
I2C_DIR = obj_dir_i2c_sys
i2c-sys:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=sw/tests/i2c_system_test.c
	rm -rf $(I2C_DIR)
	verilator --binary --timing --top-module i2c_system_tb \
	    -Mdir $(I2C_DIR) -o i2c_sys_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/i2c_slave_model.sv verif/tb/i2c_system_tb.sv
	cp build/instr_mem.hex $(I2C_DIR)/firmware.hex
	cp build/data_mem.hex  $(I2C_DIR)/data_mem.hex
	cp bootrom.hex $(I2C_DIR)/
	echo "00000000" > $(I2C_DIR)/ai_sram_init.hex
	cd $(I2C_DIR) && ./i2c_sys_sim 2>&1 | tee i2c_run.log
	@grep -aq "TEST SUCCESS" $(I2C_DIR)/i2c_run.log \
	    && echo "[I2C-SYS] PASS" || { echo "[I2C-SYS] FAIL"; exit 1; }

# --- UVM GPIO testleri ---
uvm:
	$(MAKE) -f Makefile.uvm all

# --- Hepsi: ilk hatada durmaz, sonda ozet basar ---
test-all:
	@overall=0; \
	r=PASS; $(MAKE) regression || { r=FAIL; overall=1; }; \
	b=PASS; $(MAKE) boot       || { b=FAIL; overall=1; }; \
	q=PASS; $(MAKE) qspi-modes || { q=FAIL; overall=1; }; \
	i2=PASS; $(MAKE) i2c-sys   || { i2=FAIL; overall=1; }; \
	a=PASS; $(MAKE) ai         || { a=FAIL; overall=1; }; \
	s=PASS; $(MAKE) soc-ai     || { s=FAIL; overall=1; }; \
	c=PASS; $(MAKE) arch-test  || { c=FAIL; overall=1; }; \
	u=PASS; $(MAKE) uvm        || { u=FAIL; overall=1; }; \
	echo ""; \
	echo "====================================================="; \
	echo " TEST-ALL OZETI"; \
	echo "-----------------------------------------------------"; \
	echo "  regression (UARTx2+lockstep+QSPI) : $$r"; \
	echo "  boot       (QSPI boot akisi)      : $$b"; \
	echo "  qspi-modes (x1/x2/x4 + 4B adres)   : $$q"; \
	echo "  i2c-sys    (NBY/ADR+TX/RX echo)    : $$i2"; \
	echo "  ai         (standalone 4 senaryo) : $$a"; \
	echo "  soc-ai     (SoC AI C testi)       : $$s"; \
	echo "  arch-test  (riscv-arch-test $(ARCH_EXT))   : $$c"; \
	echo "  uvm        (GPIO directed+random)  : $$u"; \
	echo "====================================================="; \
	exit $$overall

spike: compile
	spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 build/test.elf

clean:
	$(MAKE) -f Makefile.verilator clean

logs-clean:
	$(MAKE) -f Makefile.verilator logs-clean

help:
	@echo "=== Test hedefleri (ana Makefile) ==="
	@echo "  make regression  - 4'lu fonksiyonel + protokol regresyonu"
	@echo "  make boot        - QSPI boot akisi (boot_flow_test_tb)"
	@echo "  make ai          - AI accel standalone TB (4 senaryo)"
	@echo "  make soc-ai      - SoC seviyesi AI C testi"
	@echo "  make arch-test   - riscv-arch-test (ARCH_EXT=I varsayilan)"
	@echo "  make uvm         - UVM GPIO testleri"
	@echo "  make qspi-modes  - QSPI x1/x2/x4 veri fazi + 4-bayt adres testi"
	@echo "  make i2c-sys     - I2C sistem testi (echo slave: TX/RX/latch/NACK)"
	@echo "  make coverage    - line coverage raporu (logs/coverage/)"
	@echo "  make test-all    - tum suitler (regression+boot+qspi-modes+i2c-sys+ai+soc-ai+arch-test+uvm)"
	@echo ""
	$(MAKE) -f Makefile.verilator help
