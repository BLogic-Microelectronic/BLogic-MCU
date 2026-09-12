onerror {quit -code 1}
vsim -c -t 1ps -gVERBOSE=0 -gTCLK=14.0 -sdftyp /asic_top_gls_tb/dut=../asic_top_tt.sdf -sdfnoerror work.asic_top_gls_tb
run 1ms
echo "NEG_KONTROL_BITTI"
quit -f
