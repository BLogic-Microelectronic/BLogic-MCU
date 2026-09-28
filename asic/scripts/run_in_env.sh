#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

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

# nix etkilesimsiz kabukta PATH'te olmayabilir (juri paneli ve 'make' -> bash -c
# ~/.profile okumaz); standart kurulum dizinlerini ekle. 6 Eylul 2026: asic-elab
# panelden ve betikten "LibreLane bulunamadi" ile FAIL vermisti, ortam yerindeydi.
for _d in /nix/var/nix/profiles/default/bin "$HOME/.nix-profile/bin"; do
  if [ -d "$_d" ]; then case ":$PATH:" in *":$_d:"*) ;; *) PATH="$_d:$PATH" ;; esac; fi
done
export PATH
if ! command -v nix >/dev/null 2>&1; then
    echo "HATA: ne 'librelane' ne 'nix' PATH'te bulundu." >&2
    echo "Kurulum icin bkz. asic/README.md Bolum 9.3 ve environment/versions.txt" >&2
    exit 1
fi

exec nix develop "path:$ASIC_DIR/environment" --accept-flake-config --command "$@"
