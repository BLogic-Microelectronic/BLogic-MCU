#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# link.ld .srodata/.sdata/.sbss toplamazsa bu bolumler bellege yuklenmez.
# GCC kucuk (varsayilan <8 B) salt-okunur nesneleri oraya koyar; degisken
# indisli okuma 0 doner, sabit indisli okuma derleyici immediate'ina
# katlandigi icin dogru calisir - bu yuzden hata sessizdir.
# 9 Agustos 2026'da ai_uart_load_test.c'deki MAGIC[4] boyle kayboldu.
set -u
elf="${1:-build/test.elf}"
[ -f "$elf" ] || { echo "[SRODATA] $elf yok, atlandi"; exit 0; }
n=$(riscv32-unknown-elf-size -A "$elf" 2>/dev/null | awk '/\.s(rodata|data|bss)/{s+=$2} END{print s+0}')
if [ "$n" -ne 0 ]; then
    echo "[SRODATA] HATA: $elf icinde $n bayt .srodata/.sdata/.sbss var."
    echo "          link.ld bunlari toplamiyor -> bellege yuklenmiyor."
    riscv32-unknown-elf-size -A "$elf" | grep -E '\.s(rodata|data|bss)'
    exit 1
fi
echo "[SRODATA] OK - toplanmamis kucuk bolum yok"
