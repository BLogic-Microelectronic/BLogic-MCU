# ============================================================================
# flash_firmware.tcl  —  Firmware'i Genesys2 QSPI flash'a yazar + .bit'i programlar
# ----------------------------------------------------------------------------
# TEK KOMUT akisi (M3 hizli iterasyon). Vivado'da (GUI ya da Tcl) calistir:
#   source fpga/flash_firmware.tcl
#
# Yaptiklari (sirayla, otomatik):
#   1. Hardware Manager + hw_server + hedef ac (acik degilse)
#   2. Genesys2 flash parcasini otomatik bul
#   3. firmware_flash.bin -> .mcs
#   4. Flash'a yaz (erase+program+verify)
#   5. fpga_top.bit'i FPGA'ya tekrar programla (tasarim flash'i okusun)
#
# Sonra: ekran hala bossa kartta CPU reset (R19) butonuna bas.
# ON KOSUL: Genesys2 USB-JTAG + USB-UART takili, guc acik.
# ============================================================================

proc _to_drive {p} {
    set unc "//wsl.localhost/Ubuntu-24.04/"
    if {[string match "${unc}*" $p]} { return "W:/[string range $p [string length $unc] end]" }
    return $p
}
set THIS_DIR [_to_drive [file normalize [file dirname [info script]]]]
set FW_BIN   "$THIS_DIR/firmware_flash.bin"
set MCS      "C:/bl_fpga_build/firmware_flash.mcs"
set BIT      "C:/bl_fpga_build/fpga_genesys2/fpga_genesys2.runs/impl_1/fpga_top.bit"

if {![file exists $FW_BIN]} { error "Firmware .bin yok: $FW_BIN" }
puts ">> \[flash\] Firmware: $FW_BIN ([file size $FW_BIN] bayt)"

# --- 1) Hardware Manager + hedef ----------------------------------------------
catch { open_hw_manager }
if {[llength [get_hw_servers -quiet]] == 0} { catch { connect_hw_server } } else {
    catch { connect_hw_server }
}
catch { current_hw_server [lindex [get_hw_servers] 0] }
# Hedef acik degilse ac
if {[catch {current_hw_target} ct] || $ct eq ""} {
    set tgts [get_hw_targets -quiet]
    if {[llength $tgts] == 0} { error "JTAG hedefi yok. Kart takili/acik mi? USB-JTAG kontrol et." }
    current_hw_target [lindex $tgts 0]
    open_hw_target
}
current_hw_device [lindex [get_hw_devices] 0]
refresh_hw_device -update_hw_probes false [current_hw_device]
set dev [current_hw_device]
puts ">> \[flash\] Hedef cihaz: $dev"

# --- 2) Flash parcasini otomatik bul ------------------------------------------
set CANDIDATES {
    s25fl256sxxxxxx0-spi-x1_x2_x4
    mt25ql256-spi-x1_x2_x4
    n25q256-3.3v-spi-x1_x2_x4
    n25q256-1.8v-spi-x1_x2_x4
    s25fl256l-spi-x1_x2_x4
}
set mempart ""
foreach c $CANDIDATES {
    set p [get_cfgmem_parts -quiet $c]
    if {[llength $p]} { set mempart [lindex $p 0]; break }
}
if {$mempart eq ""} {
    puts "!! Aday flash parcalari bulunamadi. Mevcut 256Mbit parcalar:"
    puts [get_cfgmem_parts -quiet *256*]
    error "FLASH_PART elle secilmeli (yukaridan birini CANDIDATES'e ekle)."
}
puts ">> \[flash\] Flash parcasi: $mempart"

# --- 3) .bin -> .mcs ----------------------------------------------------------
write_cfgmem -force -format mcs -size 256 -interface SPIx1 \
    -loaddata "up 0x00000000 $FW_BIN" -file $MCS
puts ">> \[flash\] MCS uretildi: $MCS"

# --- 4) Flash'i programla -----------------------------------------------------
if {[current_hw_cfgmem -quiet] ne ""} { delete_hw_cfgmem [current_hw_cfgmem] }
create_hw_cfgmem -hw_device $dev $mempart
set cfgmem [current_hw_cfgmem]
set_property PROGRAM.ADDRESS_RANGE {use_file}  $cfgmem
set_property PROGRAM.FILES         [list $MCS] $cfgmem
set_property PROGRAM.BLANK_CHECK   0           $cfgmem
set_property PROGRAM.ERASE         1           $cfgmem
set_property PROGRAM.CFG_PROGRAM   1           $cfgmem
set_property PROGRAM.VERIFY        1           $cfgmem
puts ">> \[flash\] Flash yaziliyor (erase+program+verify, ~30-60 sn)..."
create_hw_bitstream -hw_device $dev [get_property PROGRAM.HW_CFGMEM_BITFILE $dev]
program_hw_devices  $dev
refresh_hw_device   $dev
program_hw_cfgmem   -hw_cfgmem $cfgmem
puts ">> \[flash\] Flash YAZILDI."

# --- 5) fpga_top.bit'i tekrar programla ---------------------------------------
if {![file exists $BIT]} { error "Bitstream yok: $BIT (once build/bitstream al)" }
set_property PROGRAM.FILE $BIT $dev
puts ">> \[flash\] FPGA tasarimi (fpga_top.bit) yukleniyor..."
program_hw_devices $dev
refresh_hw_device  $dev

puts "----------------------------------------------------------------------"
puts ">> TAMAM. Tasarim flash'i okuyacak. Tera Term (115200 8N1):"
puts ">>   'Hello World from BLogic MCU!'"
puts ">> Gelmezse kartta CPU reset (R19) butonuna bas."
puts "----------------------------------------------------------------------"
