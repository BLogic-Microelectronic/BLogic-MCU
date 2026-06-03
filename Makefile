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
#   make spike                            → Spike ISS ile elf kos
#   make clean / logs-clean / help
# ================================================================

FW_SRC ?= sw/tests/uart_hello.c

# Opsiyonel flag'leri Makefile.verilator'a ilet
PASSTHROUGH = $(if $(TRACE),TRACE=1) $(if $(COVERAGE),COVERAGE=1)

.PHONY: compile verilate sim regression spike clean logs-clean help

compile:
	$(MAKE) -f Makefile.verilator sw FW_SRC=$(FW_SRC)

verilate:
	$(MAKE) -f Makefile.verilator verilate $(PASSTHROUGH)

sim:
	$(MAKE) -f Makefile.verilator sim FW_SRC=$(FW_SRC) $(PASSTHROUGH)

regression:
	bash scripts/run_regression.sh

spike: compile
	spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 build/test.elf

clean:
	$(MAKE) -f Makefile.verilator clean

logs-clean:
	$(MAKE) -f Makefile.verilator logs-clean

help:
	$(MAKE) -f Makefile.verilator help
