# ============================================================
# Ostim BLogic Mikroelektronik
# flash_firmware.tcl - QSPI flash'a firmware yaz + bitstream yukle
#
# On kosullar:
#   1) rtl/fpga/fpga_top.bit uretilmis olmali (build_genesys2.tcl)
#   2) rtl/fpga/firmware_flash.bin mevcut olmali. Uretimi:
#        riscv32-unknown-elf-objcopy -O binary <firmware.elf> rtl/fpga/firmware_flash.bin
#      (Bootloader, flash offset 0x0'dan Instruction SRAM'e kopyalar.)
#   3) Genesys 2 USB-JTAG ile bagli ve acik olmali.
#
# Kullanim:
#   vivado -mode batch -source rtl/fpga/flash_firmware.tcl
#
# Akis: bin -> mcs -> flash sil/yaz/dogrula -> fpga_top.bit'i JTAG ile yukle.
# Sonra R19 (CPU RESET) butonuna basin; bootloader firmware'i flash'tan yukler.
# ============================================================

set script_dir [file dirname [file normalize [info script]]]
set fw_bin  [file join $script_dir firmware_flash.bin]
set fw_mcs  [file join $script_dir firmware_flash.mcs]
set bitfile [file join $script_dir fpga_top.bit]

# Genesys 2 onboard QSPI flash: Spansion S25FL256S (32 MB, x1/x2/x4)
set FLASH_PART {s25fl256sxxxxxx0-spi-x1_x2_x4}

if {![file exists $fw_bin]} {
    puts "HATA: $fw_bin yok. Once objcopy ile firmware_flash.bin uretin (bkz. dosya basligi)."
    exit 1
}
if {![file exists $bitfile]} {
    puts "HATA: $bitfile yok. Once build_genesys2.tcl calistirin."
    exit 1
}

# ------------------------------------------------------------
# 1) bin -> mcs (firmware flash offset 0x0'a yerlesir)
# ------------------------------------------------------------
write_cfgmem -force -format mcs -size 32 -interface SPIx4 \
    -loaddata "up 0x0 $fw_bin" $fw_mcs

# ------------------------------------------------------------
# 2) JTAG baglantisi
# ------------------------------------------------------------
open_hw_manager
connect_hw_server
open_hw_target

set dev [lindex [get_hw_devices xc7k325t*] 0]
if {$dev eq ""} {
    puts "HATA: xc7k325t bulunamadi. Kartin bagli ve acik oldugunu kontrol edin."
    exit 1
}
current_hw_device $dev
refresh_hw_device $dev

# ------------------------------------------------------------
# 3) Flash'i programla (sil -> yaz -> dogrula)
# ------------------------------------------------------------
set part [lindex [get_cfgmem_parts $FLASH_PART] 0]
if {$part eq ""} { puts "HATA: cfgmem part '$FLASH_PART' bulunamadi."; exit 1 }

create_hw_cfgmem -hw_device $dev $part
set cfg [current_hw_cfgmem]

set_property PROGRAM.FILES         [list $fw_mcs] $cfg
set_property PROGRAM.ADDRESS_RANGE {use_file}     $cfg
set_property PROGRAM.ERASE         1 $cfg
set_property PROGRAM.BLANK_CHECK   0 $cfg
set_property PROGRAM.CFG_PROGRAM   1 $cfg
set_property PROGRAM.VERIFY        1 $cfg
set_property PROGRAM.CHECKSUM      0 $cfg

# Flash erisimi icin gecici programlama bitstream'i yuklenir
create_hw_bitstream -hw_device $dev [get_property PROGRAM.HW_CFGMEM_BITFILE $dev]
program_hw_devices $dev

program_hw_cfgmem -hw_cfgmem $cfg
puts "BILGI: QSPI flash programlandi ve dogrulandi."

# ------------------------------------------------------------
# 4) Tasarim bitstream'ini geri yukle
# ------------------------------------------------------------
set_property PROGRAM.FILE $bitfile $dev
program_hw_devices $dev
refresh_hw_device $dev

close_hw_manager

puts "BASARILI: fpga_top.bit yuklendi. R19 (CPU RESET) ile firmware'i baslatin."
