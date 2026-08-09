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

  outputs = { self, librelane, ... }: {
    # librelane.devShells.default = librelane-shell: araclarin tamami + librelane
    devShells.x86_64-linux.default = librelane.devShells.x86_64-linux.default;
  };
}
