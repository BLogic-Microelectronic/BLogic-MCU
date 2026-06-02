#!/bin/bash
# ============================================================
# BLogic MCU - Tam Otonom Regression Test Suite
# TEKNOFEST 2026 Cip Tasarim Yarismasi
# ============================================================
# Protocol checker raporlari dahil.
# ============================================================
set -e
cd "$(dirname "$0")/.."
PASS=0; FAIL=0; TOTAL=0
PROTO_PASS=0; PROTO_FAIL=0; PROTO_TOTAL=0

run_test() {
    local name="$1" cpb_fw="$2" cpb_sim="$3" fw_file="${4:-sw/tests/uart_hello.c}"
    TOTAL=$((TOTAL+1))
    echo ""
    echo "========================================================"
    echo " TEST $TOTAL: $name"
    echo "========================================================"
    
    rm -rf build
    if ! make -f Makefile.verilator sw FW_SRC="$fw_file" EXTRA_CFLAGS="-DCPB_VAL=$cpb_fw" > build_sw.log 2>&1; then
        FAIL=$((FAIL+1))
        echo " -> DOGRULAMA: YAZILIM DERLEME HATASI"
        echo "--- DERLEME DOSYASI HATASI ICERIGI ---"
        cat build_sw.log
        echo "--------------------------------------"
        return
    fi
    
    cp build/instr_mem.hex obj_dir/firmware.hex
    cp build/data_mem.hex obj_dir/data_mem.hex
    
    cd obj_dir
    ./blogic_sim +CPB=$cpb_sim > run_mcu.log 2>&1 || true
    
    echo "--- MCU CANLI UART CIKTISI ---"
    grep -a -v "RTL_PC:" run_mcu.log | grep -a -v -E "TEST SONUCU|\[DIAG\]" || true
    echo "------------------------------"
    
    # --- Fonksiyonel sonuc ---
    if grep -a -q "TEST BASARILI" run_mcu.log; then
        PASS=$((PASS+1))
        echo " -> FONKSIYONEL: BASARILI"
    else
        FAIL=$((FAIL+1))
        echo " -> FONKSIYONEL: HATALI"
        echo "--- SIMULASYON SONU DETAYLARI (HATA ANALIZI) ---"
        grep -a "\[DIAG\]" run_mcu.log || true
        echo "------------------------------------------------"
    fi

    # --- Protocol checker sonucu ---
    if grep -a -q "Protocol Check Raporu" run_mcu.log; then
        local p_fail=$(grep -a -c "PROTOKOL IHLALI" run_mcu.log 2>/dev/null || true)
        local p_pass=$(grep -a -c "PROTOKOL UYUMLU" run_mcu.log 2>/dev/null || true)
        PROTO_TOTAL=$((PROTO_TOTAL + p_pass + p_fail))
        PROTO_PASS=$((PROTO_PASS + p_pass))
        PROTO_FAIL=$((PROTO_FAIL + p_fail))

        if [ "$p_fail" -gt 0 ]; then
            echo " -> PROTOKOL : IHLAL TESPIT EDILDI ($p_fail arayuz)"
            echo "--- PROTOKOL IHLAL DETAYLARI ---"
            grep -a -E "FAIL|PROTOKOL IHLALI" run_mcu.log || true
            echo "--------------------------------"
        else
            echo " -> PROTOKOL : UYUMLU ($p_pass arayuz kontrol edildi)"
        fi
        echo "--- Arayuz Detay ---"
        grep -a -E "===.*Raporu|Kontrol|PASS|FAIL|PROTOKOL" run_mcu.log || true
        echo "--------------------"
        echo "--- Arayuz Detay ---"
        grep -a -E "===.*Raporu|Kontrol|PASS|FAIL|PROTOKOL" run_mcu.log || true
        echo "--------------------"
    else
        echo " -> PROTOKOL : (checker bagli degil veya simulasyon erken bitti)"
    fi

    cd ..
}

spike_lockstep_test() {
    TOTAL=$((TOTAL+1))
    echo ""
    echo "========================================================"
    echo " TEST $TOTAL: Spike ISS Gercek Lockstep Eslesmesi"
    echo "========================================================"
    rm -rf build
    make -f Makefile.verilator sw FW_SRC=sw/tests/minimal_test.c EXTRA_CFLAGS="-DCPB_VAL=54" > /dev/null 2>&1
    cp build/instr_mem.hex obj_dir/firmware.hex
    cp build/data_mem.hex obj_dir/data_mem.hex
    
    cd obj_dir
    ./blogic_sim +CPB=432 > rtl_sim.log 2>&1 || true
    cd ..
    
    spike --isa=rv32imc -m0x10000:0x2000,0x20000:0x2000 -l --log-commits build/test.elf 2> spike_trace.log &
    local PID=$!; sleep 1; kill $PID 2>/dev/null || true; wait $PID 2>/dev/null || true
    
    if python3 verif/spike/compare_traces.py; then
        PASS=$((PASS+1))
        echo " -> DOGRULAMA: LOCKSTEP BASARILI"
    else
        FAIL=$((FAIL+1))
        echo " -> DOGRULAMA: HATALI"
    fi
}

echo "------------------------------------------------------"
echo " BLogic MCU -- Regression Test Suite"
echo " Protocol Checker: Aktif"
echo "------------------------------------------------------"

# Verilator binary yoksa derle
if [ ! -f obj_dir/blogic_sim ]; then
    echo ">>> Verilator binary bulunamadi, derleniyor..."
    make -f Makefile.verilator clean verilate 2>&1 | tail -3
fi

# 1. UART 115200
run_test "UART TX 115200 Baud Hiz Dogrulamasi" 54 432 "sw/tests/uart_hello.c"

# 2. UART 9600
run_test "UART TX 9600 Baud Hiz Dogrulamasi" 651 5208 "sw/tests/uart_hello.c"

# 3. Spike Lockstep
spike_lockstep_test

# 4. QSPI Flash
mkdir -p obj_dir
cat << 'EOF' > obj_dir/flash.hex
AA
BB
CC
DD
EOF
run_test "QSPI Flash Adresleme ve Okuma Donanim Testi" 54 432 "sw/tests/qspi_test.c"

# ============================================================
# SONUC RAPORU
# ============================================================
echo ""
echo "======================================================"
echo " REGRESSION SONUCU"
echo "------------------------------------------------------"
printf " Fonksiyonel : %-2d / %-2d BASARILI\n" $PASS $TOTAL
if [ $PROTO_TOTAL -gt 0 ]; then
    printf " Protokol    : %-2d / %-2d UYUMLU\n" $PROTO_PASS $PROTO_TOTAL
else
    echo " Protokol    : (checker bagli degil)"
fi
echo "------------------------------------------------------"
printf " Toplam Test : %-2d | BASARILI: %-2d | BASARISIZ: %-2d\n" $TOTAL $PASS $FAIL
echo "======================================================"
if [ $FAIL -eq 0 ] && [ $PROTO_FAIL -eq 0 ]; then
    echo " >>> TUM ADIMLAR BASARILI <<<"
else
    echo " >>> SISTEMDE BASARISIZ TEST VAR <<<"
fi
echo "======================================================"
exit $FAIL
