# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_gls.ps1  -  teslim netlistinin SDF'li kapi seviyesi benzetimi (Questa, Windows)
# ============================================
# Onkosullar:
#   1) Questa (vsim/vlog PATH'te; dogrulandi: Questa Sim-64 10.7c)
#   2) python (strip_fillers.py icin)
#   3) sky130_fd_sc_hd Verilog modelleri: primitives.v + sky130_fd_sc_hd.v
#      (PDK: libs.ref/sky130_fd_sc_hd/verilog/, ciel surumu 8afc8346...)
#   4) build/flash.hex - WSL'de:
#      make flash-image FW_SRC=sw/tests/ai_boot_macro_test.c EXTRA_CFLAGS=-DCHECK_ARGMAX
# Questa ASCII olmayan yollarda sorun cikardigi icin her sey -WorkDir'e kopyalanir.
#
#   powershell -ExecutionPolicy Bypass -File verif\gls\run_gls.ps1 -CellLibDir C:\gls_work\pdk
#   ... -Tclk 14.0 -RunTime 1ms     (negatif kontrol: kapanmayan periyot)
param(
    [Parameter(Mandatory = $true)][string]$CellLibDir,
    [string]$WorkDir = "C:\gls_work",
    [string]$Tclk = "37.0",
    [string]$RunTime = "-all"
)
$ErrorActionPreference = "Stop"
$repo = (Resolve-Path "$PSScriptRoot\..\..").Path
New-Item -ItemType Directory -Force "$WorkDir\pdk" | Out-Null

python "$repo\verif\gls\strip_fillers.py" "$repo\asic\results\netlist\asic_top_powered.v.gz" "$WorkDir\asic_top_gls.v"
Copy-Item "$CellLibDir\primitives.v", "$CellLibDir\sky130_fd_sc_hd.v" "$WorkDir\pdk\"
Copy-Item "$repo\asic\results\sdf\nom_tt_025C_1v80\asic_top__nom_tt_025C_1v80.sdf" "$WorkDir\asic_top_tt.sdf"
Copy-Item "$repo\asic\macros\sky130_sram_2kbyte_1rw1r_32x512_8\verilog\*.v", `
          "$repo\asic\macros\sky130_sram_1kbyte_1rw1r_32x256_8\verilog\*.v", `
          "$repo\verif\models\spi_flash_model.sv", `
          "$repo\verif\gls\asic_top_gls_tb.sv", `
          "$repo\verif\gls\gls_compile.do", "$repo\verif\gls\gls_run.do", `
          "$repo\build\flash.hex" $WorkDir

Set-Location $WorkDir
vsim -c -do gls_compile.do -l gls_compile.log | Out-Null
if ($LASTEXITCODE -ne 0) { Write-Error "derleme basarisiz: $WorkDir\gls_compile.log" }
$log = "gls_run_${Tclk}ns.log"
vsim -c -do "set TCLK $Tclk; set RUNTIME $RunTime; do gls_run.do" -l $log | Out-Null

$viol = (Select-String -Path $log -Pattern '\$(setuphold|setup|hold|recrem|recovery|removal|width|period)\(').Count
# -CaseSensitive: aksi halde "FAIL" binlerce "Failed to find matching specify" SDF uyarisina da uyar
Select-String -CaseSensitive -Path $log -Pattern "TEST SUCCESS|FAIL:|GLS_BITTI" | ForEach-Object { $_.Line }
"zamanlama denetimi ihlali: $viol"
python "$repo\verif\gls\sdf_msg_census.py" $log asic_top_tt.sdf

# Karar (yalniz -RunTime -all; sonlu negatif kontrol kosularinda karar yok):
# TB kendi sonucunu basar - TEST SUCCESS olmali, FAIL: ve zamanlama ihlali olmamali.
if ($RunTime -eq "-all") {
    $pass = Select-String -CaseSensitive -Path $log -Pattern "TEST SUCCESS" -Quiet
    $fail = Select-String -CaseSensitive -Path $log -Pattern "FAIL:" -Quiet
    if ((-not $pass) -or $fail -or ($viol -ne 0)) {
        Write-Host "GLS FAIL (log: $WorkDir\$log)"
        exit 1
    }
    "GLS PASS"
}
