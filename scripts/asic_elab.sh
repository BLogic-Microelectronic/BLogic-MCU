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
APPIMG=${LIBRELANE_APPIMAGE:-"$HOME/librelane-devshell-x86_64.AppImage"}
# ASIC_SRAM=1 -> SRAM makrolari baglanir (varsayilan: davranissal)
MACRO_DEF=""
[ "${ASIC_SRAM:-0}" = "1" ] && MACRO_DEF="-DASIC_SRAM_MACRO"
FLIST=$(grep -v '^#' asic/soc_files_asic.f | grep -v '^+' | grep -v '^$' | grep -v 'verif/' | tr '\n' ' ')
mkdir -p build/asic

YS_CMD="yosys -m slang -p \"read_slang --keep-hierarchy -DSYNTHESIS $MACRO_DEF \
   -Irtl/core/cv32e40p/rtl/include \
   -Irtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
   -Irtl/bus/axi/include \
   --top asic_top $FLIST; stat\""

# LibreLane iki sekilde kurulmus olabilir - ikisini de destekle:
#   1) AppImage  (LIBRELANE_APPIMAGE ya da ~/librelane-devshell-x86_64.AppImage)
#   2) Nix       (LIBRELANE_SHELL ya da ~/librelane icinde nix-shell)
if [ -x "$APPIMG" ]; then
  echo "[ASIC-ELAB] ortam: AppImage ($APPIMG)"
  "$APPIMG" bash -c "cd '$REPO' && $YS_CMD"
elif [ -d "$LL" ] && command -v nix-shell >/dev/null 2>&1; then
  echo "[ASIC-ELAB] ortam: nix-shell ($LL)"
  cd "$LL" && nix-shell --run "cd '$REPO' && $YS_CMD"
else
  echo "[ASIC-ELAB] HATA: LibreLane bulunamadi."
  echo "  AppImage icin : LIBRELANE_APPIMAGE=/yol/librelane-devshell-x86_64.AppImage"
  echo "  Nix icin      : LIBRELANE_SHELL=/yol/librelane  (icinde nix-shell calisir)"
  exit 2
fi 2>&1 | tee "$REPO/build/asic/elab.log" | tail -35
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
