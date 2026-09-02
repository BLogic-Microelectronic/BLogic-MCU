# ============================================================
# Ostim BLogic Mikroelektronik
# build_genesys2_jtag.tcl - Genesys 2, JTAG_DEBUG varyanti (deneme/jtag dali)
# build_genesys2.tcl'den turetildi (3 Eylul 2026). Farklar:
#   - rtl/debug/jtag_files.f kaynaklari eklenir, JTAG_DEBUG tanimlanir
#   - dmi_jtag_tap.sv yerine dmi_bscane_tap.sv (Xilinx BSCANE2, ayni modul adi):
#     kart uzerindeki USB-JTAG (FTDI) -> FPGA TAP USER3/USER4 -> riscv-dbg DTM
#   - genesys2_jtag.xdc: BSCANE2 TCK saati + sistem saatiyle asenkron grup
#   - ciktilar AYRI: teslim bitstream'i ve raporlarina DOKUNMAZ
# Kullanim (herhangi bir dizinden calisir):
#   vivado -mode batch -source rtl/fpga/build_genesys2_jtag.tcl
# Ciktilar:
#   rtl/fpga/fpga_top_jtag.bit   - JTAG'li FPGA bitstream
#   build/fpga_jtag_reports/*.rpt- sentez/timing/kaynak/guc/DRC raporlari
#   build/fpga_genesys2_jtag/    - ara dosyalar + routed checkpoint (.dcp)
# BOOT_ADDR_HEX: 00000000 = M3 flash-boot (teslim bitstream'iyle AYNI; karttaki
#   flash imaji kullanilir, boylece fark yalniz JTAG_DEBUG'dan gelir)
# ============================================================

# M3 (flash-boot) KOK NEDENI BULUNDU VE COZULDU (11 Agustos 2026).
#
# Eski not (4 Agu) "bootrom firmware'i QSPI'dan cekemiyor" diyordu; olcum
# bunu CURUTTU. Iki ayri sorun vardi:
#   1) flash-image imaja yalnizca .text koyuyordu (link_flash.ld hicbir build
#      yolunda kullanilmiyordu) -> string'li firmware'ler kartta sessiz kaliyordu.
#   2) ASIL KOK: soc_axi_interconnect.sv:284 - data path AR decode 3-YOLLU ve
#      Instr SRAM'i BILINCLI okumaz (fetch yolunda arbitrasyon olmasin diye).
#      Bu yuzden 0x10000'deki .rodata okumasi default'a dusup DATA_SRAM'e
#      gidiyor ve sifir donuyordu.
#
# Cozum (B secenegi): bootloader Asama 1.5 - flash 0x8000'deki veri bolgesini
# DSRAM 0x20000'e kopyalar. Crossbar'a dokunulmadi (A secenegi fetch yoluna
# ikinci okuyucu + arbitrasyon sokacakti, ASIC tarafinda STA riski).
# Dogrulandi: make boot-real PASS ('Hello World!' DSRAM'den, 68,6 ms),
# negatif kontrol (FLASH_DATA=/dev/null) FAIL, eski make boot PASS.
#
# ARTIK M3 VARSAYILAN. Kart denemesi icin flash imaji:
#   make flash-image   ->  fw@0x0 + veri@0x8000 + YZ agirliklari@0x10000
# (tek tam imaj; ayrica firmware.hex gomulmesi GEREKMEZ, asagidaki yer
#  tutucular yeterlidir.)
set BOOT_ADDR_HEX 00000000

set PART xc7k325tffg900-2

# ------------------------------------------------------------
# Dizinler (script konumundan repo koku turetilir)
# ------------------------------------------------------------
set script_dir [file dirname [file normalize [info script]]]
set repo_root  [file normalize [file join $script_dir .. ..]]
set build_dir  [file join $repo_root build fpga_genesys2_jtag]
set rpt_dir    [file join $repo_root build fpga_jtag_reports]

file mkdir $build_dir
file mkdir $rpt_dir

# ------------------------------------------------------------
# $readmemh dosyalari calisma dizininden cozulur:
# bootrom.hex'i kopyala, digerleri yoksa bos yer tutucu olustur
# (SRAM icerigi initial blokta zaten sifirlanir; M3 modda
# firmware flash'tan yuklendigi icin icerik onemsizdir).
# ------------------------------------------------------------
file copy -force [file join $repo_root bootrom.hex] $build_dir

# AI agirliklari flash'tan YUKLENMEZ - bitstream'e gomulmek zorunda.
# Gercek hex sw/ai_model/golden_vectors/ altinda uretiliyor
# (generate_ai_sram_init.py, 7680 satir). Onceki surumde bu dosya
# kopyalanmiyordu; sonuc olarak kartta AI SRAM sifir kaliyor ve
# hizlandirici demosu calismiyordu.
set ai_src [file join $repo_root sw ai_model golden_vectors ai_sram_init.hex]
if {[file exists $ai_src]} {
    file copy -force $ai_src [file join $build_dir ai_sram_init.hex]
    set n [llength [split [string trim [read [set fh [open $ai_src r]]]] "\n"]]
    close $fh
    puts "BILGI: ai_sram_init.hex kopyalandi ($n satir) - AI agirliklari bitstream'e gomuluyor."
} else {
    puts "UYARI: $ai_src bulunamadi!"
    puts "UYARI: Kartta AI hizlandirici demosu CALISMAYACAK."
    puts "UYARI: Once 'python3 sw/ai_model/generate_ai_sram_init.py' kosturun."
}

# M2 (SRAM-direct boot) icin firmware ve veri imajlari bitstream'e gomulur.
# Bunlari 'make -f Makefile.verilator sw FW_SRC=<test>' uretir ve build/ altina koyar.
# M3 (flash-boot) modunda gerekmezler; yer tutucu yeterlidir.
foreach {src dst} {instr_mem.hex firmware.hex data_mem.hex data_mem.hex} {
    set s [file join $repo_root build $src]
    if {[file exists $s]} {
        file copy -force $s [file join $build_dir $dst]
        puts "BILGI: $dst kopyalandi (build/$src)."
    }
}

foreach f {firmware.hex data_mem.hex ai_sram_init.hex} {
    set dst [file join $build_dir $f]
    if {![file exists $dst]} {
        set fh [open $dst w]
        puts $fh "00000000"
        close $fh
        puts "BILGI: $f bulunamadi, sifir icerikli yer tutucu olusturuldu."
    }
}

cd $build_dir

# ------------------------------------------------------------
# Kaynak listesi: soc_files.f ayristirilir
#  - '#' yorum ve bos satirlar atlanir
#  - '+incdir+' satirlari include dizini olur
#  - 'verif/' girdileri atlanir (protokol checker'lar
#    soc_top.sv icinde translate_off ile sentez disidir)
# ------------------------------------------------------------
set incdirs {}
set sv_srcs {}
set v_srcs  {}

set fl [open [file join $repo_root soc_files.f] r]
while {[gets $fl line] >= 0} {
    set line [string trim $line]
    if {$line eq "" || [string index $line 0] eq "#"} { continue }
    if {[string match "+incdir+*" $line]} {
        lappend incdirs [file normalize [file join $repo_root [string range $line 8 end]]]
        continue
    }
    if {[string match "verif/*" $line]} { continue }
    # CV32E40P register file: FPGA akisinda FF varyanti kullanilir.
    # latch varyanti ayni modul adini (cv32e40p_register_file) tanimlar ve
    # Vivado'da son tanim kazandigi icin FF'i ezer -> dislanir.
    # (Orijinal 14.06.2026 kart-dogrulamali build de yalnizca FF derlemistir.)
    if {[string match "*cv32e40p_register_file_latch.sv" $line]} { continue }
    set p [file normalize [file join $repo_root $line]]
    if {![file exists $p]} { puts "HATA: kaynak dosya yok: $p"; exit 1 }
    if {[file extension $p] eq ".sv"} { lappend sv_srcs $p } else { lappend v_srcs $p }
}
close $fl

# ------------------------------------------------------------
# JTAG debug kaynaklari: rtl/debug/jtag_files.f (ayni ayristirma)
#  - dmi_jtag_tap.sv (tam TAP; ASIC/Verilator) ATLANIR, yerine ayni modul
#    adini tasiyan dmi_bscane_tap.sv (BSCANE2) okunur
#  - v1.38.0 common_cells include dizini ESKI (cv32e40p altindaki) include
#    dizininden ONCE aranmalidir (jtag_files.f'deki ASSUME/5-arguman notu)
#  - fifo_v3/spill_register/sync gibi ortak dosyalar iki listede de olabilir:
#    sira korunarak tekillestirilir (Vivado ayni dosyayi iki kez okumasin)
# ------------------------------------------------------------
set jtag_incdirs {}
set jtag_pkgs {}
set jtag_rest {}
set fl [open [file join $repo_root rtl debug jtag_files.f] r]
while {[gets $fl line] >= 0} {
    set line [string trim $line]
    if {$line eq "" || [string index $line 0] eq "#"} { continue }
    if {[string match "+incdir+*" $line]} {
        lappend jtag_incdirs [file normalize [file join $repo_root [string range $line 8 end]]]
        continue
    }
    if {[string match "*dmi_jtag_tap.sv" $line]} { continue }
    set p [file normalize [file join $repo_root $line]]
    if {![file exists $p]} { puts "HATA: kaynak dosya yok: $p"; exit 1 }
    # Vivado paketleri kullanildiklari dosyadan ONCE okumali: soc_top.sv
    # 'dm::' paketine (dm_pkg.sv) basvurur -> *_pkg.sv dosyalari listenin
    # basina, geri kalani sonuna eklenir.
    if {[string match "*_pkg.sv" $p]} { lappend jtag_pkgs $p } else { lappend jtag_rest $p }
}
close $fl
lappend jtag_rest [file normalize [file join $repo_root rtl debug vendor riscv-dbg src dmi_bscane_tap.sv]]
# axi_dm_slave.sv jtag_files.f'de DEGIL (Makefile jtag hedefleri komut satirinda
# verir) -> burada da elle eklenir.
lappend jtag_rest [file normalize [file join $repo_root rtl debug axi_dm_slave.sv]]
set sv_srcs [concat $jtag_pkgs $sv_srcs $jtag_rest]
set incdirs [concat $jtag_incdirs $incdirs]
set uniq {}
foreach p $sv_srcs { if {[lsearch -exact $uniq $p] < 0} { lappend uniq $p } }
set sv_srcs $uniq

# FPGA ust modulu listede yoktur, elle eklenir
lappend sv_srcs [file normalize [file join $repo_root rtl fpga_top.sv]]

read_verilog -sv $sv_srcs
if {[llength $v_srcs] > 0} { read_verilog $v_srcs }
read_xdc [file join $script_dir genesys2.xdc]
read_xdc [file join $script_dir genesys2_jtag.xdc]

puts "BILGI: [llength $sv_srcs] .sv + [llength $v_srcs] .v dosyasi okundu."
puts "BILGI: BOOT_ADDR = 32'h$BOOT_ADDR_HEX"

# ------------------------------------------------------------
# Sentez
# ------------------------------------------------------------
# -verilog_define BOOTROM_CONTENT SART (13 Agu kok neden #3, kart olcumuyle):
# boot_rom.sv icerigi bu makroya baglidir (`ifdef BOOTROM_CONTENT `include
# bootrom_content.svh). Verilator (+define+BOOTROM_CONTENT) ve ASIC akisi
# (filelist.f/config.yaml) tanimlar; burada tanimlanmayinca ROM tum adresler
# icin 32'h0 sentezleniyordu -> CPU 0x0'da illegal instr -> trap dongusu ->
# QSPI'ya hic sira gelmiyordu. M3'un kartta 4 Agustos'tan beri sessiz
# kalmasinin kok nedeni buydu (axi_sram_wrapper.sv'deki BRAM-sifir emsalinin
# aynisi). Kanit zinciri: flash icerigi readback ile dogru + M2 hello_blink
# UART/LED calisiyor + bootrom'suz bitstream'de CS# hic dusmuyor.
synth_design -top fpga_top -part $PART \
    -include_dirs $incdirs \
    -verilog_define [list BOOTROM_CONTENT JTAG_DEBUG] \
    -generic BOOT_ADDR=32'h$BOOT_ADDR_HEX

write_checkpoint -force [file join $build_dir post_synth.dcp]
report_utilization    -file [file join $rpt_dir synth_utilization.rpt]
report_timing_summary -file [file join $rpt_dir synth_timing_summary.rpt]

# ------------------------------------------------------------
# Implementasyon (opt -> place -> phys_opt -> route)
# ------------------------------------------------------------
opt_design
place_design
phys_opt_design
route_design

write_checkpoint -force [file join $build_dir post_route.dcp]

# ------------------------------------------------------------
# Signoff raporlari
# ------------------------------------------------------------
report_route_status   -file [file join $rpt_dir route_status.rpt]
report_timing_summary -file [file join $rpt_dir impl_timing_summary.rpt]
report_utilization    -file [file join $rpt_dir impl_utilization.rpt]
# JTAG maliyeti dogrudan okunsun: hiyerarsik kaynak raporu (i_dm_top / i_dmi_jtag)
report_utilization -hierarchical -hierarchical_depth 3 -file [file join $rpt_dir impl_utilization_hier.rpt]
report_power          -file [file join $rpt_dir power.rpt]
report_drc            -file [file join $rpt_dir drc.rpt]
report_clock_utilization -file [file join $rpt_dir clock_utilization.rpt]

# ------------------------------------------------------------
# Timing kontrolu: WNS/WHS negatifse bitstream uretme, hata ver
# ------------------------------------------------------------
set wns [get_property SLACK [get_timing_paths -setup -max_paths 1]]
set whs [get_property SLACK [get_timing_paths -hold  -max_paths 1]]
puts "SONUC: WNS = $wns ns, WHS = $whs ns"

if {$wns < 0 || $whs < 0} {
    puts "HATA: Zamanlama saglanamadi (WNS=$wns, WHS=$whs). Bitstream uretilmedi."
    exit 1
}

# ------------------------------------------------------------
# Bitstream
# ------------------------------------------------------------
write_bitstream -force [file join $script_dir fpga_top_jtag.bit]

puts "BASARILI: rtl/fpga/fpga_top_jtag.bit uretildi, raporlar build/fpga_jtag_reports/ altinda."
