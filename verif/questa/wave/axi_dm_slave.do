# wave window for verif/tb/axi_dm_slave_tb.sv (make jtag-bridge-sim)
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
w -divider "axi_dm_slave_tb"
w -radix hexadecimal /axi_dm_slave_tb/*
w -group "axi_dm_slave (dut)" -radix hexadecimal /axi_dm_slave_tb/dut/*
w -group "dm_top ports" -radix hexadecimal -ports /axi_dm_slave_tb/i_dm_top/*
catch {TreeUpdate [SetDefaultTree]}
catch {configure wave -namecolwidth 300 -valuecolwidth 120 -signalnamewidth 1 -timelineunits ns}
catch {update}
