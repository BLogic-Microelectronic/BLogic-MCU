#!/usr/bin/env bash
# ============================================
# Ostim BLogic Mikroelektronik
# run_jtag_openocd.sh  -  OpenOCD ucdan-uca demo kosucusu (deneme/jtag, Gun 2)
# ============================================
# Akis:
#   1. depo kokune gec; obj_dir_jtag_ocd/jtag_openocd_sim yoksa make jtag-openocd-build
#   2. simi Mdir icinden arka planda baslat (hex'ler oradan okunur) -> logs/jtag/sim.log
#   3. TCP 9999 dinlenene kadar bekle (ss -ltn, en fazla 60 s)
#   4. timeout 900 openocd -f blogic_sim.cfg -f demo_halt_regs_mem.tcl -> logs/jtag/openocd.log
#   5. simin 'Q' (shutdown) ile kendiliginden bitmesini bekle (30 s), bitmezse oldur
#   6. DEMO isaretleri + register/bellek satirlarini bas; VERDICT PASS/FAIL (cikis 0/1)
# PASS kosulu (openocd.log): "-- a0 geri oku --" sonrasi a0 = 0x12345678,
# mdw ciktisinda cafef00d (buyuk/kucuk harf duyarsiz) ve "== DEMO: done ==".
# Kullanim: make jtag-openocd   (esdegeri: bash scripts/run_jtag_openocd.sh)

set -u

cd "$(dirname "$0")/.." || exit 1
SIM_DIR=obj_dir_jtag_ocd
SIM_BIN=jtag_openocd_sim
LOG_DIR=logs/jtag
OCD_CFG=rtl/debug/openocd/blogic_sim.cfg
OCD_DEMO=rtl/debug/openocd/demo_halt_regs_mem.tcl
OCD_PORT=9999
OCD_TIMEOUT=900
SIM_PID=""

export PATH=/opt/riscv/bin:$PATH

log() { echo "[JTAG-OPENOCD] $*"; }

port_listening() { ss -ltn 2>/dev/null | awk '{print $4}' | grep -q ":${OCD_PORT}\$"; }

kill_sim() {
    if [ -n "$SIM_PID" ] && kill -0 "$SIM_PID" 2>/dev/null; then
        log "sim (pid $SIM_PID) hala calisiyor, olduruluyor"
        kill "$SIM_PID" 2>/dev/null
        sleep 1
        kill -9 "$SIM_PID" 2>/dev/null
        wait "$SIM_PID" 2>/dev/null
    fi
    SIM_PID=""
}
trap kill_sim EXIT

for t in openocd ss timeout awk; do
    command -v "$t" >/dev/null 2>&1 || { log "HATA: '$t' bulunamadi"; exit 1; }
done

if [ ! -x "$SIM_DIR/$SIM_BIN" ]; then
    log "$SIM_DIR/$SIM_BIN yok, derleniyor: make jtag-openocd-build"
    make jtag-openocd-build || { log "HATA: derleme basarisiz"; exit 1; }
fi

mkdir -p "$LOG_DIR"

if port_listening; then
    log "HATA: TCP $OCD_PORT zaten dinleniyor (eski sim?): pkill -f '^[.]/jtag_openocd_sim'"
    exit 1
fi

T0=$(date +%s)
log "sim baslatiliyor: $SIM_DIR/$SIM_BIN -> $LOG_DIR/sim.log"
(cd "$SIM_DIR" && exec "./$SIM_BIN") > "$LOG_DIR/sim.log" 2>&1 &
SIM_PID=$!

# port dinlenene kadar bekle (120 x 0.5 s = 60 s)
for i in $(seq 1 120); do
    if port_listening; then break; fi
    if ! kill -0 "$SIM_PID" 2>/dev/null; then
        log "HATA: sim erken bitti, bkz $LOG_DIR/sim.log"
        tail -20 "$LOG_DIR/sim.log"
        exit 1
    fi
    sleep 0.5
done
if ! port_listening; then
    log "HATA: 60 s icinde TCP $OCD_PORT dinlenmedi"
    exit 1
fi
log "TCP $OCD_PORT dinleniyor (sim pid $SIM_PID)"

log "openocd -f $OCD_CFG -f $OCD_DEMO -> $LOG_DIR/openocd.log (timeout ${OCD_TIMEOUT} s)"
timeout "$OCD_TIMEOUT" openocd -f "$OCD_CFG" -f "$OCD_DEMO" > "$LOG_DIR/openocd.log" 2>&1
OCD_RC=$?
log "openocd cikis kodu: $OCD_RC"

# sim 'Q' ile kendiliginden bitmeli (SimJTAG exit -> $finish), en fazla 30 s
SIM_RC="-"
SIM_EXITED=0
for i in $(seq 1 30); do
    if ! kill -0 "$SIM_PID" 2>/dev/null; then SIM_EXITED=1; break; fi
    sleep 1
done
if [ "$SIM_EXITED" = 1 ]; then
    wait "$SIM_PID"
    SIM_RC=$?
    SIM_PID=""
    log "sim kendiliginden bitti (rc=$SIM_RC)"
else
    log "sim 30 s icinde bitmedi"
    kill_sim
fi
T1=$(date +%s)

echo "---------------- $LOG_DIR/openocd.log: DEMO isaretleri, register/bellek satirlari ----------------"
grep -aE '== DEMO:|^-- |\(/[0-9]+\):|^0x[0-9a-fA-F]{8}:|Error|error|timed out' "$LOG_DIR/openocd.log"
echo "---------------- $LOG_DIR/sim.log: UART / SimJTAG ----------------"
grep -aE 'JTAG-OPENOCD|remote_bitbang|Listening|Verilator' "$LOG_DIR/sim.log"
echo "----------------------------------------------------------------------"

# --- verdict ---
ok_a0=0; ok_mem=0; ok_done=0
# "-- a0 geri oku --" isaretinden sonraki ilk a0 satiri 0x12345678 olmali
awk 'f && /^a0 \(\/32\):/ { print; exit } /-- a0 geri oku --/ { f = 1 }' "$LOG_DIR/openocd.log" \
    | grep -q "0x12345678" && ok_a0=1
grep -aiq "cafef00d" "$LOG_DIR/openocd.log" && ok_mem=1
grep -aq "== DEMO: done ==" "$LOG_DIR/openocd.log" && ok_done=1

log "sure: $((T1 - T0)) s duvar saati (openocd rc=$OCD_RC, sim rc=$SIM_RC)"
if [ "$ok_a0" = 1 ] && [ "$ok_mem" = 1 ] && [ "$ok_done" = 1 ]; then
    log "VERDICT: PASS - a0 geri okuma 0x12345678, mdw cafef00d, '== DEMO: done ==' (logs/jtag/)"
    exit 0
fi
log "VERDICT: FAIL - a0=$ok_a0 mem=$ok_mem done=$ok_done (openocd rc=$OCD_RC); bkz $LOG_DIR/openocd.log"
exit 1
