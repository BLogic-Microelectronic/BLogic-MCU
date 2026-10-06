#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
#
# Default command of the BLogic MCU Docker image. Runs two firmware programs on the
# Verilator model of the SoC and prints a short summary:
#   1. sw/tests/uart_hello.c            boot and UART output
#   2. sw/tests/ai_micro_speech_test.c  one inference on the AI accelerator
# Exits with a non-zero status if either program fails, so the CI can use it as a test.
set -uo pipefail
cd "$(dirname "$0")/.."

IMAGE="ghcr.io/blogic-microelectronic/blogic-mcu"
status=0

kv() { grep -m1 "^$1=" "$2" 2>/dev/null | cut -d= -f2-; }
num() { echo "$1" | sed ':a;s/\B[0-9]\{3\}\>/,&/;ta'; }

run_fw() {
    # $1 firmware source, $2 test name; output of make goes to logs/demo_<name>.log
    mkdir -p logs
    make -s -f Makefile.verilator sim FW_SRC="$1" > "logs/demo_$2.log" 2>&1
}

echo "BLogic MCU: RISC-V microcontroller with a keyword-spotting accelerator"
echo "RTL simulation with $(verilator --version | cut -d' ' -f1-2)"
echo

# 1. Boot and UART -----------------------------------------------------------
echo "[1/2] Boot and UART output"
echo "      firmware : sw/tests/uart_hello.c"
run_fw sw/tests/uart_hello.c uart_hello
log=logs/sim/uart_hello
if [ "$(kv result $log/result.log)" = "PASS" ]; then
    echo "      UART_0   : $(head -n1 $log/uart.log)"
    echo "      result   : PASS ($(num "$(kv cycles $log/result.log)") clock cycles simulated)"
else
    echo "      result   : FAIL (see logs/demo_uart_hello.log)"
    status=1
fi
echo

# 2. Inference on the accelerator ---------------------------------------------
echo "[2/2] Keyword spotting on the AI accelerator (about 30 seconds)"
echo "      firmware : sw/tests/ai_micro_speech_test.c"
echo "      input    : audio features of a recorded \"yes\" (TFLite Micro Speech)"
run_fw sw/tests/ai_micro_speech_test.c ai_micro_speech_test
log=logs/sim/ai_micro_speech_test
cls=$(grep -o 'argmax=[0-9] ([a-z]*)' $log/uart.log 2>/dev/null | head -n1 \
      | sed -E 's/argmax=([0-9]) \(([a-z]*)\)/class \1 ("\2")/')
if [ "$(kv result $log/result.log)" = "PASS" ] && grep -q '^\[AI\] PASS' $log/uart.log; then
    echo "      output   : ${cls:-?}, as expected"
    echo "      result   : PASS ($(num "$(kv cycles $log/result.log)") clock cycles simulated, including UART output)"
else
    echo "      result   : FAIL (see logs/demo_ai_micro_speech_test.log)"
    status=1
fi
echo

# Measured figures from the repository ----------------------------------------
perf=verif/perf_summary.txt
if [ -f "$perf" ]; then
    hw=$(awk '/Donanim/ {print $(NF-3)}' "$perf")
    sw=$(awk '/Yazilim/ {print $(NF-3)}' "$perf")
    sp=$(awk '/HIZLANMA/ {print $NF}' "$perf")
    echo "Performance of one inference, measured with 'make soc-perf' (verif/perf_summary.txt):"
    echo "      AI accelerator          : $hw cycles"
    echo "      software on the CV32E40P: $sw cycles"
    echo "      speed-up                : $sp"
    echo
fi

echo "Other targets can be run in the same way, for example:"
echo "      docker run --rm $IMAGE make soc-perf      # repeats the measurement above (about 2 min)"
echo "      docker run --rm $IMAGE make regression    # UART, Spike lockstep and QSPI regression"
echo "      docker run --rm $IMAGE make help          # list of all targets"
echo "      docker run --rm -it $IMAGE bash           # shell inside the environment"

exit "$status"
