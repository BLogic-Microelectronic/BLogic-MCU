#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# wave.sh - open a testbench in the Questa GUI with a ready-made wave window
# ============================================
# usage: verif/questa/wave.sh <test>        (no argument: list the tests)
# Needs vsim on PATH and the firmware bundles under verif/questa/fw
# (committed; regenerate with 'make questa-pack').
cd "$(dirname "$0")/../.." || exit 1
command -v vsim >/dev/null 2>&1 || { echo "vsim not found on PATH (Questa <install>/bin or linux_x86_64)"; exit 1; }
if [ -z "${1:-}" ]; then
    echo "usage: $0 <test>"
    grep -oE "^q_(def|soc) +[a-z0-9_]+" verif/questa/tests.tcl | awk '{print "  " $2}'
    exit 1
fi
exec vsim -gui -do "do verif/questa/run_test.do $1"
