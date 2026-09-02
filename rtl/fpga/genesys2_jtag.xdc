# ============================================================
# Ostim BLogic Mikroelektronik
# genesys2_jtag.xdc - JTAG_DEBUG varyanti ek kisitlari (deneme/jtag dali)
# genesys2.xdc'den SONRA okunur (build_genesys2_jtag.tcl). Pin eklemez:
# TAP, FPGA'nin kendi JTAG zincirine BSCANE2 ile baglidir (USB-JTAG).
# ============================================================

# BSCANE2.TCK = kart uzerindeki FTDI JTAG saati. OpenOCD adapter hizi
# <= 10 MHz kullanilir -> 100 ns periyot.
create_clock -period 100.000 -name jtag_tck -waveform {0.000 50.000} \
    [get_pins -hierarchical -filter {NAME =~ */i_tap_dtmcs/TCK}]
set_input_jitter jtag_tck 1.000

# TAP (tck) <-> sistem (clk_50) gecisleri riscv-dbg dmi_cdc (2-faz el sikisma)
# ile korunur; iki saat asenkron gruptur.
set_clock_groups -asynchronous -group [get_clocks jtag_tck] \
    -group [get_clocks -include_generated_clocks sysclk]

# BSCANE2 TDI/TDO yollari (CVA6 genesys-2 kisit emsali)
set_max_delay -from [get_pins -hierarchical -filter {NAME =~ */i_tap_dtmcs/TDI}] 20.000
set_max_delay -to   [get_pins -hierarchical -filter {NAME =~ */i_tap_dtmcs/TDO}] 20.000
set_max_delay -to   [get_pins -hierarchical -filter {NAME =~ */i_tap_dmi/TDO}]   20.000
