#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
#
# The large outputs of the delivered ASIC run (GDS, ODB, Magic database, DEF, SDF,
# SPEF, SPICE and netlists, about 480 MB compressed) are not stored in the repository. They are
# attached to the release as asic-results-<tag>.tar.gz. This script downloads that
# archive, unpacks it into asic/results/ and checks every file against the SHA-256
# values committed in asic/results/**/*.sha256.
#
#   bash asic/fetch_results.sh            # release v1.0
#   bash asic/fetch_results.sh v1.0
#   bash asic/fetch_results.sh --verify   # only check files that are already present
set -euo pipefail
cd "$(dirname "$0")/.."

REPO="BLogic-Microelectronic/BLogic-MCU"

verify() {
    # Each .sha256 file holds the hash of the uncompressed file; the file itself is
    # stored gzipped, and the ODB database is additionally split into parts.
    local fail=0 n=0 sha path hash want
    while IFS= read -r sha; do
        read -r want path < "$sha"
        path="asic/$path"
        if [ -f "$path.gz" ]; then
            hash=$(gunzip -c "$path.gz" | sha256sum | cut -d' ' -f1)
        elif compgen -G "$path.gz.part*" >/dev/null; then
            hash=$(cat "$path".gz.part* | gunzip -c | sha256sum | cut -d' ' -f1)
        elif [ -f "$path" ]; then
            hash=$(sha256sum "$path" | cut -d' ' -f1)
        else
            echo "missing  $path"; fail=1; continue
        fi
        n=$((n + 1))
        if [ "$hash" = "$want" ]; then
            echo "ok       $path"
        else
            echo "MISMATCH $path"; fail=1
        fi
    done < <(find asic/results -name '*.sha256' ! -path '*/reports/*' | sort)
    if [ "$fail" -ne 0 ]; then
        echo "Verification failed."; return 1
    fi
    echo "All $n files match the committed SHA-256 values."
}

if [ "${1:-}" = "--verify" ]; then
    verify
    exit
fi

TAG="${1:-v1.0}"
URL="${BLOGIC_RESULTS_URL:-https://github.com/$REPO/releases/download/$TAG/asic-results-$TAG.tar.gz}"
archive="asic/asic-results-$TAG.tar.gz"

echo "Downloading $URL"
# -C - resumes an interrupted download when the command is run again.
curl -fL --retry 5 -C - -o "$archive" "$URL"
tar -xzf "$archive"
rm -f "$archive"
verify
