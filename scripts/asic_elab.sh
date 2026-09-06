#!/bin/bash
# ============================================
# Ostim BLogic Mikroelektronik
# asic_elab.sh - ASIC elaborasyon kapisi (yosys-slang)
# ============================================
# sv2v KULLANILMIYOR: modul hiyerarsisini soc_top'a inline ediyor, SRAM makrolari
# floorplan'da ayri instance olarak gorunmuyordu. yosys-slang hiyerarsiyi korur.
# LibreLane 3.0.6 ortami gerekir (slang.so hazir gelir).
set -e
cd "$(dirname "$0")/.."
REPO=$PWD
# nix etkilesimsiz kabukta PATH'te olmayabilir (juri paneli ve 'make' -> bash -c
# ~/.profile okumaz); standart kurulum dizinlerini ekle. 6 Eylul 2026: asic-elab
# panelden ve betikten "LibreLane bulunamadi" ile FAIL vermisti, ortam yerindeydi.
for _d in /nix/var/nix/profiles/default/bin "$HOME/.nix-profile/bin"; do
  if [ -d "$_d" ]; then case ":$PATH:" in *":$_d:"*) ;; *) PATH="$_d:$PATH" ;; esac; fi
done
export PATH
LL=${LIBRELANE_SHELL:-"$HOME/librelane"}
APPIMG=${LIBRELANE_APPIMAGE:-"$HOME/librelane-devshell-x86_64.AppImage"}
# ASIC_SRAM=1 -> SRAM makrolari baglanir (varsayilan: davranissal)
MACRO_DEF=""
[ "${ASIC_SRAM:-0}" = "1" ] && MACRO_DEF="-DASIC_SRAM_MACRO"
# tr -d '\r': Windows'ta duzenlenmis (CRLF) filelist.f'te her yol \r ile bitiyor,
# read_slang dosyalari bulamayip 'no input files' diyordu (6 Eylul 2026).
FLIST=$(tr -d '\r' < asic/filelist.f | grep -v '^#' | grep -v '^+' | grep -v '^$' | grep -v 'verif/' | sed 's#^\.\./##' | tr '\n' ' ')
mkdir -p build/asic

# Tanimlar ve include sirasi asic/config.yaml ile BIREBIR (teslim yapilandirmasi:
# JTAG_DEBUG + FC1_FIX + I2C_SDA_SYNC; v1.38.0 common_cells basliklari cv32e40p
# altindaki eski kopyadan ONCE - ASSUME makrosu 5 arguman, aksi halde
# cdc_2phase_clearable.sv:260 "too many arguments provided to function-like macro").
# ASIC_SRAM_MACRO yalniz ASIC_SRAM=1 ile (varsayilan davranissal SRAM -> $memrd kontrolu).
YS_CMD="yosys -m slang -p \"read_slang --keep-hierarchy -DSYNTHESIS -DBOOTROM_CONTENT \
   -DJTAG_DEBUG -DFC1_FIX -DI2C_SDA_SYNC $MACRO_DEF \
   -Irtl/debug/vendor/common_cells_v1.38.0/include \
   -Irtl/asic \
   -Irtl/core/cv32e40p/rtl/include \
   -Irtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
   -Irtl/bus/axi/include \
   --top asic_top $FLIST; stat\""

# LibreLane iki sekilde kurulmus olabilir - ikisini de destekle:
#   1) AppImage  (LIBRELANE_APPIMAGE ya da ~/librelane-devshell-x86_64.AppImage)
#   2) Nix       (LIBRELANE_SHELL ya da ~/librelane icinde nix-shell)
if [ -x asic/scripts/run_in_env.sh ] && { command -v librelane >/dev/null 2>&1 || command -v nix >/dev/null 2>&1; }; then
  echo "[ASIC-ELAB] ortam: asic/environment flake (run_in_env.sh)"
  asic/scripts/run_in_env.sh bash -c "cd '$REPO' && $YS_CMD"
elif [ -x "$APPIMG" ]; then
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
