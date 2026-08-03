#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# asic_elab.sh - ASIC elaborasyon kapisi (yosys-slang)
# ============================================
# sv2v KULLANILMIYOR: modul hiyerarsisini soc_top'a inline ediyor, SRAM makrolari
# floorplan'da ayri instance olarak gorunmuyordu. yosys-slang hiyerarsiyi korur.
# LibreLane 3.0.5 ortami gerekir (slang.so hazir gelir).
set -e
cd "$(dirname "$0")/.."
REPO=$PWD
LL=${LIBRELANE_SHELL:-"$HOME/librelane"}
FLIST=$(grep -v '^#' asic/soc_files_asic.f | grep -v '^+' | grep -v '^$' | grep -v 'verif/' | tr '\n' ' ')
mkdir -p build/asic
cd "$LL"
nix-shell --run "cd $REPO && yosys -m slang -p \"read_slang --keep-hierarchy -DSYNTHESIS \
   -Irtl/core/cv32e40p/rtl/include \
   -Irtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
   -Irtl/bus/axi/include \
   --top asic_top $FLIST; stat\"" 2>&1 | tee "$REPO/build/asic/elab.log" | tail -35
if grep -Fq '$memrd' "$REPO/build/asic/elab.log"; then
  echo "[ASIC-ELAB] elaborasyon tamam - rapor: build/asic/elab.log"
  L=$(grep -F '$dlatch' "$REPO/build/asic/elab.log" | head -1 || true)
  [ -n "$L" ] && echo "[ASIC-ELAB] latch bulundu:$L  (Blokaj 6: cv32e40p_sim_clock_gate)"
  P=$(grep -F '$print' "$REPO/build/asic/elab.log" | head -1 || true)
  [ -n "$P" ] && echo "[ASIC-ELAB] UYARI: sentezde display kalintisi:$P"
  exit 0
else
  echo "[ASIC-ELAB] FAIL: elaborasyon ciktisinda bellek hucresi yok"
  exit 1
fi
