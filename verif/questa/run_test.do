# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_test.do - entry point of the Questa / ModelSim waveform flow
# ============================================
# Inside Questa (any working directory):
#     do <repo>/verif/questa/run_test.do <test>
# or from the launchers verif/questa/wave.bat / wave.sh. Without an argument
# the available tests are listed. See verif/questa/README.md.

# Locate this directory. Questa 10.7c's 'do' command does NOT update
# 'info script' (it still reports the last 'source'd file, e.g. the
# installation's pref.tcl - measured 6 Sep 2026), so the result is only
# trusted if questa_lib.tcl is really next to it; otherwise fall back to
# <cwd>/verif/questa (the launchers cd to the repository root) and, last,
# to the QUESTA_DIR environment variable.
set QDIR_ ""
catch { set QDIR_ [file normalize [file dirname [info script]]] }
if {$QDIR_ eq "" || ![file exists [file join $QDIR_ questa_lib.tcl]]} {
    set QDIR_ [file normalize [file join [pwd] verif questa]]
}
if {![file exists [file join $QDIR_ questa_lib.tcl]] && [info exists ::env(QUESTA_DIR)]} {
    set QDIR_ [file normalize $::env(QUESTA_DIR)]
}
if {![file exists [file join $QDIR_ questa_lib.tcl]]} {
    error "run_test.do: verif/questa not found - cd to the repository root (or set QUESTA_DIR) and retry"
}
source [file join $QDIR_ questa_lib.tcl]
source [file join $QDIR_ tests.tcl]

if {![info exists argc] || $argc < 1} {
    q_list
} else {
    q_run $1
}
