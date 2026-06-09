#!/bin/bash
# ============================================================
# BLogic MCU - Line Coverage (ekip RTL'i; vendor cekirdek waiver'li)
# Kullanim: make coverage   (veya: bash scripts/run_coverage.sh)
# Cikti  : logs/coverage/annotate/ + logs/coverage/summary.txt
# ============================================================
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)
TESTS="uart_hello qspi_test gpio_led_test ai_micro_speech_test"
BLOG="$PROJ/logs/build/coverage_build.log"
mkdir -p "$PROJ/logs/build" "$PROJ/logs/coverage"

echo ">>> Coverage build (line, instrumentasyonlu - yavas)..."
rm -rf obj_dir
make -f Makefile.verilator verilate COVERAGE=1 >"$BLOG" 2>&1 \
    || { echo "    VERILATE FAIL - bkz: $BLOG"; exit 1; }

DATS=""
for T in $TESTS; do
    echo ">>> sim: $T"
    rm -rf build
    [ "$T" = "qspi_test" ] && printf 'AA\nBB\nCC\nDD\n' > obj_dir/flash.hex
    make -f Makefile.verilator sim COVERAGE=1 FW_SRC=sw/tests/$T.c \
        >"$PROJ/logs/coverage/${T}_sim.log" 2>&1 \
        || { echo "    $T FAIL - bkz: logs/coverage/${T}_sim.log"; exit 1; }
    echo "    PASS"
    DATS="$DATS logs/sim/$T/coverage.dat"
done

rm -rf logs/coverage/annotate
verilator_coverage --annotate logs/coverage/annotate $DATS | tee logs/coverage/summary.txt

echo "" | tee -a logs/coverage/summary.txt
echo "--- Ekip RTL: kapsanmamis nokta-satir sayilari ---" | tee -a logs/coverage/summary.txt
for F in ai_accelerator.sv ai_sram_arbiter.sv soc_top.sv soc_axi_interconnect.sv \
         periph_decoder.sv axi4_to_axilite_bridge.sv obi_to_axi.sv \
         uart_axil.sv gpio_axil.sv timer_axil.sv qspi_master_axil.sv; do
    A="logs/coverage/annotate/$F"
    [ -f "$A" ] && printf "  %-28s : %s\n" "$F" "$(grep -c '^%' "$A")" | tee -a logs/coverage/summary.txt
done
echo ""
echo "Annotated kaynaklar: logs/coverage/annotate/  ('%' onekli satir = kapsanmamis)"
