# ============================================
# Ostim BLogic Mikroelektronik
# Makefile  -  ana derleme/test sarmali
# ============================================

FW_SRC ?= sw/tests/uart_hello.c

# Opsiyonel flag'leri Makefile.verilator'a ilet
PASSTHROUGH = $(if $(TRACE),TRACE=1) $(if $(COVERAGE),COVERAGE=1)

BOOT_DIR  = obj_dir_boot
AI_DIR    = obj_dir_ai
ARCH_EXT ?= I M

.PHONY: compile verilate sim regression boot ai soc-ai arch-test uvm test-all spike clean logs-clean help coverage qspi-modes i2c-sys uart-baud uart-stp uart-stream ai-acc soc-perf soc-ai-irq

compile:
	$(MAKE) -f Makefile.verilator sw FW_SRC=$(FW_SRC)

verilate:
	$(MAKE) -f Makefile.verilator verilate $(PASSTHROUGH)

sim:
	$(MAKE) -f Makefile.verilator sim FW_SRC=$(FW_SRC) $(PASSTHROUGH)

regression:
	bash scripts/run_regression.sh

# cok-baud kaniti: 115200 -> 1 Mbps -> 9600
uart-baud:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/uart_baud_sweep.c \
	    EXTRA_CFLAGS="-DSWEEP_CPB0=434 -DSWEEP_CPB1=50 -DSWEEP_CPB2=5208" \
	    SIM_PLUSARGS="+SWEEP=434,50,5208"
	@grep -q "^result=PASS" logs/sim/uart_baud_sweep/result.log \
	    && echo "[UART-BAUD] PASS (CPB 434/115200 + 50/1Mbps + 5208/9600)" \
	    || { echo "[UART-BAUD] FAIL"; exit 1; }

# stop-bit 1 / 1.5 / 2 dogrulamasi
UARTSTP_DIR = obj_dir_uart_stp
uart-stp:
	rm -rf $(UARTSTP_DIR)
	verilator --binary --timing --top-module uart_stp_tb \
	    -Mdir $(UARTSTP_DIR) -o uart_stp_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    rtl/peripherals/uart_axil.sv rtl/peripherals/uart_tx.v rtl/peripherals/uart_rx.v \
	    verif/tb/uart_stp_tb.sv
	cd $(UARTSTP_DIR) && ./uart_stp_sim 2>&1 | tee uart_stp_run.log
	@grep -aq "TEST SUCCESS" $(UARTSTP_DIR)/uart_stp_run.log \
	    && echo "[UART-STP] PASS (stop 1 / 1.5 / 2)" || { echo "[UART-STP] FAIL"; exit 1; }

# UART stream: DMA -> AI SRAM dogrulamasi
UARTSTRM_DIR = obj_dir_uart_stream
uart-stream:
	rm -rf $(UARTSTRM_DIR)
	verilator --binary --timing --top-module uart_stream_tb \
	    -Mdir $(UARTSTRM_DIR) -o uart_stream_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    rtl/peripherals/uart_stream_axil.sv rtl/peripherals/uart_tx.v rtl/peripherals/uart_rx.v \
	    verif/tb/uart_stream_tb.sv
	cd $(UARTSTRM_DIR) && ./uart_stream_sim 2>&1 | tee uart_stream_run.log
	@grep -aq "TEST SUCCESS" $(UARTSTRM_DIR)/uart_stream_run.log \
	    && echo "[UART-STREAM] PASS (DMA A-E 5 senaryo)" || { echo "[UART-STREAM] FAIL"; exit 1; }

# QSPI boot akisi (her kosuda temiz build)
boot:
	rm -rf $(BOOT_DIR)
	verilator --binary --timing --top-module boot_flow_test_tb \
	    -Mdir $(BOOT_DIR) -o boot_flow_test_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv
	cp sw/bootloader/bootrom.hex $(BOOT_DIR)/
	cp sw/bootloader/flash_helloworld.hex $(BOOT_DIR)/flash.hex
	echo "00000000" > $(BOOT_DIR)/firmware.hex
	echo "00000000" > $(BOOT_DIR)/data_mem.hex
	echo "00000000" > $(BOOT_DIR)/ai_sram_init.hex
	cd $(BOOT_DIR) && ./boot_flow_test_sim 2>&1 | tee boot_run.log
	@grep -aq "TEST SUCCESS" $(BOOT_DIR)/boot_run.log \
	    && echo "[BOOT] PASS" || { echo "[BOOT] FAIL"; exit 1; }

# AI hizlandirici standalone TB
ai:
	@test -f sw/ai_model/golden_vectors/weights_conv.hex -a -f sw/ai_model/golden_vectors/input_yes.hex -a -f sw/ai_model/golden_vectors/input_yes_real.hex \
	    || { echo "[AI] golden_vectors eksik - once: python3 sw/ai_model/extract_weights.py && python3 sw/ai_model/generate_golden.py && python3 sw/ai_model/fetch_real_features.py"; exit 1; }
	rm -rf $(AI_DIR)
	verilator --binary -j 0 -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-CASEINCOMPLETE \
	    --top-module ai_accel_tb -Mdir $(AI_DIR) -o ai_accel_tb_sim \
	    verif/tb/ai_accel_tb.sv rtl/ai_accelerator/ai_accelerator.sv
	./$(AI_DIR)/ai_accel_tb_sim 2>&1 | tee $(AI_DIR)/ai_run.log
	@grep -aq "ADIM E] PASS" $(AI_DIR)/ai_run.log \
	    && echo "[AI] PASS (6/6 senaryo: 2 gercek ses + 4 sentetik)" || { echo "[AI] FAIL"; exit 1; }
	@if [ -f sw/ai_model/golden_vectors/acc_batch_meta.txt ] && grep -aq "BATCH-39" $(AI_DIR)/ai_run.log; then \
	    python3 sw/ai_model/run_accuracy_window.py --ingest-rtl $(AI_DIR)/ai_run.log \
	        || echo "[AI] UYARI: dogruluk raporu guncellenemedi (--ingest-rtl elle deneyin)"; \
	else \
	    echo "[AI] not: EK-1 dogruluk raporu icin 'make ai-acc' (uretim+sim+rapor)"; \
	fi

# dogruluk penceresi: uretim + sim + rapor
ai-acc:
	python3 sw/ai_model/run_accuracy_window.py
	$(MAKE) ai

# SoC seviyesi AI C testi
soc-ai:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_micro_speech_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_micro_speech_test/result.log \
	    && echo "[SOC-AI] PASS" || { echo "[SOC-AI] FAIL"; exit 1; }

# AI kesme (ISR) akisi testi
soc-ai-irq:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_irq_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_irq_test/result.log \
	    && echo "[SOC-AI-IRQ] PASS" || { echo "[SOC-AI-IRQ] FAIL"; exit 1; }

# hizlanma olcumu: HW vs SW referans
soc-perf:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_sw_reference.c SIM_PLUSARGS=+MAX_CYCLES=25000000 $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_sw_reference/result.log \
	    && echo "[SOC-PERF] PASS" || { echo "[SOC-PERF] FAIL"; exit 1; }

# ISA uyumluluk C testi (self-checking, DTR bolum 4)
isa-compliance:
	rm -rf build
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/isa_compliance_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/isa_compliance_test/result.log \
	    && grep -q ">>> ISA COMPLIANCE PASSED <<<" logs/sim/isa_compliance_test/uart.log \
	    && echo "[ISA-C] PASS" || { echo "[ISA-C] FAIL"; exit 1; }

# riscv-arch-test (ISA uyumluluk)
arch-test:
	@test -d verif/arch_tests/suite/rv32i_m \
	    || { echo "[ARCH] vendor edilmis arch-test suite eksik: verif/arch_tests/suite/"; \
	         exit 1; }
	bash verif/arch_tests/run_arch_test.sh "$(ARCH_EXT)"

# line coverage: test seti + rapor
coverage:
	bash scripts/run_coverage.sh

# QSPI mod testi: x1/x2/x4 + 4-bayt adres
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
	cp sw/bootloader/bootrom.hex $(MODES_DIR)/
	echo "00000000" > $(MODES_DIR)/ai_sram_init.hex
	python3 -c "print(chr(10).join(format(i%256,'02x') for i in range(8192)))" > $(MODES_DIR)/flash.hex
	cd $(MODES_DIR) && ./qspi_modes_sim 2>&1 | tee modes_run.log
	@grep -aq "TEST SUCCESS" $(MODES_DIR)/modes_run.log \
	    && echo "[QSPI-MODES] PASS" || { echo "[QSPI-MODES] FAIL"; exit 1; }

# I2C sistem testi: CPU -> AXI -> i2c_master + echo slave
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
	cp sw/bootloader/bootrom.hex $(I2C_DIR)/
	echo "00000000" > $(I2C_DIR)/ai_sram_init.hex
	cd $(I2C_DIR) && ./i2c_sys_sim 2>&1 | tee i2c_run.log
	@grep -aq "TEST SUCCESS" $(I2C_DIR)/i2c_run.log \
	    && echo "[I2C-SYS] PASS" || { echo "[I2C-SYS] FAIL"; exit 1; }

# UVM GPIO testleri
uvm:
	$(MAKE) -f Makefile.uvm all

# hepsi: ilk hatada durmaz, sonda ozet basar
test-all:
	@overall=0; \
	r=PASS; $(MAKE) regression || { r=FAIL; overall=1; }; \
	ub=PASS; $(MAKE) uart-baud || { ub=FAIL; overall=1; }; \
	us=PASS; $(MAKE) uart-stp  || { us=FAIL; overall=1; }; \
	ut=PASS; $(MAKE) uart-stream || { ut=FAIL; overall=1; }; \
	b=PASS; $(MAKE) boot       || { b=FAIL; overall=1; }; \
	q=PASS; $(MAKE) qspi-modes || { q=FAIL; overall=1; }; \
	i2=PASS; $(MAKE) i2c-sys   || { i2=FAIL; overall=1; }; \
	a=PASS; $(MAKE) ai         || { a=FAIL; overall=1; }; \
	s=PASS; $(MAKE) soc-ai     || { s=FAIL; overall=1; }; \
	p=PASS; $(MAKE) soc-perf   || { p=FAIL; overall=1; }; \
	ir=PASS; $(MAKE) soc-ai-irq || { ir=FAIL; overall=1; }; \
	c=PASS; $(MAKE) arch-test  || { c=FAIL; overall=1; }; \
	u=PASS; $(MAKE) uvm        || { u=FAIL; overall=1; }; \
	echo ""; \
	echo "====================================================="; \
	echo " TEST-ALL OZETI"; \
	echo "-----------------------------------------------------"; \
	echo "  regression (UARTx3+lockstep+QSPI) : $$r"; \
	echo "  uart-baud  (115200/1Mbps/9600)     : $$ub"; \
	echo "  uart-stp   (stop 1/1.5/2)          : $$us"; \
	echo "  uart-stream (DMA → AI SRAM)        : $$ut"; \
	echo "  boot       (QSPI boot akisi)      : $$b"; \
	echo "  qspi-modes (x1/x2/x4 + 4B adres)   : $$q"; \
	echo "  i2c-sys    (NBY/ADR+TX/RX echo)    : $$i2"; \
	echo "  ai         (standalone 6 senaryo) : $$a"; \
	echo "  soc-ai     (SoC AI C testi)       : $$s"; \
	echo "  soc-perf   (HW vs SW hizlanma)    : $$p"; \
	echo "  soc-ai-irq (kesme/ISR akisi)      : $$ir"; \
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
	@echo "  make regression  - 5'li fonksiyonel + protokol regresyonu (1 Mbps dahil)"
	@echo "  make uart-baud   - EK-2 cok-baud kaniti (115200 -> 1 Mbps -> 9600)"
	@echo "  make uart-stp    - EK-2 stop-bit 1/1.5/2 dogrulamasi (uart_axil TB)"
	@echo "  make uart-stream - UART_1 YZ stream DMA → AI SRAM (uart_stream_axil TB)"
	@echo "  make boot        - QSPI boot akisi (boot_flow_test_tb)"
	@echo "  make ai          - AI accel standalone TB (6 senaryo: 2 gercek ses + 4 sentetik)"
	@echo "  make soc-ai      - SoC seviyesi AI C testi"
	@echo "  make arch-test   - riscv-arch-test (varsayilan ARCH_EXT=\"I M\", 46 test)"
	@echo "  make uvm         - UVM GPIO testleri"
	@echo "  make qspi-modes  - QSPI x1/x2/x4 veri fazi + 4-bayt adres testi"
	@echo "  make i2c-sys     - I2C sistem testi (echo slave: TX/RX/latch/NACK)"
	@echo "  make coverage    - line coverage raporu (logs/coverage/)"
	@echo "  make soc-ai-irq  - AI kesme (ISR) akisi testi"
	@echo "  make test-all    - tum suitler (regression+uart-baud+uart-stp+boot+qspi-modes+i2c-sys+ai+soc-ai+arch-test+uvm)"
	@echo ""
	$(MAKE) -f Makefile.verilator help
