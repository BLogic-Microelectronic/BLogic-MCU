#!/usr/bin/env bash
# run_in_env.sh - komutu LibreLane ortaminda calistirir.
#
# Iki durum:
#   1) Kullanici zaten `nix develop` kabugunun icindeyse (librelane PATH'te)
#      komut dogrudan calisir - cift sarmalama yok.
#   2) Degilse komut, asic/environment/ altindaki flake ile acilan Nix
#      ortaminda calistirilir (versions.txt'deki kurulum yontemiyle ayni).
#
# Etkilesimsizdir (Bolum 8); mutlak yol icermez, asic/ koku betigin
# konumundan bulunur.
set -euo pipefail

ASIC_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ASIC_DIR"

if command -v librelane >/dev/null 2>&1; then
    exec "$@"
fi

if ! command -v nix >/dev/null 2>&1; then
    echo "HATA: ne 'librelane' ne 'nix' PATH'te bulundu." >&2
    echo "Kurulum icin bkz. asic/README.md Bolum 9.3 ve environment/versions.txt" >&2
    exit 1
fi

exec nix develop "path:$ASIC_DIR/environment" --accept-flake-config --command "$@"
