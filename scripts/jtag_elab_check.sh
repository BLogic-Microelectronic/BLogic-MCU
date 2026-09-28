#!/bin/bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# jtag_elab_check.sh - JTAG_DEBUG derlemesinin SENTEZ ELABORASYON kontrolu
# ============================================
# TARIHSEL KESIF ARACI (3 Eylul 2026, VM'de PASS - kok README 10.10): JTAG teslim
# yapilandirmasina alinmadan once asic_elab.sh'in JTAG'li karsiligiydi (ayni
# yosys-slang akisi, SYNTHESIS + ASIC_SRAM_MACRO ARTI JTAG_DEBUG/FC1_FIX/
# I2C_SDA_SYNC; ust modul soc_top). 6 Eylul 2026'dan itibaren asic/filelist.f
# JTAG kaynaklarini ve uc tanimi ZATEN tasidigindan bu betik (jtag_files.f'i
# ayrica ekler) kaynaklari iki kez listeler; teslim yapilandirmasinin
# elaborasyon/lint kapilari 'make asic-elab' (asic/filelist.f) ve 'make lint'tir.
# asic/ klasoruna DOKUNMAZ: filelist.f
# yalniz okunur, cikti build/jtag_elab/ altina yazilir. PnR YOK - amac
# riscv-dbg + cdc + tc_clk hucrelerinin ve axi_dm_slave'in sky130 akisinda
# elaborate edildigini gostermek ("sonraki revizyona hazir" kaniti).
# LibreLane ortami gerekir (yerel WSL'de slang.so yok -> VM'de kosulur):
#   LIBRELANE_APPIMAGE=... ya da LIBRELANE_SHELL=... ile asic_elab.sh gibi.
set -e
cd "$(dirname "$0")/.."
REPO=$PWD
LL=${LIBRELANE_SHELL:-"$HOME/librelane"}
APPIMG=${LIBRELANE_APPIMAGE:-"$HOME/librelane-devshell-x86_64.AppImage"}

# ASIC dosya listesi (asic_top.sv haric: ust modul soc_top) + JTAG dosyalari
FLIST=$(grep -v '^#' asic/filelist.f | grep -v '^+' | grep -v '^$' | grep -v 'verif/' \
        | sed 's#^\.\./##' | grep -v 'rtl/asic/asic_top.sv' | tr '\n' ' ')
JLIST=$(grep -v '^#' rtl/debug/jtag_files.f | grep -v '^+' | grep -v '^$' | tr '\n' ' ')
JINC=$(grep '^+incdir+' rtl/debug/jtag_files.f | sed 's#^+incdir+#-I#' | tr '\n' ' ')
mkdir -p build/jtag_elab

# NOT: JTAG incdir'i (common_cells v1.38.0 basliklari) eski incdir'den ONCE
# verilir (rtl/debug/jtag_files.f'teki include-sirasi notu).
YS_CMD="yosys -m slang -p \"read_slang --keep-hierarchy -DSYNTHESIS -DASIC_SRAM_MACRO -DJTAG_DEBUG -DFC1_FIX -DI2C_SDA_SYNC \
   $JINC \
   -Irtl/core/cv32e40p/rtl/include \
   -Irtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include \
   -Irtl/bus/axi/include \
   --top soc_top $JLIST $FLIST rtl/debug/axi_dm_slave.sv; hierarchy -check -top soc_top; stat\""

# Ortam secimi (asic_elab.sh ile ayni uc yol); yoksa erken cikis (kod 2)
if [ -x asic/scripts/run_in_env.sh ] && { command -v librelane >/dev/null 2>&1 || command -v nix >/dev/null 2>&1; }; then
  echo "[JTAG-ELAB] ortam: asic/environment flake (run_in_env.sh)"
  RUN="asic/scripts/run_in_env.sh bash -c"
elif [ -x "$APPIMG" ]; then
  echo "[JTAG-ELAB] ortam: AppImage ($APPIMG)"
  RUN="$APPIMG bash -c"
elif [ -d "$LL" ] && command -v nix-shell >/dev/null 2>&1; then
  echo "[JTAG-ELAB] ortam: nix-shell ($LL)"
  RUN="nix-shell-marker"
else
  echo "[JTAG-ELAB] HATA: LibreLane bulunamadi (yerel WSL'de slang.so yok; VM'de kosun)."
  exit 2
fi
if [ "$RUN" = "nix-shell-marker" ]; then
  (cd "$LL" && nix-shell --run "cd '$REPO' && $YS_CMD") 2>&1 | tee "$REPO/build/jtag_elab/elab.log" | tail -40
else
  $RUN "cd '$REPO' && $YS_CMD" 2>&1 | tee "$REPO/build/jtag_elab/elab.log" | tail -40
fi

if grep -q 'dm_top' "$REPO/build/jtag_elab/elab.log" && ! grep -qiE '^ERROR|error:' "$REPO/build/jtag_elab/elab.log"; then
  echo "[JTAG-ELAB] elaborasyon tamam - rapor: build/jtag_elab/elab.log"
  L=$(grep -F '$dlatch' "$REPO/build/jtag_elab/elab.log" | head -3 || true)
  [ -n "$L" ] && echo "[JTAG-ELAB] latch bulundu:$L (dmi_jtag_tap tc_clk_mux2 / cv32e40p_sim_clock_gate beklenir - inceleyin)"
  exit 0
else
  echo "[JTAG-ELAB] FAIL - build/jtag_elab/elab.log"
  exit 1
fi
