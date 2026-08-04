# ============================================================
# Ostim BLogic Mikroelektronik
# build_genesys2.tcl - Genesys 2 sentez + implementasyon + bitstream
#
# Kullanim (herhangi bir dizinden calisir):
#   vivado -mode batch -source rtl/fpga/build_genesys2.tcl
#
# Ciktilar:
#   rtl/fpga/fpga_top.bit        - FPGA bitstream
#   rtl/fpga/reports/*.rpt       - sentez/timing/kaynak/guc/DRC raporlari
#   build/fpga_genesys2/         - ara dosyalar + routed checkpoint (.dcp)
#
# BOOT_ADDR_HEX:
#   00000000 = M3 flash-boot (bootrom QSPI'dan firmware yukler)  [varsayilan]
#   00010000 = M2 SRAM-direct boot (firmware.hex ile)
# ============================================================

# DIKKAT (4 Agustos 2026): varsayilan gecici olarak M2'ye alindi.
# M3 (flash-boot) GERCEK DONANIMDA CALISMIYOR: bootrom firmware'i QSPI'dan
# cekemiyor (led_only.c ile dogrulandi - LED'ler hic yanmadi). Ayrica .rodata
# DATA_RAM'e hicbir yoldan ulasmiyor (bkz. sw/common/link_flash.ld).
# Flash-boot duzeltilince buradaki deger 00000000'a geri alinmalidir.
set BOOT_ADDR_HEX 00010000

set PART xc7k325tffg900-2

# ------------------------------------------------------------
# Dizinler (script konumundan repo koku turetilir)
# ------------------------------------------------------------
set script_dir [file dirname [file normalize [info script]]]
set repo_root  [file normalize [file join $script_dir .. ..]]
set build_dir  [file join $repo_root build fpga_genesys2]
set rpt_dir    [file join $script_dir reports]

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

# FPGA ust modulu listede yoktur, elle eklenir
lappend sv_srcs [file normalize [file join $repo_root rtl fpga_top.sv]]

read_verilog -sv $sv_srcs
if {[llength $v_srcs] > 0} { read_verilog $v_srcs }
read_xdc [file join $script_dir genesys2.xdc]

puts "BILGI: [llength $sv_srcs] .sv + [llength $v_srcs] .v dosyasi okundu."
puts "BILGI: BOOT_ADDR = 32'h$BOOT_ADDR_HEX"

# ------------------------------------------------------------
# Sentez
# ------------------------------------------------------------
synth_design -top fpga_top -part $PART \
    -include_dirs $incdirs \
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
write_bitstream -force [file join $script_dir fpga_top.bit]

puts "BASARILI: rtl/fpga/fpga_top.bit uretildi, raporlar rtl/fpga/reports/ altinda."
