#!/bin/bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_coverage_tb.sh  -  testbench bazli modul kapsamasi
# ============================================
# NEDEN AYRI: verilator_coverage farkli build'lerin .dat dosyalarini hiyerarsi
# yoluna gore birlestirir. SoC build'inde qspi TOP.soc_top.i_qspi altindadir,
# standalone TB'de TOP.qspi_modes_tb altinda. Ayni satirlar iki ayri nokta
# sayilir; birlesik yuzde yapay olarak duser. Bu nedenle SoC seviyesi
# (make coverage) ve TB seviyesi (bu script) ayri raporlanir.
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)
mkdir -p logs/coverage/tb

TBS="uart-stp:uart_axil.sv:obj_dir_uart_stp
uart-stream:uart_stream_axil.sv:obj_dir_uart_stream
qspi-modes:qspi_master_axil.sv:obj_dir_qspi_modes
i2c-sys:i2c_master_axil.sv:obj_dir_i2c_sys
ai:ai_accelerator.sv:obj_dir_ai
boot:axi_sram_wrapper.sv:obj_dir_boot"

REPORT="$PROJ/verif/coverage_tb_summary.txt"
{
  echo "BLogic MCU - line coverage per module from the block testbenches (make coverage-tb)"
  echo "date      : $(date +%Y-%m-%d)"
  echo "verilator : $(verilator --version 2>/dev/null | head -1)"
  echo "method    : each testbench runs with its own top module; line coverage of the module under test"
  echo "------------------------------------------------------------"
  printf "%-14s %-24s %8s %8s %7s\n" "TB" "MODULE" "COVERED" "TOTAL" "PERCENT"
} > "$REPORT"

for E in $TBS; do
    TB=${E%%:*}; REST=${E#*:}; MOD=${REST%%:*}; MD=${REST#*:}
    echo ">>> Testbench $TB (module under test: $MOD)"
    rm -f "$MD/coverage.dat" coverage.dat
    if ! make $TB TBCOV="--coverage-line verif/coverage_waivers.vlt" \
         >"logs/coverage/tb/${TB}.log" 2>&1; then
        echo "    SKIPPED (log: logs/coverage/tb/${TB}.log)"
        printf "%-14s %-24s %8s %8s %7s\n" "$TB" "$MOD" "-" "-" "SKIPPED" >> "$REPORT"
        continue
    fi
    CD=""
    [ -f "$MD/coverage.dat" ] && CD="$MD/coverage.dat"
    [ -z "$CD" ] && [ -f coverage.dat ] && CD=coverage.dat
    if [ -z "$CD" ]; then
        echo "    no coverage.dat, skipped"
        printf "%-14s %-24s %8s %8s %7s\n" "$TB" "$MOD" "-" "-" "NO DATA" >> "$REPORT"
        continue
    fi
    mv "$CD" "logs/coverage/tb/${TB}.dat"
    rm -rf "logs/coverage/tb/${TB}_annotate"
    verilator_coverage --annotate "logs/coverage/tb/${TB}_annotate" --annotate-min 1 \
        "logs/coverage/tb/${TB}.dat" >/dev/null 2>&1 || true
    A="logs/coverage/tb/${TB}_annotate/$MOD"
    if [ -f "$A" ]; then
        UNCOV=$(grep -c '^%' "$A" || true)
        COV=$(grep -cE '^ *[0-9]' "$A" || true)
        TOT=$((COV + UNCOV))
        if [ "$TOT" -gt 0 ]; then
            PCT=$(awk "BEGIN{printf \"%.1f\", 100*$COV/$TOT}")
            echo "    $MOD: $COV/$TOT (%$PCT)"
            printf "%-14s %-24s %8s %8s %6s%%\n" "$TB" "$MOD" "$COV" "$TOT" "$PCT" >> "$REPORT"
        else
            printf "%-14s %-24s %8s %8s %7s\n" "$TB" "$MOD" "-" "-" "NOT MEASURED" >> "$REPORT"
        fi
    else
        echo "    $MOD is not in the annotated output"
        printf "%-14s %-24s %8s %8s %7s\n" "$TB" "$MOD" "-" "-" "NONE" >> "$REPORT"
    fi
done

echo ""
cat "$REPORT"
echo ""
echo "Report: verif/coverage_tb_summary.txt"
