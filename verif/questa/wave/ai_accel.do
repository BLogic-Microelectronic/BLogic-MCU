# wave window for verif/tb/ai_accel_tb.sv (make ai)
onerror {resume}
proc w {args} {
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
