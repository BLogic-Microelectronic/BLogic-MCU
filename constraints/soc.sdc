# ============================================
# Ostim BLogic Mikroelektronik
# soc.sdc  -  arac-bagimsiz zamanlama kisitlari (50 MHz)
# ============================================

# Ana saat: 50 MHz, pad'den
create_clock -name clk_main -period 20.000 [get_ports clk_i]

# Sentez oncesi guvenlik paylari (PnR'da rafine edilir)
set_clock_uncertainty 0.500 [get_clocks clk_main]
set_clock_transition  0.150 [get_clocks clk_main]

# Asenkron reset: deassert senkronizasyonu pad-ring/reset-sync ile saglanir
set_false_path -from [get_ports rst_ni]

# G/C gecikmeleri: periyodun %20'si (harici cihazlar yavas: UART/I2C/QSPI/GPIO)
set_input_delay  -clock clk_main 4.000 [remove_from_collection [all_inputs] [get_ports {clk_i rst_ni}]]
set_output_delay -clock clk_main 4.000 [all_outputs]

# QSPI SCLK: clk_main'den bolunmus REGISTERED cikis (ic saat agaci yok);
# flash zamanlamasi SCLK-goreli oldugundan sistem saatine gore kisitlanmaz
set_false_path -to [get_ports qspi_sclk_o]

# Cok-bitli statik konfigurasyona giden yollar yok; multicycle tanimlanmadi.
