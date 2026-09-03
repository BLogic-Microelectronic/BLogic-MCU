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

# Ayri TB'leri coverage kosumuna dahil etmek icin: TBCOV=--coverage-line
TBCOV ?=

.PHONY: compile verilate sim regression boot ai soc-ai arch-test uvm test-all spike clean logs-clean help coverage lint asic-elab bootrom coverage-tb flash-image qspi-modes i2c-sys uart-baud uart-stp uart-stream ai-acc soc-perf soc-ai-irq soc-timer soc-strm ai-uart-load ai-uart-load-field uart-rx-bisect qspi-err boot-real asic-sram-sim asic-top-sim jtag-sim jtag-openocd-build jtag-openocd jtag-gdb jtag-lint jtag-lint-fpga jtag-equiv jtag-bridge-sim regression-jtag jtag-cov

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
	verilator --binary $(TBCOV) --timing --top-module uart_stp_tb \
	    -Mdir $(UARTSTP_DIR) -o uart_stp_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    rtl/peripherals/uart_axil.sv rtl/peripherals/uart_tx.v rtl/peripherals/uart_rx.v \
	    verif/tb/uart_stp_tb.sv verif/sva/uart_func_cov.sv
	cd $(UARTSTP_DIR) && ./uart_stp_sim 2>&1 | tee uart_stp_run.log
	@grep -aq "TEST SUCCESS" $(UARTSTP_DIR)/uart_stp_run.log \
	    && echo "[UART-STP] PASS (stop 1 / 1.5 / 2)" || { echo "[UART-STP] FAIL"; exit 1; }

# UART stream: DMA -> AI SRAM dogrulamasi
UARTSTRM_DIR = obj_dir_uart_stream
uart-stream:
	rm -rf $(UARTSTRM_DIR)
	verilator --binary $(TBCOV) --timing --top-module uart_stream_tb \
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
	verilator --binary $(TBCOV) +define+BOOTROM_CONTENT --timing --top-module boot_flow_test_tb \
	    -Mdir $(BOOT_DIR) -o boot_flow_test_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv
	cp sw/bootloader/bootrom.hex $(BOOT_DIR)/
	@python3 scripts/gen_flash_image.py --fw sw/bootloader/flash_helloworld.hex \
	    --out $(BOOT_DIR)/flash.hex
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
	verilator --binary $(TBCOV) -j 0 -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-CASEINCOMPLETE \
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
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_micro_speech_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_micro_speech_test/result.log \
	    && echo "[SOC-AI] PASS" || { echo "[SOC-AI] FAIL"; exit 1; }

# AI kesme (ISR) akisi testi
soc-ai-irq:
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_irq_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_irq_test/result.log \
	    && echo "[SOC-AI-IRQ] PASS" || { echo "[SOC-AI-IRQ] FAIL"; exit 1; }

# Timer cevre birimi: sayma/reload/prescale + irq16 ISR akisi
soc-timer:
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/timer_irq_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/timer_irq_test/result.log \
	    && echo "[SOC-TIMER] PASS" || { echo "[SOC-TIMER] FAIL"; exit 1; }

# UART_1 stream DMA: RX -> bellek + irq18 pulse (covergroup bini)
soc-strm:
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/uart1_strm_test.c $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/uart1_strm_test/result.log \
	    && echo "[SOC-STRM] PASS" || { echo "[SOC-STRM] FAIL"; exit 1; }

# bootrom.hex -> sentezlenebilir case icerigi
bootrom:
	python3 scripts/gen_bootrom_svh.py

# Testbench bazli modul kapsamasi (SoC seviyesi: make coverage)
coverage-tb:
	bash scripts/run_coverage_tb.sh

# Uygulama firmware'i + veri bolgesi + YZ agirliklari -> tek flash imaji (kart/cip icin)
# M3 tesisati v2 (11 Agu): crossbar data-AR ISRAM'i okumaz (soc_axi_interconnect.sv:284);
# .rodata/.data flash 0x8000'den bootloader'ca DSRAM'e kopyalanir. link.ld degismez,
# VMA'lar RAM-model testleriyle birebir aynidir. link_flash.ld artik kullanilmiyor.
FLASH_DATA ?= build/data_mem.hex
flash-image:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=$(FW_SRC)
	python3 scripts/gen_flash_image.py --fw build/instr_mem.hex --data $(FLASH_DATA) --out build/flash.hex

# Kart icin: TAM imaji flash_firmware.tcl'in bekledigi ham binary'ye cevirir.
# (Eski objcopy tarifi yalnizca .text yazardi - veri bolgesi flash'a girmez,
# string'li firmware kartta NUL basardi. Tek dogru kaynak build/flash.hex'tir.)
flash-bin: flash-image
	python3 scripts/flash_hex2bin.py build/flash.hex rtl/fpga/firmware_flash.bin

# M3 sim kaniti: rodata'li GERCEK C firmware flash'tan boot eder (ayni TB).
# Negatif kontrol: make boot-real FLASH_DATA=/dev/null -> FAIL beklenir (veri bolgesi bos).
boot-real:
	$(MAKE) flash-image FW_SRC=sw/tests/boot_flash_hello.c
	rm -rf $(BOOT_DIR)
	verilator --binary $(TBCOV) +define+BOOTROM_CONTENT --timing --top-module boot_flow_test_tb \
	    -Mdir $(BOOT_DIR) -o boot_flow_test_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv
	cp sw/bootloader/bootrom.hex $(BOOT_DIR)/
	cp build/flash.hex $(BOOT_DIR)/flash.hex
	echo "00000000" > $(BOOT_DIR)/firmware.hex
	echo "00000000" > $(BOOT_DIR)/data_mem.hex
	echo "00000000" > $(BOOT_DIR)/ai_sram_init.hex
	cd $(BOOT_DIR) && ./boot_flow_test_sim 2>&1 | tee boot_real_run.log
	@grep -aq "TEST SUCCESS" $(BOOT_DIR)/boot_real_run.log \
	    && echo "[BOOT-REAL] PASS - .rodata flash uzerinden geldi" || { echo "[BOOT-REAL] FAIL"; exit 1; }

# SRAM makrolarinin TESLIM EDILEN Verilog modelleriyle islevsel dogrulama
# (DDK Bolum 1.3: zorunlu SRAM makrosu fonksiyonel dogrulamada kullanilmali).
# Boot akisi secildi cunku uc SRAM'i de (ISRAM/DSRAM/AI) bus uzerinden
# YAZIP OKUR: $readmemh on-yuklemesi yoktur, firmware + veri + YZ agirliklari
# QSPI'dan kopyalanir ve "Hello World" makro iceriginden kosar.
# +define+ASIC_SRAM_MACRO axi_sram_wrapper/ai_accelerator'i makro dalina
# gecirir; sram_macro_bank + asic/macros/*/verilog modelleri derlemeye girer
# (sram_macro_blackbox.sv GIRMEZ - gercek modeller var).
# OpenRAM modeli VERBOSE=1 ile her erisimde $display basar; teslim gorunumu
# degistirilemeyecegi icin (Bolum 1.3) Reading/Writing satirlari boru hattinda
# filtrelenir, model WARNING'leri gorunur kalir.
asic-sram-sim:
	rm -rf $(BOOT_DIR)_macro
	verilator --binary +define+BOOTROM_CONTENT +define+ASIC_SRAM_MACRO --timing \
	    --top-module boot_flow_test_tb \
	    -Mdir $(BOOT_DIR)_macro -o boot_flow_macro_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f rtl/asic/sram_macro_bank.sv \
	    asic/macros/sky130_sram_2kbyte_1rw1r_32x512_8/verilog/sky130_sram_2kbyte_1rw1r_32x512_8.v \
	    asic/macros/sky130_sram_1kbyte_1rw1r_32x256_8/verilog/sky130_sram_1kbyte_1rw1r_32x256_8.v \
	    verif/models/spi_flash_model.sv verif/tb/boot_flow_test_tb.sv
	cp sw/bootloader/bootrom.hex $(BOOT_DIR)_macro/
	@python3 scripts/gen_flash_image.py --fw sw/bootloader/flash_helloworld.hex \
	    --out $(BOOT_DIR)_macro/flash.hex
	echo "00000000" > $(BOOT_DIR)_macro/firmware.hex
	echo "00000000" > $(BOOT_DIR)_macro/data_mem.hex
	echo "00000000" > $(BOOT_DIR)_macro/ai_sram_init.hex
	cd $(BOOT_DIR)_macro && ./boot_flow_macro_sim 2>&1 | grep -vaE 'Reading|Writing' | tee macro_boot_run.log
	@grep -aq "TEST SUCCESS" $(BOOT_DIR)_macro/macro_boot_run.log \
	    && echo "[ASIC-SRAM-SIM] PASS - boot + Hello World, icerik teslim edilen OpenRAM modellerinden kostu" \
	    || { echo "[ASIC-SRAM-SIM] FAIL"; exit 1; }

# TAM-YIGIN GDS-esdegeri simulasyon: DUT olarak GDS'in gercek ust modulu
# asic_top (soc_top DEGIL) + ASIC_SRAM_MACRO + teslim edilen OpenRAM
# modelleri; firmware flash'tan boot eder ve YZ CIKARIMI kosar. Boylece:
#   1) asic_top port baglantilari YURUTULEREK dogrulanir (LVS baglantiyi
#      kanitlar, davranisi kanitlamaz - baska hicbir kosum asic_top'u
#      simule etmiyordu),
#   2) hizlandiricinin IC makrolari (input/conv_w/conv_out) da cikarimla
#      egzersiz edilir (asic-sram-sim'de boot YZ kosmuyordu),
#   3) 27 makro orneginin TAMAMI islevsel olarak calismis olur.
# Girdi flash 0x10000'deki yes_real vektoru; firmware conv_out bolgesini
# (1000 word) altin vektorun FNV-1a sagtoplamiyla karsilastirir VE
# argmax==2'yi dogrular; ancak ikisi de tutarsa "Hello World!" basar.
# NOT (deneme/jtag): main'de FC-1 erratasi nedeniyle argmax kontrolu
# kapaliydi (bu hedef o eksigi BULDU - asic/README.md "Known issue FC-1").
# Bu dalda ai_accelerator.sv'deki tek satirlik duzeltmeyle FC de makro
# model sozlesmesine uyar; PASS, duzeltmenin kanitidir.
asic-top-sim:
	$(MAKE) flash-image FW_SRC=sw/tests/ai_boot_macro_test.c
	rm -rf $(BOOT_DIR)_asictop
	verilator --binary +define+BOOTROM_CONTENT +define+ASIC_SRAM_MACRO --timing \
	    --top-module asic_top_boot_tb \
	    -Mdir $(BOOT_DIR)_asictop -o asic_top_boot_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f soc_files.f rtl/asic/asic_top.sv rtl/asic/sram_macro_bank.sv \
	    asic/macros/sky130_sram_2kbyte_1rw1r_32x512_8/verilog/sky130_sram_2kbyte_1rw1r_32x512_8.v \
	    asic/macros/sky130_sram_1kbyte_1rw1r_32x256_8/verilog/sky130_sram_1kbyte_1rw1r_32x256_8.v \
	    verif/models/spi_flash_model.sv verif/tb/asic_top_boot_tb.sv
	cp sw/bootloader/bootrom.hex $(BOOT_DIR)_asictop/
	cp build/flash.hex $(BOOT_DIR)_asictop/flash.hex
	echo "00000000" > $(BOOT_DIR)_asictop/firmware.hex
	echo "00000000" > $(BOOT_DIR)_asictop/data_mem.hex
	echo "00000000" > $(BOOT_DIR)_asictop/ai_sram_init.hex
	cd $(BOOT_DIR)_asictop && ./asic_top_boot_sim 2>&1 | grep -vaE 'Reading|Writing' | tee asictop_run.log
	@grep -aq "TEST SUCCESS" $(BOOT_DIR)_asictop/asictop_run.log \
	    && echo "[ASIC-TOP-SIM] PASS - asic_top + 27 makro: flash boot + YZ cikarimi bit-tam, argmax dahil (FC-1 duzeltmesi bu dalda)" \
	    || { echo "[ASIC-TOP-SIM] FAIL"; exit 1; }

# JTAG debug prototipi (deneme/jtag dali, JTAG_DENEME_PLANI.md):
# soc_top +define+JTAG_DEBUG ile derlenir -> riscv-dbg TAP/DTM/DM + crossbar
# DM bolgesi (0x0004_0000) + axi_dm_slave koprusu. rtl/debug/jtag_files.f
# YALNIZ burada okunur; soc_files.f ve asic/ dokunulmaz, define'siz derlemeler
# bit-aynidir. TB saf-SV bit-bang ile IDCODE/DTMCS/DMI/halt/resume kosar.
# 17 asama: 1-9 temel akis, 10-17 hata/kose yollari (G-01..G-04, G-05, G-07,
# G-10, G-11): DMI busy + dmireset/dmihardreset, cmderr 2/3/4, SBA tie-off,
# DM kesif yazmaclari, TAP BYPASS/Pause/TLR, ISRAM yazma + ebreak, DM bolgesi.
JTAG_DIR = obj_dir_jtag
jtag-sim:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=sw/tests/uart_hello.c
	rm -rf $(JTAG_DIR)
	verilator --binary $(TBCOV) +define+JTAG_DEBUG --timing --top-module jtag_smoke_tb \
	    -Mdir $(JTAG_DIR) -o jtag_smoke_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f rtl/debug/jtag_files.f -f soc_files.f rtl/debug/axi_dm_slave.sv \
	    verif/tb/jtag_smoke_tb.sv verif/jtag_cov_waivers.vlt
	cp build/instr_mem.hex $(JTAG_DIR)/firmware.hex
	cp build/data_mem.hex $(JTAG_DIR)/data_mem.hex
	cp sw/bootloader/bootrom.hex $(JTAG_DIR)/
	echo "00000000" > $(JTAG_DIR)/ai_sram_init.hex
	cd $(JTAG_DIR) && ./jtag_smoke_sim 2>&1 | tee jtag_run.log
	@grep -aq "TEST SUCCESS" $(JTAG_DIR)/jtag_run.log \
	    && echo "[JTAG-SIM] PASS - TAP/DTMCS/DMI/halt/abstract-cmd/progbuf/resume + step/trigger + ndmreset + DMI-busy/dmireset + cmderr 2/3/4 + SBA tie-off + DM kesif + TAP kose durumlari + ISRAM yazma/ebreak + DM bolgesi (17/17)" \
	    || { echo "[JTAG-SIM] FAIL"; exit 1; }

# OpenOCD koprusu (deneme/jtag, Gun 2): ayni soc_top+riscv-dbg derlemesi, ama
# JTAG pinlerini SimJTAG (vendor tb) + rtl/debug/tb/jtag_dpi.cpp (DPI-C,
# OpenOCD remote_bitbang TCP :9999 sunucusu) surer. Bu hedef YALNIZ derler ve
# hex'leri Mdir'e kopyalar (sim Mdir icinden kosulmali); kosum:
#   cd $(JTAG_OCD_DIR) && ./jtag_openocd_sim        (terminal 1)
#   openocd -f rtl/debug/openocd/blogic_sim.cfg      (terminal 2; cfg init+halt yapar)
# Dosya sirasi jtag-sim ile ayni: jtag_files.f soc_files.f'den ONCE (incdir
# onceligi), sonra axi_dm_slave, SimJTAG, TB, DPI .cpp (g++ ile derlenir).
JTAG_OCD_DIR = obj_dir_jtag_ocd
jtag-openocd-build:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=sw/tests/uart_hello.c
	rm -rf $(JTAG_OCD_DIR)
	verilator --binary $(TBCOV) +define+JTAG_DEBUG --timing --top-module jtag_openocd_tb \
	    -Mdir $(JTAG_OCD_DIR) -o jtag_openocd_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f rtl/debug/jtag_files.f -f soc_files.f rtl/debug/axi_dm_slave.sv \
	    rtl/debug/vendor/riscv-dbg/tb/SimJTAG.sv verif/tb/jtag_openocd_tb.sv \
	    rtl/debug/tb/jtag_dpi.cpp
	cp build/instr_mem.hex $(JTAG_OCD_DIR)/firmware.hex
	cp build/data_mem.hex $(JTAG_OCD_DIR)/data_mem.hex
	cp sw/bootloader/bootrom.hex $(JTAG_OCD_DIR)/
	echo "00000000" > $(JTAG_OCD_DIR)/ai_sram_init.hex
	@echo "[JTAG-OPENOCD] derleme tamam: cd $(JTAG_OCD_DIR) && ./jtag_openocd_sim ; ayri terminalde: openocd -f rtl/debug/openocd/blogic_sim.cfg"

# OpenOCD ucdan-uca demo (deneme/jtag, Gun 2): scripts/run_jtag_openocd.sh simi
# arka planda baslatir (binary yoksa once jtag-openocd-build), TCP 9999 dinlenince
# openocd'yi blogic_sim.cfg + demo_halt_regs_mem.tcl ile kosar (halt, reg pc/a0
# yaz-oku, progbuf ile 0x2_1000 mww/mdw, resume/halt), loglari logs/jtag/ altina
# yazar, 'Q' ile simin bitmesini bekler ve VERDICT PASS/FAIL (cikis 0/1) verir.
jtag-openocd:
	bash scripts/run_jtag_openocd.sh

# gdb demosu (deneme/jtag, Gun 3): scripts/run_jtag_gdb.sh simi ve openocd'yi
# (yalniz blogic_sim.cfg: init + halt, gdb sunucusu :3333) arka planda baslatir,
# gdb-multiarch -batch -x rtl/debug/openocd/demo_gdb.gdb build/test.elf kosar
# (reset halt, break main + continue, x/i, stepi, register/bellek yaz-oku,
# monitor resume/halt, monitor shutdown -> sim 'Q' ile biter), loglar logs/jtag/
# (gdb.log, openocd_gdb.log, sim_gdb.log), VERDICT PASS/FAIL (cikis 0/1).
jtag-gdb:
	bash scripts/run_jtag_gdb.sh

# JTAG_DEBUG DERLEMESIYLE NORMAL FIRMWARE REGRESYONU (deneme/jtag, bosluk G-12).
# Bugune kadar JTAG'li SoC'nin normal firmware'i bozmadigi yalniz uart_hello ile
# (jtag-sim asama 1/9) gosterildi; `make regression` ACIKCA define'SIZ kosuyor.
# Bu hedef ayni C testlerini +define+JTAG_DEBUG ile derlenmis modelde kosar.
# Dosya sirasi kritiktir: jtag_files.f soc_files.f'ten ONCE gelmeli (incdir
# onceligi). Makefile.verilator'a DOKUNULMAZ: OBJ_DIR ve VLT_EXTRA degiskenleri
# disaridan gecirilir, ayri Mdir (obj_dir_reg_jtag) kullanildigi icin define'siz
# obj_dir/ etkilenmez.
REG_JTAG_DIR   = obj_dir_reg_jtag
REG_JTAG_TESTS = sw/tests/uart_hello.c sw/tests/ai_micro_speech_test.c \
                 sw/tests/ai_irq_test.c sw/tests/timer_irq_test.c \
                 sw/tests/uart1_strm_test.c sw/tests/qspi_test.c
# NOT: SOC_FILES, Makefile.verilator'da $(SIM_EXE) hedefinin ON KOSULUDUR;
# icine ek '-f' argumani konamaz. Bu yuzden jtag_files.f ve axi_dm_slave.sv
# VLT_EXTRA ile gecirilir; VLT_EXTRA komut satirinda '-f soc_files.f'ten ONCE
# geldigi icin gerekli +incdir onceligi (common_cells v1.38.0) korunur.
REG_JTAG_VLT   = OBJ_DIR=$(REG_JTAG_DIR) \
                 VLT_EXTRA="+define+JTAG_DEBUG -f rtl/debug/jtag_files.f rtl/debug/axi_dm_slave.sv -Wno-PINMISSING -Wno-UNOPTFLAT"
regression-jtag:
	rm -rf $(REG_JTAG_DIR) build
	$(MAKE) -f Makefile.verilator verilate $(REG_JTAG_VLT)
	@mkdir -p $(REG_JTAG_DIR) logs/build
	@printf 'AA\nBB\nCC\nDD\n' > $(REG_JTAG_DIR)/flash.hex
	@fail=0; n_ok=0; n_all=0; \
	for t in $(REG_JTAG_TESTS); do \
	    nm=$$(basename $$t .c); n_all=$$((n_all+1)); \
	    echo "=== [REGRESSION-JTAG] $$nm (+define+JTAG_DEBUG) ==="; \
	    rm -rf build; \
	    $(MAKE) -f Makefile.verilator sim FW_SRC=$$t $(REG_JTAG_VLT) \
	        > logs/build/regjtag_$$nm.log 2>&1 || true; \
	    if grep -q "^result=PASS" logs/sim/$$nm/result.log 2>/dev/null; then \
	        echo "  -> PASS"; n_ok=$$((n_ok+1)); \
	    else echo "  -> FAIL (logs/build/regjtag_$$nm.log)"; fail=1; fi; \
	done; \
	echo ""; \
	if [ $$fail = 0 ]; then \
	    echo "[REGRESSION-JTAG] PASS - $$n_ok/$$n_all C testi +define+JTAG_DEBUG derlemesinde de gecti (Mdir: $(REG_JTAG_DIR))"; \
	else echo "[REGRESSION-JTAG] FAIL - $$n_ok/$$n_all"; exit 1; fi

# JTAG kapsama raporu (deneme/jtag, bosluk G-14). README 10.10 tablosundaki
# kapsama satirinin COMMIT'LI kaniti: jtag-sim'i --coverage-line ile kosar,
# LCOV bilgisini ve modul bazli satir ozetini rtl/debug/sim/ altina yazar,
# jtag_run.log'un tarihli kopyasini birakir.
JTAG_COV_DIR = rtl/debug/sim
jtag-cov:
	@mkdir -p $(JTAG_COV_DIR)
	$(MAKE) jtag-sim TBCOV=--coverage-line   # waiver dosyasi jtag-sim komut satirinda zaten var
	verilator_coverage --write-info $(JTAG_COV_DIR)/jtag_cov.info $(JTAG_DIR)/coverage.dat
	@awk -F'[:,]' '/^SF:/ { f = $$2; next } \
	    /^DA:/ { tot[f]++; if ($$3 > 0) hit[f]++ } \
	    END { printf "%-58s %6s %6s %7s\n", "dosya", "vuran", "satir", "yuzde"; \
	          for (k in tot) printf "%-58s %6d %6d %6.1f%%\n", k, hit[k], tot[k], 100.0*hit[k]/tot[k] }' \
	    $(JTAG_COV_DIR)/jtag_cov.info | sort > $(JTAG_COV_DIR)/jtag_cov_summary.txt
	@cp $(JTAG_DIR)/jtag_run.log $(JTAG_COV_DIR)/demo_run_sim_$$(date +%Y-%m-%d).log
	@echo "--- modul bazli satir kapsamasi ($(JTAG_COV_DIR)/jtag_cov_summary.txt) ---"
	@grep -E 'axi_dm_slave|soc_axi_interconnect|soc_top|dmi_jtag|dmi_cdc|dm_csrs|dm_mem|dm_sba|dm_top' \
	    $(JTAG_COV_DIR)/jtag_cov_summary.txt || true
	@echo "[JTAG-COV] RAPOR (kapi degil) - dosya: $(JTAG_COV_DIR)/jtag_cov_summary.txt, kosu logu: $(JTAG_COV_DIR)/demo_run_sim_*.log"

# axi_dm_slave YONLU birim testi (deneme/jtag, bosluk G-08). Kopru bugune
# kadar yalniz uctan uca dogrulandi; bugunku master (obi_to_axi) r_ready/
# b_ready'yi hep yuksek tuttugu icin "yanit tuketilmeden bekleme" (resp_pending)
# hic olusmadi -> ilgili SVA vakumda geciyordu. Bu TB r_ready/b_ready'yi ayri
# kontrol eder, w_strb != 1111 yazar, ayni cevrimde veri+buyruk istegi surer ve
# ucustaki istegi resetler. dm_top gercek ornekle baglidir (soc_top parametreleri).
JTAG_BRIDGE_DIR = obj_dir_jtag_bridge
jtag-bridge-sim:
	rm -rf $(JTAG_BRIDGE_DIR)
	verilator --binary $(TBCOV) --timing --top-module axi_dm_slave_tb \
	    -Mdir $(JTAG_BRIDGE_DIR) -o axi_dm_slave_sim \
	    -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
	    -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-MODDUP -Wno-PINMISSING -Wno-UNOPTFLAT \
	    -f rtl/debug/jtag_files.f \
	    +incdir+rtl/bus/axi/include \
	    +incdir+rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
	    rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/cf_math_pkg.sv \
	    rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/src/fifo_v3.sv \
	    rtl/bus/axi/src/axi_pkg.sv rtl/bus/axi/src/axi_intf.sv \
	    rtl/debug/axi_dm_slave.sv verif/tb/axi_dm_slave_tb.sv
	cd $(JTAG_BRIDGE_DIR) && ./axi_dm_slave_sim 2>&1 | tee bridge_run.log
	@grep -aq "TEST SUCCESS" $(JTAG_BRIDGE_DIR)/bridge_run.log \
	    && echo "[JTAG-BRIDGE-SIM] PASS - tahkim (veri>buyruk), R/B kanal tutma (resp_pending), w_strb bayt-enable, ucustaki istekte reset (6/6)" \
	    || { echo "[JTAG-BRIDGE-SIM] FAIL"; exit 1; }

# JTAG_DEBUG lint kapisi (deneme/jtag, bosluk G-13). `lint` yalniz define'SIZ
# asic_top'u gorur; axi_dm_slave, crossbar DM bacaklari ve asic_top'un
# `ifdef JTAG_DEBUG port listesi hicbir zaman MODDUP/PINMISSING acik lint
# gormemisti (jtag-sim/jtag-openocd hedefleri bu ikisini kapatir).
# asic/filelist.f yollari asic/ dizinine goredir; jtag_files.f ise depo
# kokune gore. Ikisini birlikte kullanabilmek icin filelist tek seferlik
# ../rtl -> rtl donusumuyle build/jtag_lint/ altina kopyalanir.
JTAG_LINT_DIR = build/jtag_lint
JTAG_LINT_W = -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
              -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-UNOPTFLAT
jtag-lint:
	@mkdir -p $(JTAG_LINT_DIR)
	@sed -e 's|\.\./rtl/|rtl/|g' asic/filelist.f > $(JTAG_LINT_DIR)/filelist_root.f
	-@verilator --lint-only -DSYNTHESIS $(JTAG_LINT_W) --top-module asic_top \
	    -f $(JTAG_LINT_DIR)/filelist_root.f > $(JTAG_LINT_DIR)/lint_off.log 2>&1
	-@verilator --lint-only -DSYNTHESIS -DJTAG_DEBUG $(JTAG_LINT_W) --top-module asic_top \
	    -f rtl/debug/jtag_files.f -f $(JTAG_LINT_DIR)/filelist_root.f \
	    rtl/debug/axi_dm_slave.sv > $(JTAG_LINT_DIR)/lint_on.log 2>&1
	@grep -oE '%(Error|Warning)[-A-Za-z]*' $(JTAG_LINT_DIR)/lint_off.log | sort | uniq -c > $(JTAG_LINT_DIR)/hist_off.txt || true
	@grep -oE '%(Error|Warning)[-A-Za-z]*' $(JTAG_LINT_DIR)/lint_on.log  | sort | uniq -c > $(JTAG_LINT_DIR)/hist_on.txt  || true
	@echo "--- asic_top, define YOK (referans) ---"; cat $(JTAG_LINT_DIR)/hist_off.txt
	@echo "--- asic_top, +JTAG_DEBUG ---";           cat $(JTAG_LINT_DIR)/hist_on.txt
	@if grep -q "%Error" $(JTAG_LINT_DIR)/lint_on.log; then \
	    echo "[JTAG-LINT] FAIL - hata:"; grep -m5 "%Error" $(JTAG_LINT_DIR)/lint_on.log; exit 1; fi
	@if grep -q "MODDUP" $(JTAG_LINT_DIR)/lint_on.log; then \
	    echo "[JTAG-LINT] FAIL - MODDUP:"; grep -m5 "MODDUP" $(JTAG_LINT_DIR)/lint_on.log; exit 1; fi
	@diff -q $(JTAG_LINT_DIR)/hist_off.txt $(JTAG_LINT_DIR)/hist_on.txt > /dev/null \
	    && echo "[JTAG-LINT] PASS - asic_top +JTAG_DEBUG: 0 Error, 0 MODDUP; uyari profili define'siz lint ile AYNI (3 PINMISSING = cv32e40p debug_halted_o/running_o/havereset_o, main'de de var)" \
	    || { echo "[JTAG-LINT] FAIL - uyari profili JTAG_DEBUG ile degisti:"; \
	         diff $(JTAG_LINT_DIR)/hist_off.txt $(JTAG_LINT_DIR)/hist_on.txt; exit 1; }

# FPGA TAP varyantinin lint kapisi (deneme/jtag, bosluk G-13). Kartta TAP
# dmi_bscane_tap.sv'dir (Xilinx BSCANE2); build_genesys2_jtag.tcl onu
# dmi_jtag_tap.sv YERINE okur, bu yuzden hicbir Verilator hedefi onu gormez.
# verif/tb/xilinx_prim_stubs.sv yalniz lint icin bos primitif kabuklari verir
# (BSCANE2/IBUFDS/BUFG/MMCME2_BASE/STARTUPE2); sentez akisina GIRMEZ.
# rtl/debug/jtag_files_fpga.f = jtag_files.f, ama dmi_jtag_tap yerine
# dmi_bscane_tap (ayni modul adi -> ikisi birlikte MODDUP olurdu).
jtag-lint-fpga:
	@mkdir -p $(JTAG_LINT_DIR)
	-@verilator --lint-only $(JTAG_LINT_W) -Wno-DECLFILENAME -Wno-VARHIDDEN \
	    --top-module fpga_top -f soc_files.f verif/tb/xilinx_prim_stubs.sv rtl/fpga_top.sv \
	    > $(JTAG_LINT_DIR)/lint_fpga_off.log 2>&1
	-@verilator --lint-only -DJTAG_DEBUG $(JTAG_LINT_W) -Wno-DECLFILENAME -Wno-VARHIDDEN \
	    --top-module fpga_top -f rtl/debug/jtag_files_fpga.f -f soc_files.f \
	    rtl/debug/axi_dm_slave.sv verif/tb/xilinx_prim_stubs.sv rtl/fpga_top.sv \
	    > $(JTAG_LINT_DIR)/lint_fpga_on.log 2>&1
	@grep -oE '%(Error|Warning)[-A-Za-z]*' $(JTAG_LINT_DIR)/lint_fpga_off.log | sort | uniq -c > $(JTAG_LINT_DIR)/hist_fpga_off.txt || true
	@grep -oE '%(Error|Warning)[-A-Za-z]*' $(JTAG_LINT_DIR)/lint_fpga_on.log  | sort | uniq -c > $(JTAG_LINT_DIR)/hist_fpga_on.txt  || true
	@echo "--- fpga_top, define YOK (referans) ---"; cat $(JTAG_LINT_DIR)/hist_fpga_off.txt
	@echo "--- fpga_top, +JTAG_DEBUG (dmi_bscane_tap) ---"; cat $(JTAG_LINT_DIR)/hist_fpga_on.txt
	@if grep -q "%Error" $(JTAG_LINT_DIR)/lint_fpga_on.log; then \
	    echo "[JTAG-LINT-FPGA] FAIL - hata:"; grep -m5 "%Error" $(JTAG_LINT_DIR)/lint_fpga_on.log; exit 1; fi
	@diff -q $(JTAG_LINT_DIR)/hist_fpga_off.txt $(JTAG_LINT_DIR)/hist_fpga_on.txt > /dev/null \
	    && echo "[JTAG-LINT-FPGA] PASS - fpga_top +JTAG_DEBUG (dmi_bscane_tap + BSCANE2 kabugu): 0 Error; uyari profili define'siz lint ile AYNI (MODDUP = soc_files.f'teki cv32e40p_register_file latch/FF ikizi, JTAG'den bagimsiz)" \
	    || { echo "[JTAG-LINT-FPGA] FAIL - uyari profili JTAG_DEBUG ile degisti:"; \
	         diff $(JTAG_LINT_DIR)/hist_fpga_off.txt $(JTAG_LINT_DIR)/hist_fpga_on.txt; exit 1; }

# "JTAG_DEBUG tanimsizken main ile ozdes" iddiasinin betiklenmis kaniti
# (deneme/jtag, bosluk G-13): main dosyalarini 'git show main:<yol>' ile alir,
# her iki surumu define VERMEDEN 'verilator -E -P' ile onisler, sabit katlama
# normalizasyonundan sonra kalan diff'i, scripts/jtag_equiv_expected_diffs/
# altindaki SAKLANAN beklenen diff ile BIREBIR karsilastirir. Bir satir bile
# sapma FAIL'dir. Beklenen diff'i bilerek guncellemek icin: '--kaydet'.
jtag-equiv:
	bash scripts/jtag_define_off_equiv.sh

# ASIC lint kapisi. DIKKAT: sim waiver seti KOPYALANMAZ.
# -Wno-MODDUP ve -Wno-PINMISSING kasitli olarak YOK: modul duplikasyonunu ve
# baglanmamis pinleri yakalamasi gereken tam da bu iki uyaridir.
# 3 Eylul gozden gecirme: cikis kodu '| tail -25'ten geliyordu, yani bu hedef
# HICBIR ZAMAN basarisiz olamiyordu (ustelik son 25 satir disindaki %Error
# gorunmuyordu). Artik tam cikti loga yazilir, kapi %Error aramasidir
# (jtag-lint hedefiyle ayni kalip).
lint:
	@mkdir -p logs/lint
	@cd asic && verilator --lint-only -DSYNTHESIS -Wno-fatal -Wno-TIMESCALEMOD -Wno-WIDTHEXPAND \
	    -Wno-WIDTHTRUNC -Wno-CASEINCOMPLETE -Wno-UNSIGNED -Wno-UNOPTFLAT \
	    --top-module asic_top -f filelist.f > ../logs/lint/asic_lint.log 2>&1 || true
	@tail -25 logs/lint/asic_lint.log
	@if grep -q '%Error' logs/lint/asic_lint.log; then \
	    echo "[LINT] FAIL - %Error var (tam cikti: logs/lint/asic_lint.log)"; exit 1; \
	 else echo "[LINT] PASS - 0 %Error (tam cikti: logs/lint/asic_lint.log)"; fi

# sv2v -> yosys elaborasyon kapisi: sentez oncesi erken uyari
asic-elab:
	@bash scripts/asic_elab.sh

# hizlanma olcumu: HW vs SW referans
soc-perf:
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_sw_reference.c SIM_PLUSARGS=+MAX_CYCLES=25000000 $(PASSTHROUGH)
	@grep -q "^result=PASS" logs/sim/ai_sw_reference/result.log \
	    && echo "[SOC-PERF] PASS" || { echo "[SOC-PERF] FAIL"; exit 1; }
	@python3 scripts/gen_perf_report.py

# --- KF5: UART demo yolu (sartname bolum 5.2 ilk odul kriteri) ---------------
# Gorulmemis bir oznitelik vektorunu host gibi UART0'a surer, firmware'in
# dogru sinifi raporlamasini bekler. Vektor sabit cekirdek 40 kumesinin
# disindan secilir; beklenen sinif sw/ai_model kosimulasyonundan gelir.
AI_UART_INDEX ?= 784
AI_UART_CPB   ?= 64
AI_UART_MAXCYC ?= 6000000

ai-uart-load:
	rm -rf obj_dir build          # temizlik ONCE: cerceve build/ altinda uretiliyor
	@python3 sw/ai_model/make_uart_frame.py --index $(AI_UART_INDEX) --outdir build/uart_demo
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/ai_uart_load_test.c \
	    EXTRA_CFLAGS="-DAI_UART_CPB=$(AI_UART_CPB)" \
	    SIM_PLUSARGS="+CPB=$(AI_UART_CPB) +UART_RX_FILE=../build/uart_demo/frame.bin \
	                  +UART_RX_TRIGGER_FILE=../build/uart_demo/trigger.txt \
	                  +UART_RX_DELAY=20000 +GOLDEN_FILE=../build/uart_demo/golden.txt \
	                  +AI_SRAM_DUMP=../build/uart_demo/ai_sram.hex \
	                  +MAX_CYCLES=$(AI_UART_MAXCYC)"
	@python3 sw/ai_model/check_ai_sram.py build/uart_demo/frame.bin build/uart_demo/ai_sram.hex
	@grep -E "^result=|^uart_rx_" logs/sim/ai_uart_load_test/result.log
	@grep -q "^result=PASS" logs/sim/ai_uart_load_test/result.log \
	    && echo "[UART-DEMO] PASS - gorulmemis vektor UART'tan yuklendi ve dogru siniflandi" \
	    || { echo "[UART-DEMO] FAIL"; exit 1; }

# Saha zamanlamasiyla ayni kosu (CPB=434). Yavas: ~10 M cevrim.
ai-uart-load-field:
	$(MAKE) ai-uart-load AI_UART_CPB=434 AI_UART_MAXCYC=16000000

# --- RX enjeksiyonu teshis: uart_loopback.c'yi BIZIM baytimizla besle -------
# uart_loopback.c normalde TX->RX tel loopback'iyle calisir. Burada loopback
# kapali; 'B' baytini surucu veriyor. Gecerse enjeksiyon+RTL RX saglam
# demektir ve hata ai_uart_load_test.c'dedir.
uart-rx-bisect:
	rm -rf obj_dir build
	@mkdir -p build/rxbisect
	@if [ -n "$(BISECT_FRAME)" ]; then cp $(BISECT_FRAME) build/rxbisect/frame.bin; echo "[BISECT] cerceve: $(BISECT_FRAME)"; else printf 'B' > build/rxbisect/frame.bin; fi
	@printf 'B'                 > build/rxbisect/trigger.txt
	@printf 'LOOPBACK SUCCESS'  > build/rxbisect/golden.txt
	@echo "[BISECT] 1 bayt ('B') enjekte edilecek, beklenen: LOOPBACK SUCCESS"
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/uart_loopback.c \
	    SIM_PLUSARGS="+CPB=434 +UART_RX_FILE=../build/rxbisect/frame.bin \
	                  +UART_RX_TRIGGER_FILE=../build/rxbisect/trigger.txt \
	                  +UART_RX_DELAY=5000 +GOLDEN_FILE=../build/rxbisect/golden.txt \
	                  +MAX_CYCLES=600000"
	@grep -E "^result=|^uart_rx_" logs/sim/uart_loopback/result.log
	@echo "--- MCU ciktisi ---" && cat logs/sim/uart_loopback/uart.log

# ISA uyumluluk C testi (self-checking, DTR bolum 4)
isa-compliance:
	rm -rf obj_dir build   # RTL degisince model yeniden derlensin
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

# K3: 1000 ornekli dogruluk penceresi (~4 dk). make ai varsayilan 40'ta kalir.
ai-batch1000:
	python3 sw/ai_model/run_accuracy_window.py --n=1000
	rm -rf obj_dir_ai
	verilator --binary $(TBCOV) -j 0 -Wno-fatal -Wno-WIDTH -Wno-UNUSED -Wno-CASEINCOMPLETE \
	    -GBATCH_N=1000 -GSIM_TIMEOUT_MS=20000 --top-module ai_accel_tb \
	    -Mdir obj_dir_ai -o ai_accel_tb_sim \
	    verif/tb/ai_accel_tb.sv rtl/ai_accelerator/ai_accelerator.sv
	./obj_dir_ai/ai_accel_tb_sim > obj_dir_ai/ai_run.log 2>&1 || true
	@grep -E "sinif eslesmesi|BATCH\] (PASS|FAIL)|WATCHDOG" obj_dir_ai/ai_run.log
	python3 sw/ai_model/run_accuracy_window.py --n=1000 --ingest-rtl obj_dir_ai/ai_run.log
	@cp sw/ai_model/accuracy_report.txt sw/ai_model/accuracy_report_n1000.txt
	@echo "[YAZ] sw/ai_model/accuracy_report_n1000.txt (1000 ornekli kanit)"
	@echo "[TEMIZLIK] 40'lik set geri yaziliyor (make ai bunu bekler)"
	@python3 sw/ai_model/run_accuracy_window.py > /dev/null
	@rm -rf obj_dir_ai && $(MAKE) ai > /dev/null 2>&1 || true
	@echo "[TEMIZLIK] accuracy_report.txt 40 ornekli haline dondu"

# line coverage: test seti + rapor
coverage:
	bash scripts/run_coverage.sh

# QSPI hata ve sinir yollari: FIFO tasma, flush, status temizleme, geri okuma
# UART yalniz raporlama kanali; CPB=64 sim suresi icin, olculen yollar
# UART hizina bagli degil.
QSPI_ERR_CPB ?= 64
qspi-err:
	rm -rf obj_dir build
	@mkdir -p build/qspi_err
	@printf '[QSPI-ERR] gecen=25 kalan=0  SONUC: PASS' > build/qspi_err/golden.txt
	$(MAKE) -f Makefile.verilator sim FW_SRC=sw/tests/qspi_fifo_err_test.c \
	    EXTRA_CFLAGS="-DQSPI_ERR_CPB=$(QSPI_ERR_CPB)" \
	    SIM_PLUSARGS="+CPB=$(QSPI_ERR_CPB) \
	                  +GOLDEN_FILE=../build/qspi_err/golden.txt \
	                  +MAX_CYCLES=3000000"
	@grep -E "PASS|FAIL" logs/sim/qspi_fifo_err_test/uart.log | tail -16

# QSPI mod testi: x1/x2/x4 + 4-bayt adres
MODES_DIR = obj_dir_qspi_modes
qspi-modes:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=sw/tests/qspi_modes_test.c
	rm -rf $(MODES_DIR)
	verilator --binary $(TBCOV) --timing --top-module qspi_modes_tb \
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
	verilator --binary $(TBCOV) --timing --top-module i2c_system_tb \
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
	qe=PASS; $(MAKE) qspi-err || { qe=FAIL; overall=1; }; \
	i2=PASS; $(MAKE) i2c-sys   || { i2=FAIL; overall=1; }; \
	a=PASS; $(MAKE) ai         || { a=FAIL; overall=1; }; \
	s=PASS; $(MAKE) soc-ai     || { s=FAIL; overall=1; }; \
	p=PASS; $(MAKE) soc-perf   || { p=FAIL; overall=1; }; \
	ir=PASS; $(MAKE) soc-ai-irq || { ir=FAIL; overall=1; }; \
	st=PASS; $(MAKE) soc-timer || { st=FAIL; overall=1; }; \
	ss=PASS; $(MAKE) soc-strm  || { ss=FAIL; overall=1; }; \
	c=PASS; $(MAKE) arch-test  || { c=FAIL; overall=1; }; \
	u=PASS; $(MAKE) uvm        || { u=FAIL; overall=1; }; \
	js=PASS; $(MAKE) jtag-sim  || { js=FAIL; overall=1; }; \
	jb=PASS; $(MAKE) jtag-bridge-sim || { jb=FAIL; overall=1; }; \
	jl=PASS; $(MAKE) jtag-lint || { jl=FAIL; overall=1; }; \
	jlf=PASS; $(MAKE) jtag-lint-fpga || { jlf=FAIL; overall=1; }; \
	je=PASS; $(MAKE) jtag-equiv || { je=FAIL; overall=1; }; \
	if command -v openocd >/dev/null 2>&1; then \
	    jo=PASS; $(MAKE) jtag-openocd || { jo=FAIL; overall=1; }; \
	else jo="SKIP (openocd yok)"; fi; \
	if command -v openocd >/dev/null 2>&1 && command -v $${GDB:-gdb-multiarch} >/dev/null 2>&1; then \
	    jg=PASS; $(MAKE) jtag-gdb || { jg=FAIL; overall=1; }; \
	else jg="SKIP (openocd / $${GDB:-gdb-multiarch} yok)"; fi; \
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
	echo "  qspi-err  (FIFO/flush/status)      : $$qe"; \
	echo "  i2c-sys    (NBY/ADR+TX/RX echo)    : $$i2"; \
	echo "  ai         (standalone 6 senaryo) : $$a"; \
	echo "  soc-ai     (SoC AI C testi)       : $$s"; \
	echo "  soc-perf   (HW vs SW hizlanma)    : $$p"; \
	echo "  soc-ai-irq (kesme/ISR akisi)      : $$ir"; \
	echo "  soc-timer  (Timer cevre birimi)   : $$st"; \
	echo "  soc-strm   (UART_1 stream SoC yolu): $$ss"; \
	echo "  arch-test  (riscv-arch-test $(ARCH_EXT))   : $$c"; \
	echo "  uvm        (4 blok, 8 test: GPIO+Timer+UART_0+I2C): $$u"; \
	echo "  jtag-sim   (riscv-dbg 17 asama, SV bit-bang): $$js"; \
	echo "  jtag-bridge-sim (axi_dm_slave birim TB)     : $$jb"; \
	echo "  jtag-lint  (asic_top +JTAG_DEBUG)           : $$jl"; \
	echo "  jtag-lint-fpga (fpga_top +JTAG_DEBUG)       : $$jlf"; \
	echo "  jtag-equiv (define YOK == main)             : $$je"; \
	echo "  jtag-openocd (OpenOCD ucdan-uca demo)      : $$jo"; \
	echo "  jtag-gdb   ($${GDB:-gdb-multiarch}, buyruk seviyesi): $$jg"; \
	echo "====================================================="; \
	exit $$overall

# DIKKAT: ELF'te HTIF (tohost/fromhost) yok -> spike KENDI KENDINE CIKMAZ (Ctrl+C).
# Otomatik spike kaniti: make test-all (lockstep TEST 4 + arch-test imzalari).
spike:
	rm -rf build
	$(MAKE) -f Makefile.verilator sw FW_SRC=$(FW_SRC)
	spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 build/test.elf

clean:
	$(MAKE) -f Makefile.verilator clean

logs-clean:
	$(MAKE) -f Makefile.verilator logs-clean

help:
	@echo "=== Test hedefleri (ana Makefile) ==="
	@echo "  make test-all    - TUM suit; sonda ozet tablo (tek komutluk kanit)"
	@echo "  make regression  - fonksiyonel+protokol regresyonu (UARTx3 + lockstep minimal/deep + QSPI)"
	@echo "  make uart-baud   - EK-2 cok-baud kaniti (115200 -> 1 Mbps -> 9600)"
	@echo "  make uart-stp    - EK-2 stop-bit 1/1.5/2 dogrulamasi (uart_axil TB)"
	@echo "  make uart-stream - UART_1 YZ stream DMA → AI SRAM (uart_stream_axil TB)"
	@echo "  make boot        - QSPI boot akisi (flash_helloworld imaji)"
	@echo "  make boot-real   - GERCEK C firmware ile flash boot (.rodata/.data DSRAM kaniti)"
	@echo "                     negatif kontrol: make boot-real FLASH_DATA=/dev/null -> FAIL beklenir"
	@echo "  make asic-sram-sim - boot akisi TESLIM EDILEN SRAM makro Verilog modelleriyle (DDK 1.3 kaniti)"
	@echo "  make asic-top-sim  - tam-yigin: asic_top (GDS ust modulu) + 27 makro, boot + conv katmani bit-tam"
	@echo "  make jtag-sim      - (deneme/jtag) riscv-dbg JTAG 17 asama: IDCODE/DTMCS/DMI/halt/resume/step/trigger/"
	@echo "                       ndmreset + DMI busy(dmireset/dmihardreset) + cmderr 2/3/4 + SBA + DM kesif +"
	@echo "                       TAP kose durumlari + ISRAM yazma/ebreak + DM bolgesi (bilinen sinirlar)"
	@echo "  make jtag-bridge-sim - (deneme/jtag) axi_dm_slave birim TB: tahkim, R/B tutma, w_strb, reset"
	@echo "  make regression-jtag - (deneme/jtag) 6 C testi +define+JTAG_DEBUG derlemesinde (obj_dir_reg_jtag)"
	@echo "  make jtag-lint     - (deneme/jtag) asic_top +JTAG_DEBUG lint (MODDUP/PINMISSING ACIK), define'siz ile karsilastirir"
	@echo "  make jtag-lint-fpga - (deneme/jtag) fpga_top +JTAG_DEBUG lint (dmi_bscane_tap + BSCANE2 kabugu)"
	@echo "  make jtag-equiv    - (deneme/jtag) define YOK iken main ile onislemci esdegerligi (betikli kanit)"
	@echo "  make jtag-cov      - (deneme/jtag) satir kapsamasi + rtl/debug/sim/ altina rapor ve kosu logu"
	@echo "  make jtag-openocd-build - (deneme/jtag) OpenOCD koprusu: SimJTAG + DPI remote_bitbang :9999 simi DERLE"
	@echo "                     kosum: cd obj_dir_jtag_ocd && ./jtag_openocd_sim ; openocd -f rtl/debug/openocd/blogic_sim.cfg"
	@echo "  make jtag-openocd  - (deneme/jtag) OpenOCD ucdan-uca demo: sim + openocd (halt/reg/mem/resume), logs/jtag/, PASS/FAIL"
	@echo "                     + donanim breakpoint (bp <pc> 4 hw -> tetikleyici, pc==bp) + reset halt (ndmreset, pc==0x00010000)"
	@echo "  make jtag-gdb      - (deneme/jtag) gdb-multiarch demo: OpenOCD :3333 uzerinden reset halt, break main, stepi, reg/mem yaz-oku, PASS/FAIL"
	@echo "  make qspi-modes  - QSPI x1/x2/x4 veri fazi + 4-bayt adres testi"
	@echo "  make qspi-err    - QSPI FIFO/flush/status hata yollari"
	@echo "  make i2c-sys     - I2C sistem testi (echo slave: TX/RX/latch/NACK)"
	@echo "  make soc-timer   - Timer cevre birimi SoC testi (zorunlu ister kaniti)"
	@echo "  make soc-strm    - UART_1 stream SoC yolu testi"
	@echo "  make ai          - AI accel standalone TB (6 senaryo: 2 gercek ses + 4 sentetik)"
	@echo "  make soc-ai      - SoC seviyesi AI C testi"
	@echo "  make soc-perf    - HW vs SW hizlanma olcumu (verif/perf_summary.txt)"
	@echo "  make soc-ai-irq  - AI kesme (ISR) akisi testi"
	@echo "  make arch-test   - riscv-arch-test (varsayilan ARCH_EXT=\"I M\", spike imzasi)"
	@echo "  make uvm         - UVM testleri: GPIO+Timer+UART_0+I2C (directed + random, 8 test)"
	@echo "  make spike       - etkilesimli spike; HTIF yok -> KENDI KENDINE CIKMAZ (Ctrl+C)"
	@echo "  make coverage    - line coverage raporu (logs/coverage/)"
	@echo "  make coverage-tb - modul kapsama kosusu (satir/dal)"
	@echo "=== Imaj / kart hedefleri ==="
	@echo "  make flash-image - tam imaj: fw@0x0 + veri@0x8000 + YZ@0x10000 (FW_SRC=..., FLASH_DATA=...)"
	@echo "  make flash-bin   - kart icin imaj .bin (flash_firmware.tcl ile yazilir)"
	@echo "  Demo firmware    : make flash-image FW_SRC=sw/demo/demo_main.c (acilis cikarim + h/v/r menu)"
	@echo ""
	$(MAKE) -f Makefile.verilator help
