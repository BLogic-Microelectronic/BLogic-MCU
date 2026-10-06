#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

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
    sys.exit("logs/sim/ai_sw_reference/uart.log not found; run make soc-perf first")
txt = log.read_text(errors="ignore")

def grab(pat):
    m = re.search(pat, txt)
    return m.groups() if m else None

hw = grab(r"HW argmax = (\d+) \((\w+)\), cycle = (\d+)")
sw = grab(r"SW argmax = (\d+) \((\w+)\), cycle = (\d+)")
cmp_ = grab(r"conv_out HW vs SW: (\d+)/(\d+) words? (?:equal|esit)")
sp  = grab(r"speedup = ([\d.]+)x")
thr = re.findall(r"@(\d+) MHz: HW (\d+) inf/s = (\d+) B/s \| SW (\d+) inf/s = (\d+) B/s", txt)
if not (hw and sw and sp):
    sys.exit("could not parse the PERF lines in the UART log")

try:
    ver = subprocess.run(["verilator", "--version"], capture_output=True, text=True).stdout.strip()
except Exception:
    ver = "unknown"

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
out.append("BLogic MCU - AI accelerator performance measurement (make soc-perf)")
out.append(f"date      : {datetime.date.today()}")
out.append(f"verilator : {ver}")
out.append(f"rv-gcc    : {gcc_ver}")
out.append(f"            {gcc_yol}")
out.append(f"opt       : {opt_lvl}   (software reference .text = {text_b} B)")
out.append("NOTE      : the ratio depends on the software baseline, which changes")
out.append("            with the compiler and optimisation level; the hardware path does not.")
out.append("method    : SoC level, with the mcycle CSR; the same input runs first on the")
out.append("            accelerator, then as a pure software reference on the same core.")
out.append("input     : yes_real (recorded audio features from TFLite Micro Speech)")
out.append("source    : sw/tests/ai_sw_reference.c  ·  log: logs/sim/ai_sw_reference/uart.log")
out.append("-" * 60)
out.append("")
out.append(f"  Hardware (AI accelerator) : {hw_cyc:>10,} cycles   argmax={hw[0]} ({hw[1]})")
out.append(f"  Software (CV32E40P)       : {sw_cyc:>10,} cycles   argmax={sw[0]} ({sw[1]})")
out.append(f"  SPEEDUP                   : {sp[0]}x")
out.append("")
if cmp_:
    out.append(f"  Accuracy: conv_out {cmp_[0]}/{cmp_[1]} words identical (bit-exact)")
out.append("")
if thr:
    out.append("  Throughput (by system clock):")
    out.append("    Clock     HW inference/s      HW B/s      SW inference/s      SW B/s")
    for f, hi, hb, si, sb in thr:
        out.append(f"    {f:>3} MHz   {int(hi):>14,}   {int(hb):>9,}   {int(si):>14,}   {int(sb):>9,}")
    out.append("")
    out.append("  Note: the target system clock is 50 MHz; the 100 MHz row is for scale only.")
    out.append("       If the ASIC signoff gives a different fmax, this table must be regenerated.")
out.append("")
out.append("Acceptance criterion (EK-1): speed-up > 1.0x and results identical to the golden reference.")
out.append("Status: PASS" if "PERF] PASS" in txt else "Status: FAIL")

dst = pathlib.Path("verif/perf_summary.txt")
dst.write_text("\n".join(out) + "\n")
print(f"[+] {dst} (speed-up {sp[0]}x)")
