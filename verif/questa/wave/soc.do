# ============================================
# Ostim BLogic Mikroelektronik
# wave/soc.do - wave window for every soc_top-based testbench
# ============================================
# Expects the Tcl variable DUT = soc_top instance path, e.g.
# /boot_flow_test_tb/dut or /asic_top_boot_tb/dut/i_soc (set by questa_lib.tcl
# from tests.tcl). Every 'add wave' is wrapped in catch, so a testbench that
# lacks one of the signals just skips that line instead of aborting.

onerror {resume}
if {![info exists DUT] || $DUT eq ""} { echo "wave/soc.do: DUT is not set"; return }
proc w {args} {
    # WAVE_GROUPS (questa_lib.tcl, from QUESTA_WAVE_GROUPS): when it is a
    # non-empty list, -group entries outside it are skipped
    global WAVE_GROUPS
    set i [lsearch -exact $args -group]
    if {$i >= 0 && [info exists WAVE_GROUPS] && [llength $WAVE_GROUPS] > 0 &&
        [lsearch -exact $WAVE_GROUPS [lindex $args [expr {$i + 1}]]] < 0} { return }
    if {[catch {eval add wave -noupdate $args} err]} { echo "wave: skipped $args" }
}
set TB [lindex [split $DUT /] 1]

w -divider "Testbench ($TB)"
w -radix hexadecimal /$TB/*

w -divider "Clock / reset"
w $DUT/clk_i $DUT/rst_ni $DUT/sys_rst_n

w -group "UART0"                    $DUT/uart_rxd_i $DUT/uart_txd_o $DUT/i_uart_0/cfg_rx_done
w -group "UART0" -radix hexadecimal $DUT/i_uart_0/uart_rdr

w -group "CPU (CV32E40P)" -radix hexadecimal $DUT/i_cpu/core_i/pc_id
w -group "CPU (CV32E40P)"                    $DUT/i_cpu/core_i/id_valid $DUT/i_cpu/core_i/is_decoding

w -group "Interrupts" -radix hexadecimal $DUT/irq_vector
w -group "Interrupts"                    $DUT/timer_irq $DUT/ai_irq $DUT/strm_irq

w -group "QSPI" $DUT/qspi_sclk_o $DUT/qspi_cs_no $DUT/qspi_io_o $DUT/qspi_io_i $DUT/qspi_io_oe
w -group "QSPI" $DUT/i_qspi/spi_state $DUT/i_qspi/sta_busy $DUT/i_qspi/sta_done

w -group "I2C"  $DUT/i2c_scl_o $DUT/i2c_sda_oe_o $DUT/i2c_sda_i
w -group "GPIO" -radix hexadecimal $DUT/gpio_in_i $DUT/gpio_out_o
w -group "UART1 (stream DMA)" $DUT/uart1_rxd_i $DUT/uart1_txd_o

w -group "AI accelerator"                    $DUT/i_ai_accel/state $DUT/i_ai_accel/csr_start $DUT/i_ai_accel/csr_clear_done
w -group "AI accelerator" -radix hexadecimal $DUT/i_ai_accel/csr_data_addr $DUT/i_ai_accel/csr_out_addr
w -group "AI accelerator ports" -radix hexadecimal -ports $DUT/i_ai_accel/*

w -group "JTAG TAP pins"     $DUT/jtag_tck_i $DUT/jtag_tms_i $DUT/jtag_tdi_i $DUT/jtag_trst_ni $DUT/jtag_tdo_o
w -group "DMI (DTM <-> DM)"  $DUT/dmi_req_valid $DUT/dmi_req_ready $DUT/dmi_resp_valid $DUT/dmi_resp_ready
w -group "Debug module"                    $DUT/dbg_req $DUT/dm_ndmreset $DUT/dm_req $DUT/dm_we
w -group "Debug module" -radix hexadecimal $DUT/dm_addr $DUT/dm_wdata $DUT/dm_rdata
w -group "AXI-DM bridge"                    $DUT/i_axi_dm_slave/busy $DUT/i_axi_dm_slave/resp_pending $DUT/i_axi_dm_slave/req_q $DUT/i_axi_dm_slave/we_q $DUT/i_axi_dm_slave/instr_q
w -group "AXI-DM bridge" -radix hexadecimal $DUT/i_axi_dm_slave/addr_q

w -group "Crossbar ports" -radix hexadecimal -ports $DUT/i_crossbar/*

catch {TreeUpdate [SetDefaultTree]}
catch {configure wave -namecolwidth 320 -valuecolwidth 120 -signalnamewidth 1 -timelineunits ns}
catch {update}
