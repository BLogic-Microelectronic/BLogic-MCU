# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# gls_run.do  -  SDF'li kapi seviyesi benzetim kosusu (Questa)
# ============================================
# Degiskenler (vsim -do "set TCLK 37.0; set RUNTIME -all; do gls_run.do"):
#   TCLK    saat periyodu, ns (varsayilan 37.0 = dogrulanmis 27,0 MHz)
#   RUNTIME "run" argumani (varsayilan -all: TB $finish'e kadar)
# -gVERBOSE=0 OpenRAM modellerinin her erisimi basmasini kapatir.
# -sdfnoerror: zamanlama modeli olmayan SRAM makrolarinin SDF girdileri hata
# degil uyari olur (sayim: sdf_msg_census.py); standart hucrelerin tamami annote edilir.
onerror {quit -code 1}
if {![info exists TCLK]}    { set TCLK 37.0 }
if {![info exists RUNTIME]} { set RUNTIME -all }
vsim -c -t 1ps -gVERBOSE=0 -gTCLK=$TCLK -sdftyp /asic_top_gls_tb/dut=asic_top_tt.sdf -sdfnoerror work.asic_top_gls_tb
set t0 [clock seconds]
run $RUNTIME
set t1 [clock seconds]
echo "GLS_BITTI: TCLK=$TCLK ns, duvar saati [expr {$t1 - $t0}] s"
quit -f
