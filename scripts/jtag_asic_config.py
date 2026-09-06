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
Ucuncu config (TAM AKIS, sentez -> PnR -> signoff, teslim akisiyla birebir ayarlar):
  build/asic_jtag/full/config.yaml  - DESIGN_NAME asic_top (JTAG pinli sargi, ifdef),
                                      JTAG_DEBUG + jtag dosyalari, SDC = design_jtag.sdc
  build/asic_jtag/full/design_jtag.sdc - asic/constraints/design.sdc + jtag_tck saati,
                                      asenkron saat grubu ve JTAG pin butceleri
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

JTAG_SDC = """
# ---- JTAG_DEBUG (deneme/jtag) - jtag_asic_config.py tarafindan eklendi ----
# TAP saati: OpenOCD adapter <= 10 MHz -> 100 ns. TCK <-> clk gecisleri riscv-dbg
# dmi_cdc (2-faz el sikisma) ile korunur; iki saat asenkron gruptur.
create_clock -name jtag_tck -period 100.000 [get_ports jtag_tck_i]
set_clock_uncertainty -setup 0.500 [get_clocks jtag_tck]
set_clock_uncertainty -hold  0.100 [get_clocks jtag_tck]
set_clock_transition 0.150 [get_clocks jtag_tck]
set_clock_groups -asynchronous -group [get_clocks clk] -group [get_clocks jtag_tck]
set_false_path -from [get_ports jtag_trst_ni]
set_input_delay  -clock jtag_tck -max 20.000 [get_ports {jtag_tms_i jtag_tdi_i}]
set_input_delay  -clock jtag_tck -min  2.000 [get_ports {jtag_tms_i jtag_tdi_i}]
set_output_delay -clock jtag_tck -max 20.000 [get_ports jtag_tdo_o]
set_output_delay -clock jtag_tck -min  2.000 [get_ports jtag_tdo_o]
set_load 5.0 [get_ports jtag_tdo_o]
"""

def derive(with_jtag, full=False):
    out = []
    jfiles, jincs = jtag_lists()
    for line in src:
        if not full:
            # ust modul: soc_top; asic_top.sv listeden cikar
            if re.match(r"^DESIGN_NAME:\s*asic_top", line):
                out.append("DESIGN_NAME: soc_top   # asic_top sargisi haric (JTAG pini yok); sifir mantik farki")
                continue
            if "rtl/asic/asic_top.sv" in line:
                continue
        if full and re.match(r"^(PNR|SIGNOFF)_SDC_FILE:", line):
            out.append(line.split(":")[0] + ": dir::design_jtag.sdc   # design.sdc + JTAG saati (jtag_asic_config.py)")
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
            out.append("  - FC1_FIX           # ai_accelerator FC-1 duzeltmesi (teslimde kapali, JTAG varyantinda acik)")
            out.append("  - I2C_SDA_SYNC      # i2c_sda_i 2FF senkronizator (teslimde kapali, JTAG varyantinda acik)")
    return "\n".join(out) + "\n"

for name, flag, full in (("base", False, False), ("jtag", True, False), ("full", True, True)):
    d = os.path.join("build", "asic_jtag", name)
    os.makedirs(d, exist_ok=True)
    text = derive(flag, full)
    open(os.path.join(d, "config.yaml"), "w", encoding="utf-8", newline="\n").write(text)
    if full:
        sdc = open("asic/constraints/design.sdc", encoding="utf-8").read()
        open(os.path.join(d, "design_jtag.sdc"), "w", encoding="utf-8", newline="\n").write(sdc.rstrip("\n") + "\n" + JTAG_SDC)
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
