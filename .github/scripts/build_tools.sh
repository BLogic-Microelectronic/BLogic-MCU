#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
#
# Builds the simulation toolchain into $TOOLS_DIR (default ~/tools):
#   verilator-5.052/  Verilator, the version the repository is verified with
#   spike/            Spike ISS, pinned commit (lockstep regression, arch-test)
#   riscv/            xPack RISC-V GCC, plus riscv32-unknown-elf-* links in riscv/bin32
# The CI caches $TOOLS_DIR, so this runs only when the versions below change.
# It can also be run by hand on Ubuntu 24.04 (WSL included) to reproduce the CI setup.
set -euo pipefail

VERILATOR_TAG="${VERILATOR_TAG:-v5.052}"
SPIKE_COMMIT="${SPIKE_COMMIT:-b9d66fb7b64cb989bbab2eff0a54c9eadfe6bfb6}"
XPACK_VER="${XPACK_VER:-13.2.0-2}"
TOOLS_DIR="${TOOLS_DIR:-$HOME/tools}"
JOBS="$(nproc)"

mkdir -p "$TOOLS_DIR"
work="$(mktemp -d)"
trap 'rm -rf "$work"' EXIT

if [ ! -x "$TOOLS_DIR/verilator-5.052/bin/verilator" ]; then
    echo "== Verilator $VERILATOR_TAG"
    git clone -q --depth 1 --branch "$VERILATOR_TAG" https://github.com/verilator/verilator.git "$work/verilator"
    (cd "$work/verilator" && autoconf && ./configure -q --prefix="$TOOLS_DIR/verilator-5.052" \
        && make -s -j"$JOBS" && make -s install)
fi

if [ ! -x "$TOOLS_DIR/spike/bin/spike" ]; then
    echo "== Spike $SPIKE_COMMIT"
    git init -q "$work/spike"
    git -C "$work/spike" fetch -q --depth 1 https://github.com/riscv-software-src/riscv-isa-sim.git "$SPIKE_COMMIT"
    git -C "$work/spike" checkout -q FETCH_HEAD
    mkdir -p "$work/spike/build"
    (cd "$work/spike/build" && ../configure -q --prefix="$TOOLS_DIR/spike" \
        && make -s -j"$JOBS" && make -s install)
    # Debug symbols take the installation from about 1.8 GB to 92 MB; the cache stays small.
    find "$TOOLS_DIR/spike/bin" "$TOOLS_DIR/spike/lib" -type f \( -perm -u+x -o -name '*.so*' \) \
        -exec strip --strip-unneeded {} +
fi

if [ ! -x "$TOOLS_DIR/riscv/bin/riscv-none-elf-gcc" ]; then
    echo "== xPack RISC-V GCC $XPACK_VER"
    url="https://github.com/xpack-dev-tools/riscv-none-elf-gcc-xpack/releases/download/v$XPACK_VER/xpack-riscv-none-elf-gcc-$XPACK_VER-linux-x64.tar.gz"
    curl -fsSL "$url" -o "$work/xpack.tar.gz"
    mkdir -p "$TOOLS_DIR/riscv"
    tar -xzf "$work/xpack.tar.gz" -C "$TOOLS_DIR/riscv" --strip-components=1
fi

# The Makefiles call riscv32-unknown-elf-*; the xPack names its tools riscv-none-elf-*.
mkdir -p "$TOOLS_DIR/riscv/bin32"
for t in gcc g++ ld as objcopy objdump size readelf nm ar; do
    ln -sf "$TOOLS_DIR/riscv/bin/riscv-none-elf-$t" "$TOOLS_DIR/riscv/bin32/riscv32-unknown-elf-$t"
done

echo "== Tools ready in $TOOLS_DIR"
