# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# wave window for verif/tb/ai_accel_tb.sv (make ai)
onerror {resume}
proc w {args} {
    # WAVE_GROUPS (questa_lib.tcl, from QUESTA_WAVE_GROUPS): when it is a
    # non-empty list, -group entries outside it are skipped
    global WAVE_GROUPS
    set i [lsearch -exact $args -group]
    if {$i >= 0 && [info exists WAVE_GROUPS] && [llength $WAVE_GROUPS] > 0 &&
        [lsearch -exact $WAVE_GROUPS [lindex $args [expr {$i + 1}]]] < 0} { return }
    if {[catch {eval add wave -noupdate $args} err]} { echo "wave: skipped $args" }
}
w -divider "ai_accel_tb"
w -radix hexadecimal /ai_accel_tb/*
w -group "ai_accelerator FSM"                    /ai_accel_tb/dut/state /ai_accel_tb/dut/csr_start /ai_accel_tb/dut/csr_clear_done
w -group "ai_accelerator FSM" -radix hexadecimal /ai_accel_tb/dut/csr_data_addr /ai_accel_tb/dut/csr_out_addr
w -group "ai_accelerator ports" -radix hexadecimal -ports /ai_accel_tb/dut/*
catch {TreeUpdate [SetDefaultTree]}
catch {configure wave -namecolwidth 300 -valuecolwidth 120 -signalnamewidth 1 -timelineunits ns}
catch {update}
