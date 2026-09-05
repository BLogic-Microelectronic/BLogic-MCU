#!/usr/bin/env bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_jtag_board.sh - GERCEK KARTTA (Genesys 2) OpenOCD ile JTAG demosu
# ============================================
# deneme/jtag dali. Onkosullar:
#   1) Kartta rtl/fpga/fpga_top_jtag.bit yuklu (BSCANE2 TAP; Vivado ile yuklenir)
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
command -v openocd >/dev/null || { log "HATA: openocd yok"; exit 1; }
# USB cihazi gorunuyor mu (0403:6010)?
if ! grep -qs "0403" /sys/bus/usb/devices/*/idVendor 2>/dev/null; then
    log "HATA: FTDI (0403) USB cihazi WSL'de gorunmuyor - usbipd attach yapildi mi?"; exit 1
fi
log "openocd basliyor: $CFG + $DEMO -> $LOG"
timeout 180 openocd -f "$CFG" -f "$DEMO" -c "shutdown" > "$LOG" 2>&1
rc=$?
log "openocd cikis kodu: $rc"
echo "----- ozet -----"
grep -E "Info : JTAG tap|IDCODE|== DEMO|^pc |^a0 |^mstatus|^misa|0x00021000|halted due|Error|error:|LIBUSB|unable|failed" "$LOG" | head -60
echo "----------------"
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
grep -q "can.t add write watchpoint" "$LOG" || { log "UYARI: beklenen watchpoint reddi gorulmedi"; ok=0; }
if [ $ok = 1 ] && [ $rc = 0 ]; then
    log "VERDICT: PASS - kartta halt, a0 0x12345678 geri okuma, DSRAM 0x21000 cafef00d ($LOG)"
    exit 0
fi
log "VERDICT: FAIL - ayrintilar: $LOG"
exit 1
