# ============================================================================
# build_genesys2.tcl  —  BLogic MCU FPGA bitstream (Vivado 2021.2)
# ----------------------------------------------------------------------------
# Hedef kart : Digilent Genesys 2  (Kintex-7  XC7K325T-2FFG900C)
# Ust modul  : fpga_top  (rtl/fpga_top.sv)  ->  soc_top
#
# Bu script TEKNOFEST juri dosyasi DEGIL; yerel FPGA prototipleme akisidir.
# RTL listesi tek dogru kaynaktan (soc_files.f) okunur; SVA protocol
# checker'lari (verif/sva/*) sentez-disidir, bu yuzden atlanir.
#
# KULLANIM (Vivado 2021.2):
#   Batch :  vivado -mode batch -source fpga/build_genesys2.tcl
#   GUI   :  Tools > Run Tcl Script... ya da Tcl Console:
#            cd <repo-koku> ; source fpga/build_genesys2.tcl
#
# CIKTI :  fpga/build/fpga_genesys2/fpga_genesys2.runs/impl_1/fpga_top.bit
# ============================================================================

# --- 0. Yollar -------------------------------------------------------------
#   KRITIK: Proje UNC yoldan (\\wsl.localhost\...) acilirsa Vivado'nun sentez
#   ALT-SURECI 'cd /d <UNC>' calistirir; CMD.exe UNC'yi CALISMA DIZINI YAPAMAZ
#   -> sentez aninda coker (fpga_top.vds bile olusmaz). Wrapper W: surucusunu
#   \\wsl.localhost\Ubuntu-24.04 'e subst'ledigi icin UNC -> W: ceviriyoruz.
proc _to_drive {p} {
    set unc "//wsl.localhost/Ubuntu-24.04/"
    if {[string match "${unc}*" $p]} {
        return "W:/[string range $p [string length $unc] end]"
    }
    return $p
}
set THIS_DIR [_to_drive [file normalize [file dirname [info script]]]]   ;# .../fpga
set ROOT     [_to_drive [file normalize "$THIS_DIR/.."]]                  ;# repo koku
# Build ciktisi NATIVE Windows diskinde (C:) tutulur: WSL 9P paylasimi (\\wsl...)
# uzerinde sentez ALT-SURECLERI cd/kilit sorunlari cikariyor. Kaynak dosyalar
# yine W:'den (repo) okunur. C:\bl_fpga_build  ==  WSL'de /mnt/c/bl_fpga_build.
set BUILD    "C:/bl_fpga_build"                                           ;# native C: (kilit/UNC sorunlarini onler)
if {[string match "//*" $ROOT]} {
    error "UNC yol cozulemedi: $ROOT\n   COZUM: Tcl Console'da once W: surucusune gec:\n     cd {W:/home/berkk/Teknofest_MCU_2026_ver4}\n     source fpga/build_genesys2.tcl"
}
set PROJ     "fpga_genesys2"
set PART     "xc7k325tffg900-2"
set TOP      "fpga_top"
set JOBS     8
# Boot kaynagi (fpga_top BOOT_ADDR generic'i):
#   00010000 = SRAM-boot  (M2: firmware.hex dogrudan calisir, bootrom/flash baypas)
#   00000000 = flash-boot (M3: bootrom QSPI flash'tan kopyalar) <-- AKTIF (QSPI fix ile)
set BOOT_ADDR_HEX "00000000"

puts ">> \[fpga\] Repo koku : $ROOT"
puts ">> \[fpga\] Hedef part: $PART  (Genesys 2)"

# --- 1. Proje olustur ------------------------------------------------------
catch { close_project }
file mkdir $BUILD
create_project -force $PROJ "$BUILD/$PROJ" -part $PART
puts ">> \[fpga\] Proje yolu: $BUILD/$PROJ"
set_property target_language Verilog [current_project]
set_property default_lib    xil_defaultlib [current_project]

# --- 2. soc_files.f'i ayristir ---------------------------------------------
#   +incdir+...  -> include dizinleri
#   verif/sva/*  -> ATLA (sim-only)
#   #...         -> yorum
set flist_path "$ROOT/soc_files.f"
if {![file exists $flist_path]} { error "soc_files.f bulunamadi: $flist_path" }

set incdirs {}
set rtl_srcs {}
set fh [open $flist_path r]
while {[gets $fh line] >= 0} {
    set line [string trim $line]
    if {$line eq "" || [string match "#*" $line]} { continue }
    if {[string match "+incdir+*" $line]} {
        lappend incdirs [file normalize "$ROOT/[string range $line 8 end]"]
    } elseif {[string match "verif/sva/*" $line]} {
        puts ">> \[fpga\] (sentez-disi atlandi)              $line"
    } elseif {[string match "*cv32e40p_register_file_latch.sv" $line]} {
        puts ">> \[fpga\] (FPGA: latch regfile atlandi, FF aktif) $line"
    } else {
        set p [file normalize "$ROOT/$line"]
        if {![file exists $p]} { error "RTL dosyasi yok: $p" }
        lappend rtl_srcs $p
    }
}
close $fh

# fpga_top soc_files.f'te yok (yalnizca FPGA sarmalayicisi) — manuel ekle
lappend rtl_srcs [file normalize "$ROOT/rtl/fpga_top.sv"]

add_files -norecurse $rtl_srcs
set_property file_type SystemVerilog [get_files *.sv]

# --- 3. Include dizinleri (paket/`include cozumu + $readmemh arama) ---------
#   $readmemh bare-name init dosyalarini (bootrom.hex vb.) bulabilsin diye
#   hex'lerin bulundugu dizinleri de include_dirs'e ekliyoruz.
set hexdirs [list \
    $ROOT \
    [file normalize "$ROOT/sw/ai_model/golden_vectors"] \
    [file normalize "$ROOT/teknotest/sw/build"] ]
set all_incdirs [concat $incdirs $hexdirs]
foreach fs {sources_1 sim_1} {
    if {[llength [get_filesets -quiet $fs]]} {
        set_property include_dirs $all_incdirs [get_filesets $fs]
    }
}

# --- 3b. GLOBAL INCLUDE HEADER'LARI ----------------------------------------
#   PULP dosyalari (axi_intf.sv vb.) AXI_TYPEDEF_* ve `FF makrolarini KENDI
#   `include etmeden kullanir. Vivado her dosyayi AYRI derleme birimi sayar,
#   bu yuzden soc_top'taki include axi_intf'e ulasmaz -> makro tanimsiz.
#   Cozum: bu header'lari "global include" yap (hepsinde `ifndef guard'i var,
#   o yuzden cift-tanim/redefinition hatasi olmaz).
set global_hdrs [list \
    "rtl/bus/axi/include/axi/typedef.svh" \
    "rtl/bus/axi/include/axi/assign.svh" \
    "rtl/bus/axi/include/axi/port.svh" \
    "rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include/common_cells/registers.svh" \
    "rtl/core/cv32e40p/rtl/vendor/pulp_platform_common_cells/include/common_cells/assertions.svh" ]
foreach rel $global_hdrs {
    set hdr [file normalize "$ROOT/$rel"]
    if {![file exists $hdr]} { error "Global include header yok: $hdr" }
    add_files -norecurse $hdr
    set_property file_type        {Verilog Header} [get_files $hdr]
    set_property is_global_include true             [get_files $hdr]
    puts ">> \[fpga\] global include: $rel"
}

# --- 4. Bellek init hex dosyalari (varsa projeye ekle) ---------------------
#   axi_sram_wrapper INIT_FILE: bootrom.hex / firmware.hex / data_mem.hex /
#   ai_sram_init.hex  (bare isim -> include_dirs uzerinden cozulur)
foreach h [list \
        "$ROOT/bootrom.hex" \
        "$ROOT/firmware.hex" \
        "$ROOT/data_mem.hex" \
        "$ROOT/teknotest/sw/build/firmware.hex" \
        "$ROOT/teknotest/sw/build/data_mem.hex" \
        "$ROOT/sw/ai_model/golden_vectors/ai_sram_init.hex" ] {
    if {[file exists $h]} {
        add_files -norecurse $h
        puts ">> \[fpga\] init hex eklendi: $h"
    } else {
        puts ">> \[fpga\] (yok, atlandi)   : $h"
    }
}

# --- 5. Kisitlar (XDC) -----------------------------------------------------
add_files -fileset constrs_1 -norecurse "$THIS_DIR/genesys2.xdc"

# --- 6. Ust modul ----------------------------------------------------------
set_property top $TOP [current_fileset]
set_property generic "BOOT_ADDR=32'h$BOOT_ADDR_HEX" [get_filesets sources_1]
update_compile_order -fileset sources_1
puts ">> \[fpga\] Ust modul: [get_property top [current_fileset]]"
puts ">> \[fpga\] BOOT_ADDR = 0x$BOOT_ADDR_HEX  (10000=SRAM-boot/M2, 00000000=flash-boot/M3)"

# --- 7. Sentez -------------------------------------------------------------
puts ">> \[fpga\] Sentez baslatiliyor ($JOBS is parcacigi)..."
launch_runs synth_1 -jobs $JOBS
wait_on_run synth_1
if {[get_property PROGRESS [get_runs synth_1]] ne "100%"} {
    error "SENTEZ BASARISIZ — synth_1 raporuna bak."
}
puts ">> \[fpga\] Sentez TAMAM."

# --- 8. Implementation + Bitstream -----------------------------------------
puts ">> \[fpga\] Implementation + bitstream baslatiliyor..."
launch_runs impl_1 -to_step write_bitstream -jobs $JOBS
wait_on_run impl_1
if {[get_property PROGRESS [get_runs impl_1]] ne "100%"} {
    error "IMPLEMENTATION/BITSTREAM BASARISIZ — impl_1 raporuna bak."
}

set bit "$BUILD/$PROJ/$PROJ.runs/impl_1/$TOP.bit"
puts "----------------------------------------------------------------------"
puts ">> BITSTREAM HAZIR:"
puts ">>   $bit"
puts ">> Zamanlama ozeti:"
catch { report_timing_summary -no_header -report_unconstrained -file "$BUILD/timing_summary.rpt" }
puts ">>   (detay: $BUILD/timing_summary.rpt)"
puts "----------------------------------------------------------------------"
