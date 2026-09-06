# wave window for verif/tb/uart_stream_tb.sv (make uart-stream)
onerror {resume}
proc w {args} {
    if {[catch {eval add wave -noupdate $args} err]} { echo "wave: skipped $args" }
}
w -divider "uart_stream_tb"
w -radix hexadecimal /uart_stream_tb/*
w -group "uart_stream_axil (i_dut)" -radix hexadecimal /uart_stream_tb/i_dut/*
catch {TreeUpdate [SetDefaultTree]}
catch {configure wave -namecolwidth 300 -valuecolwidth 120 -signalnamewidth 1 -timelineunits ns}
catch {update}
