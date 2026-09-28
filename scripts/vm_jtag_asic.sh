#!/bin/bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# vm_jtag_asic.sh - JTAG revizyonunun ASIC (sky130) sentez maliyeti - VM kosusu
# ============================================
# TARIHSEL KESIF ARACI (3-4 Eylul 2026; kanitlar rtl/debug/asic_jtag_sentez/):
# JTAG teslim yapilandirmasina alinmadan once sentez maliyetini ve tam akisi
# (v1/v2/v3) olcmek icin kullanildi; v3'un dort CTS ayari ve JTAG SDC blogu
# 6 Eylul 2026'da asic/config.yaml + asic/constraints/design.sdc'ye alindi,
# resmi kosu 'make asic_run TAG=RUN_final_2026-09-06'dir. jtag_asic_config.py'nin
# urettigi configler artik JTAG kaynaklarini/SDC satirlarini ikiler (o dosyanin notu).
# VM'de (LibreLane ortami: asic/environment flake) kosulur;
# yerel sonuc kanonik sayilmaz. asic/ klasorune DOKUNMAZ; resmi kosu
# (asic/run/RUN_*) ile ilgisi yok - her sey build/asic_jtag/ altindadir.
#
# Adimlar:
#   1) scripts/jtag_elab_check.sh      - yosys-slang elaborasyon (kanonik)
#   2) base sentez  (soc_top, JTAG yok)          --to Yosys.Synthesis
#   3) jtag sentez  (soc_top + JTAG_DEBUG)       --to Yosys.Synthesis
#   4) ozet: hucre sayisi / alan farki (metrics.json)
# Kullanim (repo kokunden, tercihen nohup ile):
#   nohup scripts/vm_jtag_asic.sh > build/asic_jtag/run.log 2>&1 &
# Yalniz bir adim: STEPS="elab" / STEPS="base jtag" / STEPS="ozet"
#   5) STEPS="full"     - TAM AKIS (sentez->PnR->signoff), asic_top + JTAG_DEBUG,
#                         teslim config'iyle birebir ayarlar (~3,5 saat, 8 cekirdek)
#   6) STEPS="fullozet" - tam akis metrikleri (WNS/WHS kose basina, DRC/LVS/anten, alan)
set -u
cd "$(dirname "$0")/.."
REPO=$PWD
ENV=asic/scripts/run_in_env.sh
STEPS=${STEPS:-"elab base jtag ozet"}
mkdir -p build/asic_jtag
T0=$(date +%s)
say() { echo "[vm-jtag-asic $(date +%H:%M:%S)] $*"; }

has() { case " $STEPS " in *" $1 "*) return 0;; *) return 1;; esac; }

if has elab; then
  say "1) elaborasyon (jtag_elab_check.sh)"
  scripts/jtag_elab_check.sh; rc=$?
  say "   elab cikis kodu: $rc"
  [ $rc -ne 0 ] && { say "elab FAIL - duruyorum"; exit 1; }
fi

if has base || has jtag; then
  say "config turetme (jtag_asic_config.py)"
  python3 scripts/jtag_asic_config.py || exit 1
fi

run_synth() {   # $1 = base|jtag
  local d=build/asic_jtag/$1
  local run=$REPO/$d/run
  rm -rf "$run"; mkdir -p "$run"   # --force-run-dir var olan dizin ister (asic/Makefile de mkdir yapar)
  say "$1 sentez basliyor: $d/run"
  # DIKKAT: run_in_env.sh once asic/ dizinine 'cd' yapar -> goreli 'config.yaml'
  # asic/config.yaml'a (teslim config'i!) ve 'run' asic/run'a cozulur. Bu yuzden
  # config ve kosu dizini MUTLAK verilir (ilk kosuda bu tuzaga dusuldu, 3 Eylul).
  "$REPO/$ENV" librelane "$REPO/$d/config.yaml" --flow Classic --to Yosys.Synthesis \
        --force-run-dir "$run" > "$d/librelane.log" 2>&1
  local rc=$?
  say "$1 sentez bitti, cikis kodu $rc (log: $d/librelane.log)"
  grep -E "^\[ERROR\]|Error|error:" "$d/librelane.log" | grep -v "ERROR_ON_\|network is combinational" | head -5
  return $rc
}
has base && run_synth base
has jtag && run_synth jtag

if has ozet; then
  say "4) ozet"
  python3 - <<'PY'
import json, glob, os, re
def load(name):
    p = f"build/asic_jtag/{name}/run/final/metrics.json"
    return (json.load(open(p)) if os.path.exists(p) else {}), p
def stat(name):
    out = {}
    for p in sorted(glob.glob(f"build/asic_jtag/{name}/run/*yosys-synthesis/reports/stat.rpt")):
        t = open(p).read()
        c = re.search(r"Number of cells:\s+(\d+)", t)
        a = re.search(r"Chip area for (?:top )?module[^\n]*:\s+([\d.]+)", t)
        ff = sum(int(n) for n in re.findall(r"sky130_fd_sc_hd__df\S+\s+(\d+)", t))
        sram = sum(int(n) for n in re.findall(r"sky130_sram\S*\s+(\d+)", t))
        out = {"stat_cells": int(c.group(1)) if c else None,
               "stat_area_um2": float(a.group(1)) if a else None,
               "stat_ff_cells": ff, "stat_sram_macros": sram, "stat_rpt": p}
    return out
keys = ["stat_cells", "stat_area_um2", "stat_ff_cells", "stat_sram_macros",
        "design__instance__count", "design__instance__area",
        "design__instance__count__stdcell", "design__instance__area__stdcell",
        "design__instance__count__macros", "synthesis__check_error__count"]
b, bp = load("base"); j, jp = load("jtag")
b.update(stat("base")); j.update(stat("jtag"))
print("base:", b.get("stat_rpt"), "|", bp); print("jtag:", j.get("stat_rpt"), "|", jp)
print("%-40s %14s %14s %14s" % ("metrik", "base", "jtag", "fark"))
for k in keys:
    vb, vj = b.get(k), j.get(k)
    if isinstance(vb,(int,float)) and isinstance(vj,(int,float)):
        print("%-40s %14.1f %14.1f %+14.1f" % (k, vb, vj, vj-vb))
    else:
        print("%-40s %14s %14s" % (k, vb, vj))
PY
fi
if has full; then
  d=build/asic_jtag/full; run=$REPO/$d/run
  python3 scripts/jtag_asic_config.py || exit 1
  rm -rf "$run"; mkdir -p "$run"
  say "5) TAM AKIS basliyor: $d/run (teslim ayarlari + JTAG_DEBUG)"
  "$REPO/$ENV" librelane "$REPO/$d/config.yaml" --flow Classic --force-run-dir "$run" > "$d/librelane.log" 2>&1
  rc=$?
  say "   tam akis bitti, cikis kodu $rc (log: $d/librelane.log)"
  grep -E "^\[ERROR\]|Error:" "$d/librelane.log" | grep -v "network is combinational" | head -5
fi

if has fullozet; then
  say "6) tam akis ozeti"
  python3 - <<'PY'
import json, os, re
p = "build/asic_jtag/full/run/final/metrics.json"
if not os.path.exists(p):
    print("metrics.json yok:", p); raise SystemExit
m = json.load(open(p))
pat = re.compile(r"^(timing__(setup|hold)__(ws|tns|vio)|design__instance__(count|area|utilization)|design__die__bbox|"
                 r"route__drc_errors|route__antenna_violation|antenna__|magic__drc|klayout__drc|design__lvs|"
                 r"design__xor|power__total|ir__|synthesis__check|design__max_(slew|fanout|cap)|clock__|"
                 r"timing__unannotated|design__disconnected|design__critical)")
for k in sorted(m):
    if pat.match(k):
        print("%-70s %s" % (k, m[k]))
PY
fi
say "toplam sure: $(( ($(date +%s)-T0)/60 )) dk"
