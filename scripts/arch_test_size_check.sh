#!/bin/bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# ============================================
# Ostim BLogic Mikroelektronik
# arch_test_size_check.sh  -  arch-test 8KB sigma kontrolu
# ============================================
# Tum rv32 arch-test'leri 8KB link.ld + htif.S ile derlemeyi dener.
set -e
cd "$(dirname "$0")/.."
PROJ=$(pwd)

REPO="$PROJ/verif/arch_tests/riscv-arch-test"
LINK="$PROJ/verif/arch_tests/target/blogic/link.ld"
TGT="$PROJ/verif/arch_tests/target/blogic"
HTIF="$TGT/htif.S"

# env: artik riscv-test-suite/env (eski stil)
ENV_DIR="$REPO/riscv-test-suite/env"
[ -d "$ENV_DIR" ] || ENV_DIR=$(find "$REPO" -type d -name env 2>/dev/null | head -1)
[ -z "$ENV_DIR" ] && { echo "[HATA] env dizini yok"; exit 1; }
echo "[INFO] env: $ENV_DIR"

# rv32 test toplama (riscv-test-suite/rv32i_m/<EXT>/src/*.S)
mapfile -t TESTS < <(find "$REPO/riscv-test-suite" -path "*rv32*" -name "*.S" 2>/dev/null \
                        | grep -vE "(env|common|aux|references)" | sort)
[ "${#TESTS[@]}" -eq 0 ] && { echo "[HATA] test bulunamadi"; exit 1; }
echo "[INFO] ${#TESTS[@]} test bulundu"

TMP=/tmp/arch_size_check
rm -rf "$TMP" && mkdir -p "$TMP"
SUMMARY="$TMP/summary.csv"
echo "test_path,ext,name,text,data,bss,total,fits,status" > "$SUMMARY"

FITS=0; OVER=0; FAIL=0
for src in "${TESTS[@]}"; do
    name=$(basename "$src" .S)
    # Extension: .../rv32i_m/I/src/add-01.S  ->  rv32i_m/I
    ext=$(echo "$src" | sed -nE 's|.*riscv-test-suite/([^/]+/[A-Za-z_]+)/src/.*|\1|p')
    [ -z "$ext" ] && ext="unk"
    elf="$TMP/${ext//\//_}_${name}.elf"

    if riscv32-unknown-elf-gcc \
        -march=rv32imc_zicsr_zifencei -mabi=ilp32 \
        -nostdlib -nostartfiles -Os \
        -DTEST_FLEN=0 -DXLEN=32 \
        -I"$TGT" -I"$ENV_DIR" \
        -T "$LINK" "$src" "$HTIF" -o "$elf" \
        2>"$TMP/${ext//\//_}_${name}.cc.log"; then

        read text data bss _ <<< "$(riscv32-unknown-elf-size "$elf" | tail -1)"
        total=$((text + data + bss))
        # .text 8K INST_RAM'e, .data+.bss+.tohost 8K DATA_RAM'e sigmali
        text_room=$((text <= 8192 ? 1 : 0))
        data_room=$(((data + bss + 64) <= 8192 ? 1 : 0))

        if [ "$text_room" = "1" ] && [ "$data_room" = "1" ]; then
            echo "$src,$ext,$name,$text,$data,$bss,$total,Y,FITS" >> "$SUMMARY"
            FITS=$((FITS+1))
        else
            REASON=""
            [ "$text_room" = "0" ] && REASON="TEXT+$((text-8192))B"
            [ "$data_room" = "0" ] && REASON="${REASON}${REASON:+,}DATA+$((data+bss+64-8192))B"
            echo "$src,$ext,$name,$text,$data,$bss,$total,N,$REASON" >> "$SUMMARY"
            OVER=$((OVER+1))
        fi
    else
        echo "$src,$ext,$name,,,,,,COMPILE_FAIL" >> "$SUMMARY"
        FAIL=$((FAIL+1))
    fi
done

echo ""
echo "================================================"
echo " arch-test 8KB envanteri (eski API + HTIF)"
echo "================================================"
printf " Sigan         : %4d\n" "$FITS"
printf " Tasanlar      : %4d\n" "$OVER"
printf " Derlemeyenler : %4d\n" "$FAIL"
printf " Toplam        : %4d\n" "${#TESTS[@]}"
echo "------------------------------------------------"
echo " CSV: $SUMMARY"
echo ""
echo "===== Extension bazinda dagilim ====="
awk -F, 'NR>1 && $2!="" {
    counts[$2","$8]++; total[$2]++;
} END {
    for (k in total) {
        fits = counts[k",Y"]+0;
        over = counts[k",N"]+0;
        printf "  %-25s  toplam=%-3d sigan=%-3d tasan=%-3d\n", k, total[k], fits, over;
    }
}' "$SUMMARY" | sort

echo ""
echo "===== Sigan testlerden ilk 10 ornek ====="
awk -F, 'NR>1 && $8=="Y" {print "  "$3" ("$4"B text + "$5"B data)"}' "$SUMMARY" | head -10

echo ""
echo "===== Tasan testlerden ilk 10 ornek ====="
awk -F, 'NR>1 && $8=="N" {print "  "$3"  ["$9"]"}' "$SUMMARY" | head -10

echo ""
echo "===== Derleme hatasi ornekleri (varsa) ====="
awk -F, 'NR>1 && $9=="COMPILE_FAIL" {print "  "$1}' "$SUMMARY" | head -5
