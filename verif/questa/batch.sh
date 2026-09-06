#!/usr/bin/env bash
# ============================================
# Ostim BLogic Mikroelektronik
# batch.sh - run the Questa flow headless (vsim -c) for one, several or all tests
# ============================================
# usage: verif/questa/batch.sh [test ...]      (no argument: all 21 tests)
# Needs vsim on PATH. Each test writes verif/questa/logs/<test>.transcript (the
# flow passes -l); the verdict is taken from that file - see batch.ps1 for the
# strings. Summary: verif/questa/logs/SUMMARY.txt. Exit code = number of
# non-PASS tests.
cd "$(dirname "$0")/../.." || exit 2
command -v vsim >/dev/null 2>&1 || { echo "vsim not found on PATH"; exit 2; }
QLOG=verif/questa/logs
mkdir -p "$QLOG"
if [ $# -eq 0 ]; then
    set -- uart_stp uart_stream jtag_bridge_sim ai uart_hello uart_hello_1m uart_hello_9600 \
           qspi_flash uart_baud_sweep qspi_fifo_err timer_irq ai_irq uart1_strm ai_micro_speech \
           i2c_sys qspi_modes jtag_sim boot asic_sram_sim asic_top_sim ai_sw_reference
fi
SUM="$QLOG/SUMMARY.txt"
echo "# Questa batch run $(date '+%Y-%m-%d %H:%M')  ($(vsim -version 2>&1 | head -1))" > "$SUM"
bad=0; total=0
for t in "$@"; do
    total=$((total + 1))
    tr="$QLOG/$t.transcript"; rm -f "$tr"
    t0=$(date +%s)
    timeout 2400 vsim -c -do "onerror {quit -code 1}; do verif/questa/run_test.do $t; quit -f" \
        > "$QLOG/$t.stdout" 2> "$QLOG/$t.stderr"
    if [ ! -s "$tr" ]; then verdict="NO TRANSCRIPT (compile error? see $t.stdout)"
    elif grep -qE '\*\*\* TEST FAILED|result=FAIL|TIMEOUT|\*\* Fatal|\*\* Error' "$tr"; then verdict="FAIL"
    elif grep -qE '\*\*\* TEST SUCCESS|result=PASS|\[ADIM E\] PASS' "$tr"; then verdict="PASS"
    else verdict="NO VERDICT STRING"; fi
    [ "$verdict" = PASS ] || bad=$((bad + 1))
    line=$(printf '%-18s %-42s %5ss' "$t" "$verdict" $(( $(date +%s) - t0 )))
    echo "$line" | tee -a "$SUM"
done
echo "# done $(date +%H:%M): $((total - bad))/$total PASS" | tee -a "$SUM"
exit $bad
