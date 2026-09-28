@echo off
rem SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
rem SPDX-License-Identifier: GPL-3.0-only
rem Licensed under the GNU General Public License version 3 only.
rem See the LICENSE file in the repository root for the full license text.

rem ============================================
rem Ostim BLogic Mikroelektronik
rem wave.bat - open a testbench in the Questa GUI with a ready-made wave window
rem ============================================
rem usage:  wave.bat            (menu)
rem         wave.bat <test>     e.g. wave.bat jtag_sim
rem Needs vsim on PATH (Questa Sim-64 10.7c: <install>\win64) and the firmware
rem bundles under verif\questa\fw (committed; regenerate with 'make questa-pack').
setlocal EnableDelayedExpansion
set "QDIR=%~dp0"
set "ROOT=%QDIR%..\.."
set "TEST=%~1"
if not "%TEST%"=="" goto :run

echo.
echo  BLogic MCU - Questa waveform flow
echo  ---------------------------------
set /a N=0
for %%T in (boot asic_sram_sim asic_top_sim qspi_modes i2c_sys jtag_sim jtag_bridge_sim uart_stp uart_stream ai uart_hello uart_hello_1m uart_hello_9600 qspi_flash uart_baud_sweep qspi_fifo_err ai_micro_speech ai_irq timer_irq uart1_strm ai_sw_reference) do (
    set /a N+=1
    set "T!N!=%%T"
    echo   !N!^)  %%T
)
echo.
set /p "SEL=Test number (1-%N%): "
set "TEST=!T%SEL%!"
if "%TEST%"=="" (
    echo invalid choice
    pause
    exit /b 1
)

:run
where vsim >nul 2>nul
if errorlevel 1 (
    echo vsim was not found on PATH.
    echo Add the Questa win64 directory first, for example:
    echo    set PATH=C:\questasim64_10.7c\win64;%%PATH%%
    pause
    exit /b 1
)
cd /d "%ROOT%"
echo starting Questa for test "%TEST%" ...
start "" vsim -gui -do "do verif/questa/run_test.do %TEST%"
endlocal
