#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_coverage.sh  -  RTL satir kapsama olcumu
# ============================================
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)
TESTS="uart_hello qspi_test gpio_led_test ai_micro_speech_test uart_baud_sweep ai_irq_test isa_compliance_test timer_irq_test uart_stp_reg_test uart1_strm_test qspi_fifo_err_test i2c_soc_test csr_negatif_test qspi_rdpath_test ai_sat_test"
BLOG="$PROJ/logs/build/coverage_build.log"
mkdir -p "$PROJ/logs/build" "$PROJ/logs/coverage"

echo ">>> Coverage build (line, instrumentasyonlu - yavas)..."
rm -rf obj_dir
make -f Makefile.verilator verilate COVERAGE=1 >"$BLOG" 2>&1 \
    || { echo "    VERILATE FAIL - bkz: $BLOG"; exit 1; }

DATS=""
# Onceki kosulardan kalan test loglari fonksiyonel kapsama birlesimine
# karismasin (10 Eylul 2026 denetimi: asagidaki Python blogu eskiden
# logs/coverage/**/*.log'u ozyinelemeli topluyordu ve 'make coverage-tb'nin
# yazdigi logs/coverage/tb/uart-stp.log blok-TB logu STP=11 binini SoC
# kapsamasina ekliyordu - 9 Eylul'deki UART 7/7 / TOPLAM 22/22 bu yuzdendi).
rm -f logs/coverage/*_sim.log
for T in $TESTS; do
    EXTRA=()
    case $T in
      uart_baud_sweep)
        EXTRA=(EXTRA_CFLAGS="-DSWEEP_CPB0=434 -DSWEEP_CPB1=50 -DSWEEP_CPB2=5208" SIM_PLUSARGS="+SWEEP=434,50,5208") ;;
      i2c_soc_test|csr_negatif_test|qspi_rdpath_test|ai_sat_test)
        # 1 Eylul kapsama siniflandirmasinin C-sinifi testleri
        # (verif/coverage_siniflandirma.md bolum 8). UART yalniz raporlama
        # kanali; CPB=64 sim suresi icin - gercek baud varyantlarini
        # uart_baud_sweep ayrica olcuyor.
        EXTRA=(EXTRA_CFLAGS="-DTEST_CPB=64" SIM_PLUSARGS="+CPB=64") ;;
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

# JTAG debug altsistemi (teslim yapilandirmasinda ACIK): normal C testleri TAP'i
# surmez, bu yuzden rtl/debug/axi_dm_slave.sv (ekip RTL'i, kapsamda) burada
# yalniz bosta-durum satirlariyla gorunur. Tam olcumu jtag_smoke_tb ile
# 'make jtag-cov' verir (rtl/debug/sim/jtag_cov_summary.txt); o dosya varsa
# ozetin sonuna eklenir. Iki model (soc_top C-test modeli / jtag_smoke_tb)
# farkli hiyerarsi anahtarlari urettigi icin .dat dosyalari BIRLESTIRILMEZ
# (6 Eylul 2026 olcumu: birlestirme ayni satirlari iki kez sayip ozeti
# %64'e dusuruyordu). Vendor riscv-dbg dosyalari waiver ile kapsam disidir.

rm -rf logs/coverage/annotate
# --annotate-all: tam kapsanan dosyalar da yazilsin ("annotate'te yok" =
# "enstrumante edilmedi" ile "tamami kapsandi" ayrimi gorunur olsun -
# 1 Eylul siniflandirma denetimi bulgusu (verif/coverage_siniflandirma.md).
verilator_coverage --annotate logs/coverage/annotate --annotate-min 1 --annotate-all $DATS | tee logs/coverage/summary.txt

# --- Fonksiyonel kapsama (sayac tabanli, verif/sva/*_func_cov.sv) ---
# Her test farkli bin alt kumesini uyarir; anlamli rakam BIRLESIM'dir.
# UART icin birlesim bin bazinda hesaplanir (CPB 434/50/5208 + STP 00/01/10/11
# sayaclari test loglarindan toplanir); 6 Eylul 2026 oncesi "en iyi tek test"
# (max) aliniyordu ve 5/7 basiliyordu - 6 Eylul'de gercek birlesim 6/7 idi (STP=11
# hicbir SoC testinde programlanmiyordu). 12 Eylul'den beri uart_stp_reg_test
# STP=3 ile 11 kodunu da programlar ve birlesim 7/7'dir (RTL'de 1X = 2 stop;
# blok seviyesinde uart_stp_tb de olcer). Diger bloklar tek testte %100'e ulastigi icin
# max = birlesim.
# Yalniz BU kosunun TESTS listesindeki SoC test loglari okunur (glob yok):
# blok-TB loglari (logs/coverage/tb/) ve bayat loglar birlesime giremez.
TESTS="$TESTS" python3 - <<'PYEOF' | tee -a logs/coverage/summary.txt
import os, re, collections
PAY = {"UART": 7, "QSPI": 7, "AI-CSR": 5, "IRQ": 3}
best, ac_k, ac_f = collections.defaultdict(int), 0, 0
irq_u = set()
uart_u = set()
for T in os.environ["TESTS"].split():
    f = "logs/coverage/%s_sim.log" % T
    t = open(f, errors="replace").read()
    for blok, hit in re.findall(r"\[FUNC-COV\] (\S+).*?bin kapsami\s*:\s*(\d+)/", t, re.S):
        if blok in PAY:
            best[blok] = max(best[blok], int(hit))
    for c434, c50, c5208 in re.findall(r"CPB binleri\s*:\s*434=(\d+) 50=(\d+) 5208=(\d+)", t):
        for ad, n in (("cpb434", c434), ("cpb50", c50), ("cpb5208", c5208)):
            if int(n): uart_u.add(ad)
    for s00, s01, s10, s11 in re.findall(r"STP binleri\s*:\s*00=(\d+) 01=(\d+) 10=(\d+) 11=(\d+)", t):
        for ad, n in (("stp00", s00), ("stp01", s01), ("stp10", s10), ("stp11", s11)):
            if int(n): uart_u.add(ad)
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
best["UART"] = max(best.get("UART", 0), len(uart_u))
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
echo "    (satir bazli sayim; ayni satirdaki branch-yarisi kayiplari icin annotate'e bakin)" | tee -a logs/coverage/summary.txt
# Liste 1 Eylul denetiminde tamamlandi: i2c/boot_rom/axi_sram_wrapper/uart_rx/uart_tx
# eksikti ve [ -f ] guard'i annotate'te olmayan dosyayi SESSIZCE atliyordu
# (i2c'nin 122 kapsanmamis satiri ozette hic gorunmedi). Ayrinti:
# verif/coverage_siniflandirma.md
for F in ai_accelerator.sv ai_sram_arbiter.sv soc_top.sv soc_axi_interconnect.sv \
         periph_decoder.sv axi4_to_axilite_bridge.sv obi_to_axi.sv axi_dm_slave.sv \
         uart_axil.sv uart_stream_axil.sv gpio_axil.sv timer_axil.sv qspi_master_axil.sv \
         i2c_master_axil.sv boot_rom.sv axi_sram_wrapper.sv uart_rx.v uart_tx.v; do
    A="logs/coverage/annotate/$F"
    if [ -f "$A" ]; then
        printf "  %-28s : %s\n" "$F" "$(grep -c '^%' "$A")" | tee -a logs/coverage/summary.txt
    else
        printf "  %-28s : annotate yok (nokta uretilmedi: yapisal RTL / waiver / kullanilmiyor)\n" "$F" \
            | tee -a logs/coverage/summary.txt
    fi
done
if [ -f rtl/debug/sim/jtag_cov_summary.txt ]; then
    echo "" | tee -a logs/coverage/summary.txt
    echo "--- JTAG altsistemi (make jtag-cov, jtag_smoke_tb 17 asama; rtl/debug/sim/jtag_cov_summary.txt) ---" | tee -a logs/coverage/summary.txt
    grep -E 'axi_dm_slave|soc_axi_interconnect|rtl/soc_top|dmi_jtag|dm_csrs|dm_mem|dm_top' rtl/debug/sim/jtag_cov_summary.txt \
        | sed 's/^/  /' | tee -a logs/coverage/summary.txt
fi
echo ""
echo "Annotated kaynaklar: logs/coverage/annotate/  ('%' onekli satir = kapsanmamis)"

# repoya commit edilen ozet kopyasi
SUM="$PROJ/verif/coverage_summary.txt"
{
    echo "BLogic MCU - line coverage ozeti (make coverage)"
    echo "tarih     : $(date +%Y-%m-%d)"
    echo "verilator : $(verilator --version 2>/dev/null | head -1)"
    echo "testler   : $TESTS"
    echo "olcum     : --coverage-line, SoC seviyesi (15 C testi, tek build, sabit payda)"
    echo "kapsam    : tasarim RTL'i (15 dosya; JTAG koprusu axi_dm_slave.sv dahil). Haric:"
    echo "            CV32E40P/PULP ve riscv-dbg vendor kodu, testbench'ler, davranissal"
    echo "            modeller, SVA checker ve covergroup bind'leri - dogrulama altyapisidir."
    echo "            JTAG altsistemi ayrica jtag_smoke_tb ile olculur: make jtag-cov (sonda)."
    echo "modul bazli TB kapsamasi: verif/coverage_tb_summary.txt (make coverage-tb)"
    echo "------------------------------------------------------------"
    cat "$PROJ/logs/coverage/summary.txt"
} > "$SUM"
echo "Izlenen ozet guncellendi: verif/coverage_summary.txt"
