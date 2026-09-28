#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# questa_pack.sh - build the firmware / hex bundles for the Questa waveform flow
# ============================================
# Produces verif/questa/fw/<test>/ with exactly the files the Verilator recipes
# copy next to the simulator binary (firmware.hex, data_mem.hex, ai_sram_init.hex,
# bootrom.hex, flash.hex, golden.txt), so that Questa can $readmemh them from
# its working directory. Run on the WSL / Linux side (needs the RISC-V
# toolchain and python3); the outputs are committed, so the Questa machine
# needs no toolchain at all.  Usage:  make questa-pack   (= bash scripts/questa_pack.sh)
set -euo pipefail
cd "$(dirname "$0")/.."
OUT=verif/questa/fw
GOLD=sw/ai_model/golden_vectors
STAMP="$(date +%Y-%m-%d) commit $(git rev-parse --short HEAD 2>/dev/null || echo unknown)"
mkdir -p logs/build "$OUT"

manifest() {   # dir recipe
    {
        echo "BLogic MCU - firmware bundle for the Questa waveform flow (verif/questa)"
        echo "built  : $STAMP"
        echo "recipe : $2"
        echo "files  : $(ls "$1" | grep -v MANIFEST | tr '\n' ' ')"
    } > "$1/MANIFEST.txt"
}

dummies() {    # dir - every soc_top testbench $readmemh's these even when unused
    for f in firmware.hex data_mem.hex ai_sram_init.hex; do
        [ -f "$1/$f" ] || echo "00000000" > "$1/$f"
    done
    cp sw/bootloader/bootrom.hex "$1/"
}

pack_fw() {    # name fw_src [extra_cflags]
    local d="$OUT/$1" extra="${3:-}"
    rm -rf "$d"; mkdir -p "$d"
    echo "[pack] $1  <-  $2 ${extra:+(EXTRA_CFLAGS=$extra)}"
    rm -rf build
    if ! make -f Makefile.verilator sw FW_SRC="$2" EXTRA_CFLAGS="$extra" > "logs/build/questa_pack_$1.log" 2>&1; then
        echo "  firmware build failed - see logs/build/questa_pack_$1.log"; exit 1
    fi
    cp build/instr_mem.hex "$d/firmware.hex"
    cp build/data_mem.hex  "$d/data_mem.hex"
    [ -f "$GOLD/ai_sram_init.hex" ] && cp "$GOLD/ai_sram_init.hex" "$d/ai_sram_init.hex"
    dummies "$d"
    manifest "$d" "make -f Makefile.verilator sw FW_SRC=$2 EXTRA_CFLAGS=\"$extra\""
}

# --- firmware-driven SoC tests (verif/questa/questa_soc_tb.sv) ---------------
pack_fw uart_hello      sw/tests/uart_hello.c          -DCPB_VAL=434
pack_fw uart_hello_1m   sw/tests/uart_hello.c          -DCPB_VAL=50
pack_fw uart_hello_9600 sw/tests/uart_hello.c          -DCPB_VAL=5208
pack_fw qspi_flash      sw/tests/qspi_test.c           -DCPB_VAL=434
pack_fw uart_baud_sweep sw/tests/uart_baud_sweep.c     "-DSWEEP_CPB0=434 -DSWEEP_CPB1=50 -DSWEEP_CPB2=5208"
pack_fw qspi_fifo_err   sw/tests/qspi_fifo_err_test.c  -DQSPI_ERR_CPB=64
printf '[QSPI-ERR] gecen=25 kalan=0  SONUC: PASS' > "$OUT/qspi_fifo_err/golden.txt"
pack_fw ai_micro_speech sw/tests/ai_micro_speech_test.c
pack_fw ai_sw_reference sw/tests/ai_sw_reference.c
pack_fw ai_irq          sw/tests/ai_irq_test.c
pack_fw timer_irq       sw/tests/timer_irq_test.c
pack_fw uart1_strm      sw/tests/uart1_strm_test.c

# --- SystemVerilog testbenches that preload firmware --------------------------
pack_fw jtag_sim        sw/tests/uart_hello.c
pack_fw qspi_modes      sw/tests/qspi_modes_test.c
python3 -c "print(chr(10).join(format(i%256,'02x') for i in range(8192)))" > "$OUT/qspi_modes/flash.hex"
pack_fw i2c_sys         sw/tests/i2c_system_test.c

# --- boot / asic_sram_sim: boot ROM + flash image of flash_helloworld -----------
d="$OUT/boot"; rm -rf "$d"; mkdir -p "$d"
echo "[pack] boot  <-  gen_flash_image.py --fw sw/bootloader/flash_helloworld.hex"
python3 scripts/gen_flash_image.py --fw sw/bootloader/flash_helloworld.hex --out "$d/flash.hex" > "logs/build/questa_pack_boot.log" 2>&1
dummies "$d"
manifest "$d" "python3 scripts/gen_flash_image.py --fw sw/bootloader/flash_helloworld.hex (used by boot and asic_sram_sim)"

# --- asic_top_sim: flash image of ai_boot_macro_test.c (+CHECK_ARGMAX) ----------
d="$OUT/asic_top_sim"; rm -rf "$d"; mkdir -p "$d"
echo "[pack] asic_top_sim  <-  make flash-image FW_SRC=sw/tests/ai_boot_macro_test.c EXTRA_CFLAGS=-DCHECK_ARGMAX"
make flash-image FW_SRC=sw/tests/ai_boot_macro_test.c EXTRA_CFLAGS=-DCHECK_ARGMAX > "logs/build/questa_pack_asic_top_sim.log" 2>&1
cp build/flash.hex "$d/flash.hex"
dummies "$d"
manifest "$d" "make flash-image FW_SRC=sw/tests/ai_boot_macro_test.c EXTRA_CFLAGS=-DCHECK_ARGMAX"

rm -rf build
echo "[pack] done -> $OUT ($(du -sh "$OUT" | cut -f1))"
