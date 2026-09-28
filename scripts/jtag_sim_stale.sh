#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# jtag_sim_stale.sh  -  OpenOCD/gdb demo sim ikilisi bayat mi? (source edilir)
# ============================================
# run_jtag_openocd.sh ve run_jtag_gdb.sh yalniz ikili YOKSA derliyordu. 6 Eylul
# 2026: 2 Eylul tarihli bayat obj_dir_jtag_ocd/jtag_openocd_sim (TB'nin 58
# karakterlik eski UART cozucusu + eski DM/kopru RTL'i) ile kosuldu; "reset run"
# sonrasi ucuncu selamlama loga hic dusmedi -> run=0 FAIL (juri panelinden ve
# elle, iki kez). Kaynaklar guncel, ikili eskiydi. Artik asagidaki kaynaklardan
# biri ikiliden YENIYSE de yeniden derlenir (make jtag-openocd-build).
#
# Kullanim (depo kokunde):
#   . scripts/jtag_sim_stale.sh
#   if jtag_sim_stale obj_dir_jtag_ocd/jtag_openocd_sim; then make jtag-openocd-build; fi
# jtag_sim_stale <ikili>: donus 0 = yok ya da bayat (derle), 1 = guncel.
# Neden JTAG_SIM_STALE_WHY degiskenine yazilir.
# Kapsam: soc_files.f, Makefile.verilator, rtl/ agaci (SimJTAG, jtag_dpi.cpp
# dahil; sentez raporlari rtl/debug/asic_jtag_sentez ve kosum ciktilari
# rtl/debug/sim HARIC), TB, firmware kaynagi (uart_hello.c, crt0, link.ld,
# suruculer), bootrom.hex.

jtag_sim_stale() {
    local bin="$1" newer
    JTAG_SIM_STALE_WHY=""
    if [ ! -x "$bin" ]; then
        JTAG_SIM_STALE_WHY="$bin yok"
        return 0
    fi
    newer=$(find soc_files.f Makefile.verilator rtl verif/tb/jtag_openocd_tb.sv \
                 sw/tests/uart_hello.c sw/common sw/drivers sw/bootloader \
                 \( -path rtl/debug/asic_jtag_sentez -o -path rtl/debug/sim \) -prune -o \
                 -type f \( -name '*.sv' -o -name '*.svh' -o -name '*.v' -o -name '*.vh' \
                            -o -name '*.f' -o -name '*.cpp' -o -name '*.c' -o -name '*.h' \
                            -o -name '*.S' -o -name '*.ld' -o -name '*.hex' \
                            -o -name 'Makefile.verilator' \) \
                 -newer "$bin" -print 2>/dev/null | head -1)
    if [ -n "$newer" ]; then
        JTAG_SIM_STALE_WHY="$newer, ikiliden ($(date -r "$bin" '+%Y-%m-%d %H:%M')) yeni"
        return 0
    fi
    return 1
}
