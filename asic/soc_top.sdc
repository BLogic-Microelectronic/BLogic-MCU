# ============================================================
# Ostim BLogic Mikroelektronik
# soc_top.sdc - ASIC sentez/STA kisitlari (arac-bagimsiz taslak)
#
# Hedef: soc_top @ 50 MHz (FPGA prototipiyle ayni frekans).
# DDK araci/PDK'si netlesince guncellenecek yerler [PDK] ile isaretli.
# Birimler: ns (time), pF (cap) varsayilir - PDK library birimleriyle
# eslestigi sentez aracinda dogrulanmali.
# ============================================================

# ------------------------------------------------------------
# Ana saat: 50 MHz (20 ns). FPGA'da MMCM uretiyordu; ASIC'te
# saret pad'den gelir (PLL entegrasyonu ust seviye karari).
# ------------------------------------------------------------
create_clock -name clk -period 20.000 [get_ports clk_i]

# Kaynak belirsizligi: jitter + skew butcesi. [PDK] netlesince rafine et.
set_clock_uncertainty -setup 0.500 [get_clocks clk]
set_clock_uncertainty -hold  0.100 [get_clocks clk]
set_clock_transition 0.150 [get_clocks clk]

# Saat agi sentez oncesi ideal kabul edilir; CTS sonrasi propagated.
set_ideal_network [get_ports clk_i]

# ------------------------------------------------------------
# Reset: rst_ni asenkron assert / senkron release; senkronizasyon
# cip ust seviyesinde (pad halkasi / reset denetleyicisi) yapilacak.
# Zamanlama analizinden cikar, recovery/removal ayrica kontrol edilir.
# ------------------------------------------------------------
set_false_path -from [get_ports rst_ni]

# ------------------------------------------------------------
# I/O gecikme butceleri: cekirdek disi arayuzlerin tamami dusuk hizli
# seri/paralel cevre birimleri (UART, I2C, QSPI, GPIO). Kabaca %30
# giris / %30 cikis butcesi verilir; pad hucre gecikmeleri [PDK]
# netlesince guncellenir.
# ------------------------------------------------------------
set ALL_IN  [remove_from_collection [all_inputs]  [get_ports {clk_i rst_ni}]]
set ALL_OUT [all_outputs]

set_input_delay  -clock clk -max 6.000 $ALL_IN
set_input_delay  -clock clk -min 0.500 $ALL_IN
set_output_delay -clock clk -max 6.000 $ALL_OUT
set_output_delay -clock clk -min 0.500 $ALL_OUT

# Cikis yukleri / giris surus gucu: [PDK] pad modelleriyle guncelle.
set_load 5.0 $ALL_OUT
# set_driving_cell -lib_cell [PDK_PAD_CELL] $ALL_IN

# ------------------------------------------------------------
# Tasarim genel kurallari
# ------------------------------------------------------------
set_max_transition 1.000 [current_design]
set_max_fanout 32 [current_design]

# ------------------------------------------------------------
# Notlar (STA sign-off icin):
# * Tasarim TEK saat domenlidir (clk_i); CDC yolu yoktur.
#   FPGA'daki MMCM soc_top disindadir (fpga_top), ASIC'e girmez.
# * QSPI SCLK cikisi clk'den bolunerek uretilir (max clk/2 = 25 MHz),
#   ayri generated clock tanimi gerektirmez; veri yollari ayni domendedir.
# * Multicycle/false path ihtiyaci: yok (tum yollar tek cevrim kurali).
# * Bellekler: axi_sram_wrapper icindeki diziler [PDK] SRAM makrolariyla
#   degistirilecek; makro zamanlamalari lib'ten gelir.
# ============================================================
