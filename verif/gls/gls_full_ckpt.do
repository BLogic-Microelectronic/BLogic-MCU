onerror {quit -code 1}
vsim -c -t 1ps -gVERBOSE=0 -sdftyp /asic_top_gls_tb/dut=asic_top_tt.sdf -sdfnoerror work.asic_top_gls_tb
set t0 [clock seconds]
for {set i 1} {$i <= 12} {incr i} {
    run 15ms
    checkpoint gls_ckpt.chk
    echo "ARA_KAYIT: [expr {$i*15}] ms benzetim, [expr {[clock seconds]-$t0}] s duvar saati"
}
echo "GLS_BITTI: [expr {[clock seconds]-$t0}] s"
quit -f
