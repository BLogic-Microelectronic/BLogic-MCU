# ============================================================
# Ostim BLogic Mikroelektronik
# genesys2.xdc - Digilent Genesys 2 (Kintex-7 XC7K325T-2FFG900C)
# Pin atamalari Digilent Genesys-2-Master.xdc (Rev H) ile birebir
# dogrulanmistir. Ust modul: rtl/fpga_top.sv
# ============================================================

# ------------------------------------------------------------
# Saat: 200 MHz LVDS sistem saati
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN AD12 IOSTANDARD LVDS} [get_ports sysclk_p]
set_property -dict {PACKAGE_PIN AD11 IOSTANDARD LVDS} [get_ports sysclk_n]

create_clock -period 5.000 -name sysclk [get_ports sysclk_p]
# 50 MHz SoC saati MMCM'den turetilir; Vivado otomatik cikarir
# (create_generated_clock gerekmez).

# ------------------------------------------------------------
# Reset butonu (aktif-dusuk, "CPU RESET")
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN R19 IOSTANDARD LVCMOS33} [get_ports cpu_resetn]

# ------------------------------------------------------------
# USB-UART (FT232: host TX -> uart_tx_in, SoC TX -> uart_rx_out)
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN Y20 IOSTANDARD LVCMOS33} [get_ports uart_tx_in]
set_property -dict {PACKAGE_PIN Y23 IOSTANDARD LVCMOS33} [get_ports uart_rx_out]

# ------------------------------------------------------------
# Anahtarlar (sw[5:0] 1.2V bank, sw[7:6] 3.3V bank)
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN G19 IOSTANDARD LVCMOS12} [get_ports {sw[0]}]
set_property -dict {PACKAGE_PIN G25 IOSTANDARD LVCMOS12} [get_ports {sw[1]}]
set_property -dict {PACKAGE_PIN H24 IOSTANDARD LVCMOS12} [get_ports {sw[2]}]
set_property -dict {PACKAGE_PIN K19 IOSTANDARD LVCMOS12} [get_ports {sw[3]}]
set_property -dict {PACKAGE_PIN N19 IOSTANDARD LVCMOS12} [get_ports {sw[4]}]
set_property -dict {PACKAGE_PIN P19 IOSTANDARD LVCMOS12} [get_ports {sw[5]}]
set_property -dict {PACKAGE_PIN P26 IOSTANDARD LVCMOS33} [get_ports {sw[6]}]
set_property -dict {PACKAGE_PIN P27 IOSTANDARD LVCMOS33} [get_ports {sw[7]}]

# ------------------------------------------------------------
# Butonlar (1.2V bank)
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN E18 IOSTANDARD LVCMOS12} [get_ports btnc]
set_property -dict {PACKAGE_PIN M19 IOSTANDARD LVCMOS12} [get_ports btnd]
set_property -dict {PACKAGE_PIN M20 IOSTANDARD LVCMOS12} [get_ports btnl]
set_property -dict {PACKAGE_PIN C19 IOSTANDARD LVCMOS12} [get_ports btnr]
set_property -dict {PACKAGE_PIN B19 IOSTANDARD LVCMOS12} [get_ports btnu]

# ------------------------------------------------------------
# LED'ler
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN T28 IOSTANDARD LVCMOS33} [get_ports {led[0]}]
set_property -dict {PACKAGE_PIN V19 IOSTANDARD LVCMOS33} [get_ports {led[1]}]
set_property -dict {PACKAGE_PIN U30 IOSTANDARD LVCMOS33} [get_ports {led[2]}]
set_property -dict {PACKAGE_PIN U29 IOSTANDARD LVCMOS33} [get_ports {led[3]}]
set_property -dict {PACKAGE_PIN V20 IOSTANDARD LVCMOS33} [get_ports {led[4]}]
set_property -dict {PACKAGE_PIN V26 IOSTANDARD LVCMOS33} [get_ports {led[5]}]
set_property -dict {PACKAGE_PIN W24 IOSTANDARD LVCMOS33} [get_ports {led[6]}]
set_property -dict {PACKAGE_PIN W23 IOSTANDARD LVCMOS33} [get_ports {led[7]}]

# ------------------------------------------------------------
# Pmod JA: UART1 (YZ stream) + I2C
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN U27 IOSTANDARD LVCMOS33} [get_ports {ja[0]}]
set_property -dict {PACKAGE_PIN U28 IOSTANDARD LVCMOS33} [get_ports {ja[1]}]
set_property -dict {PACKAGE_PIN T26 IOSTANDARD LVCMOS33} [get_ports {ja[2]}]
set_property -dict {PACKAGE_PIN T27 IOSTANDARD LVCMOS33} [get_ports {ja[3]}]
set_property -dict {PACKAGE_PIN T22 IOSTANDARD LVCMOS33} [get_ports {ja[4]}]
set_property -dict {PACKAGE_PIN T23 IOSTANDARD LVCMOS33} [get_ports {ja[5]}]
set_property -dict {PACKAGE_PIN T20 IOSTANDARD LVCMOS33} [get_ports {ja[6]}]
set_property -dict {PACKAGE_PIN T21 IOSTANDARD LVCMOS33} [get_ports {ja[7]}]

# UART1 RXD bosta sarkmasin diye pull-up (orijinal build ile ayni)
set_property PULLUP true [get_ports {ja[0]}]
# I2C SCL/SDA: harici pull-up yoksa dahili pull-up devrede
set_property PULLUP true [get_ports {ja[2]}]
set_property PULLUP true [get_ports {ja[3]}]

# ------------------------------------------------------------
# Pmod JB: GPIO ODR[15:8] cikislari
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN V29 IOSTANDARD LVCMOS33} [get_ports {jb[0]}]
set_property -dict {PACKAGE_PIN V30 IOSTANDARD LVCMOS33} [get_ports {jb[1]}]
set_property -dict {PACKAGE_PIN V25 IOSTANDARD LVCMOS33} [get_ports {jb[2]}]
set_property -dict {PACKAGE_PIN W26 IOSTANDARD LVCMOS33} [get_ports {jb[3]}]
set_property -dict {PACKAGE_PIN T25 IOSTANDARD LVCMOS33} [get_ports {jb[4]}]
set_property -dict {PACKAGE_PIN U25 IOSTANDARD LVCMOS33} [get_ports {jb[5]}]
set_property -dict {PACKAGE_PIN U22 IOSTANDARD LVCMOS33} [get_ports {jb[6]}]
set_property -dict {PACKAGE_PIN U23 IOSTANDARD LVCMOS33} [get_ports {jb[7]}]

# ------------------------------------------------------------
# Onboard QSPI flash (S25FL256S)
# SCLK pin degildir: STARTUPE2/USRCCLKO uzerinden CCLK'e gider.
# ------------------------------------------------------------
set_property -dict {PACKAGE_PIN U19 IOSTANDARD LVCMOS33} [get_ports QSPI_CSN]
set_property -dict {PACKAGE_PIN P24 IOSTANDARD LVCMOS33} [get_ports {QSPI_D[0]}]
set_property -dict {PACKAGE_PIN R25 IOSTANDARD LVCMOS33} [get_ports {QSPI_D[1]}]
set_property -dict {PACKAGE_PIN R20 IOSTANDARD LVCMOS33} [get_ports {QSPI_D[2]}]
set_property -dict {PACKAGE_PIN R21 IOSTANDARD LVCMOS33} [get_ports {QSPI_D[3]}]

# x1 modda WP# (D2) ve HOLD# (D3) surulmez; flash kilitlenmesin diye pull-up
set_property PULLUP true [get_ports {QSPI_D[2]}]
set_property PULLUP true [get_ports {QSPI_D[3]}]

# ------------------------------------------------------------
# Zamanlama: dis I/O'lar 50 MHz cekirdege gore asenkron/yavas;
# senkronizasyon RTL icinde (2FF reset sync, UART ornekleme vb.)
# ------------------------------------------------------------
set_false_path -from [get_ports {cpu_resetn uart_tx_in btnc btnd btnl btnr btnu sw[*] ja[*] QSPI_D[*]}]
set_false_path -to   [get_ports {uart_rx_out led[*] jb[*] ja[*] QSPI_CSN QSPI_D[*]}]

# ------------------------------------------------------------
# JTAG debug (riscv-dbg, JTAG_DEBUG - teslim yapilandirmasinda ACIK)
# Pin eklemez: TAP, FPGA'nin kendi JTAG zincirine BSCANE2 (USER3/USER4)
# ile baglidir; kart uzerindeki FT2232H USB-JTAG (kanal B) kullanilir.
# BSCANE2.TCK = FTDI JTAG saati; OpenOCD adapter hizi <= 10 MHz -> 100 ns.
# ------------------------------------------------------------
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

# ------------------------------------------------------------
# Konfigurasyon
# ------------------------------------------------------------
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]
set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
