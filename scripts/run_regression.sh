#!/bin/bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_regression.sh  -  regresyon testlerini kosar
# ============================================
# Sonucu result.log icindeki result= satirindan okur.
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)

PASS=0; FAIL=0; TOTAL=0
PROTO_PASS=0; PROTO_FAIL=0; PROTO_TOTAL=0

STAMP=$(date +%Y%m%d_%H%M%S)
REG_DIR="$PROJ/logs/regression/$STAMP"
mkdir -p "$REG_DIR"
SUMMARY="$REG_DIR/summary.txt"
ln -sfn "regression/$STAMP" "$PROJ/logs/latest"

{
    echo "================================================================"
    echo " BLogic MCU — Regression"
    echo " Date   : $(date)"
    echo " Output : $REG_DIR"
    echo "================================================================"
} | tee "$SUMMARY"

if [ ! -x "$PROJ/obj_dir/blogic_sim" ]; then
    echo ">>> No simulation model yet, building it..." | tee -a "$SUMMARY"
    make -f Makefile.verilator clean verilate >/dev/null 2>&1
fi

result_kv() { grep "^$1=" "$2" 2>/dev/null | head -1 | cut -d= -f2-; }

run_test() {
    local name="$1" cpb_fw="$2" cpb_sim="$3" fw_file="${4:-sw/tests/uart_hello.c}"
    local test_name="${name// /_}"
    test_name="${test_name//[^a-zA-Z0-9_-]/_}"
    local logdir="$PROJ/logs/sim/$test_name"

    TOTAL=$((TOTAL+1))
    {
        echo ""
        echo "========================================================"
        echo " TEST $TOTAL: $name"
        echo "========================================================"
    } | tee -a "$SUMMARY"

    rm -rf "$PROJ/build"
    if ! make -f Makefile.verilator sw FW_SRC="$fw_file" \
            EXTRA_CFLAGS="-DCPB_VAL=$cpb_fw" \
            >"$REG_DIR/${test_name}_build.log" 2>&1; then
        FAIL=$((FAIL+1))
        echo " -> BUILD ERROR (log: $REG_DIR/${test_name}_build.log)" | tee -a "$SUMMARY"
        return
    fi

    mkdir -p "$logdir"
    cp "$PROJ/build/instr_mem.hex" "$PROJ/obj_dir/firmware.hex"
    cp "$PROJ/build/data_mem.hex"  "$PROJ/obj_dir/data_mem.hex"

    cd "$PROJ/obj_dir"
    ./blogic_sim +CPB="$cpb_sim" "+TEST_NAME=$test_name" "+LOGDIR=$logdir" \
        >"$logdir/stdout.log" 2>&1 || true
    cd "$PROJ"

    [ -f "$logdir/result.log" ] && cp "$logdir/result.log" "$REG_DIR/${test_name}_result.log"

    local res="$(result_kv result "$logdir/result.log")"
    local cyc="$(result_kv cycles "$logdir/result.log")"
    local byt="$(result_kv uart_bytes "$logdir/result.log")"

    if [ "$res" = "PASS" ]; then
        PASS=$((PASS+1))
        echo " -> function  : PASS, expected UART output received ($cyc cycles, $byt bytes; log: $logdir/)" | tee -a "$SUMMARY"
    else
        FAIL=$((FAIL+1))
        echo " -> function  : FAIL (${cyc:-?} cycles, ${byt:-?} bytes; log: $logdir/)" | tee -a "$SUMMARY"
        echo "    diag: $logdir/diag.log" | tee -a "$SUMMARY"
        [ -f "$logdir/diag.log" ] && sed 's/^/      /' "$logdir/diag.log" | tee -a "$SUMMARY"
    fi
    python3 "$PROJ/scripts/test_report.py" "$test_name" "$logdir" --fw "$fw_file" || true

    if grep -aq "Protocol Check Report" "$logdir/stdout.log" 2>/dev/null; then
        local p_fail=$(grep -ac "PROTOCOL VIOLATION" "$logdir/stdout.log" || true)
        local p_pass=$(grep -ac "PROTOCOL OK" "$logdir/stdout.log" || true)
        PROTO_TOTAL=$((PROTO_TOTAL + p_pass + p_fail))
        PROTO_PASS=$((PROTO_PASS + p_pass))
        PROTO_FAIL=$((PROTO_FAIL + p_fail))
        if [ "$p_fail" -gt 0 ]; then
            echo " -> protocol  : VIOLATION on $p_fail interface(s)" | tee -a "$SUMMARY"
        else
            echo " -> protocol  : OK on all $p_pass checked interfaces" | tee -a "$SUMMARY"
        fi
    fi
}

spike_lockstep_test() {
    local test_name="$1"
    local fw_src="$2"
    local logdir="$PROJ/logs/sim/$test_name"
    local spike_log="$PROJ/logs/spike/$test_name.log"
    local lock_log="$PROJ/logs/lockstep/$test_name.log"
    mkdir -p "$logdir" "$(dirname "$spike_log")" "$(dirname "$lock_log")"

    TOTAL=$((TOTAL+1))
    {
        echo ""
        echo "========================================================"
        echo " TEST $TOTAL: Spike ISS Lockstep ($test_name)"
        echo "========================================================"
    } | tee -a "$SUMMARY"

    rm -rf "$PROJ/build"
    make -f Makefile.verilator sw FW_SRC="$fw_src" \
        EXTRA_CFLAGS="-DCPB_VAL=434" \
        >"$REG_DIR/${test_name}_build.log" 2>&1

    cp "$PROJ/build/instr_mem.hex" "$PROJ/obj_dir/firmware.hex"
    cp "$PROJ/build/data_mem.hex"  "$PROJ/obj_dir/data_mem.hex"

    cd "$PROJ/obj_dir"
    ./blogic_sim +CPB=434 "+TEST_NAME=$test_name" "+LOGDIR=$logdir" \
        >"$logdir/stdout.log" 2>&1 || true
    cd "$PROJ"

    spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 -l --log-commits \
        "$PROJ/build/test.elf" 2>"$spike_log" &
    local PID=$!; sleep 1; kill "$PID" 2>/dev/null || true; wait "$PID" 2>/dev/null || true

    if python3 "$PROJ/verif/spike/compare_traces.py" "$spike_log" "$logdir/rtl_trace.log" >"$lock_log" 2>&1; then
        PASS=$((PASS+1))
        echo " -> lockstep  : PASS, every retired instruction matches Spike (log: $lock_log)" | tee -a "$SUMMARY"
    else
        FAIL=$((FAIL+1))
        echo " -> lockstep  : FAIL (log: $lock_log)" | tee -a "$SUMMARY"
        sed 's/^/      /' "$lock_log" | tee -a "$SUMMARY"
    fi
    cp "$lock_log" "$REG_DIR/${test_name}_lockstep.log" 2>/dev/null || true
}

# Testler
run_test "UART_TX_115200" 434 434 "sw/tests/uart_hello.c"
run_test "UART_TX_1M"     50   50   "sw/tests/uart_hello.c"
run_test "UART_TX_9600"   5208 5208 "sw/tests/uart_hello.c"
spike_lockstep_test "lockstep_minimal" "sw/tests/minimal_test.c"
spike_lockstep_test "lockstep_deep"    "sw/tests/lockstep_deep.c"

mkdir -p "$PROJ/obj_dir"
cat << 'FLASHEOF' > "$PROJ/obj_dir/flash.hex"
AA
BB
CC
DD
FLASHEOF
run_test "QSPI_Flash" 434 434 "sw/tests/qspi_test.c"

# Ozet
{
    echo ""
    echo "======================================================"
    echo " REGRESSION RESULT"
    echo "------------------------------------------------------"
    printf " Tests passed    : %d of %d\n" "$PASS" "$TOTAL"
    if [ "$PROTO_TOTAL" -gt 0 ]; then
        printf " Protocol checks : %d of %d interface reports OK\n" "$PROTO_PASS" "$PROTO_TOTAL"
    else
        echo " Protocol checks : no report in the simulation output"
    fi
    echo "------------------------------------------------------"
    printf " Total           : %d tests, %d PASS, %d FAIL\n" "$TOTAL" "$PASS" "$FAIL"
    echo "======================================================"
    if [ "$FAIL" -eq 0 ] && [ "$PROTO_FAIL" -eq 0 ]; then
        echo " >>> ALL TESTS PASSED <<<"
    else
        echo " >>> SOME TESTS FAILED, see $REG_DIR/ <<<"
    fi
    echo "======================================================"
    echo ""
    echo " Logs per test : logs/sim/<test>/"
    echo " This run      : $REG_DIR/"
    echo " Latest run    : logs/latest/"
} | tee -a "$SUMMARY"

# Protokol ihlali de kosuyu dusurur (ozet bandi zaten FAIL diyordu)
exit $((FAIL + PROTO_FAIL))
