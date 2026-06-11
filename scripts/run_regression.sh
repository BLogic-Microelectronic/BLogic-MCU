#!/bin/bash
# ============================================================
# BLogic MCU — Regression (logs/ yapisinda)
# Karar: result.log icindeki result= satirini okur (grep "PASS" yok).
# ============================================================
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
    echo " Tarih  : $(date)"
    echo " Cikti  : $REG_DIR"
    echo "================================================================"
} | tee "$SUMMARY"

if [ ! -x "$PROJ/obj_dir/blogic_sim" ]; then
    echo ">>> Verilator binary yok, derleniyor..." | tee -a "$SUMMARY"
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
        echo " -> DERLEME HATASI ($REG_DIR/${test_name}_build.log)" | tee -a "$SUMMARY"
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
        echo " -> FONKSIYONEL: PASS  (cycles=$cyc bytes=$byt)" | tee -a "$SUMMARY"
    else
        FAIL=$((FAIL+1))
        echo " -> FONKSIYONEL: FAIL  (cycles=${cyc:-?} bytes=${byt:-?})" | tee -a "$SUMMARY"
        echo "    diag: $logdir/diag.log" | tee -a "$SUMMARY"
        [ -f "$logdir/diag.log" ] && sed 's/^/      /' "$logdir/diag.log" | tee -a "$SUMMARY"
    fi

    if grep -aq "Protocol Check Raporu" "$logdir/stdout.log" 2>/dev/null; then
        local p_fail=$(grep -ac "PROTOKOL IHLALI" "$logdir/stdout.log" || true)
        local p_pass=$(grep -ac "PROTOKOL UYUMLU" "$logdir/stdout.log" || true)
        PROTO_TOTAL=$((PROTO_TOTAL + p_pass + p_fail))
        PROTO_PASS=$((PROTO_PASS + p_pass))
        PROTO_FAIL=$((PROTO_FAIL + p_fail))
        if [ "$p_fail" -gt 0 ]; then
            echo " -> PROTOKOL : IHLAL ($p_fail arayuz)" | tee -a "$SUMMARY"
        else
            echo " -> PROTOKOL : UYUMLU ($p_pass arayuz)" | tee -a "$SUMMARY"
        fi
    fi
}

spike_lockstep_test() {
    local test_name="lockstep_minimal"
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
    make -f Makefile.verilator sw FW_SRC=sw/tests/minimal_test.c \
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
        echo " -> LOCKSTEP: PASS  (bkz: $lock_log)" | tee -a "$SUMMARY"
    else
        FAIL=$((FAIL+1))
        echo " -> LOCKSTEP: FAIL  (bkz: $lock_log)" | tee -a "$SUMMARY"
        sed 's/^/      /' "$lock_log" | tee -a "$SUMMARY"
    fi
    cp "$lock_log" "$REG_DIR/${test_name}_lockstep.log" 2>/dev/null || true
}

# === Testler ===
run_test "UART_TX_115200" 434 434 "sw/tests/uart_hello.c"
run_test "UART_TX_1M"     50   50   "sw/tests/uart_hello.c"
run_test "UART_TX_9600"   5208 5208 "sw/tests/uart_hello.c"
spike_lockstep_test

mkdir -p "$PROJ/obj_dir"
cat << 'FLASHEOF' > "$PROJ/obj_dir/flash.hex"
AA
BB
CC
DD
FLASHEOF
run_test "QSPI_Flash" 434 434 "sw/tests/qspi_test.c"

# === Ozet ===
{
    echo ""
    echo "======================================================"
    echo " REGRESSION SONUCU"
    echo "------------------------------------------------------"
    printf " Fonksiyonel : %-2d / %-2d PASS\n" "$PASS" "$TOTAL"
    if [ "$PROTO_TOTAL" -gt 0 ]; then
        printf " Protokol    : %-2d / %-2d UYUMLU\n" "$PROTO_PASS" "$PROTO_TOTAL"
    else
        echo " Protokol    : (checker stdout'a yazmadi)"
    fi
    echo "------------------------------------------------------"
    printf " Toplam Test : %-2d | PASS: %-2d | FAIL: %-2d\n" "$TOTAL" "$PASS" "$FAIL"
    echo "======================================================"
    if [ "$FAIL" -eq 0 ] && [ "$PROTO_FAIL" -eq 0 ]; then
        echo " >>> TUM TESTLER PASS <<<"
    else
        echo " >>> BASARISIZ TEST VAR — bkz: $REG_DIR/ <<<"
    fi
    echo "======================================================"
    echo ""
    echo " Detayli loglar : logs/sim/<test>/"
    echo " Bu kosum       : $REG_DIR/"
    echo " En son kosum   : logs/latest/"
} | tee -a "$SUMMARY"

exit "$FAIL"
