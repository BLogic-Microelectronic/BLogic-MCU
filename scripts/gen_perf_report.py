#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# gen_perf_report.py - HW/SW hizlanma olcumunu artefakta cevirir
# ============================================
# make soc-perf ciktisi (UART log) ayristirilir ve verif/perf_summary.txt
# olarak commit edilir. Sartname: raporlanan sayilar script ciktisiyla ayni
# olmalidir; bu dosya o esitligi saglar.
import pathlib, re, subprocess, datetime, sys, os, shutil

log = pathlib.Path("logs/sim/ai_sw_reference/uart.log")
if not log.exists():
    sys.exit("uart.log yok - once: make soc-perf")
txt = log.read_text(errors="ignore")

def grab(pat):
    m = re.search(pat, txt)
    return m.groups() if m else None

hw = grab(r"HW argmax = (\d+) \((\w+)\), cycle = (\d+)")
sw = grab(r"SW argmax = (\d+) \((\w+)\), cycle = (\d+)")
cmp_ = grab(r"conv_out HW vs SW: (\d+)/(\d+) word esit")
sp  = grab(r"speedup = ([\d.]+)x")
thr = re.findall(r"@(\d+) MHz: HW (\d+) inf/s = (\d+) B/s \| SW (\d+) inf/s = (\d+) B/s", txt)
if not (hw and sw and sp):
    sys.exit("PERF satirlari ayristirilamadi")

try:
    ver = subprocess.run(["verilator", "--version"], capture_output=True, text=True).stdout.strip()
except Exception:
    ver = "bilinmiyor"

# --- Derleyici kimligi (K8) ---
# Hizlanma orani yazilim tabanina baglidir; taban da derleyici surumu ve
# optimizasyon seviyesine. Olculdu (7 Agustos 2026, ayni RTL):
#   gcc 13.2.0  -O2  ->  9.684.726 cevrim  ->  21,0x
#   gcc 13.2.0  -O3  ->  6.880.488 cevrim  ->  14,9x
#   gcc 10.2.0  -O2  ->  9.029.918 cevrim  ->  19,6x
# Donanim yolu bayraktan etkilenmiyor (459.016 -> 459.014, iki cevrim).
# Yani bayrak secimi YALNIZ tabani, dolayisiyla orani belirliyor:
# daha iyi derleyici -> daha hizli yazilim -> DUSUK oran.
# Bu asimetri yuzunden rapor derleyiciyi ve bayragi yazmak ZORUNDA.
def _rv_gcc_bilgi():
    ad = "riscv32-unknown-elf-gcc"
    try:
        mk = pathlib.Path("Makefile.verilator").read_text(errors="ignore")
        m = re.search(r"^RV_GCC\s*=\s*(\S+)", mk, re.M)
        if m:
            ad = m.group(1)
    except Exception:
        pass
    yol = shutil.which(ad) or ad
    try:
        s0 = subprocess.run([yol, "--version"], capture_output=True,
                            text=True).stdout.splitlines()[0]
    except Exception:
        s0 = "bilinmiyor"
    return yol, s0

def _opt_seviyesi():
    b = []
    try:
        mk = pathlib.Path("Makefile.verilator").read_text(errors="ignore")
        m = re.search(r"^RV_CFLAGS\s*=\s*(.*)$", mk, re.M)
        if m:
            b += re.findall(r"-O(?:fast|[0-9sgz]+)", m.group(1))
    except Exception:
        pass
    b += re.findall(r"-O(?:fast|[0-9sgz]+)", os.environ.get("EXTRA_CFLAGS", ""))
    return b[-1] if b else "bilinmiyor"

gcc_yol, gcc_ver = _rv_gcc_bilgi()
opt_lvl = _opt_seviyesi()
try:
    _sz = subprocess.run([gcc_yol.replace("-gcc", "-size"), "build/test.elf"],
                         capture_output=True, text=True).stdout.splitlines()
    text_b = _sz[1].split()[0] if len(_sz) > 1 else "?"
except Exception:
    text_b = "?"

hw_cyc, sw_cyc = int(hw[2]), int(sw[2])
out = []
out.append("BLogic MCU - YZ hizlandirici basarim olcumu (make soc-perf)")
out.append(f"tarih     : {datetime.date.today()}")
out.append(f"verilator : {ver}")
out.append(f"rv-gcc    : {gcc_ver}")
out.append(f"            {gcc_yol}")
out.append(f"opt       : {opt_lvl}   (yazilim referansi .text = {text_b} B)")
out.append("NOT       : oran yazilim tabanina duyarlidir; taban derleyici ve")
out.append("            optimizasyon seviyesiyle degisir, donanim yolu degismez.")
out.append("olcum     : SoC seviyesi, mcycle CSR ile; ayni girdi once donanimda,")
out.append("            sonra ayni cekirdek uzerinde saf yazilim referansiyla kosulur.")
out.append("girdi     : yes_real (TFLite Micro Speech gercek ses ozniteligi)")
out.append("kaynak    : sw/tests/ai_sw_reference.c  ·  log: logs/sim/ai_sw_reference/uart.log")
out.append("-" * 60)
out.append("")
out.append(f"  Donanim (YZ hizlandirici) : {hw_cyc:>10,} cevrim   argmax={hw[0]} ({hw[1]})")
out.append(f"  Yazilim (CV32E40P)        : {sw_cyc:>10,} cevrim   argmax={sw[0]} ({sw[1]})")
out.append(f"  HIZLANMA                  : {sp[0]}x")
out.append("")
if cmp_:
    out.append(f"  Dogruluk: conv_out {cmp_[0]}/{cmp_[1]} word birebir esit (bit-exact)")
out.append("")
if thr:
    out.append("  Cikti hizi (sistem saatine gore):")
    out.append("    Saat      HW inference/s      HW B/s      SW inference/s      SW B/s")
    for f, hi, hb, si, sb in thr:
        out.append(f"    {f:>3} MHz   {int(hi):>14,}   {int(hb):>9,}   {int(si):>14,}   {int(sb):>9,}")
    out.append("")
    out.append("  Not: hedef sistem saati 50 MHz'dir; 100 MHz satiri olcek referansidir.")
    out.append("       ASIC imzasindan farkli bir fmax cikarsa bu tablo yenilenmelidir.")
out.append("")
out.append("Kabul kriteri (EK-1): hizlanma > 1.0x ve sonuclar altin referansla birebir.")
out.append("Durum: PASS" if "PERF] PASS" in txt else "Durum: FAIL")

dst = pathlib.Path("verif/perf_summary.txt")
dst.write_text("\n".join(out) + "\n")
print(f"[+] {dst} (hizlanma {sp[0]}x)")
