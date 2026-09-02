#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# vm_jtag_asic.sh - JTAG revizyonunun ASIC (sky130) sentez maliyeti - VM kosusu
# ============================================
# deneme/jtag dali. VM'de (LibreLane ortami: asic/environment flake) kosulur;
# yerel sonuc kanonik sayilmaz. asic/ klasorune DOKUNMAZ; teslim kosusu
# (asic/run/RUN_teslim_*) ile ilgisi yok - her sey build/asic_jtag/ altindadir.
#
# Adimlar:
#   1) scripts/jtag_elab_check.sh      - yosys-slang elaborasyon (kanonik)
#   2) base sentez  (soc_top, JTAG yok)          --to Yosys.Synthesis
#   3) jtag sentez  (soc_top + JTAG_DEBUG)       --to Yosys.Synthesis
#   4) ozet: hucre sayisi / alan farki (metrics.json)
# Kullanim (repo kokunden, tercihen nohup ile):
#   nohup scripts/vm_jtag_asic.sh > build/asic_jtag/run.log 2>&1 &
# Yalniz bir adim: STEPS="elab" / STEPS="base jtag" / STEPS="ozet"
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
  local run=$d/run
  rm -rf "$run"
  say "$1 sentez basliyor: $run"
  ( cd "$d" && "$REPO/$ENV" librelane config.yaml --flow Classic --to Yosys.Synthesis \
        --force-run-dir run ) > "$d/librelane.log" 2>&1
  local rc=$?
  say "$1 sentez bitti, cikis kodu $rc (log: $d/librelane.log)"
  grep -E "^\[ERROR\]|Error|error:" "$d/librelane.log" | grep -v "ERROR_ON_" | head -5
  return $rc
}
has base && run_synth base
has jtag && run_synth jtag

if has ozet; then
  say "4) ozet"
  python3 - <<'PY'
import json, glob, os
def load(name):
    for p in [f"build/asic_jtag/{name}/run/final/metrics.json"] + sorted(glob.glob(f"build/asic_jtag/{name}/run/*/metrics.json")):
        if os.path.exists(p):
            return json.load(open(p)), p
    return {}, None
keys = ["design__instance__count", "design__instance__area",
        "design__instance__count__stdcell", "design__instance__area__stdcell",
        "design__instance__count__macros", "synthesis__check_error__count"]
b, bp = load("base"); j, jp = load("jtag")
print("base:", bp); print("jtag:", jp)
print("%-40s %14s %14s %14s" % ("metrik", "base", "jtag", "fark"))
for k in keys:
    vb, vj = b.get(k), j.get(k)
    if isinstance(vb,(int,float)) and isinstance(vj,(int,float)):
        print("%-40s %14.1f %14.1f %+14.1f" % (k, vb, vj, vj-vb))
    else:
        print("%-40s %14s %14s" % (k, vb, vj))
PY
fi
say "toplam sure: $(( ($(date +%s)-T0)/60 )) dk"
