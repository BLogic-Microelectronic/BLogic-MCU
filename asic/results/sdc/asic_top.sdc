###############################################################################
# Created by write_sdc
###############################################################################
current_design asic_top
###############################################################################
# Timing Constraints
###############################################################################
create_clock -name clk -period 20.0000 [get_ports {clk_i}]
set_clock_transition 0.1500 [get_clocks {clk}]
set_clock_uncertainty -setup 0.5000 clk
set_clock_uncertainty -hold 0.1000 clk
set_propagated_clock [get_clocks {clk}]
create_clock -name jtag_tck -period 100.0000 [get_ports {jtag_tck_i}]
set_clock_transition 0.1500 [get_clocks {jtag_tck}]
set_clock_uncertainty -setup 0.5000 jtag_tck
set_clock_uncertainty -hold 0.1000 jtag_tck
set_propagated_clock [get_clocks {jtag_tck}]
set_clock_groups -name group1 -asynchronous \
 -group [get_clocks {clk}]\
 -group [get_clocks {jtag_tck}]
set_input_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {i2c_sda_i}]
set_input_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {i2c_sda_i}]
set_input_delay 2.0000 -clock [get_clocks {jtag_tck}] -min -add_delay [get_ports {jtag_tdi_i}]
set_input_delay 20.0000 -clock [get_clocks {jtag_tck}] -max -add_delay [get_ports {jtag_tdi_i}]
set_input_delay 2.0000 -clock [get_clocks {jtag_tck}] -min -add_delay [get_ports {jtag_tms_i}]
set_input_delay 20.0000 -clock [get_clocks {jtag_tck}] -max -add_delay [get_ports {jtag_tms_i}]
set_input_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_i[0]}]
set_input_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_i[0]}]
set_input_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_i[1]}]
set_input_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_i[1]}]
set_input_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_i[2]}]
set_input_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_i[2]}]
set_input_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_i[3]}]
set_input_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_i[3]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[0]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[0]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[10]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[10]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[11]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[11]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[12]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[12]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[13]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[13]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[14]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[14]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[15]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[15]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[16]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[16]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[17]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[17]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[18]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[18]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[19]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[19]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[1]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[1]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[20]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[20]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[21]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[21]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[22]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[22]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[23]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[23]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[24]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[24]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[25]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[25]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[26]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[26]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[27]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[27]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[28]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[28]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[29]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[29]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[2]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[2]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[30]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[30]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[31]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[31]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[3]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[3]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[4]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[4]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[5]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[5]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[6]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[6]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[7]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[7]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[8]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[8]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {gpio_out_o[9]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {gpio_out_o[9]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {i2c_scl_o}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {i2c_scl_o}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {i2c_sda_oe_o}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {i2c_sda_oe_o}]
set_output_delay 2.0000 -clock [get_clocks {jtag_tck}] -min -add_delay [get_ports {jtag_tdo_o}]
set_output_delay 20.0000 -clock [get_clocks {jtag_tck}] -max -add_delay [get_ports {jtag_tdo_o}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_cs_no}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_cs_no}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_o[0]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_o[0]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_o[1]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_o[1]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_o[2]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_o[2]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_o[3]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_o[3]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_oe[0]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_oe[0]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_oe[1]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_oe[1]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_oe[2]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_oe[2]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_io_oe[3]}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_io_oe[3]}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {qspi_sclk_o}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {qspi_sclk_o}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {uart1_txd_o}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {uart1_txd_o}]
set_output_delay 0.5000 -clock [get_clocks {clk}] -min -add_delay [get_ports {uart_txd_o}]
set_output_delay 6.0000 -clock [get_clocks {clk}] -max -add_delay [get_ports {uart_txd_o}]
set_false_path\
    -from [list [get_ports {gpio_in_i[0]}]\
           [get_ports {gpio_in_i[10]}]\
           [get_ports {gpio_in_i[11]}]\
           [get_ports {gpio_in_i[12]}]\
           [get_ports {gpio_in_i[13]}]\
           [get_ports {gpio_in_i[14]}]\
           [get_ports {gpio_in_i[15]}]\
           [get_ports {gpio_in_i[16]}]\
           [get_ports {gpio_in_i[17]}]\
           [get_ports {gpio_in_i[18]}]\
           [get_ports {gpio_in_i[19]}]\
           [get_ports {gpio_in_i[1]}]\
           [get_ports {gpio_in_i[20]}]\
           [get_ports {gpio_in_i[21]}]\
           [get_ports {gpio_in_i[22]}]\
           [get_ports {gpio_in_i[23]}]\
           [get_ports {gpio_in_i[24]}]\
           [get_ports {gpio_in_i[25]}]\
           [get_ports {gpio_in_i[26]}]\
           [get_ports {gpio_in_i[27]}]\
           [get_ports {gpio_in_i[28]}]\
           [get_ports {gpio_in_i[29]}]\
           [get_ports {gpio_in_i[2]}]\
           [get_ports {gpio_in_i[30]}]\
           [get_ports {gpio_in_i[31]}]\
           [get_ports {gpio_in_i[3]}]\
           [get_ports {gpio_in_i[4]}]\
           [get_ports {gpio_in_i[5]}]\
           [get_ports {gpio_in_i[6]}]\
           [get_ports {gpio_in_i[7]}]\
           [get_ports {gpio_in_i[8]}]\
           [get_ports {gpio_in_i[9]}]\
           [get_ports {jtag_trst_ni}]\
           [get_ports {rst_ni}]\
           [get_ports {uart1_rxd_i}]\
           [get_ports {uart_rxd_i}]]
###############################################################################
# Environment
###############################################################################
set_load -pin_load 5.0000 [get_ports {i2c_scl_o}]
set_load -pin_load 5.0000 [get_ports {i2c_sda_oe_o}]
set_load -pin_load 5.0000 [get_ports {jtag_tdo_o}]
set_load -pin_load 5.0000 [get_ports {qspi_cs_no}]
set_load -pin_load 5.0000 [get_ports {qspi_sclk_o}]
set_load -pin_load 5.0000 [get_ports {uart1_txd_o}]
set_load -pin_load 5.0000 [get_ports {uart_txd_o}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[31]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[30]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[29]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[28]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[27]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[26]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[25]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[24]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[23]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[22]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[21]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[20]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[19]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[18]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[17]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[16]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[15]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[14]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[13]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[12]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[11]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[10]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[9]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[8]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[7]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[6]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[5]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[4]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[3]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[2]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[1]}]
set_load -pin_load 5.0000 [get_ports {gpio_out_o[0]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_o[3]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_o[2]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_o[1]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_o[0]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_oe[3]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_oe[2]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_oe[1]}]
set_load -pin_load 5.0000 [get_ports {qspi_io_oe[0]}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_accel.u_conv_out.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_accel.u_conv_out.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_accel.u_conv_out.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_accel.u_conv_out.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_accel.u_conv_w_mem}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_accel.u_conv_w_mem}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_accel.u_input_mem}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_accel.u_input_mem}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[10].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[10].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[11].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[11].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[12].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[12].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[13].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[13].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[14].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[14].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[3].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[3].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[4].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[4].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[5].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[5].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[6].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[6].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[7].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[7].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[8].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[8].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[9].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_ai_sram.u_sram.gen_bank[9].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[3].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_data_sram.u_sram.gen_bank[3].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[0].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[1].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[2].gen_512.u_macro}]
set_timing_derate -cell_delay -early 0.5000 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[3].gen_512.u_macro}]
set_timing_derate -cell_delay -late 2.6610 [get_cells {i_soc.i_instr_sram.u_sram.gen_bank[3].gen_512.u_macro}]
###############################################################################
# Design Rules
###############################################################################
set_max_transition 1.0000 [current_design]
set_max_fanout 32.0000 [current_design]
