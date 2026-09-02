#!/usr/bin/env bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_jtag_gdb.sh  -  gdb (OpenOCD :3333) ucdan-uca demo kosucusu (deneme/jtag, Gun 3)
# ============================================
# Akis:
#   1. depo kokune gec; obj_dir_jtag_ocd/jtag_openocd_sim ya da build/test.elf yoksa
#      (veya ELF'in instr_mem.hex'i simdeki firmware.hex ile uyusmuyorsa) make jtag-openocd-build
#   2. simi Mdir icinden arka planda baslat -> logs/jtag/sim_gdb.log ; TCP 9999 bekle (<=60 s)
#   3. openocd -f blogic_sim.cfg arka planda -> logs/jtag/openocd_gdb.log ; TCP 3333 bekle (<=60 s)
#   4. timeout 600 gdb-multiarch -batch -x demo_gdb.gdb build/test.elf -> logs/jtag/gdb.log
#   5. openocd ("monitor shutdown") ve simin ('Q') kendiliginden bitmesini bekle (30 s), bitmezse oldur
#   6. GDB isaretleri + register/bellek satirlarini bas; VERDICT PASS/FAIL (cikis 0/1)
# PASS kosulu (gdb.log, 5 kriter):
#   - "Breakpoint 1, " ile ayni satirda "main" (continue main'de durdu)
#   - bu satirdan sonraki ilk "pc = 0x..." satiri 0x0001xxxx (firmware bolgesi)
#   - a0 geri okuma: print/z $a0 -> 0x0badcafe
#   - bellek geri okuma: x/4xw 0x00021000 -> 0x600df00d (gdb yazdi, OpenOCD progbuf okudu)
#   - "== GDB: done ==" (gdb betigi hatasiz sona ulasti)
# Kullanim: make jtag-gdb   (esdegeri: bash scripts/run_jtag_gdb.sh)

set -u

cd "$(dirname "$0")/.." || exit 1
SIM_DIR=obj_dir_jtag_ocd
SIM_BIN=jtag_openocd_sim
LOG_DIR=logs/jtag
OCD_CFG=rtl/debug/openocd/blogic_sim.cfg
GDB_SCRIPT=rtl/debug/openocd/demo_gdb.gdb
ELF=build/test.elf
SIM_PORT=9999
GDB_PORT=3333
GDB_TIMEOUT=600
GDB=gdb-multiarch
SIM_PID=""
OCD_PID=""

export PATH=/opt/riscv/bin:$PATH

log() { echo "[JTAG-GDB] $*"; }

port_listening() { ss -ltn 2>/dev/null | awk '{print $4}' | grep -q ":$1\$"; }

kill_pid() {
    # $1: pid, $2: ad
    if [ -n "$1" ] && kill -0 "$1" 2>/dev/null; then
        log "$2 (pid $1) hala calisiyor, olduruluyor"
        kill "$1" 2>/dev/null
        sleep 1
        kill -9 "$1" 2>/dev/null
        wait "$1" 2>/dev/null
    fi
}
cleanup() { kill_pid "$OCD_PID" openocd; OCD_PID=""; kill_pid "$SIM_PID" sim; SIM_PID=""; }
trap cleanup EXIT

for t in openocd "$GDB" ss timeout awk md5sum; do
    command -v "$t" >/dev/null 2>&1 || { log "HATA: '$t' bulunamadi"; exit 1; }
done

# sim binary + ELF birlikte uretilir (jtag-openocd-build: sw -> build/test.elf,
# hex'ler Mdir'e kopyalanir); ELF sembolleri (break main) simdeki firmware ile
# ayni derlemeden olmali.
need_build=0
[ -x "$SIM_DIR/$SIM_BIN" ] || { log "$SIM_DIR/$SIM_BIN yok"; need_build=1; }
[ -f "$ELF" ] || { log "$ELF yok"; need_build=1; }
if [ "$need_build" = 0 ] && [ -f build/instr_mem.hex ] && [ -f "$SIM_DIR/firmware.hex" ]; then
    h1=$(md5sum < build/instr_mem.hex); h2=$(md5sum < "$SIM_DIR/firmware.hex")
    [ "$h1" = "$h2" ] || { log "build/instr_mem.hex != $SIM_DIR/firmware.hex (ELF/sim uyusmuyor)"; need_build=1; }
fi
if [ "$need_build" = 1 ]; then
    log "derleniyor: make jtag-openocd-build"
    make jtag-openocd-build || { log "HATA: derleme basarisiz"; exit 1; }
fi

mkdir -p "$LOG_DIR"

for p in "$SIM_PORT" "$GDB_PORT"; do
    if port_listening "$p"; then
        log "HATA: TCP $p zaten dinleniyor (eski sim/openocd?): pkill -f '^[.]/jtag_openocd_sim' ; pkill openocd"
        exit 1
    fi
done

T0=$(date +%s)
log "sim baslatiliyor: $SIM_DIR/$SIM_BIN -> $LOG_DIR/sim_gdb.log"
(cd "$SIM_DIR" && exec "./$SIM_BIN") > "$LOG_DIR/sim_gdb.log" 2>&1 &
SIM_PID=$!

# port dinlenene kadar bekle (120 x 0.5 s = 60 s)
for i in $(seq 1 120); do
    if port_listening "$SIM_PORT"; then break; fi
    if ! kill -0 "$SIM_PID" 2>/dev/null; then
        log "HATA: sim erken bitti, bkz $LOG_DIR/sim_gdb.log"
        tail -20 "$LOG_DIR/sim_gdb.log"
        exit 1
    fi
    sleep 0.5
done
if ! port_listening "$SIM_PORT"; then
    log "HATA: 60 s icinde TCP $SIM_PORT dinlenmedi"
    exit 1
fi
log "TCP $SIM_PORT dinleniyor (sim pid $SIM_PID)"

log "openocd -f $OCD_CFG (arka plan) -> $LOG_DIR/openocd_gdb.log"
openocd -f "$OCD_CFG" > "$LOG_DIR/openocd_gdb.log" 2>&1 &
OCD_PID=$!

for i in $(seq 1 120); do
    if port_listening "$GDB_PORT"; then break; fi
    if ! kill -0 "$OCD_PID" 2>/dev/null; then
        log "HATA: openocd erken bitti, bkz $LOG_DIR/openocd_gdb.log"
        tail -20 "$LOG_DIR/openocd_gdb.log"
        exit 1
    fi
    sleep 0.5
done
if ! port_listening "$GDB_PORT"; then
    log "HATA: 60 s icinde TCP $GDB_PORT (gdb sunucusu) dinlenmedi"
    exit 1
fi
log "TCP $GDB_PORT dinleniyor (openocd pid $OCD_PID)"

log "$GDB -batch -x $GDB_SCRIPT $ELF -> $LOG_DIR/gdb.log (timeout ${GDB_TIMEOUT} s)"
timeout "$GDB_TIMEOUT" "$GDB" -batch -x "$GDB_SCRIPT" "$ELF" > "$LOG_DIR/gdb.log" 2>&1
GDB_RC=$?
log "gdb cikis kodu: $GDB_RC"

# openocd "monitor shutdown" ile, sim 'Q' ile kendiliginden bitmeli (<=30 s)
OCD_RC="-"; SIM_RC="-"
for i in $(seq 1 30); do
    if [ -n "$OCD_PID" ] && ! kill -0 "$OCD_PID" 2>/dev/null; then
        wait "$OCD_PID"; OCD_RC=$?; OCD_PID=""
        log "openocd kendiliginden bitti (rc=$OCD_RC)"
    fi
    if [ -n "$SIM_PID" ] && ! kill -0 "$SIM_PID" 2>/dev/null; then
        wait "$SIM_PID"; SIM_RC=$?; SIM_PID=""
        log "sim kendiliginden bitti (rc=$SIM_RC)"
    fi
    [ -z "$OCD_PID" ] && [ -z "$SIM_PID" ] && break
    sleep 1
done
[ -n "$OCD_PID" ] && log "openocd 30 s icinde bitmedi"
[ -n "$SIM_PID" ] && log "sim 30 s icinde bitmedi"
cleanup
T1=$(date +%s)

echo "---------------- $LOG_DIR/gdb.log: GDB isaretleri, breakpoint, register/bellek satirlari ----------------"
grep -aE '== GDB:|^-- |^Breakpoint|^Continuing|^pc |^ra |^sp |^a0 |^pc = |^\$[0-9]+ = |^0x[0-9a-fA-F]+:|^=> |^ +0x[0-9a-fA-F]+ <|^0x[0-9a-fA-F]+ in |^monitor shutdown:|Cannot|Error|error|warning|timed out|Remote' "$LOG_DIR/gdb.log"
echo "---------------- $LOG_DIR/openocd_gdb.log: TAP / gdb sunucusu / hata ----------------"
grep -aE 'tap/device|hart 0|gdb connections|accepting|breakpoint|Error|error|unexpectedly|shutdown|quit' "$LOG_DIR/openocd_gdb.log"
echo "---------------- $LOG_DIR/sim_gdb.log: UART / SimJTAG ----------------"
grep -aE 'JTAG-OPENOCD|remote_bitbang|Listening|Verilator' "$LOG_DIR/sim_gdb.log"
echo "----------------------------------------------------------------------"

# --- verdict ---
ok_bp=0; ok_pc=0; ok_a0=0; ok_mem=0; ok_done=0
bp_line=$(grep -aE '^Breakpoint 1, .*main' "$LOG_DIR/gdb.log" | head -1)
[ -n "$bp_line" ] && ok_bp=1
# "Breakpoint 1, " satirindan sonraki ilk "pc = 0x..." satiri 0x0001xxxx olmali
bp_pc=$(awk 'f && /^pc = 0x/ { print $3; exit } /^Breakpoint 1, / { f = 1 }' "$LOG_DIR/gdb.log")
echo "$bp_pc" | grep -qE '^0x0001[0-9a-fA-F]{4}$' && ok_pc=1
grep -aq '0x0badcafe' "$LOG_DIR/gdb.log" && ok_a0=1
# x/4xw satiri: "0x21000:<TAB>0x600df00d ..."
grep -aE '^0x[0-9a-fA-F]+:' "$LOG_DIR/gdb.log" | grep -aq '0x600df00d' && ok_mem=1
grep -aq '== GDB: done ==' "$LOG_DIR/gdb.log" && ok_done=1

log "sure: $((T1 - T0)) s duvar saati (gdb rc=$GDB_RC, openocd rc=$OCD_RC, sim rc=$SIM_RC)"
if [ "$ok_bp" = 1 ] && [ "$ok_pc" = 1 ] && [ "$ok_a0" = 1 ] && [ "$ok_mem" = 1 ] && [ "$ok_done" = 1 ]; then
    log "VERDICT: PASS - '$bp_line', pc=$bp_pc, a0 geri okuma 0x0badcafe, bellek 0x00021000 geri okuma 0x600df00d, '== GDB: done ==' (logs/jtag/gdb.log)"
    exit 0
fi
log "VERDICT: FAIL - bp=$ok_bp pc=$ok_pc ($bp_pc) a0=$ok_a0 mem=$ok_mem done=$ok_done (gdb rc=$GDB_RC); bkz $LOG_DIR/gdb.log, $LOG_DIR/openocd_gdb.log"
exit 1
