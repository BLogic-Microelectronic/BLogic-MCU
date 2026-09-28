#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

# guard_large_files.sh - protection against GitHub's 100 MB single-file limit.
# Run AFTER collect_outputs.sh and BEFORE committing. Idempotent.
# For every results/ and reports/ file above 95 MB: record the original SHA-256 -> gzip -9;
# if still above 95 MB, split into 90 MB parts (<name>.gz.partNN) and delete the .gz.
# The reassembly instructions are written to results/BUYUK_DOSYALAR.md.
# git-lfs is DELIBERATELY not used (clean-clone jury requirement, README 9.12).
set -euo pipefail
LIMIT_MB=95
ASIC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ASIC_DIR"
DOC=results/BUYUK_DOSYALAR.md

# reports/ is scanned as well: the node-level voltage files required by
# DDK 5.7 (reports/power/net-<net>.csv) are 137 MB in this design, and
# scanning only results/ would hit the limit and get the push rejected
# (measured, RUN_teslim_2026-08-14).
mapfile -t BIG < <(find results reports -type f ! -name '.gitkeep' ! -name '*.gz' \
    ! -name '*.gz.part*' ! -name '*.sha256' ! -name 'BUYUK_DOSYALAR.md' \
    -size +"${LIMIT_MB}"M | sort)

if [[ ${#BIG[@]} -eq 0 ]]; then
    echo "[guard] no file above ${LIMIT_MB} MB - nothing to do."
    exit 0
fi

{
    echo "# Large-file packaging (GitHub 100 MB limit)"
    echo ""
    echo "The files below were larger than ${LIMIT_MB} MB, so they were compressed"
    echo "with gzip -9; where necessary they were split into 90 MB parts. The"
    echo "original SHA-256 values are in the .sha256 files next to them. To restore:"
    echo ""
    echo '    cat <name>.gz.part* | gunzip > <name>     # if split'
    echo '    gunzip -k <name>.gz                       # if a single part'
    echo ""
    echo "Verification: sha256sum -c <name>.sha256"
    echo ""
} > "$DOC"

for f in "${BIG[@]}"; do
    echo "[guard] $f ($(du -m "$f" | cut -f1) MB)"
    sha256sum "$f" > "$f.sha256"
    gzip -9 "$f"                                   # f -> f.gz
    if [[ $(du -m "$f.gz" | cut -f1) -gt $LIMIT_MB ]]; then
        split -b 90m -d "$f.gz" "$f.gz.part"
        rm "$f.gz"
        n=$(ls "$f".gz.part* | wc -l)
        echo "- \`$f\` -> gzip + split (${n} parts); original SHA-256: \`$f.sha256\`" >> "$DOC"
    else
        echo "- \`$f\` -> \`$f.gz\`; original SHA-256: \`$f.sha256\`" >> "$DOC"
    fi
done

# results/ changed -> regenerate the checksum manifest (same rule as collect)
mkdir -p checksums
( find results -type f ! -name '.gitkeep' -print0 | sort -z | xargs -0 sha256sum ) \
    > checksums/SHA256SUMS
echo "[guard] DONE - $DOC written, checksums/SHA256SUMS regenerated."
