#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_coverage.sh  -  RTL satir kapsama olcumu
# ============================================
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)
TESTS="uart_hello qspi_test gpio_led_test ai_micro_speech_test uart_baud_sweep ai_irq_test isa_compliance_test timer_irq_test uart_stp_reg_test uart1_strm_test"
BLOG="$PROJ/logs/build/coverage_build.log"
mkdir -p "$PROJ/logs/build" "$PROJ/logs/coverage"

echo ">>> Coverage build (line, instrumentasyonlu - yavas)..."
rm -rf obj_dir
make -f Makefile.verilator verilate COVERAGE=1 >"$BLOG" 2>&1 \
    || { echo "    VERILATE FAIL - bkz: $BLOG"; exit 1; }

DATS=""
for T in $TESTS; do
    EXTRA=()
    case $T in
      uart_baud_sweep)
        EXTRA=(EXTRA_CFLAGS="-DSWEEP_CPB0=434 -DSWEEP_CPB1=50 -DSWEEP_CPB2=5208" SIM_PLUSARGS="+SWEEP=434,50,5208") ;;
    esac
    echo ">>> sim: $T"
    rm -rf build
    [ "$T" = "qspi_test" ] && printf 'AA\nBB\nCC\nDD\n' > obj_dir/flash.hex
    make -f Makefile.verilator sim COVERAGE=1 FW_SRC=sw/tests/$T.c "${EXTRA[@]}" \
        >"$PROJ/logs/coverage/${T}_sim.log" 2>&1 \
        || { echo "    $T FAIL - bkz: logs/coverage/${T}_sim.log"; exit 1; }
    echo "    PASS"
    DATS="$DATS logs/sim/$T/coverage.dat"
done

rm -rf logs/coverage/annotate
verilator_coverage --annotate logs/coverage/annotate --annotate-min 1 $DATS | tee logs/coverage/summary.txt

echo "" | tee -a logs/coverage/summary.txt
echo "--- Ekip RTL: kapsanmamis nokta-satir sayilari ---" | tee -a logs/coverage/summary.txt
for F in ai_accelerator.sv ai_sram_arbiter.sv soc_top.sv soc_axi_interconnect.sv \
         periph_decoder.sv axi4_to_axilite_bridge.sv obi_to_axi.sv \
         uart_axil.sv uart_stream_axil.sv gpio_axil.sv timer_axil.sv qspi_master_axil.sv; do
    A="logs/coverage/annotate/$F"
    [ -f "$A" ] && printf "  %-28s : %s\n" "$F" "$(grep -c '^%' "$A")" | tee -a logs/coverage/summary.txt
done
echo ""
echo "Annotated kaynaklar: logs/coverage/annotate/  ('%' onekli satir = kapsanmamis)"

# repoya commit edilen ozet kopyasi
SUM="$PROJ/verif/coverage_summary.txt"
{
    echo "BLogic MCU - line coverage ozeti (make coverage)"
    echo "tarih     : $(date +%Y-%m-%d)"
    echo "verilator : $(verilator --version 2>/dev/null | head -1)"
    echo "testler   : $TESTS"
    echo "olcum     : --coverage-line; CV32E40P vendor dosyalari verif/coverage_waivers.vlt ile haric"
    echo "------------------------------------------------------------"
    cat "$PROJ/logs/coverage/summary.txt"
} > "$SUM"
echo "Izlenen ozet guncellendi: verif/coverage_summary.txt"
