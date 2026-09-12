onerror {quit -code 1}
vsim -c -t 1ps -gVERBOSE=0 -sdftyp /asic_top_gls_tb/dut=asic_top_tt.sdf -sdfnoerror work.asic_top_gls_tb
set t0 [clock seconds]
run 1ms
set t1 [clock seconds]
echo "HIZ_OLCUMU: 1 ms benzetim = [expr {$t1 - $t0}] s duvar saati ([expr {1000000/37}] cevrim)"
quit -f
