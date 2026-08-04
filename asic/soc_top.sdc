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
# SRAM MAKRO KOSE DERATE'I  (Karar: A + derate, 3 Agustos 2026)
# ------------------------------------------------------------
# Sorun: sky130_sram_2kbyte_1rw1r_32x512_8 ve sky130_sram_1kbyte_1rw1r_32x256_8
# PDK'da YALNIZCA TT_1p8V_25C lib'i ile geliyor. LibreLane STA'yi 9 kosede kosuyor.
# SS ve FF kosolerinde STA, makro icin TT modelini kullanir -> yanlis (iyimser) sayi.
#
# Bu bir "waiver" degil, olcum hatasi. Cozum: makro hucrelerine kotumser derate.
#
# Katsayinin dayanagi (tahmin degil, olculdu):
#   sky130_fd_sc_hd__dfxtp_1  clk->Q ortanca gecikme
#     TT (tt_025C_1v80) : 0.4376 ns
#     SS (ss_100C_1v60) : 1.1642 ns
#     oran              : 2.661
# Standart hucre kutuphanesinin ayni kose ciftindeki oranini SRAM icin vekil
# olarak kullaniyoruz. SRAM erisim suresinin gerilim/sicaklik hassasiyeti mantik
# kapisiyla birebir ayni degildir; bu yuzden secim BILEREK kotumser.
#
# Karar kurali:
#   * Bu derate ile timing kapaniyorsa -> A secenegi guvenli, 23 makro kalir.
#   * Sadece bu derate yuzunden kapanmiyorsa -> C secenegine gec:
#     ISRAM/DSRAM'i 7 koseli sram_1rw1r_32_256_8_sky130 ile kur (+0.41 mm2),
#     AI SRAM tek kosede kalir (hizlandirici erisimi, CPU kritik yolunda degil).
#
# DTR notu: "OpenRAM makrolari tek kose (TT_1p8V_25C) ile dagitilmaktadir.
# SS/FF analizi, standart hucre kutuphanesinden olculen 2.661x kose oraniyla
# kotumser derate edilerek yapilmistir."

set _sram_cells [get_cells -hierarchical -filter "ref_name =~ sky130_sram_*"]
if {[llength $_sram_cells] > 0} {
    # gec (setup) yolu: kotumser yavaslat
    set_timing_derate -cell_delay -late  2.661 $_sram_cells
    # erken (hold) yolu: kotumser hizlandir
    set_timing_derate -cell_delay -early 0.500 $_sram_cells
    puts "\[SDC\] SRAM makro derate uygulandi: [llength $_sram_cells] hucre (late 2.661 / early 0.500)"
} else {
    puts "\[SDC\] UYARI: SRAM makro hucresi bulunamadi - derate uygulanmadi."
    puts "\[SDC\]        Davranissal bellek modundaysa normal (ASIC_SRAM_MACRO tanimsiz)."
}

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
