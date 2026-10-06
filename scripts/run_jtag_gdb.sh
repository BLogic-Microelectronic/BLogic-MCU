#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# run_jtag_gdb.sh  -  gdb (OpenOCD :3333) ucdan-uca demo kosucusu (JTAG teslim cipinin parcasi; Gun 3)
# ============================================
# Akis:
#   1. depo kokune gec; obj_dir_jtag_ocd/jtag_openocd_sim ya da build/test.elf yoksa,
#      kaynaklardan biri ikiliden yeniyse (scripts/jtag_sim_stale.sh)
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
# + G-06 (3 Eylul): cikis kodlari da kriter -> gdb rc==0, openocd rc==0 (143 =
#   SIGTERM artik FAIL), sim rc==0; gdb.log'da "not supported"/"Error in sourced
#   command file"/"Protocol error with Rcmd" YOK; sim_gdb.log'da SimJTAG satiri var.
#   OpenOCD'yi gdb degil bu betik kapatir (telnet :4444 "shutdown").
#   GDB ikilisi degistirilebilir: GDB=riscv32-unknown-elf-gdb make jtag-gdb
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
OCD_TELNET_PORT=4444
GDB_TIMEOUT=600
GDB=${GDB:-gdb-multiarch}
SIM_PID=""
OCD_PID=""

export PATH=/opt/riscv/bin:$PATH

log() { echo "[JTAG-GDB] $*"; }

port_listening() { ss -ltn 2>/dev/null | awk '{print $4}' | grep -q ":$1\$"; }

kill_pid() {
    # $1: pid, $2: ad
    if [ -n "$1" ] && kill -0 "$1" 2>/dev/null; then
        log "$2 (pid $1) still running, stopping it"
        kill "$1" 2>/dev/null
        sleep 1
        kill -9 "$1" 2>/dev/null
        wait "$1" 2>/dev/null
    fi
}
cleanup() { kill_pid "$OCD_PID" openocd; OCD_PID=""; kill_pid "$SIM_PID" sim; SIM_PID=""; }
trap cleanup EXIT

for t in openocd "$GDB" ss timeout awk md5sum; do
    command -v "$t" >/dev/null 2>&1 || { log "ERROR: '$t' was not found"; exit 1; }
done

# sim binary + ELF birlikte uretilir (jtag-openocd-build: sw -> build/test.elf,
# hex'ler Mdir'e kopyalanir); ELF sembolleri (break main) simdeki firmware ile
# ayni derlemeden olmali.
need_build=0
[ -x "$SIM_DIR/$SIM_BIN" ] || { log "$SIM_DIR/$SIM_BIN does not exist"; need_build=1; }
[ -f "$ELF" ] || { log "$ELF does not exist"; need_build=1; }
if [ "$need_build" = 0 ] && [ -f build/instr_mem.hex ] && [ -f "$SIM_DIR/firmware.hex" ]; then
    h1=$(md5sum < build/instr_mem.hex); h2=$(md5sum < "$SIM_DIR/firmware.hex")
    [ "$h1" = "$h2" ] || { log "build/instr_mem.hex differs from $SIM_DIR/firmware.hex (program and simulation do not match)"; need_build=1; }
fi
# 6 Eylul: kaynaklardan (RTL, TB, firmware) biri ikiliden yeniyse de derle
# (scripts/jtag_sim_stale.sh; bayat ikili OpenOCD demosunda run=0 FAIL vermisti).
. scripts/jtag_sim_stale.sh
if [ "$need_build" = 0 ] && jtag_sim_stale "$SIM_DIR/$SIM_BIN"; then
    log "Simulation binary is out of date: $JTAG_SIM_STALE_WHY"
    need_build=1
fi
if [ "$need_build" = 1 ]; then
    log "Building: make jtag-openocd-build"
    make jtag-openocd-build || { log "ERROR: build failed"; exit 1; }
fi

mkdir -p "$LOG_DIR"

for p in "$SIM_PORT" "$GDB_PORT"; do
    if port_listening "$p"; then
        log "ERROR: TCP port $p is already in use (an old simulation or openocd?): pkill -f '^[.]/jtag_openocd_sim' ; pkill openocd"
        exit 1
    fi
done

T0=$(date +%s)
log "Starting the simulation: $SIM_DIR/$SIM_BIN (log: $LOG_DIR/sim_gdb.log)"
(cd "$SIM_DIR" && exec "./$SIM_BIN") > "$LOG_DIR/sim_gdb.log" 2>&1 &
SIM_PID=$!

# port dinlenene kadar bekle (120 x 0.5 s = 60 s)
for i in $(seq 1 120); do
    if port_listening "$SIM_PORT"; then break; fi
    if ! kill -0 "$SIM_PID" 2>/dev/null; then
        log "ERROR: the simulation ended early, see $LOG_DIR/sim_gdb.log"
        tail -20 "$LOG_DIR/sim_gdb.log"
        exit 1
    fi
    sleep 0.5
done
if ! port_listening "$SIM_PORT"; then
    log "ERROR: nothing listened on TCP port $SIM_PORT within 60 s"
    exit 1
fi
log "Simulation listening on TCP port $SIM_PORT (pid $SIM_PID)"

log "Starting openocd -f $OCD_CFG in the background (log: $LOG_DIR/openocd_gdb.log)"
openocd -f "$OCD_CFG" > "$LOG_DIR/openocd_gdb.log" 2>&1 &
OCD_PID=$!

for i in $(seq 1 120); do
    if port_listening "$GDB_PORT"; then break; fi
    if ! kill -0 "$OCD_PID" 2>/dev/null; then
        log "ERROR: openocd ended early, see $LOG_DIR/openocd_gdb.log"
        tail -20 "$LOG_DIR/openocd_gdb.log"
        exit 1
    fi
    sleep 0.5
done
if ! port_listening "$GDB_PORT"; then
    log "ERROR: the gdb server did not listen on TCP port $GDB_PORT within 60 s"
    exit 1
fi
log "gdb server listening on TCP port $GDB_PORT (openocd pid $OCD_PID)"

log "Running $GDB -batch -x $GDB_SCRIPT $ELF (log: $LOG_DIR/gdb.log, timeout ${GDB_TIMEOUT} s)"
timeout "$GDB_TIMEOUT" "$GDB" -batch -x "$GDB_SCRIPT" "$ELF" > "$LOG_DIR/gdb.log" 2>&1
GDB_RC=$?
log "gdb exit code: $GDB_RC"

# G-06: OpenOCD'yi ARTIK GDB KAPATMIYOR (demo_gdb.gdb'deki python blogu bu
# ortamdaki gdb'de hic kosmuyordu -> gdb rc=1, openocd SIGTERM rc=143).
# Kapatmayi kosucu yapar: telnet komut portuna (varsayilan 4444) "shutdown".
# Bash'in /dev/tcp'si kullanilir (nc bagimliligi yok); alt kabukta acilir ki
# port kapaliysa kosucu olmesin.
if [ -n "$OCD_PID" ] && kill -0 "$OCD_PID" 2>/dev/null; then
    if ( printf 'shutdown\n' > "/dev/tcp/127.0.0.1/$OCD_TELNET_PORT" ) 2>/dev/null; then
        log "Sent 'shutdown' to openocd on telnet port $OCD_TELNET_PORT"
    else
        log "WARNING: could not connect to openocd on telnet port $OCD_TELNET_PORT to send shutdown"
    fi
fi

# openocd "shutdown" ile, sim 'Q' ile kendiliginden bitmeli (<=30 s)
OCD_RC="-"; SIM_RC="-"
for i in $(seq 1 30); do
    if [ -n "$OCD_PID" ] && ! kill -0 "$OCD_PID" 2>/dev/null; then
        wait "$OCD_PID"; OCD_RC=$?; OCD_PID=""
        log "openocd finished by itself (exit code $OCD_RC)"
    fi
    if [ -n "$SIM_PID" ] && ! kill -0 "$SIM_PID" 2>/dev/null; then
        wait "$SIM_PID"; SIM_RC=$?; SIM_PID=""
        log "Simulation finished by itself (exit code $SIM_RC)"
    fi
    [ -z "$OCD_PID" ] && [ -z "$SIM_PID" ] && break
    sleep 1
done
[ -n "$OCD_PID" ] && log "openocd did not finish within 30 s"
[ -n "$SIM_PID" ] && log "Simulation did not finish within 30 s"
cleanup
T1=$(date +%s)

echo "---------------- $LOG_DIR/gdb.log: gdb markers, breakpoint, register and memory lines ----------------"
grep -aE '== GDB:|^-- |^Breakpoint|^Continuing|^pc |^ra |^sp |^a0 |^pc = |^\$[0-9]+ = |^0x[0-9a-fA-F]+:|^=> |^ +0x[0-9a-fA-F]+ <|^0x[0-9a-fA-F]+ in |^monitor shutdown:|Cannot|Error|error|warning|timed out|Remote' "$LOG_DIR/gdb.log"
echo "---------------- $LOG_DIR/openocd_gdb.log: TAP, gdb server, errors ----------------"
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
# G-06 ek kriterler: cikis kodlari ve gdb betiginin hatasiz kosmasi.
# Eski surumde gdb rc=1 / openocd rc=143 (SIGTERM) oldugu halde VERDICT PASS
# veriyordu; artik bunlar da denetlenir.
ok_rc=0; ok_clean=0; ok_simexit=0
[ "$GDB_RC" = 0 ] && [ "$OCD_RC" = 0 ] && [ "$SIM_RC" = 0 ] && ok_rc=1
grep -aqE 'not supported in this copy of GDB|Error in sourced command file|Protocol error with Rcmd' \
    "$LOG_DIR/gdb.log" || ok_clean=1
grep -aq 'SimJTAG' "$LOG_DIR/sim_gdb.log" && ok_simexit=1

log "Wall-clock time: $((T1 - T0)) s (exit codes: gdb $GDB_RC, openocd $OCD_RC, simulation $SIM_RC)"
if [ "$ok_bp" = 1 ] && [ "$ok_pc" = 1 ] && [ "$ok_a0" = 1 ] && [ "$ok_mem" = 1 ] && \
   [ "$ok_done" = 1 ] && [ "$ok_rc" = 1 ] && [ "$ok_clean" = 1 ] && [ "$ok_simexit" = 1 ]; then
    log "VERDICT: PASS: '$bp_line', pc=$bp_pc, register a0 read back 0x0badcafe, memory at 0x00021000 read back 0x600df00d, gdb script completed without errors, exit codes gdb/openocd/simulation 0/0/0 ($GDB; log: $LOG_DIR/gdb.log)"
    exit 0
fi
log "VERDICT: FAIL (1 = check passed): bp=$ok_bp pc=$ok_pc ($bp_pc) a0=$ok_a0 mem=$ok_mem done=$ok_done rc=$ok_rc (gdb=$GDB_RC openocd=$OCD_RC sim=$SIM_RC) clean=$ok_clean simexit=$ok_simexit; see $LOG_DIR/gdb.log and $LOG_DIR/openocd_gdb.log"
exit 1
