# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.

{
  # BLogic MCU - ASIC akis ortami
  # DDK "2026 Final Ciktilar" bolum 1.4 geregi: Nix tabanli LibreLane ortami.
  # Referans surum 3.0.6 (bolum 1.1); girdi dogrudan o etikete sabitlenmistir.
  description = "BLogic MCU ASIC akisi - LibreLane 3.0.6 (DDK referans surumu)";

  # Ikili onbellek: LibreLane 3.0.6 resmi kurulum dokumanindan birebir.
  nixConfig = {
    extra-substituters = [ "https://nix-cache.fossi-foundation.org" ];
    extra-trusted-public-keys = [ "nix-cache.fossi-foundation.org:3+K59iFwXqKsL7BNu6Guy0v+uTlwsxYQxjspXzqLYQs=" ];
  };

  inputs = {
    librelane.url = "github:librelane/librelane/3.0.6";
  };

  outputs = { self, librelane, ... }:
    let
      pkgs = librelane.legacyPackages.x86_64-linux;
    in {
      # librelane-shell: araclarin tamami + librelane. gnumake eklendi ki
      # `make asic_run` (bolum 8 zorunlu otomasyonu) hicbir host paketine
      # bagimli olmadan `nix develop` icinde calissin (minimal imajlarda make yok).
      devShells.x86_64-linux.default = pkgs.librelane-shell.override {
        extra-packages = [ pkgs.gnumake ];
      };
    };
}
