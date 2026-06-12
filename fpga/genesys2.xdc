# ============================================================
# BLogic MCU — Genesys 2 (XC7K325T-2FFG900C) Constraint Dosyası
# TEKNOFEST 2026 Çip Tasarım Yarışması
# ------------------------------------------------------------
# Pin atamaları Digilent Genesys-2-Master.xdc (Rev. H) ile birebir.
# Üst modül: fpga_top (rtl/fpga_top.sv)
# ============================================================

# ------------------------------------------------------------
# 1. SİSTEM SAATİ — 200 MHz LVDS
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN AD12  IOSTANDARD LVDS } [get_ports { sysclk_p }]
set_property -dict { PACKAGE_PIN AD11  IOSTANDARD LVDS } [get_ports { sysclk_n }]
create_clock -name sysclk -period 5.000 [get_ports sysclk_p]
# (50 MHz çekirdek saati MMCM'den türetilir; Vivado otomatik propagasyon)

# ------------------------------------------------------------
# 2. RESET BUTONU (aktif-düşük)
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN R19   IOSTANDARD LVCMOS33 } [get_ports { cpu_resetn }]
set_false_path -from [get_ports cpu_resetn]

# ------------------------------------------------------------
# 3. USB-UART (FT232) — UART0 genel kullanım
#    uart_tx_in : host TX → FPGA (SoC RXD)
#    uart_rx_out: FPGA → host RX (SoC TXD)
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN Y20   IOSTANDARD LVCMOS33 } [get_ports { uart_tx_in }]
set_property -dict { PACKAGE_PIN Y23   IOSTANDARD LVCMOS33 } [get_ports { uart_rx_out }]
set_false_path -from [get_ports uart_tx_in]
set_false_path -to   [get_ports uart_rx_out]

# ------------------------------------------------------------
# 4. LED'LER — GPIO OUT [7:0]
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN T28   IOSTANDARD LVCMOS33 } [get_ports { led[0] }]
set_property -dict { PACKAGE_PIN V19   IOSTANDARD LVCMOS33 } [get_ports { led[1] }]
set_property -dict { PACKAGE_PIN U30   IOSTANDARD LVCMOS33 } [get_ports { led[2] }]
set_property -dict { PACKAGE_PIN U29   IOSTANDARD LVCMOS33 } [get_ports { led[3] }]
set_property -dict { PACKAGE_PIN V20   IOSTANDARD LVCMOS33 } [get_ports { led[4] }]
set_property -dict { PACKAGE_PIN V26   IOSTANDARD LVCMOS33 } [get_ports { led[5] }]
set_property -dict { PACKAGE_PIN W24   IOSTANDARD LVCMOS33 } [get_ports { led[6] }]
set_property -dict { PACKAGE_PIN W23   IOSTANDARD LVCMOS33 } [get_ports { led[7] }]
set_false_path -to [get_ports {led[*]}]

# ------------------------------------------------------------
# 5. SLIDE SWITCH'LER — GPIO IN [7:0]
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN G19   IOSTANDARD LVCMOS12 } [get_ports { sw[0] }]
set_property -dict { PACKAGE_PIN G25   IOSTANDARD LVCMOS12 } [get_ports { sw[1] }]
set_property -dict { PACKAGE_PIN H24   IOSTANDARD LVCMOS12 } [get_ports { sw[2] }]
set_property -dict { PACKAGE_PIN K19   IOSTANDARD LVCMOS12 } [get_ports { sw[3] }]
set_property -dict { PACKAGE_PIN N19   IOSTANDARD LVCMOS12 } [get_ports { sw[4] }]
set_property -dict { PACKAGE_PIN P19   IOSTANDARD LVCMOS12 } [get_ports { sw[5] }]
set_property -dict { PACKAGE_PIN P26   IOSTANDARD LVCMOS33 } [get_ports { sw[6] }]
set_property -dict { PACKAGE_PIN P27   IOSTANDARD LVCMOS33 } [get_ports { sw[7] }]
set_false_path -from [get_ports {sw[*]}]

# ------------------------------------------------------------
# 6. BUTONLAR — GPIO IN [12:8] = {btnu,btnr,btnl,btnd,btnc}
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN E18   IOSTANDARD LVCMOS12 } [get_ports { btnc }]
set_property -dict { PACKAGE_PIN M19   IOSTANDARD LVCMOS12 } [get_ports { btnd }]
set_property -dict { PACKAGE_PIN M20   IOSTANDARD LVCMOS12 } [get_ports { btnl }]
set_property -dict { PACKAGE_PIN C19   IOSTANDARD LVCMOS12 } [get_ports { btnr }]
set_property -dict { PACKAGE_PIN B19   IOSTANDARD LVCMOS12 } [get_ports { btnu }]
set_false_path -from [get_ports {btnc btnd btnl btnr btnu}]

# ------------------------------------------------------------
# 7. PMOD JB — GPIO OUT [15:8]
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN V29   IOSTANDARD LVCMOS33 } [get_ports { jb[0] }]
set_property -dict { PACKAGE_PIN V30   IOSTANDARD LVCMOS33 } [get_ports { jb[1] }]
set_property -dict { PACKAGE_PIN V25   IOSTANDARD LVCMOS33 } [get_ports { jb[2] }]
set_property -dict { PACKAGE_PIN W26   IOSTANDARD LVCMOS33 } [get_ports { jb[3] }]
set_property -dict { PACKAGE_PIN T25   IOSTANDARD LVCMOS33 } [get_ports { jb[4] }]
set_property -dict { PACKAGE_PIN U25   IOSTANDARD LVCMOS33 } [get_ports { jb[5] }]
set_property -dict { PACKAGE_PIN U22   IOSTANDARD LVCMOS33 } [get_ports { jb[6] }]
set_property -dict { PACKAGE_PIN U23   IOSTANDARD LVCMOS33 } [get_ports { jb[7] }]
set_false_path -to [get_ports {jb[*]}]

# ------------------------------------------------------------
# 8. PMOD JA — UART1 (YZ stream) + I2C
#    ja[0]=UART1 RXD  ja[1]=UART1 TXD  ja[2]=I2C SCL  ja[3]=I2C SDA
#    ja[7:4] boşta (Hi-Z)
#    UART1 RXD ve I2C SDA hatlarına dahili pull-up: hat boştayken '1'.
#    NOT: I2C için harici pull-up (2.2k–4.7k, 3.3V) önerilir; dahili
#    pull-up (~10k+) yalnızca kısa hat/düşük hızda yeterli olabilir.
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN U27   IOSTANDARD LVCMOS33  PULLUP TRUE } [get_ports { ja[0] }]
set_property -dict { PACKAGE_PIN U28   IOSTANDARD LVCMOS33 } [get_ports { ja[1] }]
set_property -dict { PACKAGE_PIN T26   IOSTANDARD LVCMOS33 } [get_ports { ja[2] }]
set_property -dict { PACKAGE_PIN T27   IOSTANDARD LVCMOS33  PULLUP TRUE } [get_ports { ja[3] }]
set_property -dict { PACKAGE_PIN T22   IOSTANDARD LVCMOS33 } [get_ports { ja[4] }]
set_property -dict { PACKAGE_PIN T23   IOSTANDARD LVCMOS33 } [get_ports { ja[5] }]
set_property -dict { PACKAGE_PIN T20   IOSTANDARD LVCMOS33 } [get_ports { ja[6] }]
set_property -dict { PACKAGE_PIN T21   IOSTANDARD LVCMOS33 } [get_ports { ja[7] }]
set_false_path -from [get_ports {ja[*]}]
set_false_path -to   [get_ports {ja[*]}]

# ------------------------------------------------------------
# 9. QSPI FLASH (onboard S25FL256S)
#    SCLK pini yok: CCLK config pini, STARTUPE2.USRCCLKO ile sürülür.
# ------------------------------------------------------------
set_property -dict { PACKAGE_PIN U19   IOSTANDARD LVCMOS33 } [get_ports { QSPI_CSN }]
set_property -dict { PACKAGE_PIN P24   IOSTANDARD LVCMOS33 } [get_ports { QSPI_D[0] }]
set_property -dict { PACKAGE_PIN R25   IOSTANDARD LVCMOS33 } [get_ports { QSPI_D[1] }]
set_property -dict { PACKAGE_PIN R20   IOSTANDARD LVCMOS33 } [get_ports { QSPI_D[2] }]
set_property -dict { PACKAGE_PIN R21   IOSTANDARD LVCMOS33 } [get_ports { QSPI_D[3] }]
# SPI saat hızı prescaler ile sistem saatinin çok altında (≤ 25 MHz)
# tutulduğundan IO zamanlaması false_path ile yönetilir.
set_false_path -from [get_ports {QSPI_D[*]}]
set_false_path -to   [get_ports {QSPI_D[*] QSPI_CSN}]

# ------------------------------------------------------------
# 10. KONFİGÜRASYON
# ------------------------------------------------------------
set_property CFGBVS GND [current_design]
set_property CONFIG_VOLTAGE 1.8 [current_design]
# Bitstream sıkıştırma (programlama süresini kısaltır)
set_property BITSTREAM.GENERAL.COMPRESS TRUE [current_design]
