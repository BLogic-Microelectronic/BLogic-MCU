# wave window for verif/tb/axi_dm_slave_tb.sv (make jtag-bridge-sim)
onerror {resume}
proc w {args} {
    if {[catch {eval add wave -noupdate $args} err]} { echo "wave: skipped $args" }
}
w -divider "axi_dm_slave_tb"
w -radix hexadecimal /axi_dm_slave_tb/*
w -group "axi_dm_slave (dut)" -radix hexadecimal /axi_dm_slave_tb/dut/*
w -group "dm_top ports" -radix hexadecimal -ports /axi_dm_slave_tb/i_dm_top/*
catch {TreeUpdate [SetDefaultTree]}
catch {configure wave -namecolwidth 300 -valuecolwidth 120 -signalnamewidth 1 -timelineunits ns}
catch {update}
