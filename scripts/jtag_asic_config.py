#!/usr/bin/env python3
"""
jtag_asic_config.py - asic/config.yaml'dan SENTEZ karsilastirma config'leri turetir.
deneme/jtag dali. asic/ klasorune DOKUNMAZ (yalniz okur); ciktilar build/asic_jtag/.

Iki config uretir (ikisi de ust modul soc_top, yalniz fark JTAG_DEBUG):
  build/asic_jtag/base/config.yaml  - JTAG yok  (teslim RTL'i, asic_top sargisi haric)
  build/asic_jtag/jtag/config.yaml  - JTAG_DEBUG + rtl/debug/jtag_files.f + axi_dm_slave.sv
Ayni akis (Classic, --to Yosys.Synthesis) iki config'e kosulunca hucre/alan farki
= JTAG revizyonunun sentez maliyeti. asic_top'ta JTAG pini olmadigi icin ust
modul soc_top secilir (asic_top sifir mantikli sargidir).

Yol kurali: config.yaml 'dir::' yollari config dosyasinin dizinine goredir.
  asic/config.yaml : dir::../rtl/...      -> build/asic_jtag/X/config.yaml : dir::../../../rtl/...
                     dir::constraints/... ->                                 dir::../../../asic/constraints/...
Kullanim (repo kokunden):  python3 scripts/jtag_asic_config.py
"""
import os, re, sys

os.chdir(os.path.join(os.path.dirname(os.path.abspath(__file__)), ".."))
src = open("asic/config.yaml", encoding="utf-8").read().splitlines()

def rewrite_dir(line):
    if line.lstrip().startswith("#"):
        return line
    line = line.replace("dir::../", "dir::../../../")
    line = re.sub(r"dir::(?!\.\./)", "dir::../../../asic/", line)
    return line

def jtag_lists():
    files, incs = [], []
    for raw in open("rtl/debug/jtag_files.f", encoding="utf-8"):
        s = raw.strip()
        if not s or s.startswith("#"):
            continue
        if s.startswith("+incdir+"):
            incs.append(s[len("+incdir+"):])
        else:
            files.append(s)
    files.append("rtl/debug/axi_dm_slave.sv")
    return files, incs

def derive(with_jtag):
    out = []
    jfiles, jincs = jtag_lists()
    for line in src:
        # ust modul: soc_top; asic_top.sv listeden cikar
        if re.match(r"^DESIGN_NAME:\s*asic_top", line):
            out.append("DESIGN_NAME: soc_top   # asic_top sargisi haric (JTAG pini yok); sifir mantik farki")
            continue
        if "rtl/asic/asic_top.sv" in line:
            continue
        line = rewrite_dir(line)
        out.append(line)
        if with_jtag and re.match(r"^VERILOG_FILES:", line):
            # paketler (dm_pkg, cdc_reset_ctrlr_pkg) soc_top.sv'den ONCE gelsin: listenin basina
            out.append("  # --- JTAG_DEBUG: rtl/debug/jtag_files.f + axi_dm_slave.sv (jtag_asic_config.py) ---")
            out += ["  - dir::../../../%s" % f for f in jfiles]
        if with_jtag and re.match(r"^VERILOG_INCLUDE_DIRS:", line):
            # v1.38.0 common_cells basliklari eski incdir'den ONCE aranmali
            out += ["  - dir::../../../%s   # JTAG (jtag_files.f include sirasi notu)" % d for d in jincs]
        if with_jtag and re.match(r"^VERILOG_DEFINES:", line):
            out.append("  - JTAG_DEBUG        # riscv-dbg DM + DTM + axi_dm_slave (deneme/jtag)")
    return "\n".join(out) + "\n"

for name, flag in (("base", False), ("jtag", True)):
    d = os.path.join("build", "asic_jtag", name)
    os.makedirs(d, exist_ok=True)
    text = derive(flag)
    open(os.path.join(d, "config.yaml"), "w", encoding="utf-8", newline="\n").write(text)
    # dogrulama: her dir:: yolu var mi?
    missing = []
    for m in re.finditer(r"dir::([^\s#]+)", text):
        p = os.path.normpath(os.path.join(d, m.group(1)))
        if not os.path.exists(p):
            missing.append(m.group(1))
    print("[%s] %s  (dir:: %d yol, eksik %d)" % (name, os.path.join(d, "config.yaml"),
          len(re.findall(r"dir::", text)), len(missing)))
    for p in missing:
        print("   EKSIK:", p)
    if missing:
        sys.exit(1)
