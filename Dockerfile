# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
#
# BLogic MCU simulation environment.
#
#   docker run --rm ghcr.io/blogic-microelectronic/blogic-mcu              # short demo
#   docker run --rm ghcr.io/blogic-microelectronic/blogic-mcu make help    # any make target
#   docker run --rm -it ghcr.io/blogic-microelectronic/blogic-mcu bash
#
# The image contains Verilator 5.052, Spike, the xPack RISC-V GCC toolchain and the
# repository sources. The large ASIC flow outputs and reports are not included.

# ---------------------------------------------------------------------------
# Stage 1: build the toolchain with the same script the CI uses
# ---------------------------------------------------------------------------
FROM ubuntu:24.04 AS toolchain

ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get install -y --no-install-recommends \
      build-essential autoconf flex bison help2man perl python3 git curl ca-certificates \
      libfl-dev zlib1g-dev ccache libgoogle-perftools-dev numactl \
      device-tree-compiler libboost-regex-dev libboost-system-dev \
 && rm -rf /var/lib/apt/lists/*

COPY .github/scripts/build_tools.sh /tmp/build_tools.sh
RUN TOOLS_DIR=/opt/tools bash /tmp/build_tools.sh

# The project builds only for rv32i and rv32imc (ilp32). The other multilibs of the
# xPack toolchain take about 1.5 GB and are removed.
RUN cd /opt/tools/riscv \
 && for d in riscv-none-elf/lib lib/gcc/riscv-none-elf/*; do \
      find "$d" -mindepth 1 -maxdepth 1 -type d -name 'rv*' \
           ! -name rv32i ! -name rv32imc -exec rm -rf {} +; \
    done \
 && rm -rf share/doc share/info share/man bin/riscv-none-elf-gdb* \
 && bin/riscv-none-elf-gcc -march=rv32imc -mabi=ilp32 -print-multi-directory | grep -qx rv32imc/ilp32

# ---------------------------------------------------------------------------
# Stage 2: runtime image
# ---------------------------------------------------------------------------
FROM ubuntu:24.04

LABEL org.opencontainers.image.title="BLogic MCU" \
      org.opencontainers.image.description="RISC-V microcontroller with a keyword-spotting accelerator: simulation environment" \
      org.opencontainers.image.source="https://github.com/BLogic-Microelectronic/BLogic-MCU" \
      org.opencontainers.image.licenses="GPL-3.0-only"

ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get update \
 && apt-get install -y --no-install-recommends \
      build-essential perl python3 python3-numpy ccache git ca-certificates \
      libfl-dev zlib1g-dev libgoogle-perftools-dev numactl \
      device-tree-compiler z3 openocd gdb-multiarch iproute2 \
 && rm -rf /var/lib/apt/lists/*

COPY --from=toolchain /opt/tools /opt/tools
ENV PATH=/opt/tools/verilator-5.052/bin:/opt/tools/spike/bin:/opt/tools/riscv/bin32:/opt/tools/riscv/bin:$PATH

WORKDIR /blogic-mcu
COPY . .

# Build the SoC simulation model once, so that the demo starts without waiting
# for Verilator and the C++ compiler.
RUN make verilate && rm -rf logs

CMD ["bash", "docker/demo.sh"]
