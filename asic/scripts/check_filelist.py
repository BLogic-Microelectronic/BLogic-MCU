#!/usr/bin/env python3
"""check_filelist.py - asic/config.yaml VERILOG_FILES <-> asic/filelist.f uyum denetimi.

DDK "Final Istenen Ciktilar" sayfa 20: "LibreLane yapilandirmasinda kullanilan
RTL kaynaklari ile asic/filelist.f icerigi birbiriyle uyumlu olmalidir. Gerekli
donusum veya yapilandirma islemleri asic/Makefile ya da asic/scripts/ altindaki
otomasyon kodlariyla gerceklestirilmelidir."

Bu betik o otomasyondur. Kanonik kaynak config.yaml'dir; filelist.f ondan
turetilir ve bu betik ikisinin (sira dahil) birebir ayni oldugunu dogrular.

Kullanim:  python3 scripts/check_filelist.py            # denetle (asic/ icinden)
           python3 scripts/check_filelist.py --generate # filelist.f'i yeniden uret

Cikis kodu: 0 = uyumlu, 1 = uyumsuz/hata (Bolum 8: basarisizlikta sifir disi).
Bagimlilik: yok (stdlib; PyYAML gerektirmez - VERILOG_FILES blogu satir bazli
cozumlenir, config.yaml'in o bolumu duz listedir).
"""
import os
import re
import sys

ASIC_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CONFIG = os.path.join(ASIC_DIR, "config.yaml")
FILELIST = os.path.join(ASIC_DIR, "filelist.f")

HEADER = """\
# ============================================================
# Ostim BLogic Mikroelektronik - asic/filelist.f
# ASIC sentezinde kullanilan RTL kaynak listesi (DDK Tablo 8).
#
# KANONIK KAYNAK: asic/config.yaml VERILOG_FILES listesi.
# Bu dosya oradan uretilir: python3 scripts/check_filelist.py --generate
# Uyum denetimi:            python3 scripts/check_filelist.py
# (make asic_run her kosuda denetimi otomatik calistirir.)
#
# Yollar asic/ dizininden goreli cozulur (akis asic/ icinden baslar,
# DDK sayfa 20). Ayni yollar depo kokune gore rtl/... agacina denk
# gelir; ana RTL kaynaklari asic/ altina KOPYALANMAMISTIR (Bolum 3/4).
# Sira = HDL derleme bagimlilik sirasi.
# ============================================================

# --- Include dizinleri (config.yaml VERILOG_INCLUDE_DIRS ile birebir) ---
# v1.38.0 common_cells basliklari eski cv32e40p kopyasindan ONCE aranmali
+incdir+../rtl/debug/vendor/common_cells_v1.38.0/include
+incdir+../rtl/asic
+incdir+../rtl/core/cv32e40p/rtl/include
+incdir+../rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include
+incdir+../rtl/bus/axi/include

# --- Derleme tanimlari (config.yaml VERILOG_DEFINES ile birebir) ---
# ASIC_SRAM_MACRO : SRAM makro dallarini secer (ifndef korumali RTL)
# BOOTROM_CONTENT : boot ROM icerigini gomer
# JTAG_DEBUG      : JTAG TAP + riscv-dbg Debug Module (sartname "JTAG (Opsiyonel)")
# FC1_FIX         : ai_accelerator FC-1 erratasinin duzeltmesi
# I2C_SDA_SYNC    : i2c_sda_i girisine 2FF senkronizator
+define+SYNTHESIS
+define+ASIC_SRAM_MACRO
+define+BOOTROM_CONTENT
+define+JTAG_DEBUG
+define+FC1_FIX
+define+I2C_SDA_SYNC

# --- RTL kaynaklari (derleme sirasina gore) ---
"""


def parse_config_files(path):
    """config.yaml'daki VERILOG_FILES listesini (dir:: onekleri cozulmus) dondurur."""
    files = []
    in_block = False
    item_re = re.compile(r"^\s*-\s*dir::(\S+)")
    with open(path, encoding="utf-8") as f:
        for line in f:
            if re.match(r"^VERILOG_FILES\s*:", line):
                in_block = True
                continue
            if in_block:
                m = item_re.match(line)
                if m:
                    files.append(m.group(1))
                elif line.strip() == "" or line.lstrip().startswith("#"):
                    continue
                else:
                    break  # yeni ust-duzey anahtar: blok bitti
    if not files:
        sys.exit(f"HATA: {path} icinde VERILOG_FILES listesi bulunamadi.")
    return files


def parse_filelist(path):
    """filelist.f'teki kaynak dosya satirlarini dondurur (+incdir/+define/yorum haric)."""
    files = []
    with open(path, encoding="utf-8") as f:
        for line in f:
            s = line.strip()
            if not s or s.startswith("#") or s.startswith("//") or s.startswith("+"):
                continue
            files.append(s)
    return files


def generate():
    files = parse_config_files(CONFIG)
    with open(FILELIST, "w", encoding="utf-8") as f:
        f.write(HEADER)
        for p in files:
            f.write(p + "\n")
    print(f"[check_filelist] {FILELIST} uretildi: {len(files)} kaynak dosya.")


def check():
    cfg = parse_config_files(CONFIG)
    if not os.path.exists(FILELIST):
        sys.exit("HATA: asic/filelist.f yok. Uretmek icin: "
                 "python3 scripts/check_filelist.py --generate")
    fl = parse_filelist(FILELIST)
    ok = True
    if len(cfg) != len(fl):
        print(f"UYUMSUZ: config.yaml {len(cfg)} dosya, filelist.f {len(fl)} dosya.")
        ok = False
    for i, (a, b) in enumerate(zip(cfg, fl)):
        if a != b:
            print(f"UYUMSUZ (satir {i+1}): config.yaml='{a}'  filelist.f='{b}'")
            ok = False
    only_cfg = set(cfg) - set(fl)
    only_fl = set(fl) - set(cfg)
    for p in sorted(only_cfg):
        print(f"  yalniz config.yaml'da: {p}")
    for p in sorted(only_fl):
        print(f"  yalniz filelist.f'te : {p}")
    # Dosyalarin depoda gercekten var oldugunu da dogrula (asic/ icinden goreli)
    for p in cfg:
        if not os.path.exists(os.path.join(ASIC_DIR, p)):
            print(f"EKSIK DOSYA: {p} (asic/ icinden cozulemedi)")
            ok = False
    if ok:
        print(f"[check_filelist] UYUMLU: {len(cfg)} dosya, sira birebir, tumu diskte mevcut.")
        return 0
    return 1


if __name__ == "__main__":
    if "--generate" in sys.argv:
        generate()
        sys.exit(check())
    sys.exit(check())
