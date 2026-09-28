# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================================
# Ostim BLogic Mikroelektronik
# asic/constraints/design.sdc - ASIC zamanlama kisitlari
# DDK "Final Istenen Ciktilar" Bolum 3.2 zorunlu SDC dosyasi.
#
# Ust modul : asic_top  (soc_top.sdc'den tasindi; sarmalayici katman
#             port adlarini korur, kisit hedefleri birebir gecerli)
# Hedef     : 50 MHz (20 ns) - config.yaml CLOCK_PERIOD ile AYNI olmak
#             zorunda (README 9.13 tutarlilik kurali). SD2 karari
#             frekansi degistirirse UC YERDE birden guncellenir:
#             config.yaml + bu dosya + README 9.1.
# Kullanim  : PNR_SDC_FILE = bu dosya (PnR 20 ns HEDEFTE tam eforla calisir).
#             SIGNOFF_SDC_FILE = design_signoff.sdc (birebir kopya, tek fark
#             create_clock periyodu 37.000 ns = 27.0 MHz DOGRULANMIS frekans).
#             Iki SDC teslim edilir (Bolum 6.2); gerekce README 9.1 / 9.6 / 9.9/12.
# Birimler  : sky130_fd_sc_hd Liberty birimleri - ns / pF.
# ============================================================

# ------------------------------------------------------------
# Birincil saat (Bolum 3.2 ZORUNLU: tanim + periyot)
# 50 MHz. FPGA'da MMCM uretiyordu; ASIC'te pad'den gelir
# (PLL entegrasyonu ust seviye karari, tasarim kapsami disi).
# ------------------------------------------------------------
create_clock -name clk -period 20.000 [get_ports clk_i]

# Kaynak belirsizligi: jitter + skew butcesi (Bolum 3.2 onerilen).
set_clock_uncertainty -setup 0.500 [get_clocks clk]
set_clock_uncertainty -hold  0.100 [get_clocks clk]
set_clock_transition 0.150 [get_clocks clk]

# Not: soc_top.sdc'deki set_ideal_network kaldirildi - OpenSTA/LibreLane
# CTS oncesinde saat agini zaten ideal kabul eder, CTS sonrasi
# propagated'a gecirir; komut bu akista gereksizdir.

# ------------------------------------------------------------
# Reset istisnasi (tasarimin TEK zamanlama istisnasi)
# rst_ni: asenkron assert / senkron release. Senkronizasyon cip ust
# seviyesinde (pad halkasi / reset denetleyicisi) yapilir; bu sinif
# yol gercek zamanlama gerektirmez -> false path MESRU (Bolum 3.2:
# "gercekte zamanlanmasi gereken yollar false path yapilamaz" kurali
# ihlal edilmiyor). Gerekce ve recovery/removal yaklasimi: README 9.6.
# ------------------------------------------------------------
set_false_path -from [get_ports rst_ni]

# ------------------------------------------------------------
# I/O gecikme butceleri (Bolum 3.2: senkron harici arayuzu olan
# giris/cikislar icin zorunlu). Tum cevre birimleri dusuk hizli
# (UART, I2C, QSPI, GPIO); kabaca %30 giris / %30 cikis butcesi.
# Pad hucre gecikmeleri netlesirse rafine edilir.
# Portlar asic_top arayuzunden acikca listelenir (arac tasinabilirligi
# icin koleksiyon cebiri yerine acik liste).
# ------------------------------------------------------------
# ASENKRON girisler (11 Agu duzeltmesi): gpio_in_i 2FF senkronizatorden gecer
# (gpio_axil.sv:44-50), uart*_rxd_i harici asenkron seri hat olup rxd_reg ile
# orneklenir. Bu portlarin clk'ye gore anlamli bir varis penceresi YOKTUR;
# senkron input_delay ile kisitlamak sahte setup/hold ihlali uretir (olculdu:
# TT en kotu hold yolu gpio_in_i[0] cikmisti). Bolum 3.2 kurali ihlal edilmez:
# bunlar "gercekte zamanlanmasi gereken" yollar degil, senkronizator girisleridir;
# gerekce README 9.6'da.
set ASYNC_IN [get_ports {gpio_in_i* uart_rxd_i uart1_rxd_i}]
set_false_path -from $ASYNC_IN

# Senkron kalan girisler: i2c_sda_i (teslim yapilandirmasinda I2C_SDA_SYNC acik,
# 2FF senkronizatorden gecer - senkron kisit kotumser olarak korunur, README 9.9/3),
# qspi_io_i* (kaynagi bizim urettigimiz SCLK).
set ALL_IN  [get_ports {i2c_sda_i qspi_io_i*}]
set ALL_OUT [get_ports {uart_txd_o uart1_txd_o gpio_out_o* qspi_sclk_o \
                        qspi_cs_no qspi_io_o* qspi_io_oe* i2c_scl_o i2c_sda_oe_o}]

set_input_delay  -clock clk -max 6.000 $ALL_IN
set_input_delay  -clock clk -min 0.500 $ALL_IN
set_output_delay -clock clk -max 6.000 $ALL_OUT
set_output_delay -clock clk -min 0.500 $ALL_OUT

# Cikis yukleri (Bolum 3.2 onerilen): pad + harici hat icin kotumser
# 5 pF butce; pad modeli netlesirse guncellenir.
set_load 5.0 $ALL_OUT

# ------------------------------------------------------------
# Tasarim genel kurallari
# ------------------------------------------------------------
set_max_transition 1.000 [current_design]
set_max_fanout 32 [current_design]

# ------------------------------------------------------------
# SRAM MAKRO KOSE DERATE'I  (Karar: A + derate, 3 Agustos 2026)
# ------------------------------------------------------------
# Sorun: sky130_sram_2kbyte_1rw1r_32x512_8 ve sky130_sram_1kbyte_1rw1r_32x256_8
# PDK'da YALNIZCA TT_1p8V_25C lib'i ile gelir. SS/FF corner'larinda STA makro
# icin TT modelini kullanir -> iyimser (yanlis) sayi.
#
# Bu bir "waiver" degil, olcum duzeltmesi. Cozum: makro hucrelerine
# kotumser derate.
#
# Katsayinin dayanagi (tahmin degil, olculdu):
#   sky130_fd_sc_hd__dfxtp_1  clk->Q ortanca gecikme
#     TT (tt_025C_1v80) : 0.4376 ns
#     SS (ss_100C_1v60) : 1.1642 ns
#     oran              : 2.661
# Standart hucre kutuphanesinin ayni kose ciftindeki orani SRAM icin vekil
# olarak kullanilir. SRAM erisim suresinin gerilim/sicaklik hassasiyeti mantik
# kapisiyla birebir ayni degildir; secim BILEREK kotumser.
#
# Karar kurali:
#   * Bu derate ile timing kapaniyorsa -> A secenegi guvenli, makrolar kalir.
#   * Sadece bu derate yuzunden kapanmiyorsa -> C secenegine gec:
#     ISRAM/DSRAM'i 7 koseli sram_1rw1r_32_256_8_sky130 ile kur (+0.41 mm2),
#     AI SRAM tek kosede kalir (hizlandirici erisimi, CPU kritik yolunda degil).
#
# README 9.5 notu: "SRAM makrolari tek kose (TT_1p8V_25C) ile dagitilmaktadir.
# SS/FF analizi, standart hucre kutuphanesinden olculen 2.661x kose oraniyla
# kotumser derate edilerek yapilmistir."
# ------------------------------------------------------------
# KOSE-KOSULLU DERATE (11 Agu duzeltmesi). Onceki surum derate'i kosulsuz
# uyguluyordu; bu TT kosesinde HATALIYDI (TT lib SRAM'in dogru modelidir,
# 2,661x yapay yavaslatma TT setup'ini -0,205'e dusurdu). Dogru tablo:
#   TT: 1.0/1.0   TT lib birebir dogru model, derate gerekmez
#   SS: late 2.661 (olculen TT->SS vekil orani), early 1.0
#       (TT lib SS gercekliginden HIZLI oldugu icin erken yol zaten kotumser)
#   FF: late 1.0 (TT lib FF'ten YAVAS oldugu icin gec yol zaten kotumser),
#       early 0.500 (TT lib FF'ten yavas = erken yol icin iyimser; bilerek
#       guclu kotumser katsayi — README 9.5/9.6)
# PnR baglaminda (_CURRENT_CORNER_NAME tanimsiz) ESKI kosulsuz davranis
# korunur: 0-DRC fiziksel sonuc o kisitlarla uretildi, dondurma disiplini
# geregi optimizasyon hedefi degistirilmez. Bu blok yalniz ANALIZI duzeltir;
# netlist/GDS'e etkisi yoktur.
set _sram_cells [get_cells -hierarchical -filter "ref_name =~ sky130_sram_*"]
if {[llength $_sram_cells] > 0} {
    set _corner ""
    if { [info exists ::env(_CURRENT_CORNER_NAME)] } {
        set _corner $::env(_CURRENT_CORNER_NAME)
    }
    if { [string match "*ss_100C*" $_corner] } {
        set _late 2.661 ; set _early 1.0
    } elseif { [string match "*ff_n40C*" $_corner] } {
        set _late 1.0   ; set _early 0.500
    } elseif { [string match "*tt_025C*" $_corner] } {
        set _late 1.0   ; set _early 1.0
    } else {
        # PnR / kose-adi tasimayan baglam: kosulsuz kotumser (eski davranis)
        set _late 2.661 ; set _early 0.500
    }
    if { $_late != 1.0 } { set_timing_derate -cell_delay -late  $_late  $_sram_cells }
    if { $_early != 1.0 } { set_timing_derate -cell_delay -early $_early $_sram_cells }
    puts "\[SDC\] SRAM makro derate uygulandi: [llength $_sram_cells] hucre (kose='$_corner' late $_late / early $_early)"
} else {
    puts "\[SDC\] UYARI: SRAM makro hucresi bulunamadi - derate uygulanmadi."
    puts "\[SDC\]        Sentez oncesi asamada normal (makrolar henuz baglanmadi)."
}

# ------------------------------------------------------------
# Notlar (STA sign-off / README 9.6 icin):
# * Sistem mantigi TEK saat alanlidir (clk_i). Ikinci saat jtag_tck (JTAG TAP,
#   asagida): clk <-> jtag_tck ASENKRON saat grubu; tek CDC yolu riscv-dbg
#   dmi_cdc'nin 2-faz el sikismasidir (yapisal olarak guvenli, zamanlama
#   iliskisi kurulmaz). FPGA'daki MMCM asic_top disindadir (fpga_top), ASIC'e
#   girmez.
# * QSPI SCLK cikisi clk'den register uzerinden uretilir (max clk/2 =
#   25 MHz); ic saat degildir, veri yollari ayni alandadir -> generated
#   clock tanimi GEREKMEZ.
# * Multicycle path: YOK (tum yollar tek cevrim kurali).
# * False path: rst_ni + asenkron girisler (gpio_in_i*, uart*_rxd_i); bkz. README 9.6.
# * Bellekler: axi_sram_wrapper sinirindan sky130_sram_* makrolariyla
#   degistirilir; makro zamanlamalari EXTRA_LIBS Liberty'lerinden gelir.
# ============================================================

# ---- JTAG TAP saati (JTAG_DEBUG - riscv-dbg dmi_jtag; teslim yapilandirmasinda ACIK) ----
# TAP saati: OpenOCD adapter <= 10 MHz -> 100 ns. TCK <-> clk gecisleri riscv-dbg
# dmi_cdc (2-faz el sikisma) ile korunur; iki saat asenkron gruptur.
# Pin butceleri: TMS/TDI TCK'nin yukselen kenarinda ornekle nir, TDO dusen kenarda
# surulur (IEEE 1149.1) -> 100 ns periyotta 20 ns dis gecikme + 5 pF yuk bol marj.
create_clock -name jtag_tck -period 100.000 [get_ports jtag_tck_i]
set_clock_uncertainty -setup 0.500 [get_clocks jtag_tck]
set_clock_uncertainty -hold  0.100 [get_clocks jtag_tck]
set_clock_transition 0.150 [get_clocks jtag_tck]
set_clock_groups -asynchronous -group [get_clocks clk] -group [get_clocks jtag_tck]
set_false_path -from [get_ports jtag_trst_ni]
set_input_delay  -clock jtag_tck -max 20.000 [get_ports {jtag_tms_i jtag_tdi_i}]
set_input_delay  -clock jtag_tck -min  2.000 [get_ports {jtag_tms_i jtag_tdi_i}]
set_output_delay -clock jtag_tck -max 20.000 [get_ports jtag_tdo_o]
set_output_delay -clock jtag_tck -min  2.000 [get_ports jtag_tdo_o]
set_load 5.0 [get_ports jtag_tdo_o]
