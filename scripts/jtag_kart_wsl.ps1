# ============================================
# Ostim BLogic Mikroelektronik
# jtag_kart_wsl.ps1 - Genesys 2 USB-JTAG (FT2232H) cihazini usbipd ile WSL2'ye verir
# ============================================
# JTAG debug altsistemi (teslim bitstream'inde ACIK). Kartta fpga_top.bit (BSCANE2 TAP) yukluyken OpenOCD'yi
# WSL icinde kosturmak icin (Windows FTDI surucusu bozulmaz, Vivado etkilenmez):
#   1) Bu betik (Windows, PowerShell):   .\scripts\jtag_kart_wsl.ps1          # attach
#                                        .\scripts\jtag_kart_wsl.ps1 -Detach  # geri ver
#   2) WSL icinde:  openocd -f rtl/debug/openocd/genesys2_bscan.cfg
#      (ayri terminal: gdb-multiarch build/test.elf -ex 'target extended-remote :3333')
# Onkosul: usbipd-win kurulu; cihaz bir kez 'usbipd bind' ile paylasilmis olmali
# (yonetici ister; bu makinede "USB Serial Converter A, B" zaten Persisted).
# Vivado hw_server / Tera Term acikken FTDI'yi alamaz - once kapatin.
# UART (COM7) ayri FTDI cipidir, etkilenmez.
param([switch]$Detach)
$usbipd = "C:\Program Files\usbipd-win\usbipd.exe"
if (-not (Test-Path $usbipd)) { Write-Error "usbipd-win yok: winget install usbipd"; exit 1 }
$rows = & $usbipd list 2>$null | Select-String -Pattern '^\s*(\d+-\d+)\s+0403:6010'
if (-not $rows) { Write-Error "0403:6010 (FT2232H USB-JTAG) bagli gorunmuyor - kart acik mi, JTAG USB kablosu takili mi?"; exit 1 }
$busid = ($rows[0].Matches[0].Groups[1].Value)
if ($Detach) {
    & $usbipd detach --busid $busid; Write-Host "detach: $busid (Windows'a geri verildi)"
} else {
    & $usbipd attach --wsl --busid $busid
    if ($LASTEXITCODE -ne 0) { Write-Error "attach basarisiz (once yonetici olarak: usbipd bind --busid $busid)"; exit 1 }
    Write-Host "attach: $busid -> WSL. Simdi WSL'de: openocd -f rtl/debug/openocd/genesys2_bscan.cfg"
    wsl.exe -e bash -lc "lsusb 2>/dev/null | grep -i 0403 || echo 'WSL: lsusb yok/cihaz gorunmedi (usbutils kurulu mu?)'"
}
