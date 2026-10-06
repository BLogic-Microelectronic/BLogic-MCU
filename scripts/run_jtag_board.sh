#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_jtag_board.sh - GERCEK KARTTA (Genesys 2) OpenOCD ile JTAG demosu
# ============================================
# JTAG debug altsistemi (teslim bitstream'inde ACIK; 6 Eylul 2026 kartta PASS). Onkosullar:
#   1) Kartta rtl/fpga/fpga_top.bit yuklu (BSCANE2 TAP; Vivado ile yuklenir)
#   2) Kartin FT2232H'si WSL'e verilmis:  .\scripts\jtag_kart_wsl.ps1  (Windows)
#      -> Vivado hw_server ve Tera Term KAPALI olmali (ayni kanal)
#   3) WSL'de openocd (ftdi surucusu) ve /dev/bus/usb erisimi (udev 99-ftdi.rules)
# Yapar: openocd -f genesys2_bscan.cfg ile baglanir, demo_halt_regs_mem.tcl'i
# (simdeki ayni demo: halt/reg/step/CSR/bellek/blok/MMIO/resume/breakpoint)
# kartta kosturur, ciktiyi logs/jtag/board_<tarih>.log'a yazar, VERDICT basar.
# Kullanim:  bash scripts/run_jtag_board.sh
set -u
cd "$(dirname "$0")/.." || exit 1
CFG=rtl/debug/openocd/genesys2_bscan.cfg
DEMO=rtl/debug/openocd/demo_halt_regs_mem.tcl
LOG_DIR=logs/jtag; mkdir -p "$LOG_DIR"
STAMP=$(date +%Y-%m-%d_%H%M%S)
LOG="$LOG_DIR/board_$STAMP.log"
log() { echo "[JTAG-BOARD] $*"; }
command -v openocd >/dev/null || { log "ERROR: openocd not found"; exit 1; }
# USB cihazi gorunuyor mu (0403:6010)?
if ! grep -qs "0403" /sys/bus/usb/devices/*/idVendor 2>/dev/null; then
    log "ERROR: the FTDI (0403) USB device is not visible in WSL. Was 'usbipd attach' run?"; exit 1
fi
log "starting openocd: $CFG + $DEMO -> $LOG"
timeout 180 openocd -f "$CFG" -f "$DEMO" -c "shutdown" > "$LOG" 2>&1
rc=$?
log "openocd exit code: $rc"
echo "----- summary -----"
grep -E "Info : JTAG tap|IDCODE|== DEMO|^pc |^a0 |^mstatus|^misa|0x00021000|halted due|Error|error:|LIBUSB|unable|failed" "$LOG" | head -60
echo "-------------------"
ok=1
grep -q "== DEMO: halt ==" "$LOG" || ok=0
grep -qE "halted due to debug-request|halted due to breakpoint" "$LOG" || ok=0
grep -qi "a0.*0x12345678" "$LOG" || ok=0
grep -qi "0x00021000.*cafef00d" "$LOG" || ok=0
# Beklenen NEGATIF durum: CV32E40P'de veri tetikleyicisi yok, watchpoint eklemesi
# "Error: ... can't add write watchpoint ... resource not available" uretmeli
# (demo bunu bilerek dener). Bu satirlar hata sayilmaz; kalan her "Error:" sayilir.
grep -viE "watchpoint" "$LOG" | grep -qiE "LIBUSB_ERROR|unable to open ftdi|JTAG scan chain interrogation failed|Error: " && ok=0
# ve negatif durumun GERCEKTEN gozlendigini de iste (sessiz gecerse bir sey degismis demektir)
grep -q "can.t add write watchpoint" "$LOG" || { log "WARNING: the expected watchpoint rejection was not seen"; ok=0; }
if [ $ok = 1 ] && [ $rc = 0 ]; then
    log "VERDICT: PASS - halt on the board, a0 read back as 0x12345678, DSRAM 0x21000 = cafef00d ($LOG)"
    exit 0
fi
log "VERDICT: FAIL - details: $LOG"
exit 1
