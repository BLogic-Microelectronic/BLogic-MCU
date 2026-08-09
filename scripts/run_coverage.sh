#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_coverage.sh  -  RTL satir kapsama olcumu
# ============================================
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)
TESTS="uart_hello qspi_test gpio_led_test ai_micro_speech_test uart_baud_sweep ai_irq_test isa_compliance_test timer_irq_test uart_stp_reg_test uart1_strm_test qspi_fifo_err_test"
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
      qspi_fifo_err_test)
        # Kendi golden dizgesi var; varsayilan "Hello World" aranirsa FAIL doner.
        # golden.txt "rm -rf build"den SONRA uretiliyor (asagida), yoksa silinir.
        # CPB=64: 25 kontrolun raporu 1840 bayt; 434'te ~7,8 M cevrim suruyor
        # ve butceyi asiyor (olculdu: cycles=8000000, log ortada kesildi).
        # UART burada yalniz raporlama kanali - olculen QSPI yollarinin
        # hicbiri baud hizina bagli degil.
        EXTRA=(EXTRA_CFLAGS="-DQSPI_ERR_CPB=64"
               SIM_PLUSARGS="+CPB=64 +GOLDEN_FILE=../build/qspi_err/golden.txt +MAX_CYCLES=3000000") ;;
    esac
    echo ">>> sim: $T"
    rm -rf build
    [ "$T" = "qspi_test" ] && printf 'AA\nBB\nCC\nDD\n' > obj_dir/flash.hex
    if [ "$T" = "qspi_fifo_err_test" ]; then
        mkdir -p build/qspi_err
        printf '[QSPI-ERR] gecen=25 kalan=0  SONUC: PASS' > build/qspi_err/golden.txt
    fi
    make -f Makefile.verilator sim COVERAGE=1 FW_SRC=sw/tests/$T.c "${EXTRA[@]}" \
        >"$PROJ/logs/coverage/${T}_sim.log" 2>&1 \
        || { echo "    $T FAIL - bkz: logs/coverage/${T}_sim.log"; exit 1; }
    echo "    PASS"
    DATS="$DATS logs/sim/$T/coverage.dat"
done

rm -rf logs/coverage/annotate
verilator_coverage --annotate logs/coverage/annotate --annotate-min 1 $DATS | tee logs/coverage/summary.txt

# --- Fonksiyonel kapsama (sayac tabanli, verif/sva/*_func_cov.sv) ---
# Her test farkli bin alt kumesini uyarir; anlamli rakam BIRLESIM'dir.
python3 - <<'PYEOF' | tee -a logs/coverage/summary.txt
import glob, re, collections
PAY = {"UART": 7, "QSPI": 7, "AI-CSR": 5, "IRQ": 3}
best, ac_k, ac_f = collections.defaultdict(int), 0, 0
irq_u = set()
for f in glob.glob("logs/coverage/**/*.log", recursive=True):
    t = open(f, errors="replace").read()
    for blok, hit in re.findall(r"\[FUNC-COV\] (\S+).*?bin kapsami\s*:\s*(\d+)/", t, re.S):
        if blok in PAY:
            best[blok] = max(best[blok], int(hit))
    # IRQ: hat bazinda gercek birlesim (max degil - her test farkli hatti uyariyor)
    for a, b_, c in re.findall(r"timer\(irq16\)=(\d+) ai\(irq17\)=(\d+) strm\(irq18\)=(\d+)", t):
        if int(a): irq_u.add("timer")
        if int(b_): irq_u.add("ai")
        if int(c): irq_u.add("strm")
    for k, fl in re.findall(r"auto-clear\s*:\s*(\d+) kontrol, (\d+) ihlal", t):
        ac_k += int(k); ac_f += int(fl)
print("")
print("--- Fonksiyonel kapsama (birlesim, verif/sva/*_func_cov.sv) ---")
best["IRQ"] = max(best.get("IRQ", 0), len(irq_u))
tot = sum(best.get(b, 0) for b in PAY)
for b in ("UART", "QSPI", "AI-CSR", "IRQ"):
    h, n = best.get(b, 0), PAY[b]
    print("  %-8s : %d/%d  (%.0f%%)" % (b, h, n, 100.0 * h / n))
print("  %-8s : %d/%d  (%.0f%%)" % ("TOPLAM", tot, sum(PAY.values()),
                                    100.0 * tot / sum(PAY.values())))
print("  UART auto-clear (EK-2 v1.3): %d kontrol, %d ihlal" % (ac_k, ac_f))
if ac_f:
    raise SystemExit("[HATA] auto-clear ihlali: %d" % ac_f)
PYEOF

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
    echo "olcum     : --coverage-line, SoC seviyesi (11 C testi, tek build, sabit payda)"
    echo "kapsam    : tasarim RTL'i (14 dosya). Haric: CV32E40P/PULP vendor kodu,"
    echo "            testbench'ler, davranissal modeller, SVA checker ve covergroup"
    echo "            bind'leri - bunlar dogrulama altyapisidir, tasarim degil."
    echo "modul bazli TB kapsamasi: verif/coverage_tb_summary.txt (make coverage-tb)"
    echo "------------------------------------------------------------"
    cat "$PROJ/logs/coverage/summary.txt"
} > "$SUM"
echo "Izlenen ozet guncellendi: verif/coverage_summary.txt"
