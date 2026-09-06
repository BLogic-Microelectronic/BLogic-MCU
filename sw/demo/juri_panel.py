#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# juri_panel.py - Yarisma gunu juri veri paneli (GUI)
# ============================================
# Amac: jurinin verdigi oznitelik dosyasini (format ne olursa olsun) secip
# tek tusla karta akitmak, sonuclari canli ve buyuk gostermek.
#
# Protokol send_vector.py ile BIREBIR aynidir (BLG1 + toplam-saglama +
# 0xFF onek + 'v' el sikismasi); firmware tarafinda degisiklik gerekmez.
# Cevap ayristirma kart_sweep.py ile aynidir: "class = <ad>  HW cycle = <n>".
#
# Desteklenen girdi bicimleri (otomatik algilama):
#   .bin  : N x 1960 bayt ardisik int8
#   .npy  : int8/uint8 dizi, [N,1960] veya [N,49,40] (numpy gerekir)
#   .csv/.txt : satir basina 1960 sayi (virgul/bosluk), -128..127 ya da 0..255
#   .hex  : satir basina 8 haneli word (golden_vectors bicimi), 1 ya da N vektor (1960 bayt katlari)
#   klasor: icindeki dosyalar tek tek (yukaridaki bicimlerle)
#
# "Random sweep & stress tests" bolumu kart_sweep.py juri provasini panele
# tasir: AYNI ornek ureteci + AYNI bit-exact SW referansi (run_accuracy_window,
# sweep basinda lazy import) ve BLG1 protokolunun dayaniklilik testleri (a-g).
#
# Arayuz uc sekmedir, log hepsinin altinda ortaktir:
#   "Board demo"                kart: bitstream, baglanti, juri dosyasi, tarama/stres
#   "Verification suite (make)" 39 make hedefi tablodan secilip WSL'de kosar
#   "Questa waves"              verif/questa akisinin 21 testi: secilen test Questa
#                               GUI'sinde hazir dalga penceresiyle acilir (dalga
#                               gruplari + ek sinyaller panelden secilir) ya da
#                               headless (vsim -c) kosup PASS/FAIL'i loga yazar
#
# Kullanim:  python sw/demo/juri_panel.py
# Kuru test: python sw/demo/juri_panel.py --selftest
#            (PANEL_QUESTA_LIVE=1 ile uart_stp gercekten vsim -c'de kosar)
# Arayuz:    python sw/demo/juri_panel.py --gui-smoke   (kurar, 1.5 s sonra kapanir)
#            (kartsiz: FakeSerial firmware taklidi ile Kart, stres testleri,
#             N=45 rastgele tarama; tkinter/pyserial gerekmez)
# ============================================
import argparse
import glob
import os
import queue
import random
import re
import shutil
import struct
import subprocess
import sys
import tempfile
import textwrap
import threading
import time

REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))


def vivado_bul():
    adaylar = sorted(glob.glob(r"C:\Xilinx\Vivado\*\bin\vivado.bat"))
    return adaylar[-1] if adaylar else None

MAGIC = b"BLG1"
VEKTOR_BOY = 1960          # 49x40 int8, firmware siniri (AI_INPUT_MAX)
ONEK = b"\xff" * 8         # hat copu icin dolgu (send_vector.py --preamble)
SINIF_AD = ["silence", "unknown", "yes", "no"]
SINIF_RENK = {"yes": "#1f7a3f", "no": "#b02a2a",
              "unknown": "#b45309", "silence": "#5a6472"}


# ---------------- dogrulama paketi: Makefile hedefleri panelden -------------
# Panel Windows'ta kosar, make hedefleri WSL'deki depoda kosturulur (wsl.exe).
# Katalog = make test-all'in 18 bileseni + kapilar/fiziksel; aciklamalar kok
# README 9.2 ile ayni. Her hedef kendi PASS/FAIL satirini basar ve cikis
# koduyla (0/1) sonucu bildirir; panel ikisini de kullanir.
MAKE_KATALOG = [
    ("SoC simulation (make test-all, 18 components)", [
        ("regression",      "UART x3 + Spike lockstep x2 + QSPI: 6 firmware tests, protocol checkers"),
        ("uart-baud",       "runtime baud switch 115200 / 1 Mbps / 9600 in one run"),
        ("uart-stp",        "stop bits 1 / 1.5 / 2 on the UART block"),
        ("uart-stream",     "UART_1 stream DMA block, scenarios A-E"),
        ("boot",            "QSPI boot flow through the boot ROM (flash_helloworld)"),
        ("qspi-modes",      "x1 / x2 / x4 + 4-byte addressing against the flash model"),
        ("qspi-err",        "QSPI FIFO / flush / status error paths, 25 checks"),
        ("i2c-sys",         "CPU -> I2C master -> echo slave (NBY/ADR, TX/RX, NACK)"),
        ("ai",              "accelerator standalone: 6 scenarios + 40-sample batch, bit-exact"),
        ("soc-ai",          "SoC-level inference C test (irq17, 459,062 cycles)"),
        ("soc-perf",        "HW vs SW reference inference, speed-up 21.0x"),
        ("soc-ai-irq",      "accelerator interrupt / ISR path"),
        ("soc-timer",       "timer peripheral: count / reload / prescale + irq16"),
        ("soc-strm",        "UART_1 stream DMA at SoC level + irq18"),
        ("arch-test",       "riscv-arch-test I + M, 46 signatures"),
        ("uvm",             "UVM: GPIO, Timer, UART_0, I2C - 8 tests"),
        ("jtag-sim",        "riscv-dbg JTAG subsystem, 17 stages"),
        ("jtag-bridge-sim", "axi_dm_slave unit testbench, 6 scenarios"),
        ("test-all",        "all 18 components above in one run + summary table"),
    ]),
    ("Gates and physical", [
        ("lint",            "asic_top lint on the delivery file list (0 errors)"),
        ("lint-fpga",       "fpga_top lint with the BSCANE2 TAP"),
        ("jtag-equiv",      "isolation proof: defines off == 14 August RTL (73d8dcd)"),
        ("jtag-openocd",    "OpenOCD end-to-end demo on the simulation (needs openocd)"),
        ("jtag-gdb",        "gdb demo over OpenOCD (needs gdb-multiarch)"),
        ("jtag-gates",      "jtag-sim + bridge + lint-fpga + equiv + OpenOCD + gdb"),
        ("asic-sram-sim",   "boot on the delivered OpenRAM macro models"),
        ("asic-top-sim",    "asic_top + 27 macros: flash boot + inference, argmax check"),
        ("coverage",        "SoC line coverage, 15 C tests (report in verif/)"),
    ]),
    ("Other checks and evidence (make test-full runs everything local)", [
        ("test-full",       "test-all + lint, lint-fpga, jtag-gates, asic-sram-sim, asic-top-sim, boot-real, isa-compliance, ai-uart-load"),
        ("boot-real",       "real C firmware boots from flash with .rodata/.data (M3 proof)"),
        ("isa-compliance",  "self-checking ISA compliance C test (DTR section 4)"),
        ("ai-uart-load",    "KF5: unseen vector streamed over UART0, class checked (simulation)"),
        ("ai-uart-load-field", "same at field timing, CPB=434 (~10 M cycles, slow)"),
        ("ai-acc",          "EK-1 accuracy window: generate + simulate + report (40 samples)"),
        ("ai-batch1000",    "1000-sample accuracy window (~4 min)"),
        ("coverage-tb",     "per-module testbench coverage (line / branch)"),
        ("jtag-cov",        "JTAG line coverage report (rtl/debug/sim/)"),
        ("asic-elab",       "sv2v + yosys elaboration gate (needs sv2v / yosys installed)"),
        ("jtag-board",      "OpenOCD on the real Genesys 2 (board attached to WSL via usbipd)"),
    ]),
]
# Her hedefin panelde basilan UZUN aciklamasi: ne kosar, neye bakar, gecme
# olcutu nedir (juri paneli okunur rapor: kok README 9.2 / dogrulama plani 6).
MAKE_ACIKLAMA = {
    "regression": "Six firmware runs on the full SoC model with every AXI / AXI-Lite protocol checker "
        "armed: uart_hello at 115200, 1 Mbps and 9600 baud (the testbench UART decoder must receive "
        "the exact greeting), two Spike ISS lockstep runs (minimal and deep: every retired PC of the "
        "RTL is compared with Spike, the diff must be empty) and the QSPI flash read test (0xAA bytes "
        "from the flash stub). PASS = 6/6 result=PASS and 40/40 protocol interfaces without a violation.",
    "uart-baud": "One firmware reprograms the UART divider three times (CPB 434 -> 50 -> 5208 = 115200 / "
        "1 Mbps / 9600); the testbench receiver follows and must decode BAUD-OK in every phase. "
        "PASS = 3/3 phases.",
    "uart-stp": "Stop-bit field 00 / 01 / 10 / 11 on the bare uart_axil block: start-to-start spacing of 1, "
        "1.5 and 2 stop bits (+216 / +432 clocks) and the hardware guarantee of the stop extension. "
        "PASS = TEST SUCCESS.",
    "uart-stream": "uart_stream_axil DMA block: A basic 16-byte DMA into AI SRAM, B partial word with byte "
        "strobes, C SADR locked while busy, D ABORT then restart, E normal RX / TX with DMA off. "
        "PASS = 5/5 scenarios.",
    "boot": "The boot ROM boots from the QSPI flash model loaded with flash_helloworld: the bootloader "
        "copies the image over QSPI (x1 READ), jumps to it and the firmware prints Hello World! on "
        "UART0. PASS = TEST SUCCESS.",
    "qspi-modes": "Firmware drives the QSPI master in x1 READ, x2 DOR, x4 QOR, 4-byte READ4B, a high "
        "address and back to 3-byte mode against the flash model; every read must return the expected "
        "pattern. PASS = 6/6 (QSPI MODES OK).",
    "qspi-err": "25 self-checks of the QSPI error paths from firmware: FIFO overflow and flush, status "
        "and done flags, address register, 4-byte flag set / clear, address-less and command-only "
        "transfers, x4 writes. PASS = gecen=25 kalan=0.",
    "i2c-sys": "CPU -> AXI-Lite -> i2c_master with an echo-slave model at address 0x42: NBY / ADR "
        "registers, multi-byte TX / RX echo, latch and NACK handling. PASS = TEST SUCCESS (I2C SYS OK).",
    "ai": "Standalone accelerator testbench: preloads weights and biases from golden_vectors, runs "
        "yes_real, no_real and four synthetic inputs, checks argmax and the full 1000-word conv_out "
        "tensor bit-exactly, then a 40-sample batch against the software (TFLite) reference. "
        "PASS = 6/6 scenarios + 40/40 batch, |acc_SW - acc_RTL| = 0.",
    "soc-ai": "The C test ai_micro_speech_test on the SoC: firmware loads the vector into AI SRAM, "
        "starts the accelerator, waits for irq17 and prints the class; the UART decoder must see the "
        "greeting. PASS = result=PASS.",
    "soc-perf": "ai_sw_reference runs the same inference in software on the CPU (9,684,726 cycles) and "
        "compares it with the hardware run (459,016 cycles): speed-up 21.0x, written to "
        "verif/perf_summary.txt. PASS = result=PASS.",
    "soc-ai-irq": "Accelerator interrupt path from firmware: ISR on irq17, DONE flag, clear and re-arm, "
        "a second inference after the ISR. PASS = result=PASS.",
    "soc-timer": "Timer peripheral from firmware: prescaler, auto-reload, count direction, clear, event "
        "counter and the irq16 ISR. PASS = result=PASS.",
    "soc-strm": "UART_1 stream DMA from firmware: received bytes land in memory through the stream "
        "engine and irq18 fires. PASS = result=PASS.",
    "arch-test": "The official riscv-arch-test suite for RV32I and RV32M (46 tests): the signature "
        "region of every test is dumped from DSRAM and compared with the Spike reference signature. "
        "PASS = 46/46 signatures equal.",
    "uvm": "UVM environment (Verilator, verif/uvm-lib) on GPIO, Timer, UART_0 and I2C: a directed and a "
        "constrained-random test per block, scoreboard comparison and the AXI-Lite protocol monitor. "
        "PASS = 8/8 tests, 0 scoreboard mismatches, 0 protocol failures.",
    "jtag-sim": "Pure SystemVerilog bit-bang of the JTAG TAP through 17 stages: IDCODE / DTMCS / DMI, "
        "halt and resume, abstract commands, program buffer, single step and trigger, ndmreset, DMI "
        "busy + dmireset / dmihardreset, cmderr 2 / 3 / 4, SBA tie-off, DM discovery registers, TAP "
        "corner cases, ISRAM write + ebreak, DM-region behaviour. PASS = 17/17.",
    "jtag-bridge-sim": "axi_dm_slave unit testbench with the real dm_top: arbitration (data beats "
        "instruction), R / B channel hold under back-pressure, byte enables, reset with a request in "
        "flight, request / response timing-contract assertions. PASS = 6/6.",
    "test-all": "The 18 components above in sequence, each with its own verdict, then the summary "
        "table (each row of this table is coloured from the summary). PASS = every component PASS.",
    "lint": "Verilator lint of asic_top on the delivery file list (asic/filelist.f, all six defines) "
        "with MODDUP / PINMISSING enabled. PASS = 0 %Error.",
    "lint-fpga": "Verilator lint of fpga_top with the BSCANE2 TAP swapped in and the Xilinx primitive "
        "shells. PASS = 0 %Error.",
    "jtag-equiv": "Preprocesses the RTL with JTAG_DEBUG / FC1_FIX / I2C_SDA_SYNC all off and diffs it "
        "against commit 73d8dcd (the RTL of the 14 August signed run) after the documented "
        "constant-folding rules. PASS = the residual diff equals the stored expected diff in every "
        "file: 0 lines for the four chip files, and for fpga_top only the 12 FPGA-only OLED pin lines.",
    "jtag-openocd": "Builds the SimJTAG / DPI simulation (rebuilt automatically when the binary is older "
        "than any RTL / TB / firmware source), connects OpenOCD 0.12 over remote_bitbang and "
        "runs the demo script: halt, register write / read, program-buffer memory access, step, CSR "
        "read, block read, MMIO write, hardware breakpoint, the negative watchpoint case, reset halt "
        "and reset run. PASS = script verdict + OpenOCD and simulation exit 0. SKIP without openocd.",
    "jtag-gdb": "gdb (riscv32 or gdb-multiarch) over OpenOCD: reset halt, break main, stepi, register "
        "and memory write-back; uses the same simulation binary as jtag-openocd (same rebuild rule). "
        "PASS = gdb, OpenOCD and simulation exit codes all 0. SKIP without gdb.",
    "jtag-gates": "jtag-sim + jtag-bridge-sim + lint-fpga + jtag-equiv, plus jtag-openocd and jtag-gdb "
        "when the tools are installed, with a summary table. PASS = every gate PASS (SKIP allowed for "
        "the two demos).",
    "asic-sram-sim": "The boot flow again, but with the delivered sky130 OpenRAM Verilog models in place "
        "of the behavioural SRAMs (ASIC_SRAM_MACRO). PASS = TEST SUCCESS (Hello World from the macro "
        "models).",
    "asic-top-sim": "GDS-equivalent full-stack run: asic_top (the real top of the GDS) + all 27 macro "
        "instances, flash boot + AI inference; conv_out compared bit-exactly (FNV-1a checksum) and the "
        "FC argmax == 2 check (+CHECK_ARGMAX, the proof that erratum FC-1 is fixed). "
        "PASS = TEST SUCCESS.",
    "coverage": "Rebuilds the SoC with --coverage-line and runs the 15 C tests; writes "
        "verif/coverage_summary.txt (line 90.7 %, branch 88.6 % on 6 September). Report target: "
        "PASS = the run completes.",
    "test-full": "test-all plus lint, lint-fpga, jtag-gates, asic-sram-sim, asic-top-sim, boot-real, "
        "isa-compliance and ai-uart-load, with a second summary table (about 40 minutes). Only the "
        "board demo and the VM flow stay outside. PASS = every line PASS.",
    "boot-real": "A real C firmware with .rodata / .data boots from the flash image: the bootloader "
        "copies the data region to DSRAM (the M3 proof). Negative control: FLASH_DATA=/dev/null must "
        "FAIL. PASS = TEST SUCCESS.",
    "isa-compliance": "Self-checking ISA compliance C test (DTR section 4): arithmetic, logic, "
        "load / store, branches and CSR access from firmware. PASS = result=PASS.",
    "ai-uart-load": "KF5 jury path in simulation: an unseen feature vector (index 784) is streamed into "
        "UART0 by the host model as a BLG1 frame, the firmware validates the checksum, runs the "
        "accelerator and reports the class; the AI SRAM dump is compared with the frame. "
        "PASS = correct class + SRAM match.",
    "ai-uart-load-field": "Same as ai-uart-load at the field baud timing (CPB=434): about 10 M cycles, "
        "slow. PASS = correct class + SRAM match.",
    "ai-acc": "EK-1 accuracy window: generates the 40-sample batch with the TFLite reference, runs the "
        "accelerator testbench and writes the accuracy report. NEEDS a Python venv with "
        "tensorflow or tflite_runtime (README 8.5); the panel puts <repo>/.venv/bin or "
        "~/tflite-venv/bin on PATH when present, otherwise the target stops with "
        "'[HATA] tensorflow/tflite_runtime yok' and FAILs. PASS = |acc_SW - acc_RTL| = 0.",
    "ai-batch1000": "The 1000-sample version of the accuracy window (about 4 minutes); same TFLite venv "
        "requirement as ai-acc. PASS = |acc_SW - acc_RTL| = 0 over 1000 samples.",
    "coverage-tb": "Block-testbench coverage (line / branch) per module, written to "
        "verif/coverage_tb_summary.txt. Report target: PASS = the run completes.",
    "jtag-cov": "jtag-sim rebuilt with --coverage-line; per-module line coverage of the JTAG subsystem "
        "into rtl/debug/sim/. Report target: PASS = the run completes.",
    "asic-elab": "sv2v + yosys elaboration of the delivery configuration as an early synthesis warning; "
        "needs sv2v and yosys installed (normally run on the flow VM). PASS = elaboration without error.",
    "jtag-board": "OpenOCD on the real Genesys 2 through the on-board USB-JTAG (FT2232H attached to WSL "
        "with usbipd, fpga_top.bit loaded, Vivado hw_server closed): halt, registers, memory, step, "
        "breakpoint, reset halt / run. PASS = script verdict.",
}
# spike / verilator dizinleri: etkilesimsiz kabuk ~/.bashrc'yi okumaz
MAKE_PATH_ONEK = "/opt/riscv/bin:/usr/local/bin"
# Ilk cikti satiri PANEL_PGID=<grup>: Stop, grubun tamamini (make + sh +
# verilator simleri) oldurur. Ayni kabuk make'i kosturur, cikis kodu wsl.exe
# uzerinden panele gelir.
# Python venv: ai-acc / ai-batch1000 TensorFlow (ya da tflite-runtime) ister.
# Depo kokundeki .venv (README 8.5) ya da ~/tflite-venv varsa PATH'in basina
# alinir; PANEL_VENV=<yol> satiri panelde bilgi olarak gosterilir.
MAKE_BETIK = ('echo PANEL_PGID=$(ps -o pgid= -p $$ | tr -d " "); '
              'export PATH=%s:$PATH; cd "$1" || exit 1; '
              'for v in "$PWD/.venv/bin" "$HOME/tflite-venv/bin"; do '
              'if [ -x "$v/python3" ]; then export PATH="$v:$PATH"; '
              'echo "PANEL_VENV=$v"; break; fi; done; '
              'make "$2" 2>&1' % MAKE_PATH_ONEK)
MAKE_GURULTU = ("ccache ", "g++ ", "make[", "python3 /usr/local/share/verilator",
                "%Warning-", "      |", "rm V")


# ---------------- Questa dalga akisi: verif/questa panelden ----------------
# "Questa waves" sekmesi verif/questa/tests.tcl'deki 21 testi listeler (ayni
# sira, ayni adlar; selftest esler). Secilen test ya Questa GUI'sinde hazir
# dalga penceresiyle acilir (wave.bat ile ayni komut; yuklenecek dalga
# gruplari ve ek sinyaller QUESTA_WAVE_GROUPS / QUESTA_WAVE_EXTRA ortam
# degiskenleriyle gecer, questa_lib.tcl okur) ya da headless (vsim -c) kosar;
# karar batch.ps1 ile ayni: verif/questa/logs/<test>.transcript.
QUESTA_KATALOG = [
    ("SystemVerilog testbenches (same tops as the make targets)", [
        ("boot",            "soc",          "QSPI boot of flash_helloworld through the boot ROM (make boot)"),
        ("asic_sram_sim",   "soc",          "the same boot on the delivered OpenRAM macro models, ASIC_SRAM_MACRO (make asic-sram-sim)"),
        ("asic_top_sim",    "soc",          "asic_top + 27 SRAM macros: flash boot + AI inference, argmax check (make asic-top-sim)"),
        ("qspi_modes",      "soc",          "x1 / x2 / x4 + 4-byte addressing against the flash model (make qspi-modes)"),
        ("i2c_sys",         "soc",          "CPU -> AXI -> I2C master -> echo slave model (make i2c-sys)"),
        ("jtag_sim",        "soc",          "riscv-dbg TAP bit-banged from the testbench, 17 stages: halt, registers, memory, step, breakpoint (make jtag-sim)"),
        ("jtag_bridge_sim", "axi_dm_slave", "axi_dm_slave unit testbench with the real dm_top (make jtag-bridge-sim)"),
        ("uart_stp",        "uart_stp",     "stop bits 1 / 1.5 / 2 on the bare UART block (make uart-stp)"),
        ("uart_stream",     "uart_stream",  "UART_1 stream DMA block, scenarios A-E (make uart-stream)"),
        ("ai",              "ai_accel",     "accelerator standalone: 6 scenarios + 40-sample batch, bit-exact (make ai)"),
    ]),
    ("Firmware-driven SoC tests (questa_soc_tb.sv = sim_main.cpp in SystemVerilog)", [
        ("uart_hello",      "soc", "UART hello at 115200 (CPB 434), golden string on UART0 (regression)"),
        ("uart_hello_1m",   "soc", "UART hello at 1 Mbps (CPB 50) (regression)"),
        ("uart_hello_9600", "soc", "UART hello at 9600 (CPB 5208) (regression)"),
        ("qspi_flash",      "soc", "QSPI driver read: flash stub answers 0xAA after 32 clocks (regression)"),
        ("uart_baud_sweep", "soc", "runtime baud switch 115200 / 1 Mbps / 9600 in one run, three BAUD-OK phases (make uart-baud)"),
        ("qspi_fifo_err",   "soc", "QSPI FIFO / flush / status error paths, 25 checks, golden.txt, CPB 64 (make qspi-err)"),
        ("ai_micro_speech", "soc", "SoC-level inference C test: class + cycle count, irq17 (make soc-ai)"),
        ("ai_irq",          "soc", "accelerator done interrupt / ISR path (make soc-ai-irq)"),
        ("timer_irq",       "soc", "timer peripheral + irq16 service routine (make soc-timer)"),
        ("uart1_strm",      "soc", "UART_1 stream DMA driven from the firmware (make soc-strm)"),
        ("ai_sw_reference", "soc", "software reference inference, 12.3 M cycles - slow in Questa, ~8 min (make soc-perf)"),
    ]),
]
QUESTA_TESTLER = [t for _, ts in QUESTA_KATALOG for t, _, _ in ts]
QUESTA_DALGA = {t: w for _, ts in QUESTA_KATALOG for t, w, _ in ts}
QUESTA_ACIKLAMA = {t: a for _, ts in QUESTA_KATALOG for t, _, a in ts}
# wave/<name>.do okunamazsa kullanilacak grup listeleri (dosyadaki -group adlari)
QUESTA_GRUP_VARSAYILAN = {
    "soc": ["UART0", "CPU (CV32E40P)", "Interrupts", "QSPI", "I2C", "GPIO",
            "UART1 (stream DMA)", "AI accelerator", "AI accelerator ports",
            "JTAG TAP pins", "DMI (DTM <-> DM)", "Debug module", "AXI-DM bridge",
            "Crossbar ports"],
    "uart_stp": ["uart_axil (i_dut)"],
    "uart_stream": ["uart_stream_axil (i_dut)"],
    "ai_accel": ["ai_accelerator FSM", "ai_accelerator ports"],
    "axi_dm_slave": ["axi_dm_slave (dut)", "dm_top ports"],
}
# vsim -c ciktisinda ayrintili mod kapaliyken gizlenen satir baslari
QUESTA_GURULTU = ("# -- Compiling", "# -- Importing", "# -- Loading", "# Loading",
                  "# Top level modules:", "# End time:", "# Start time:",
                  "# Errors: 0, Warnings", "# //", "# vsim ", "# vlog ", "# vmap ",
                  "# Refreshing", "# Model Technology", "# Reading ", "# do ",
                  "# Modifying", "# Copying", "# QuestaSim", "# Questa Sim")


def questa_bul():
    """vsim yolu: PATH, sonra bilinen Windows kurulum dizinleri (en yenisi)."""
    yol = shutil.which("vsim")
    if yol:
        return yol
    adaylar = []
    for kalip in (r"C:\questasim64_*\win64\vsim.exe", r"C:\questasim*\win64\vsim.exe",
                  r"C:\Mentor\questasim*\win64\vsim.exe",
                  r"C:\intelFPGA*\*\questa_fse\win64\vsim.exe",
                  r"C:\intelFPGA*\*\questa_fe\win64\vsim.exe",
                  r"C:\intelFPGA*\*\modelsim_ase\win32aloem\vsim.exe"):
        adaylar += glob.glob(kalip)
    return sorted(adaylar)[-1] if adaylar else ""


def questa_tests_tcl(kok=None):
    """verif/questa/tests.tcl'deki test adlari (q_def / q_soc), dosya sirasiyla."""
    kok = REPO if kok is None else kok
    adlar = []
    try:
        with open(os.path.join(kok, "verif", "questa", "tests.tcl"), encoding="utf-8") as f:
            for satir in f:
                m = re.match(r"^q_(?:def|soc)\s+(\S+)", satir)
                if m:
                    adlar.append(m.group(1))
    except OSError:
        pass
    return adlar


def questa_gruplar(dalga, kok=None):
    """wave/<dalga>.do icindeki -group adlari (sira korunur, tekrarsiz);
    dosya okunamazsa QUESTA_GRUP_VARSAYILAN."""
    kok = REPO if kok is None else kok
    yol = os.path.join(kok, "verif", "questa", "wave", dalga + ".do")
    gruplar = []
    try:
        with open(yol, encoding="utf-8", errors="replace") as f:
            for satir in f:
                if satir.lstrip().startswith("#"):      # yorum satirlari
                    continue
                m = re.search(r'-group\s+(?:"([^"]+)"|(\S+))', satir)
                if m:
                    ad = m.group(1) or m.group(2)
                    if ad not in gruplar:
                        gruplar.append(ad)
    except OSError:
        pass
    return gruplar or list(QUESTA_GRUP_VARSAYILAN.get(dalga, []))


def questa_komut(vsim, test, gui):
    """wave.bat (GUI) / batch.ps1 (headless) ile ayni komut; depo kokunden kosar."""
    if gui:
        return [vsim, "-gui", "-do", "do verif/questa/run_test.do %s" % test]
    return [vsim, "-c", "-do",
            "onerror {quit -code 1}; do verif/questa/run_test.do %s; quit -f" % test]


def questa_ortam(gruplar, ekstra):
    """Alt surec ortami: QUESTA_WAVE_GROUPS (';' ile) ve QUESTA_WAVE_EXTRA;
    bos grup listesi = degisken yok = dalga dosyasinin tamami."""
    env = dict(os.environ)
    for anahtar in ("QUESTA_WAVE_GROUPS", "QUESTA_WAVE_EXTRA"):
        env.pop(anahtar, None)
    if gruplar:
        env["QUESTA_WAVE_GROUPS"] = ";".join(gruplar)
    ekstra = ";".join(p.strip() for p in re.split(r"[;\s]+", ekstra or "") if p.strip())
    if ekstra:
        env["QUESTA_WAVE_EXTRA"] = ekstra
    return env


def questa_karar(transcript):
    """batch.ps1 ile ayni karar: transcript metninden PASS / FAIL / NO VERDICT."""
    if not transcript:
        return "NO TRANSCRIPT"
    if re.search(r"\*\*\* TEST FAILED|result=FAIL|TIMEOUT|\*\* Fatal|\*\* Error", transcript):
        return "FAIL"
    if re.search(r"\*\*\* TEST SUCCESS|result=PASS|\[ADIM E\] PASS", transcript):
        return "PASS"
    return "NO VERDICT"


def questa_satir_goster(satir):
    """Ayrintili mod kapaliyken derleme / yukleme gurultusu gizlenir; [QUESTA]
    adimlari, test ciktisi ve uyari / hata satirlari kalir."""
    s = satir.strip()
    if not s or s == "#":
        return False
    return not s.startswith(QUESTA_GURULTU)


def wsl_hedef(depo=None):
    """(distro, linux_yol): panelin konumundan WSL'deki depo yolunu turetir.
    //wsl.localhost/<distro>/... ve //wsl$/<distro>/... -> (distro, /home/...);
    C:/... -> ("", /mnt/c/...); Linux yolu oldugu gibi. GUI-de duzenlenebilir."""
    depo = REPO if depo is None else depo
    r = depo.replace("/", "\\")
    m = re.match(r"^\\\\(?:wsl\$|wsl\.localhost)\\([^\\]+)\\(.*)$", r)
    if m:
        return m.group(1), "/" + m.group(2).replace("\\", "/")
    m = re.match(r"^([A-Za-z]):\\(.*)$", r)
    if m:
        return "", "/mnt/%s/%s" % (m.group(1).lower(), m.group(2).replace("\\", "/"))
    return "", depo.replace("\\", "/")


def make_komut(hedef, distro, yol):
    """make <hedef> komut listesi: Windows'ta wsl.exe uzerinden, Linux'ta dogrudan."""
    ic = ["setsid", "bash", "-c", MAKE_BETIK, "_", yol, hedef]
    if os.name == "nt":
        return ["wsl.exe"] + (["-d", distro] if distro else []) + ["--"] + ic
    return ic


def make_oldur(pgid, distro):
    """Surec grubunu TERM ile oldurur (kill -- -<pgid>)."""
    ic = ["kill", "-TERM", "--", "-%s" % pgid]
    if os.name == "nt":
        return ["wsl.exe"] + (["-d", distro] if distro else []) + ["--"] + ic
    return ic


def make_satir_goster(satir):
    """Ayrintili mod kapaliyken derleyici komutlari ve Verilator uyari
    bloklari gizlenir; test ciktilari ([SIM] PASS, TEST n: ..., ozet) kalir."""
    if satir.startswith(MAKE_GURULTU):
        return False
    if satir.startswith("     ") and satir.lstrip().startswith(("... ", "|")):
        return False
    return True


# ---------------- cerceve + protokol (send_vector.py ile ayni) -------------
def cerceve_yap(veri: bytes) -> bytes:
    saglama = sum(veri) & 0xFFFFFFFF
    return ONEK + MAGIC + struct.pack("<I", len(veri)) + veri + \
        struct.pack("<I", saglama)


def uint8_to_int8(veri: bytes) -> bytes:
    # K13: microfrontend uint8 -> model int8, bit duzeyinde byte ^ 0x80
    return bytes(b ^ 0x80 for b in veri)


# ---------------- girdi yukleyiciler ---------------------------------------
def _hex_oku(yol):
    out = bytearray()
    with open(yol) as fh:
        for satir in fh:
            tok = satir.strip()
            if tok:
                out += struct.pack("<I", int(tok, 16))
    return bytes(out)


def _metin_oku(yol):
    vektorler = []
    with open(yol) as fh:
        for satir in fh:
            satir = satir.strip()
            if not satir or satir.startswith("#"):
                continue
            parcalar = re.split(r"[,;\s]+", satir)
            sayilar = [int(p) for p in parcalar if p]
            if not sayilar:
                continue
            if len(sayilar) != VEKTOR_BOY:
                raise ValueError("row has %d values, expected %d"
                                 % (len(sayilar), VEKTOR_BOY))
            if any(s < -128 or s > 255 for s in sayilar):
                raise ValueError("value out of range: expected int8 (-128..127) "
                                 "or uint8 (0..255)")
            if any(s > 127 for s in sayilar):     # uint8 satiri
                vektorler.append(bytes((s - 128) & 0xFF for s in sayilar))
            else:
                vektorler.append(bytes(s & 0xFF for s in sayilar))
    return vektorler


def _npy_oku(yol):
    import numpy as np
    d = np.load(yol)
    if d.ndim == 3:
        d = d.reshape(d.shape[0], -1)
    elif d.ndim == 1:
        d = d.reshape(1, -1)
    if d.shape[1] != VEKTOR_BOY:
        raise ValueError("npy shape %s: last dimension must be %d"
                         % (d.shape, VEKTOR_BOY))
    if d.dtype == np.uint8:
        d = (d.astype(np.int16) - 128).astype(np.int8)
    d = d.astype(np.int8)
    return [d[i].tobytes() for i in range(d.shape[0])]


def _bin_oku(yol):
    ham = open(yol, "rb").read()
    if len(ham) % VEKTOR_BOY:
        raise ValueError("file size %d is not a multiple of %d"
                         % (len(ham), VEKTOR_BOY))
    return [ham[i:i + VEKTOR_BOY] for i in range(0, len(ham), VEKTOR_BOY)]


def girdi_yukle(yol, uint8=False):
    """(vektor_listesi, aciklama) dondurur; her vektor 1960 baytlik int8."""
    if os.path.isdir(yol):
        vs, notlar = [], []
        for ad in sorted(os.listdir(yol)):
            alt = os.path.join(yol, ad)
            if os.path.isfile(alt):
                v, _ = girdi_yukle(alt, uint8)
                vs += v
                notlar.append("%s(%d)" % (ad, len(v)))
        return vs, "folder: " + ", ".join(notlar)
    uz = os.path.splitext(yol)[1].lower()
    if uz == ".npy":
        vs = _npy_oku(yol); bicim = "npy"
    elif uz in (".csv", ".txt"):
        vs = _metin_oku(yol); bicim = uz[1:]
    elif uz == ".hex":
        vs = []; ham = _hex_oku(yol); vs = [ham[i:i + VEKTOR_BOY] for i in range(0, len(ham), VEKTOR_BOY)]; bicim = "hex"
    else:
        vs = _bin_oku(yol); bicim = "bin"
    if uint8 and bicim in ("bin", "hex"):
        vs = [uint8_to_int8(v) for v in vs]
    for i, v in enumerate(vs):
        if len(v) != VEKTOR_BOY:
            raise ValueError("vector %d: %d bytes (must be 1960)" % (i, len(v)))
    return vs, "%s, %d vectors" % (bicim, len(vs))


# ---------------- kart iletisimi -------------------------------------------
def cevap_ayristir(hat):
    """'[DEMO] class = <ad>  HW cycle = <n> ...' satiri -> (ad, cevrim)."""
    m = re.search(r"class = (\w+)\s+HW cycle = (\d+)", hat)
    if not m:
        raise ValueError("could not parse response: " + hat)
    return m.group(1), int(m.group(2))


class Kart:
    """Portu TEK okuyucu iplik dinler: gelen her satir hem `dinleyici`
    geri cagrisina (panel logu - canli terminal) hem ic kuyruga gider;
    komut cevaplari ic kuyruktan desenle suzulur. Boylece R19/banner gibi
    kendiliginden gelen ciktilar da panelde gorunur - Tera Term gerekmez.
    `ser` verilirse (selftest'teki FakeSerial) port acilmaz, o nesne kullanilir."""

    def __init__(self, port, baud=115200, zaman_asimi=6.0, dinleyici=None,
                 ser=None):
        if ser is None:
            import serial
            ser = serial.Serial(port, baud, timeout=0.25)
        self.ser = ser
        self.port, self.baud = port, baud
        self.zaman_asimi = zaman_asimi
        self.dinleyici = dinleyici
        self.hat = queue.Queue()
        self.calisiyor = True
        time.sleep(0.2)
        self.ser.reset_input_buffer()
        threading.Thread(target=self._oku, daemon=True).start()

    def _oku(self):
        while self.calisiyor:
            try:
                satir = self.ser.readline()
            except Exception:
                break
            if not satir:
                continue
            metin = satir.decode("ascii", "replace").rstrip("\r\n")
            if metin and self.dinleyici:
                self.dinleyici(metin)
            self.hat.put(satir)

    def kapat(self):
        self.calisiyor = False
        try:
            self.ser.close()
        except Exception:
            pass

    def temizle(self):
        """Ic satir kuyrugunu bosaltir (yeni komut oncesi eski cevap kalmasin)."""
        try:
            while True:
                self.hat.get_nowait()
        except queue.Empty:
            pass
    _temizle = temizle

    def satir_bekle(self, kalip, sure):
        """`kalip` (str/bytes) gecen ilk satiri `sure` sn icinde dondurur,
        yoksa None; eslesmeyen satirlar atlanir."""
        if isinstance(kalip, str):
            kalip = kalip.encode("ascii")
        bitis = time.time() + sure
        while time.time() < bitis:
            try:
                satir = self.hat.get(timeout=0.1)
            except queue.Empty:
                continue
            if kalip in satir:
                return satir.decode("ascii", "replace").strip()
        return None
    _satir_bekle = satir_bekle

    def canli_mi(self):
        """Menu istegi gonderir; iki denemede herhangi bir [DEMO] satiri
        gelirse kart canlidir (ilk istek acilis ciktisina denk gelebilir)."""
        for _ in range(2):
            self._temizle()
            self.ser.write(b"?")
            bitis = time.time() + 1.5
            while time.time() < bitis:
                try:
                    satir = self.hat.get(timeout=0.1)
                except queue.Empty:
                    continue
                if b"menu" in satir or b"DEMO" in satir:
                    return True
        return False

    def ham_gonder(self, bayt, parca=0, ara_ms=0.0):
        """Ham baytlari yazar. parca>0: `parca` baytlik parcalar halinde,
        parcalar arasinda `ara_ms` ms bekleyerek (yavas/parcali aktarim
        provasi - kart_sweep.py --parca/--ara-ms ile ayni)."""
        if parca <= 0 or parca >= len(bayt):
            self.ser.write(bayt)
            self.ser.flush()
            return
        for k in range(0, len(bayt), parca):
            self.ser.write(bayt[k:k + parca])
            self.ser.flush()
            if ara_ms > 0 and k + parca < len(bayt):
                time.sleep(ara_ms / 1000.0)

    def v_baslat(self, sure=3.0):
        """'v' gonderir, 'waiting for BLG1 frame' el sikismasini bekler."""
        self.temizle()
        self.ser.write(b"v")
        self.ser.flush()
        if self.satir_bekle(b"waiting", sure) is None and \
           self.satir_bekle(b"BLG1", 0.5) is None:
            raise TimeoutError("no handshake ('v' unanswered)")

    def vektor_gonder(self, veri, parca=0, ara_ms=0.0):
        """'v' + el sikisma + cerceve; (sinif_adi, cevrim) ya da exception.
        parca/ara_ms: cerceveyi parcali gonder (0 = tek seferde)."""
        self.v_baslat()
        self.ham_gonder(cerceve_yap(veri), parca, ara_ms)
        hat = self.satir_bekle(b"class =", self.zaman_asimi)
        if hat is None:
            raise TimeoutError("no class response from board")
        return cevap_ayristir(hat)


# ---------------- rastgele tarama + stres testleri (GUI'den bagimsiz) -------
# Bu isler Tkinter'e dokunmaz: `bildir(oge)` ile mesaj birakir (GUI'de
# kuyruk_isle isler, selftest ekrana basar), `dur_mu()` True olunca durur.
# Ornek uretimi ve SW referansi sw/ai_model/kart_sweep.py ile BIREBIR aynidir.
def referans_yukle():
    """kart_sweep.py ile AYNI ornek ureteci ve bit-exact SW referansi:
    run_accuracy_window LAZY import edilir (saf Python; numpy/tflite gerekmez),
    agirlik/bias/quant parametreleri ve gercek 'yes'/'no' girdileri
    golden_vectors'tan okunur. Hata -> exception/SystemExit (cagiran yakalar)."""
    ai_dizin = os.path.join(REPO, "sw", "ai_model")
    if ai_dizin not in sys.path:
        sys.path.insert(0, ai_dizin)
    import run_accuracy_window as raw
    if not os.path.isabs(raw.G):        # modul REPO kokunden kosulmayi varsayar
        raw.G = os.path.join(REPO, raw.G)
    G = raw.G
    cw = raw.hexbytes(os.path.join(G, "weights_conv.hex"))[:640]
    cb = raw.hexwords(os.path.join(G, "bias_conv.hex"))
    fw = raw.hexbytes(os.path.join(G, "weights_fc.hex"))[:16000]
    fb = raw.hexwords(os.path.join(G, "bias_fc.hex"))
    qp = raw.load_quant_params()
    yr = raw.hexbytes(os.path.join(G, "input_yes_real.hex"))[:VEKTOR_BOY]
    nr = raw.hexbytes(os.path.join(G, "input_no_real.hex"))[:VEKTOR_BOY]
    syn = {n: raw.hexbytes(os.path.join(G, "input_%s.hex" % n))[:VEKTOR_BOY]
           for n in ("yes", "no", "unknown", "silence")}
    return {"raw": raw, "model": (cw, cb, fw, fb, qp),
            "yr": yr, "nr": nr, "syn": syn}


def ornekleri_uret(ref, n, seed):
    """kart_sweep.py --n N --seed S ile birebir ayni N ornek [(ad, etiket, vec)]."""
    raw = ref["raw"]
    raw.N = max(40, n)                  # 40 cekirdek + uzatma ailesi
    rng = random.Random(seed)
    return raw.make_samples(rng, ref["yr"], ref["nr"], ref["syn"])[:n]


def sw_sinif(ref, vec):
    """Bit-exact SW referansi: (fc_out[4], sinif_adi)."""
    raw = ref["raw"]
    ko = raw.run_model(vec, *ref["model"])
    return ko, raw.CLS[raw.argmax4(ko)]


def yes_real_vektor():
    """Gercek 'yes' girdisi (golden_vectors), 1960 bayt int8."""
    return _hex_oku(os.path.join(REPO, "sw", "ai_model", "golden_vectors",
                                 "input_yes_real.hex"))[:VEKTOR_BOY]


def rastgele_tarama(kart, n, seed, parca, ara_ms, bildir, dur_mu,
                    rapor_dizin, ref=None):
    """RANDOM SWEEP: N seed'li ornek -> kart sinifi vs bit-exact SW sinifi.
    Mesajlar: ("log", m) | ("tarama", i, n, ornek, sw, kart, durum, cyc, kalan)
    | ("tarama_bitti", ozet). Ozet sozlugunu dondurur; raporu
    <rapor_dizin>/juri_sonuclar_sweep_<tarih>.txt dosyasina yazar."""
    if ref is None:
        ref = referans_yukle()
    ornekler = ornekleri_uret(ref, n, seed)
    toplam = len(ornekler)
    bildir(("log", "RANDOM SWEEP: N=%d seed=%d chunk=%d gap=%g ms (same "
            "generator and SW reference as sw/ai_model/kart_sweep.py)"
            % (toplam, seed, parca, ara_ms)))
    sonuc, cevrimler = [], []
    eslesen = zaman = uyusmaz = 0
    durduruldu = False
    t0 = time.time()
    for i, (ad, etiket, vec) in enumerate(ornekler):
        if dur_mu():
            bildir(("log", "sweep stopped by user at %d/%d" % (i, toplam)))
            durduruldu = True
            break
        ko, sw_ad = sw_sinif(ref, vec)
        veri = bytes(v & 0xFF for v in vec)
        kart_ad, cyc, hata = None, 0, None
        for deneme in (1, 2):           # tek zaman asimi taramayi bozmasin
            try:
                kart_ad, cyc = kart.vektor_gonder(veri, parca, ara_ms)
                break
            except Exception as e:
                hata = e
                if deneme == 1:
                    bildir(("log", "sample %d (%s): %s - retrying"
                            % (i, ad, e)))
                    time.sleep(0.3)
        if kart_ad is None:
            zaman += 1
            durum_s = "TIMEOUT"
            sonuc.append((ad, etiket, ko, sw_ad, None, "TIMEOUT (%s)" % hata))
        else:
            cevrimler.append(cyc)
            if kart_ad == sw_ad:
                eslesen += 1
                durum_s = "OK"
            else:
                uyusmaz += 1
                durum_s = "MISMATCH"
            sonuc.append((ad, etiket, ko, sw_ad, kart_ad, "%s %d cyc%s"
                          % (durum_s, cyc, " (retry)" if hata else "")))
        gecen = time.time() - t0
        kalan = gecen / (i + 1) * (toplam - i - 1)
        bildir(("tarama", i + 1, toplam, ad, sw_ad, kart_ad or "-",
                durum_s, cyc, kalan))
    sure = time.time() - t0
    ort = sum(cevrimler) / len(cevrimler) if cevrimler else 0.0
    metin = ("MATCHED %d/%d, timeouts %d, mismatches %d, avg cycles %.0f, "
             "total %.1f s" % (eslesen, len(sonuc), zaman, uyusmaz, ort, sure))
    if durduruldu:
        metin += " (stopped: %d of %d planned)" % (len(sonuc), toplam)
    yol = os.path.join(rapor_dizin, "juri_sonuclar_sweep_%s.txt"
                       % time.strftime("%Y%m%d_%H%M%S"))
    r = ["=" * 70,
         "BOARD RANDOM-CLASSIFICATION SWEEP (jury panel)",
         "Date: %s | N=%d | seed=%d | port=%s @ %d baud | chunk=%d B | "
         "gap=%g ms | duration=%.1f s"
         % (time.strftime("%Y-%m-%d %H:%M:%S"), toplam, seed, kart.port,
            kart.baud, parca, ara_ms, sure),
         "Path: PC -> UART -> demo 'v' (BLG1 frame + checksum) -> AI SRAM "
         "-> HW inference -> irq17 -> UART result",
         "Reference: run_accuracy_window.run_model - bit-exact SW model "
         "(verified against RTL in the N=1000 simulation sweep);",
         "           sample generator and seed identical to "
         "sw/ai_model/kart_sweep.py",
         "=" * 70,
         "%-4s %-16s %-8s %-22s %-8s %-8s %s"
         % ("i", "sample", "label", "SW fc_out", "SW", "BOARD", "status")]
    for i, (ad, et, ko, sw_ad, k_ad, durum_s) in enumerate(sonuc):
        r.append("%-4d %-16s %-8s %-22s %-8s %-8s %s"
                 % (i, ad, et or "-", str(ko), sw_ad, k_ad or "-", durum_s))
    r += ["-" * 70, metin]
    with open(yol, "w", encoding="utf-8") as f:
        f.write("\n".join(r) + "\n")
    ozet = {"toplam": toplam, "n": len(sonuc), "eslesen": eslesen,
            "zaman": zaman, "uyusmaz": uyusmaz, "ort_cyc": ort, "sure": sure,
            "yol": yol, "metin": metin}
    bildir(("tarama_bitti", ozet))
    return ozet


def stres_testleri(kart, bildir, dur_mu, rx_bekle=20.0, yes_vec=None,
                   seed=31082026):
    """STRESS TESTS a-g (sirayla; her biri PASS/FAIL). [(ad, gecti, detay)] doner.
    Mesajlar: ("log", m) | ("stres", ad, gecti, detay)
    | ("stres_bitti", gecen, kosulan, planlanan).
    rx_bekle: 'RX timeout' satirini bekleme suresi (firmware ~12 s sonra
    yazar; selftest'te FakeSerial 1 s)."""
    if yes_vec is None:
        yes_vec = yes_real_vektor()
    cerceve = cerceve_yap(yes_vec)
    baslik = ONEK + MAGIC + struct.pack("<I", len(yes_vec))
    saglama = sum(yes_vec) & 0xFFFFFFFF

    def a_parcali():
        t = time.time()
        ad, cyc = kart.vektor_gonder(yes_vec, 64, 5.0)
        return ad == "yes" and cyc > 0, \
            "class=%s cycles=%d, %d chunks of 64 B / 5 ms gaps, %.1f s" \
            % (ad, cyc, -(-len(cerceve) // 64), time.time() - t)

    def b_tek_bayt():
        t = time.time()
        ad, cyc = kart.vektor_gonder(yes_vec, 1, 1.0)
        return ad == "yes", "class=%s cycles=%d, %d 1-byte chunks / 1 ms " \
            "gaps, %.1f s" % (ad, cyc, len(cerceve), time.time() - t)

    def c_cop():
        rng = random.Random(seed)
        while True:
            cop = bytearray(rng.randrange(0, 255) for _ in range(64))  # 0xFF yok
            cop[10:12] = b"BL"                    # kismi sihir tuzaklari
            cop[40] = ord("B")
            cop[50:53] = b"BLG"
            if b"BLG1" not in cop:
                break
        kart.v_baslat()
        kart.ham_gonder(bytes(cop) + cerceve)
        hat = kart.satir_bekle(b"class =", kart.zaman_asimi)
        if hat is None:
            return False, "no class line after 64 junk bytes + frame"
        ad, cyc = cevap_ayristir(hat)
        return ad == "yes", "class=%s cycles=%d after 64 junk bytes " \
            "(partial 'B'/'BL'/'BLG' decoys included)" % (ad, cyc)

    def d_saglama():
        kart.v_baslat()
        kart.ham_gonder(baslik + yes_vec
                        + struct.pack("<I", (saglama + 1) & 0xFFFFFFFF))
        hat = kart.satir_bekle(b"CHECKSUM ERROR", kart.zaman_asimi)
        if hat is None:
            return False, "no CHECKSUM ERROR line for checksum+1"
        sinif = kart.satir_bekle(b"class =", 3.0)
        if sinif is not None:
            return False, "board classified despite bad checksum: " + sinif
        return True, "CHECKSUM ERROR reported, no class line within 3 s " \
            "(inference skipped)"

    def e_uzunluk():
        kart.v_baslat()
        kart.ham_gonder(ONEK + MAGIC + struct.pack("<I", VEKTOR_BOY + 1))
        hat = kart.satir_bekle(b"invalid length", kart.zaman_asimi)
        if hat is None:
            return False, "no 'invalid length' line for length %d" \
                % (VEKTOR_BOY + 1)
        return True, "length %d rejected: %s" % (VEKTOR_BOY + 1, hat)

    def f_kesik():
        kart.v_baslat()
        kart.ham_gonder(baslik + yes_vec[:1000])
        t = time.time()
        hat = kart.satir_bekle(b"RX timeout", rx_bekle)
        if hat is None:
            return False, "no RX timeout line within %.0f s after 1000 of " \
                "%d bytes" % (rx_bekle, len(yes_vec))
        gecen = time.time() - t
        ad, cyc = kart.vektor_gonder(yes_vec)
        return ad == "yes", "%s after %.1f s; recovery vector class=%s " \
            "cycles=%d" % (hat.replace("[DEMO] ", ""), gecen, ad, cyc)

    def g_ardisik():
        t = time.time()
        siniflar = []
        for _ in range(20):
            ad, cyc = kart.vektor_gonder(yes_vec)
            siniflar.append(ad)
        sure = time.time() - t
        ok = all(s == "yes" for s in siniflar)
        return ok, "20 back-to-back vectors, avg %.0f ms/vector (%.1f " \
            "vectors/s), classes: %s" % (sure / 20 * 1000.0, 20 / sure,
                                         "all yes" if ok else ",".join(siniflar))

    testler = [("a chunked transfer (64 B / 5 ms)", a_parcali),
               ("b 1-byte chunks (1 ms gaps)", b_tek_bayt),
               ("c junk before magic (64 B)", c_cop),
               ("d corrupted checksum", d_saglama),
               ("e invalid length (%d)" % (VEKTOR_BOY + 1), e_uzunluk),
               ("f truncated frame (1000 B) + recovery", f_kesik),
               ("g back-to-back throughput (20)", g_ardisik)]
    bildir(("log", "STRESS TESTS: %d tests on the yes_real vector, frame %d "
            "bytes" % (len(testler), len(cerceve))))
    sonuc = []
    for ad, fn in testler:
        if dur_mu():
            bildir(("log", "stress tests stopped by user"))
            break
        try:
            gecti, detay = fn()
        except Exception as e:
            gecti, detay = False, "%s: %s" % (type(e).__name__, e)
        sonuc.append((ad, gecti, detay))
        bildir(("stres", ad, gecti, detay))
    gecen = sum(1 for _, g, _ in sonuc if g)
    bildir(("stres_bitti", gecen, len(sonuc), len(testler)))
    return sonuc


# ---------------- GUI ------------------------------------------------------
def gui_calistir(smoke_ms=0):
    import tkinter as tk
    from tkinter import filedialog, messagebox, ttk

    KOYU, MIST, INK = "#17324a", "#f2f5f8", "#20262f"
    kok = tk.Tk()
    kok.title("BLogic MCU — Jury Data Panel")
    kok.geometry("1060x860")    # sekmeler + ortak log
    kok.configure(bg=MIST)
    # Pencere / gorev cubugu / iletisim kutusu simgesi: takim logosu
    # (sw/demo/panel_icon.png, 256x256; kaynak: balporsugu logosu).
    # iconphoto(True, ...) sonradan acilan tum Toplevel'lere de uygulanir.
    try:
        ikon = tk.PhotoImage(file=os.path.join(REPO, "sw", "demo", "panel_icon.png"))
        kok.iconphoto(True, ikon)
        durum_ikon = ikon           # cop toplayici silmesin
    except Exception:
        durum_ikon = None

    durum = {"kart": None, "vektorler": [], "kosuyor": False, "dur": False,
             "sonuclar": []}
    kuyruk = queue.Queue()

    # ---- ust bar: port + baglanti
    ust = tk.Frame(kok, bg=KOYU)
    ust.pack(fill="x")
    tk.Label(ust, text="BLogic MCU", fg="white", bg=KOYU,
             font=("Segoe UI", 16, "bold")).pack(side="left", padx=12, pady=8)
    tk.Label(ust, text="Micro Speech — live jury panel", fg="#9fb4c8",
             bg=KOYU, font=("Segoe UI", 10)).pack(side="left")
    baglanti_etiket = tk.Label(ust, text="● not connected", fg="#e0a0a0",
                               bg=KOYU, font=("Segoe UI", 10, "bold"))
    baglanti_etiket.pack(side="right", padx=12)

    # ---- sekmeler: kart demo / dogrulama paketi (make) / Questa dalga akisi.
    # Log hepsinin altinda ortaktir; her bolum kendi sekme cercevesine yerlesir.
    sekmeler = ttk.Notebook(kok)
    sekmeler.pack(fill="x", padx=12, pady=(8, 0))
    sek_kart = tk.Frame(sekmeler, bg=MIST)
    sek_make = tk.Frame(sekmeler, bg=MIST)
    sek_questa = tk.Frame(sekmeler, bg=MIST)
    sekmeler.add(sek_kart, text="  Board demo  ")
    sekmeler.add(sek_make, text="  Verification suite (make)  ")
    sekmeler.add(sek_questa, text="  Questa waves  ")
    kapat_kancalar = []         # pencere kapanirken cagrilacak durdurucular

    ayarlar = tk.Frame(sek_kart, bg=MIST)
    ayarlar.pack(fill="x", padx=12, pady=(10, 0))

    tk.Label(ayarlar, text="Port:", bg=MIST).grid(row=0, column=0, sticky="w")
    port_var = tk.StringVar(value="COM7")
    port_kutu = ttk.Combobox(ayarlar, textvariable=port_var, width=10)
    port_kutu.grid(row=0, column=1, padx=(4, 10))

    def portlari_tazele():
        try:
            from serial.tools import list_ports
            port_kutu["values"] = [p.device for p in list_ports.comports()]
        except Exception:
            pass
    portlari_tazele()
    ttk.Button(ayarlar, text="↻", width=3,
               command=portlari_tazele).grid(row=0, column=2)

    # Baud: karttaki switch secimiyle ayni olmali (sw0 yukari = 9600,
    # sw1 yukari / ikisi asagi = 115200; demo firmware v1, OLED 4. satir).
    tk.Label(ayarlar, text="Baud:", bg=MIST).grid(row=0, column=4, sticky="w", padx=(10, 0))
    baud_var = tk.StringVar(value="115200")
    ttk.Combobox(ayarlar, textvariable=baud_var, width=7,
                 values=["115200", "9600"], state="readonly").grid(row=0, column=5, padx=(4, 6))

    def bagla():
        try:
            if durum["kart"]:
                durum["kart"].kapat()
            durum["kart"] = Kart(port_var.get(), baud=int(baud_var.get()),
                                 dinleyici=lambda m: kuyruk.put(("kart", m)))
            if durum["kart"].canli_mi():
                baglanti_etiket.config(text="● connected — board responding",
                                       fg="#9fe0b0")
                log("board connected: %s @ %s baud" % (port_var.get(), baud_var.get()))
            else:
                baglanti_etiket.config(text="● port open, board silent",
                                       fg="#e8d27a")
                log("WARNING: port opened but no menu response (press R19?)")
        except Exception as e:
            messagebox.showerror("Connection", str(e))

    ttk.Button(ayarlar, text="Connect / Test",
               command=bagla).grid(row=0, column=3, padx=6)

    uint8_var = tk.BooleanVar(value=False)
    tk.Checkbutton(ayarlar, text="input is uint8 (0..255) → convert to int8",
                   variable=uint8_var, bg=MIST).grid(row=0, column=4, padx=14)

    def bitstream_yukle():
        """Secilen .bit'i Vivado batch (JTAG) ile FPGA'ya programlar.
        Unicode-yol tuzagina karsi bit ve tcl ASCII gecici dizinden verilir.
        Kalici degil (flash'a yazmaz); guc kesilirse yeniden yuklenir."""
        viv = vivado_bul()
        if not viv:
            messagebox.showerror("Vivado", "vivado.bat not found under "
                                 "C:\\Xilinx\\Vivado.")
            return
        yol = filedialog.askopenfilename(
            title="Bitstream to load",
            initialdir=os.path.join(REPO, "rtl", "fpga"),
            filetypes=[("Bitstream", "*.bit")])
        if not yol:
            return
        if durum["kosuyor"]:
            messagebox.showwarning("Busy", "Finish or stop the run first.")
            return
        prog_dugme.config(state="disabled", text="Loading…")
        log("bitstream load started: " + os.path.basename(yol))

        def isci():
            try:
                gecici = tempfile.mkdtemp(prefix="blogic_prog_")
                bit = os.path.join(gecici, "prog.bit")
                shutil.copy2(yol, bit)
                tcl = os.path.join(gecici, "prog.tcl")
                with open(tcl, "w") as f:
                    f.write(
                        "open_hw_manager\n"
                        "connect_hw_server\n"
                        "open_hw_target\n"
                        "set d [lindex [get_hw_devices] 0]\n"
                        "current_hw_device $d\n"
                        "set_property PROGRAM.FILE {%s} $d\n"
                        "program_hw_devices $d\n"
                        "close_hw_manager\n" % bit.replace("\\", "/"))
                p = subprocess.Popen(
                    [viv, "-mode", "batch", "-nolog", "-nojournal",
                     "-source", tcl],
                    stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                    text=True, errors="replace", cwd=gecici)
                basarili = False
                for satir in p.stdout:
                    satir = satir.rstrip()
                    if not satir:
                        continue
                    if satir.startswith(("INFO", "WARNING", "ERROR")) or \
                       "rogram" in satir or "hw_target" in satir:
                        kuyruk.put(("log", "VIVADO ▸ " + satir[:140]))
                    if "End of startup status: HIGH" in satir or \
                       "program_hw_devices completed" in satir.lower():
                        basarili = True
                p.wait()
                if p.returncode == 0 or basarili:
                    kuyruk.put(("log",
                                "BITSTREAM LOADED ✓ — now press R19 reset, "
                                "the banner will appear here"))
                else:
                    kuyruk.put(("log",
                                "LOAD FAILED (code %d) — if Hardware Manager "
                                "is open in the Vivado GUI, close its "
                                "connection and retry" % p.returncode))
            except Exception as e:
                kuyruk.put(("log", "LOAD ERROR: %s" % e))
            finally:
                kuyruk.put(("prog_bitti", None))
        threading.Thread(target=isci, daemon=True).start()

    prog_dugme = ttk.Button(ayarlar, text="Load bitstream…",
                            command=bitstream_yukle)
    prog_dugme.grid(row=0, column=5, padx=6)

    # ---- dosya secimi
    dosya_cerceve = tk.Frame(sek_kart, bg=MIST)
    dosya_cerceve.pack(fill="x", padx=12, pady=(8, 0))
    dosya_etiket = tk.Label(dosya_cerceve, text="no file selected", bg=MIST,
                            fg=INK, font=("Segoe UI", 10))

    def dosya_sec():
        yol = filedialog.askopenfilename(
            title="Jury data file",
            filetypes=[("All supported", "*.bin *.npy *.csv *.txt *.hex"),
                       ("All files", "*.*")])
        if not yol:
            return
        try:
            vs, aciklama = girdi_yukle(yol, uint8_var.get())
        except Exception as e:
            messagebox.showerror("File", "Load error:\n" + str(e))
            return
        durum["vektorler"] = vs
        dosya_etiket.config(text="%s  →  %s  ✓ verified"
                            % (os.path.basename(yol), aciklama))
        log("loaded: %s (%s)" % (yol, aciklama))
        ilerleme["maximum"] = max(1, len(vs))
        ilerleme["value"] = 0

    ttk.Button(dosya_cerceve, text="Select jury file…",
               command=dosya_sec).pack(side="left")
    dosya_etiket.pack(side="left", padx=10)

    # ---- buyuk sonuc gostergesi
    orta = tk.Frame(sek_kart, bg="white", bd=1, relief="solid")
    orta.pack(fill="x", padx=12, pady=10)
    sinif_etiket = tk.Label(orta, text="—", font=("Segoe UI", 52, "bold"),
                            bg="white", fg="#9aa1ab")
    sinif_etiket.pack(pady=(14, 0))
    detay_etiket = tk.Label(orta, text="last inference will appear here",
                            font=("Consolas", 11), bg="white", fg="#5a6472")
    detay_etiket.pack(pady=(0, 12))

    sayaclar = tk.Frame(sek_kart, bg=MIST)
    sayaclar.pack(fill="x", padx=12)
    sayac_etiketleri = {}
    for i, ad in enumerate(SINIF_AD):
        c = tk.Label(sayaclar, text="%s: 0" % ad, width=14,
                     font=("Segoe UI", 10, "bold"), bg="white",
                     fg=SINIF_RENK[ad], bd=1, relief="solid")
        c.grid(row=0, column=i, padx=4, ipady=4, sticky="ew")
        sayaclar.columnconfigure(i, weight=1)
        sayac_etiketleri[ad] = c

    # ---- ilerleme + butonlar
    alt = tk.Frame(sek_kart, bg=MIST)
    alt.pack(fill="x", padx=12, pady=8)
    ilerleme = ttk.Progressbar(alt, length=520)
    ilerleme.pack(side="left", fill="x", expand=True)
    ilerleme_etiket = tk.Label(alt, text="0/0", bg=MIST, width=12)
    ilerleme_etiket.pack(side="left", padx=8)

    def kosuyu_baslat():
        if durum["kosuyor"]:
            return
        if not durum["kart"]:
            messagebox.showwarning("Board", "Connect / Test first.")
            return
        if not durum["vektorler"]:
            messagebox.showwarning("File", "Select the jury file first.")
            return
        durum["kosuyor"], durum["dur"] = True, False
        durum["sonuclar"] = []
        sayaclari_sifirla()
        threading.Thread(target=kosu_is, daemon=True).start()

    def kosu_is():
        vs = durum["vektorler"]
        t0 = time.time()
        # ANLIK KAYIT: her sonuc geldigi anda diske yazilir; 900. vektorde
        # elektrik kesilse bile o ana kadarki sonuclar dosyadadir.
        anlik_yol = os.path.join(
            os.getcwd(),
            "juri_anlik_%s.txt" % time.strftime("%Y%m%d_%H%M%S"))
        anlik = open(anlik_yol, "w", encoding="utf-8", buffering=1)
        anlik.write("# live record — a final file with summary is written "
                    "separately when the run ends\n# index\tclass\tcycles\n")
        kuyruk.put(("log", "live record: " + anlik_yol))
        for i, v in enumerate(vs):
            if durum["dur"]:
                kuyruk.put(("log", "run stopped by user"))
                break
            # tek zaman asimi kosuyu bozmasin: bir kez otomatik tekrar
            ad, cyc, hata = None, 0, None
            for deneme in (1, 2):
                try:
                    ad, cyc = durum["kart"].vektor_gonder(v)
                    break
                except Exception as e:
                    hata = e
                    if deneme == 1:
                        kuyruk.put(("log",
                                    "vector %d: %s — retrying" % (i, e)))
                        time.sleep(0.3)
            if ad is None:
                durum["sonuclar"].append((i, "ERROR", 0))
                anlik.write("%d\tERROR\t0\n" % i)
                kuyruk.put(("log", "vector %d ERROR (retry also failed): %s"
                            % (i, hata)))
                continue
            durum["sonuclar"].append((i, ad, cyc))
            anlik.write("%d\t%s\t%d\n" % (i, ad, cyc))
            gecen = time.time() - t0
            kalan = gecen / (i + 1) * (len(vs) - i - 1)
            kuyruk.put(("sonuc", i + 1, len(vs), ad, cyc, kalan))
        anlik.close()
        sure = time.time() - t0
        kuyruk.put(("bitti", len(durum["sonuclar"]), sure))
        durum["kosuyor"] = False

    def durdur():
        durum["dur"] = True

    def tekli():
        if kart_hazir() and durum["vektorler"]:   # mesgulken (sweep/stress) tek gonderim yok
            durum["kosuyor"] = True
            sayaclari_sifirla()

            def bir():
                try:
                    ad, cyc = durum["kart"].vektor_gonder(durum["vektorler"][0])
                    kuyruk.put(("sonuc", 1, 1, ad, cyc, 0.0))
                except Exception as e:
                    kuyruk.put(("log", "ERROR: %s" % e))
                durum["kosuyor"] = False
            threading.Thread(target=bir, daemon=True).start()

    def ozet_metni():
        """Juriye okunacak tek paragraf: dagilim + sure + hata."""
        sonuc = durum["sonuclar"]
        if not sonuc:
            return ""
        dagilim = {ad: 0 for ad in SINIF_AD}
        hatali, cevrimler = 0, []
        for _, ad, cyc in sonuc:
            if ad in dagilim:
                dagilim[ad] += 1
                cevrimler.append(cyc)
            else:
                hatali += 1
        ort = sum(cevrimler) / len(cevrimler) if cevrimler else 0
        return ("%d vectors processed · " % len(sonuc)
                + " · ".join("%s %d" % (a, dagilim[a]) for a in SINIF_AD)
                + " · errors %d · average %.0f cycles = %.2f ms @ 50 MHz"
                % (hatali, ort, ort / 50000.0))

    def kaydet():
        if not durum["sonuclar"]:
            return
        ad = "juri_sonuclar_%s.txt" % time.strftime("%Y%m%d_%H%M%S")
        yol = os.path.join(os.getcwd(), ad)
        ozet = ozet_metni()
        with open(yol, "w", encoding="utf-8") as f:
            f.write("# BLogic MCU jury run — %s\n" %
                    time.strftime("%Y-%m-%d %H:%M:%S"))
            f.write("# %s\n" % ozet)
            f.write("# path: PC -> UART 115200 -> BLG1 frame+checksum -> "
                    "AI SRAM -> HW inference -> irq17 -> UART result\n")
            f.write("# index\tclass_id\tclass\tcycles\n")
            for i, adx, cyc in durum["sonuclar"]:
                no = SINIF_AD.index(adx) if adx in SINIF_AD else -1
                f.write("%d\t%d\t%s\t%d\n" % (i, no, adx, cyc))
        log("SUMMARY: " + ozet)
        log("results written: " + yol)

    ttk.Button(alt, text="Send Single", command=tekli).pack(side="left", padx=3)
    ttk.Button(alt, text="RUN ALL", command=kosuyu_baslat).pack(side="left", padx=3)
    ttk.Button(alt, text="Stop", command=durdur).pack(side="left", padx=3)
    ttk.Button(alt, text="Save Results", command=kaydet).pack(side="left", padx=3)

    # ---- rastgele tarama + stres testleri (kart_sweep.py provasi panelde)
    tarama = tk.LabelFrame(sek_kart, text="Random sweep & stress tests", bg=MIST,
                           fg=INK, font=("Segoe UI", 9, "bold"))
    tarama.pack(fill="x", padx=12, pady=(0, 8))
    n_var = tk.StringVar(value="1000")
    seed_var = tk.StringVar(value="31082026")
    parca_var = tk.StringVar(value="0")
    ara_var = tk.StringVar(value="0")
    for col, (etiket, var, gen) in enumerate(
            [("N:", n_var, 6), ("seed:", seed_var, 10),
             ("chunk size (bytes, 0 = whole frame):", parca_var, 6),
             ("gap between chunks (ms):", ara_var, 6)]):
        tk.Label(tarama, text=etiket, bg=MIST).grid(
            row=0, column=2 * col, sticky="w", padx=(8, 2), pady=4)
        ttk.Entry(tarama, textvariable=var, width=gen).grid(
            row=0, column=2 * col + 1, padx=(0, 6))

    def kart_hazir():
        if durum["kosuyor"]:
            messagebox.showwarning("Busy", "Finish or stop the run first.")
            return False
        if not durum["kart"]:
            messagebox.showwarning("Board", "Connect / Test first.")
            return False
        return True

    def tarama_ayarlari():
        try:
            n, seed = int(n_var.get()), int(seed_var.get())
            parca, ara = int(parca_var.get()), float(ara_var.get())
            if n < 1 or parca < 0 or ara < 0:
                raise ValueError
        except ValueError:
            messagebox.showwarning("Sweep", "N must be >= 1, seed an integer, "
                                   "chunk size >= 0 bytes, gap >= 0 ms.")
            return None
        return n, seed, parca, ara

    def is_baslat(hedef):
        """Uzun isi ayri iplikte kosar; UI kuyruk mesajlariyla guncellenir."""
        durum["kosuyor"], durum["dur"] = True, False

        def isci():
            try:
                hedef()
            except (Exception, SystemExit) as e:
                kuyruk.put(("log", "ERROR: %s" % e))
            finally:
                durum["kosuyor"] = False
        threading.Thread(target=isci, daemon=True).start()

    def tarama_baslat():
        if not kart_hazir():
            return
        ayar = tarama_ayarlari()
        if ayar is None:
            return
        n, seed, parca, ara = ayar
        try:                    # LAZY: run_accuracy_window ancak simdi yuklenir
            ref = referans_yukle()
        except (Exception, SystemExit) as e:
            log("REFERENCE ERROR: %s" % e)
            messagebox.showerror("Reference model",
                                 "run_accuracy_window / golden_vectors could "
                                 "not be loaded:\n%s" % e)
            return
        sayaclari_sifirla()
        ilerleme["maximum"] = n
        ilerleme_etiket.config(text="0/%d" % n)
        is_baslat(lambda: rastgele_tarama(durum["kart"], n, seed, parca, ara,
                                          kuyruk.put, lambda: durum["dur"],
                                          os.getcwd(), ref))

    def stres_baslat():
        if not kart_hazir():
            return
        is_baslat(lambda: stres_testleri(durum["kart"], kuyruk.put,
                                         lambda: durum["dur"]))

    # dugmeler ikinci satirda: alanlar + dugmeler tek satirda 980 px'e sigmaz
    dugmeler = tk.Frame(tarama, bg=MIST)
    dugmeler.grid(row=1, column=0, columnspan=8, sticky="w",
                  padx=6, pady=(0, 4))
    ttk.Button(dugmeler, text="RANDOM SWEEP",
               command=tarama_baslat).pack(side="left", padx=3)
    ttk.Button(dugmeler, text="STRESS TESTS",
               command=stres_baslat).pack(side="left", padx=3)
    ttk.Button(dugmeler, text="Stop", command=durdur).pack(side="left", padx=3)
    tk.Label(dugmeler, text="Stop halts a sweep between samples and the "
             "stress tests between tests.", bg=MIST, fg="#5a6472",
             font=("Segoe UI", 9)).pack(side="left", padx=10)

    # ---- dogrulama paketi: Makefile hedefleri tablodan secilir, WSL'de kosar,
    # ciktisi asagidaki loga akar, her satir PASS/FAIL ile boyanir
    dogrulama = tk.LabelFrame(
        sek_make, text="Verification suite — make targets (run in WSL, output in the log)",
        bg=MIST, fg=INK, font=("Segoe UI", 9, "bold"))
    dogrulama.pack(fill="x", padx=12, pady=(8, 8))
    agac = ttk.Treeview(dogrulama, columns=("aciklama", "durum", "sure"),
                        show="tree headings", height=6, selectmode="extended")
    agac.heading("#0", text="target")
    agac.column("#0", width=200, anchor="w", stretch=False)
    agac.heading("aciklama", text="what it checks")
    agac.column("aciklama", width=380, anchor="w")
    agac.heading("durum", text="status")
    agac.column("durum", width=80, anchor="center", stretch=False)
    agac.heading("sure", text="time")
    agac.column("sure", width=64, anchor="center", stretch=False)
    for etiket, renk in (("pass", "#1f7a3f"), ("fail", "#b02a2a"),
                         ("run", "#1d5fa8"), ("idle", INK)):
        agac.tag_configure(etiket, foreground=renk)
    agac.tag_configure("grup", font=("Segoe UI", 9, "bold"))
    hedef_satir = {}
    ilk_grup = None
    for grup, hedefler in MAKE_KATALOG:
        p = agac.insert("", "end", text=grup, open=True, tags=("grup",))
        ilk_grup = ilk_grup or p
        for hedef, aciklama in hedefler:
            hedef_satir[hedef] = agac.insert(
                p, "end", text="make " + hedef, values=(aciklama, "", ""),
                tags=("idle",))
    kaydirma = ttk.Scrollbar(dogrulama, orient="vertical", command=agac.yview)
    agac.configure(yscrollcommand=kaydirma.set)
    # Tk, acik gruplarla dolan agaci son eklenen satira kaydiriyor; basa al
    kok.after(300, lambda: (agac.see(ilk_grup), agac.yview_moveto(0)))
    agac.grid(row=0, column=0, sticky="nsew", padx=(6, 0), pady=4)
    kaydirma.grid(row=0, column=1, sticky="ns", pady=4)
    dogrulama.columnconfigure(0, weight=1)

    yan = tk.Frame(dogrulama, bg=MIST)
    yan.grid(row=0, column=2, sticky="n", padx=8, pady=4)
    distro_ilk, yol_ilk = wsl_hedef()
    distro_var = tk.StringVar(value=distro_ilk)
    depo_var = tk.StringVar(value=yol_ilk)
    ayrinti_var = tk.BooleanVar(value=False)
    make_durum = {"kosuyor": False, "dur": False, "proc": None, "pgid": None}
    make_etiket = tk.Label(yan, text="idle", bg=MIST, fg="#5a6472",
                           font=("Segoe UI", 9))

    def satir_guncelle(hedef, durum_s, sure_s=None, etiket=None):
        iid = hedef_satir.get(hedef)
        if not iid:
            return
        eski = agac.item(iid, "values")
        sure_s = eski[2] if sure_s is None else sure_s
        agac.item(iid, values=(eski[0], durum_s, sure_s), tags=(etiket or "idle",))

    def secili_hedefler():
        """Secili satirlar; grup basligi secildiyse grubun tum hedefleri.
        Katalog sirasinda, tekrarsiz."""
        secim = set()
        for iid in agac.selection():
            if agac.parent(iid) == "":
                secim.update(h for h, i in hedef_satir.items() if agac.parent(i) == iid)
            else:
                secim.update(h for h, i in hedef_satir.items() if i == iid)
        return [h for _, hs in MAKE_KATALOG for h, _ in hs if h in secim]

    def make_isci(hedefler):
        distro, yol = distro_var.get().strip(), depo_var.get().strip()
        sonuclar = []
        t_hepsi = time.time()
        for hedef in hedefler:
            if make_durum["dur"]:
                break
            kuyruk.put(("make_durum", hedef, "running…", "", "run"))
            kuyruk.put(("make_baslik", hedef, "make %s   (WSL%s: %s)"
                        % (hedef, " " + distro if distro else "", yol)))
            t0, kod = time.time(), -1
            try:
                ek = {"creationflags": subprocess.CREATE_NO_WINDOW} \
                    if os.name == "nt" else {}
                p = subprocess.Popen(make_komut(hedef, distro, yol),
                                     stdout=subprocess.PIPE,
                                     stderr=subprocess.STDOUT, text=True,
                                     encoding="utf-8", errors="replace", **ek)
                make_durum["proc"] = p
                for satir in p.stdout:
                    satir = satir.rstrip("\r\n")
                    if satir.startswith("PANEL_PGID="):
                        make_durum["pgid"] = satir.split("=", 1)[1].strip()
                        continue
                    if satir.startswith("PANEL_VENV="):
                        kuyruk.put(("make_satir", "Python venv on PATH: "
                                    + satir.split("=", 1)[1].strip()))
                        continue
                    if hedef in ("test-all", "test-full"):   # ozet tablolari -> satirlar
                        m = re.match(r"^\s+([a-z0-9-]+)\s+\(.*\)\s*:\s*(PASS|FAIL)\s*$",
                                     satir)
                        if m:
                            kuyruk.put(("make_durum", m.group(1), m.group(2), "",
                                        "pass" if m.group(2) == "PASS" else "fail"))
                    if ayrinti_var.get() or make_satir_goster(satir):
                        kuyruk.put(("make_satir", satir[:220]))
                p.wait()
                kod = p.returncode
            except Exception as e:
                kuyruk.put(("make_satir", "ERROR: %s" % e))
            make_durum["proc"], make_durum["pgid"] = None, None
            sure = time.time() - t0
            sure_s = "%d:%02d" % (int(sure) // 60, int(sure) % 60)
            if make_durum["dur"]:
                durum_s, etiket = "stopped", "fail"
            else:
                durum_s, etiket = ("PASS", "pass") if kod == 0 else ("FAIL", "fail")
            sonuclar.append((hedef, durum_s, sure_s, kod))
            kuyruk.put(("make_durum", hedef, durum_s, sure_s, etiket))
            kuyruk.put(("make_karar", hedef, durum_s, sure_s, kod))
        kuyruk.put(("make_bitti", sonuclar, time.time() - t_hepsi))
        make_durum["kosuyor"] = False

    def make_baslat(hedefler):
        if make_durum["kosuyor"]:
            messagebox.showwarning("Busy", "A make run is in progress; press Stop first.")
            return
        if not hedefler:
            messagebox.showinfo("Verification suite",
                                "Select one or more targets (Ctrl / Shift-click) "
                                "or a group heading, then Run selected.")
            return
        if os.name == "nt" and shutil.which("wsl.exe") is None:
            messagebox.showerror("WSL", "wsl.exe was not found; the make targets "
                                 "run inside WSL.")
            return
        make_durum["kosuyor"], make_durum["dur"] = True, False
        for h in hedefler:
            satir_guncelle(h, "queued", "", "idle")
        make_etiket.config(text="running: %d target(s)" % len(hedefler), fg="#1d5fa8")
        threading.Thread(target=make_isci, args=(list(hedefler),), daemon=True).start()

    def make_durdur():
        if not make_durum["kosuyor"]:
            return
        make_durum["dur"] = True
        pgid, distro = make_durum["pgid"], distro_var.get().strip()
        kuyruk.put(("make_satir", "STOP requested — killing the make process group"))
        try:
            ek = {"creationflags": subprocess.CREATE_NO_WINDOW} if os.name == "nt" else {}
            if pgid:
                subprocess.run(make_oldur(pgid, distro), timeout=10, **ek)
            if make_durum["proc"]:
                make_durum["proc"].kill()
        except Exception as e:
            kuyruk.put(("make_satir", "stop: %s" % e))

    def pencere_kapat():
        """Panel kapanirken kosan make grubu / headless Questa da kapanir."""
        if make_durum["kosuyor"]:
            make_durdur()
        for kanca in kapat_kancalar:
            try:
                kanca()
            except Exception:
                pass
        kok.destroy()
    kok.protocol("WM_DELETE_WINDOW", pencere_kapat)

    ttk.Button(yan, text="Run selected",
               command=lambda: make_baslat(secili_hedefler())).pack(fill="x", pady=2)
    ttk.Button(yan, text="Run test-all",
               command=lambda: make_baslat(["test-all"])).pack(fill="x", pady=2)
    ttk.Button(yan, text="Select all",
               command=lambda: agac.selection_set(list(hedef_satir.values()))
               ).pack(fill="x", pady=2)
    ttk.Button(yan, text="Stop", command=make_durdur).pack(fill="x", pady=2)
    make_etiket.pack(anchor="w", pady=(4, 0))
    # WSL ayarlari tablonun altinda tek satir (sag sutunu uzatmasin)
    ayar_satir = tk.Frame(dogrulama, bg=MIST)
    ayar_satir.grid(row=1, column=0, columnspan=3, sticky="w", padx=6, pady=(0, 4))
    tk.Label(ayar_satir, text="WSL distro (empty = default):", bg=MIST,
             fg="#5a6472", font=("Segoe UI", 9)).pack(side="left")
    ttk.Entry(ayar_satir, textvariable=distro_var, width=12).pack(side="left", padx=(4, 12))
    tk.Label(ayar_satir, text="repo path inside WSL:", bg=MIST, fg="#5a6472",
             font=("Segoe UI", 9)).pack(side="left")
    ttk.Entry(ayar_satir, textvariable=depo_var, width=34).pack(side="left", padx=(4, 12))
    tk.Checkbutton(ayar_satir, text="verbose log", variable=ayrinti_var,
                   bg=MIST).pack(side="left")

    # ---- Questa dalga akisi sekmesi: verif/questa testleri tablodan secilir.
    # "Open in Questa" GUI'yi hazir dalga penceresiyle acar (secilen gruplar +
    # ek sinyaller), "Run headless" vsim -c ile kosup karari tabloya ve loga yazar.
    questa = tk.LabelFrame(
        sek_questa, text="Questa waveform flow — verif/questa (21 tests; the delivered "
        "configuration is recompiled from soc_files.f on every run)",
        bg=MIST, fg=INK, font=("Segoe UI", 9, "bold"))
    questa.pack(fill="x", padx=12, pady=(8, 8))
    q_agac = ttk.Treeview(questa, columns=("aciklama", "dalga", "durum", "sure"),
                          show="tree headings", height=8, selectmode="extended")
    q_agac.heading("#0", text="test")
    q_agac.column("#0", width=190, anchor="w", stretch=False)
    q_agac.heading("aciklama", text="what it checks")
    q_agac.column("aciklama", width=340, anchor="w")
    q_agac.heading("dalga", text="wave file")
    q_agac.column("dalga", width=100, anchor="center", stretch=False)
    q_agac.heading("durum", text="status")
    q_agac.column("durum", width=92, anchor="center", stretch=False)
    q_agac.heading("sure", text="time")
    q_agac.column("sure", width=56, anchor="center", stretch=False)
    for etiket, renk in (("pass", "#1f7a3f"), ("fail", "#b02a2a"),
                         ("run", "#1d5fa8"), ("idle", INK)):
        q_agac.tag_configure(etiket, foreground=renk)
    q_agac.tag_configure("grup", font=("Segoe UI", 9, "bold"))
    q_satir = {}
    q_ilk = None
    for grup, testler in QUESTA_KATALOG:
        p = q_agac.insert("", "end", text=grup, open=True, tags=("grup",))
        q_ilk = q_ilk or p
        for test, dalga, aciklama in testler:
            q_satir[test] = q_agac.insert(
                p, "end", text=test, values=(aciklama, dalga + ".do", "", ""),
                tags=("idle",))
    q_kaydirma = ttk.Scrollbar(questa, orient="vertical", command=q_agac.yview)
    q_agac.configure(yscrollcommand=q_kaydirma.set)
    kok.after(300, lambda: (q_agac.see(q_ilk), q_agac.yview_moveto(0)))
    q_agac.grid(row=0, column=0, sticky="nsew", padx=(6, 0), pady=4)
    q_kaydirma.grid(row=0, column=1, sticky="ns", pady=4)
    questa.columnconfigure(0, weight=1)

    q_yan = tk.Frame(questa, bg=MIST)
    q_yan.grid(row=0, column=2, sticky="n", padx=8, pady=4)
    vsim_var = tk.StringVar(value=questa_bul())
    q_ekstra_var = tk.StringVar(value="")
    q_ayrinti_var = tk.BooleanVar(value=False)
    questa_durum = {"kosuyor": False, "dur": False, "proc": None, "gui": []}
    q_etiket = tk.Label(q_yan, text="idle", bg=MIST, fg="#5a6472",
                        font=("Segoe UI", 9))
    q_grup_vars = {}            # grup adi -> BooleanVar (tabloda secili test icin)
    q_grup_test = [None]

    def q_satir_guncelle(test, durum_s, sure_s=None, etiket=None):
        iid = q_satir.get(test)
        if not iid:
            return
        eski = q_agac.item(iid, "values")
        sure_s = eski[3] if sure_s is None else sure_s
        q_agac.item(iid, values=(eski[0], eski[1], durum_s, sure_s),
                    tags=(etiket or "idle",))

    def q_secili():
        """Secili testler; grup basligi secildiyse grubun hepsi. Katalog sirasinda."""
        secim = set()
        for iid in q_agac.selection():
            if q_agac.parent(iid) == "":
                secim.update(t for t, i in q_satir.items() if q_agac.parent(i) == iid)
            else:
                secim.update(t for t, i in q_satir.items() if i == iid)
        return [t for t in QUESTA_TESTLER if t in secim]

    def q_vsim():
        """vsim yolu; bulunamazsa uyarir ve None doner."""
        yol = vsim_var.get().strip()
        var = os.path.exists(yol) if (os.sep in yol or "/" in yol) else shutil.which(yol)
        if not yol or not var:
            messagebox.showerror("Questa", "vsim was not found. Type the full path of "
                                 "vsim.exe (the Questa win64 directory) into the "
                                 "vsim box, or add that directory to PATH.")
            return None
        if os.name == "nt" and not REPO.isascii():
            log("NOTE: the repository path contains non-ASCII characters; Questa "
                "10.7c may fail on it - map the repo to a drive letter (subst Y: "
                "<repo>) and start the panel from there.")
        return yol

    # dalga gruplari: tabloda tek test secilince wave/<dalga>.do'dan okunur
    q_dalga = tk.LabelFrame(
        questa, text="Wave window of the selected test — groups to load (unchecked "
        "groups are left out; testbench signals and clock / reset always stay)",
        bg=MIST, fg=INK, font=("Segoe UI", 9))
    q_dalga.grid(row=1, column=0, columnspan=3, sticky="ew", padx=6, pady=(2, 4))
    q_grup_cerceve = tk.Frame(q_dalga, bg=MIST)
    q_grup_cerceve.pack(fill="x", padx=4, pady=2)

    def q_gruplari_kur(test):
        for w in q_grup_cerceve.winfo_children():
            w.destroy()
        q_grup_vars.clear()
        q_grup_test[0] = test
        if test is None:
            tk.Label(q_grup_cerceve, text="select one test in the table to pick its "
                     "wave groups (a multi-selection runs headless only)",
                     bg=MIST, fg="#5a6472", font=("Segoe UI", 9)).grid(
                row=0, column=0, sticky="w")
            return
        dalga = QUESTA_DALGA[test]
        tk.Label(q_grup_cerceve, text="%s  →  wave/%s.do" % (test, dalga), bg=MIST,
                 fg=INK, font=("Segoe UI", 9, "bold")).grid(
            row=0, column=0, columnspan=5, sticky="w", pady=(0, 2))
        for i, g in enumerate(questa_gruplar(dalga)):
            v = tk.BooleanVar(value=True)
            q_grup_vars[g] = v
            tk.Checkbutton(q_grup_cerceve, text=g, variable=v, bg=MIST,
                           anchor="w").grid(row=1 + i // 5, column=i % 5,
                                            sticky="w", padx=(0, 10))
    q_gruplari_kur(None)

    def q_secim_degisti(_olay=None):
        secim = q_secili()
        q_gruplari_kur(secim[0] if len(secim) == 1 else None)
    q_agac.bind("<<TreeviewSelect>>", q_secim_degisti)

    q_ek = tk.Frame(q_dalga, bg=MIST)
    q_ek.pack(fill="x", padx=4, pady=(0, 4))
    ttk.Button(q_ek, text="all", width=5,
               command=lambda: [v.set(True) for v in q_grup_vars.values()]).pack(side="left")
    ttk.Button(q_ek, text="none", width=5,
               command=lambda: [v.set(False) for v in q_grup_vars.values()]).pack(
        side="left", padx=(3, 10))
    tk.Label(q_ek, text="extra signals (full paths, ';' separated, e.g. "
             "/questa_soc_tb/dut/i_uart_0/*):", bg=MIST, fg="#5a6472",
             font=("Segoe UI", 9)).pack(side="left")
    ttk.Entry(q_ek, textvariable=q_ekstra_var, width=40).pack(side="left", padx=4)

    def q_gui_ac():
        secim = q_secili()
        if len(secim) != 1:
            messagebox.showinfo("Questa", "Select exactly one test for the GUI "
                                "(a multi-selection is for Run headless).")
            return
        test = secim[0]
        vsim = q_vsim()
        if not vsim:
            return
        if q_grup_test[0] != test:
            q_gruplari_kur(test)
        secili = [g for g, v in q_grup_vars.items() if v.get()]
        gruplar = [] if len(secili) == len(q_grup_vars) else secili   # hepsi = kisit yok
        if q_grup_vars and not secili:
            if not messagebox.askyesno("Questa", "No wave group is checked: only the "
                                       "testbench signals and clock / reset will be "
                                       "shown. Continue?"):
                return
            gruplar = ["-"]              # hicbir grup adiyla eslesmez
        env = questa_ortam(gruplar, q_ekstra_var.get())
        ek = {"creationflags": subprocess.CREATE_NEW_PROCESS_GROUP} \
            if os.name == "nt" else {}
        try:
            p = subprocess.Popen(questa_komut(vsim, test, True), cwd=REPO, env=env, **ek)
        except Exception as e:
            messagebox.showerror("Questa", "vsim could not be started:\n%s" % e)
            return
        questa_durum["gui"].append(p)
        q_satir_guncelle(test, "GUI pid %d" % p.pid, "", "run")
        log("QUESTA GUI: %s opened in Questa (pid %d) - wave groups: %s%s"
            % (test, p.pid, "all" if not gruplar else (", ".join(secili) or "none"),
               ("; extra: " + env["QUESTA_WAVE_EXTRA"]) if "QUESTA_WAVE_EXTRA" in env
               else ""))
        log("    Questa recompiles the delivered configuration, loads the testbench, "
            "opens the wave window and runs to the verdict; the transcript copy is "
            "verif/questa/logs/%s.transcript" % test)

    def q_isci(testler):
        vsim = vsim_var.get().strip()
        sonuclar = []
        t_hepsi = time.time()
        for test in testler:
            if questa_durum["dur"]:
                break
            kuyruk.put(("questa_durum", test, "running…", "", "run"))
            kuyruk.put(("questa_baslik", test, "questa %s   (headless: vsim -c, cwd %s)"
                        % (test, REPO)))
            tr = os.path.join(REPO, "verif", "questa", "logs", test + ".transcript")
            try:
                os.remove(tr)
            except OSError:
                pass
            t0, kod = time.time(), -1
            try:
                ek = {"creationflags": subprocess.CREATE_NO_WINDOW} \
                    if os.name == "nt" else {}
                p = subprocess.Popen(questa_komut(vsim, test, False), cwd=REPO,
                                     env=questa_ortam([], ""),
                                     stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                     text=True, encoding="utf-8", errors="replace", **ek)
                questa_durum["proc"] = p
                for satir in p.stdout:
                    satir = satir.rstrip("\r\n")
                    if q_ayrinti_var.get() or questa_satir_goster(satir):
                        kuyruk.put(("questa_satir", satir[:220]))
                p.wait()
                kod = p.returncode
            except Exception as e:
                kuyruk.put(("questa_satir", "ERROR: %s" % e))
            questa_durum["proc"] = None
            try:
                with open(tr, encoding="utf-8", errors="replace") as f:
                    karar = questa_karar(f.read())
            except OSError:
                karar = "NO TRANSCRIPT"
            sure = time.time() - t0
            sure_s = "%d:%02d" % (int(sure) // 60, int(sure) % 60)
            if questa_durum["dur"]:
                durum_s, etiket = "stopped", "fail"
            else:
                durum_s, etiket = karar, ("pass" if karar == "PASS" else "fail")
            sonuclar.append((test, durum_s, sure_s, kod))
            kuyruk.put(("questa_durum", test, durum_s, sure_s, etiket))
            kuyruk.put(("questa_karar", test, durum_s, sure_s, kod))
        kuyruk.put(("questa_bitti", sonuclar, time.time() - t_hepsi))
        questa_durum["kosuyor"] = False

    def q_baslat(testler):
        if questa_durum["kosuyor"]:
            messagebox.showwarning("Busy", "A headless Questa run is in progress; "
                                   "press Stop first.")
            return
        if not testler:
            messagebox.showinfo("Questa", "Select one or more tests (Ctrl / Shift-click) "
                                "or a group heading, then Run headless.")
            return
        if not q_vsim():
            return
        questa_durum["kosuyor"], questa_durum["dur"] = True, False
        for t in testler:
            q_satir_guncelle(t, "queued", "", "idle")
        q_etiket.config(text="running: %d test(s)" % len(testler), fg="#1d5fa8")
        threading.Thread(target=q_isci, args=(list(testler),), daemon=True).start()

    def q_durdur():
        if not questa_durum["kosuyor"]:
            return
        questa_durum["dur"] = True
        p = questa_durum["proc"]
        kuyruk.put(("questa_satir", "STOP requested - killing vsim"))
        try:
            if p:
                if os.name == "nt":      # vsim.exe -> vsimk.exe agacinin tamami
                    subprocess.run(["taskkill", "/T", "/F", "/PID", str(p.pid)],
                                   timeout=10, creationflags=subprocess.CREATE_NO_WINDOW,
                                   stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
                p.kill()
        except Exception as e:
            kuyruk.put(("questa_satir", "stop: %s" % e))
    kapat_kancalar.append(q_durdur)

    ttk.Button(q_yan, text="Open in Questa (GUI + wave)",
               command=q_gui_ac).pack(fill="x", pady=2)
    ttk.Button(q_yan, text="Run headless (selected)",
               command=lambda: q_baslat(q_secili())).pack(fill="x", pady=2)
    ttk.Button(q_yan, text="Run all headless (~25 min)",
               command=lambda: q_baslat(list(QUESTA_TESTLER))).pack(fill="x", pady=2)
    ttk.Button(q_yan, text="Select all",
               command=lambda: q_agac.selection_set(list(q_satir.values()))
               ).pack(fill="x", pady=2)
    ttk.Button(q_yan, text="Stop", command=q_durdur).pack(fill="x", pady=2)
    q_etiket.pack(anchor="w", pady=(4, 0))
    q_ayar = tk.Frame(questa, bg=MIST)
    q_ayar.grid(row=2, column=0, columnspan=3, sticky="w", padx=6, pady=(0, 4))
    tk.Label(q_ayar, text="vsim:", bg=MIST, fg="#5a6472",
             font=("Segoe UI", 9)).pack(side="left")
    ttk.Entry(q_ayar, textvariable=vsim_var, width=44).pack(side="left", padx=(4, 12))
    tk.Checkbutton(q_ayar, text="verbose log (compiler lines)", variable=q_ayrinti_var,
                   bg=MIST).pack(side="left")
    tk.Label(q_ayar, text="   firmware bundles: verif/questa/fw (make questa-pack); "
             "verdict strings as in batch.ps1", bg=MIST, fg="#5a6472",
             font=("Segoe UI", 9)).pack(side="left")

    # ---- log (arac cubugu: temizle / kaydet)
    import tkinter.scrolledtext as st
    log_arac = tk.Frame(kok, bg=MIST)
    log_arac.pack(fill="x", padx=12)
    tk.Label(log_arac, text="Log", bg=MIST, fg=INK,
             font=("Segoe UI", 9, "bold")).pack(side="left")

    def log_temizle():
        log_kutu.delete("1.0", "end")

    def log_kaydet():
        yol = filedialog.asksaveasfilename(
            title="Save log", defaultextension=".txt",
            initialfile="juri_panel_log_%s.txt" % time.strftime("%Y%m%d_%H%M%S"),
            filetypes=[("Text", "*.txt"), ("All files", "*.*")])
        if not yol:
            return
        with open(yol, "w", encoding="utf-8") as f:
            f.write(log_kutu.get("1.0", "end"))
        log("log saved: " + yol)

    ttk.Button(log_arac, text="Clear log", command=log_temizle).pack(side="right", padx=3)
    ttk.Button(log_arac, text="Save log…", command=log_kaydet).pack(side="right", padx=3)
    log_kutu = st.ScrolledText(kok, height=9, font=("Consolas", 9),
                               bg="#101820", fg="#c8d4e0")
    log_kutu.pack(fill="both", expand=True, padx=12, pady=(0, 10))
    log_kutu.tag_config("kart", foreground="#7fd4a8")  # kart satirlari yesilimsi
    log_kutu.tag_config("make", foreground="#9fc5e8")  # make ciktisi mavimsi
    log_kutu.tag_config("bilgi", foreground="#e8d27a") # hedef aciklamasi sari
    log_kutu.tag_config("questa", foreground="#d8b4fe") # Questa ciktisi mor
    log_kutu.tag_config("pass", foreground="#7fe0a0", font=("Consolas", 9, "bold"))
    log_kutu.tag_config("fail", foreground="#ff8080", font=("Consolas", 9, "bold"))

    def log(mesaj):
        log_kutu.insert("end", "[%s] %s\n" % (time.strftime("%H:%M:%S"), mesaj))
        # uzun kosuda log sismesin: 3000 satiri gecince ilk 1000'i at
        try:
            if int(log_kutu.index("end-1c").split(".")[0]) > 3000:
                log_kutu.delete("1.0", "1001.0")
        except Exception:
            pass
        log_kutu.see("end")

    sayac = {ad: 0 for ad in SINIF_AD}

    def sayaclari_sifirla():
        for ad in SINIF_AD:
            sayac[ad] = 0
            sayac_etiketleri[ad].config(text="%s: 0" % ad)
        ilerleme["value"] = 0

    def ilerleme_guncelle(i, n, kalan):
        ilerleme["maximum"] = n
        ilerleme["value"] = i
        if kalan > 1.0:
            ilerleme_etiket.config(
                text="%d/%d · ~%d:%02d" %
                     (i, n, int(kalan) // 60, int(kalan) % 60))
        else:
            ilerleme_etiket.config(text="%d/%d" % (i, n))

    def kuyruk_isle():
        try:
            while True:
                oge = kuyruk.get_nowait()
                if oge[0] == "sonuc":
                    _, i, n, ad, cyc, kalan = oge
                    sinif_etiket.config(text=ad.upper(),
                                        fg=SINIF_RENK.get(ad, INK))
                    detay_etiket.config(
                        text="vector %d/%d   ·   %d cycles = %.2f ms @ 50 MHz"
                             % (i, n, cyc, cyc / 50000.0))
                    if ad in sayac:
                        sayac[ad] += 1
                        sayac_etiketleri[ad].config(
                            text="%s: %d" % (ad, sayac[ad]))
                    ilerleme_guncelle(i, n, kalan)
                    log("%4d/%d  class=%-8s  %d cyc" % (i, n, ad, cyc))
                elif oge[0] == "tarama":
                    _, i, n, ornek, sw_ad, kart_ad, durum_s, cyc, kalan = oge
                    sinif_etiket.config(
                        text=kart_ad.upper() if kart_ad in SINIF_RENK else "?",
                        fg=SINIF_RENK.get(kart_ad, "#9aa1ab"))
                    detay_etiket.config(
                        text="sweep %d/%d   ·   %s   ·   sw=%s board=%s %s   ·"
                             "   %d cycles = %.2f ms @ 50 MHz"
                             % (i, n, ornek, sw_ad, kart_ad, durum_s, cyc,
                                cyc / 50000.0))
                    if kart_ad in sayac:
                        sayac[kart_ad] += 1
                        sayac_etiketleri[kart_ad].config(
                            text="%s: %d" % (kart_ad, sayac[kart_ad]))
                    ilerleme_guncelle(i, n, kalan)
                    log("%4d/%d %-14s sw=%-8s board=%-8s %s %d cyc"
                        % (i, n, ornek, sw_ad, kart_ad, durum_s, cyc))
                elif oge[0] == "tarama_bitti":
                    log("SWEEP SUMMARY: " + oge[1]["metin"])
                    log("sweep report written: " + oge[1]["yol"])
                elif oge[0] == "stres":
                    _, ad, gecti, detay = oge
                    log("STRESS %s  %s: %s"
                        % ("PASS" if gecti else "FAIL", ad, detay))
                elif oge[0] == "stres_bitti":
                    _, gecen, kosulan, planlanan = oge
                    log("STRESS TESTS FINISHED: %d/%d passed%s"
                        % (gecen, kosulan, "" if kosulan == planlanan else
                           " (%d of %d run)" % (kosulan, planlanan)))
                elif oge[0] == "kart":
                    log_kutu.insert("end", "BOARD ▸ %s\n" % oge[1], "kart")
                    log_kutu.see("end")
                elif oge[0] == "prog_bitti":
                    prog_dugme.config(state="normal", text="Load bitstream…")
                elif oge[0] == "make_satir":
                    log_kutu.insert("end", "MAKE ▸ %s\n" % oge[1], "make")
                    log_kutu.see("end")
                elif oge[0] == "make_baslik":
                    _, hedef, baslik = oge
                    log("────────────────────────────────────────────────────────")
                    log("▶ " + baslik)
                    for satir in textwrap.wrap(
                            "WHAT IT DOES: " + MAKE_ACIKLAMA.get(hedef, "(no description)"), 100):
                        log_kutu.insert("end", "    " + satir + "\n", "bilgi")
                    log_kutu.see("end")
                elif oge[0] == "make_karar":
                    _, hedef, durum_s, sure_s, kod = oge
                    if durum_s == "PASS":
                        log_kutu.insert("end", "[%s] ✔ PASS   make %s   (%s) — all checks of this "
                                        "target passed, see the MAKE ▸ lines above\n"
                                        % (time.strftime("%H:%M:%S"), hedef, sure_s), "pass")
                    else:
                        log_kutu.insert("end", "[%s] ✘ %s   make %s   (%s, exit %d) — read the last "
                                        "MAKE ▸ lines above; the target's own log is under logs/\n"
                                        % (time.strftime("%H:%M:%S"), durum_s, hedef, sure_s, kod),
                                        "fail")
                    log_kutu.see("end")
                elif oge[0] == "make_durum":
                    _, hedef, durum_s, sure_s, etiket = oge
                    satir_guncelle(hedef, durum_s, sure_s, etiket)
                elif oge[0] == "make_bitti":
                    _, sonuclar, sure = oge
                    gecen = sum(1 for _, d, _, _ in sonuclar if d == "PASS")
                    ozet = "MAKE FINISHED: %d/%d PASS, %d:%02d" % (
                        gecen, len(sonuclar), int(sure) // 60, int(sure) % 60)
                    make_etiket.config(
                        text="last run: %d/%d PASS" % (gecen, len(sonuclar)),
                        fg="#1f7a3f" if gecen == len(sonuclar) else "#b02a2a")
                    log("════════════════════════════════════════════════════════")
                    log_kutu.insert("end", "[%s] %s\n" % (time.strftime("%H:%M:%S"), ozet),
                                    "pass" if gecen == len(sonuclar) else "fail")
                    for h, d, sr, k in sonuclar:
                        log_kutu.insert("end", "    %-6s make %-20s %s\n" % (d, h, sr),
                                        "pass" if d == "PASS" else "fail")
                    log_kutu.see("end")
                    yol = os.path.join(os.getcwd(), "juri_make_%s.txt"
                                       % time.strftime("%Y%m%d_%H%M%S"))
                    try:
                        with open(yol, "w", encoding="utf-8") as f:
                            f.write("BLogic MCU - verification suite report (jury panel)\n")
                            f.write("date   : %s\n" % time.strftime("%Y-%m-%d %H:%M:%S"))
                            f.write("result : %s\n\n" % ozet)
                            for h, d, sr, k in sonuclar:
                                f.write("%s  make %s  (%s, exit %d)\n" % (d, h, sr, k))
                                for satir in textwrap.wrap(
                                        MAKE_ACIKLAMA.get(h, ""), 96):
                                    f.write("    " + satir + "\n")
                                f.write("\n")
                        log("report written: " + yol)
                    except Exception as e:
                        log("report write failed: %s" % e)
                    if gecen == len(sonuclar):
                        messagebox.showinfo("Verification suite — PASS",
                                            "%d/%d targets PASSED\n\n%s\n\nreport: %s"
                                            % (gecen, len(sonuclar),
                                               "\n".join("PASS  make %s  (%s)" % (h, sr)
                                                         for h, d, sr, k in sonuclar), yol))
                    else:
                        messagebox.showerror("Verification suite — FAILED",
                                             "%d/%d targets passed\n\n%s\n\nreport: %s"
                                             % (gecen, len(sonuclar),
                                                "\n".join("%s  make %s  (%s)" % (d, h, sr)
                                                          for h, d, sr, k in sonuclar), yol))
                elif oge[0] == "questa_satir":
                    log_kutu.insert("end", "QUESTA ▸ %s\n" % oge[1], "questa")
                    log_kutu.see("end")
                elif oge[0] == "questa_baslik":
                    _, test, baslik = oge
                    log("────────────────────────────────────────────────────────")
                    log("▶ " + baslik)
                    for satir in textwrap.wrap(
                            "WHAT IT CHECKS: " + QUESTA_ACIKLAMA.get(test, "(no description)"), 100):
                        log_kutu.insert("end", "    " + satir + "\n", "bilgi")
                    log_kutu.see("end")
                elif oge[0] == "questa_durum":
                    _, test, durum_s, sure_s, etiket = oge
                    q_satir_guncelle(test, durum_s, sure_s, etiket)
                elif oge[0] == "questa_karar":
                    _, test, durum_s, sure_s, kod = oge
                    if durum_s == "PASS":
                        log_kutu.insert("end", "[%s] ✔ PASS   questa %s   (%s) — verdict line "
                                        "found in verif/questa/logs/%s.transcript\n"
                                        % (time.strftime("%H:%M:%S"), test, sure_s, test), "pass")
                    else:
                        log_kutu.insert("end", "[%s] ✘ %s   questa %s   (%s, vsim exit %d) — read "
                                        "the QUESTA ▸ lines above and verif/questa/logs/%s.transcript\n"
                                        % (time.strftime("%H:%M:%S"), durum_s, test, sure_s,
                                           kod, test), "fail")
                    log_kutu.see("end")
                elif oge[0] == "questa_bitti":
                    _, sonuclar, sure = oge
                    gecen = sum(1 for _, d, _, _ in sonuclar if d == "PASS")
                    ozet = "QUESTA FINISHED: %d/%d PASS, %d:%02d" % (
                        gecen, len(sonuclar), int(sure) // 60, int(sure) % 60)
                    q_etiket.config(
                        text="last run: %d/%d PASS" % (gecen, len(sonuclar)),
                        fg="#1f7a3f" if gecen == len(sonuclar) else "#b02a2a")
                    log("════════════════════════════════════════════════════════")
                    log_kutu.insert("end", "[%s] %s\n" % (time.strftime("%H:%M:%S"), ozet),
                                    "pass" if gecen == len(sonuclar) else "fail")
                    for t, d, sr, k in sonuclar:
                        log_kutu.insert("end", "    %-6s questa %-18s %s\n" % (d, t, sr),
                                        "pass" if d == "PASS" else "fail")
                    log_kutu.see("end")
                elif oge[0] == "log":
                    log(oge[1])
                elif oge[0] == "bitti":
                    _, n, sure = oge
                    log("RUN FINISHED: %d vectors, %.1f s" % (n, sure))
                    kaydet()
        except queue.Empty:
            pass
        kok.after(80, kuyruk_isle)

    kok.after(80, kuyruk_isle)
    if smoke_ms:                    # --gui-smoke: arayuz kuruldu, kapat
        kok.after(smoke_ms, kok.destroy)
    kok.mainloop()
    return 0


# ---------------- selftest (kartsiz) ---------------------------------------
class FakeSerial:
    """Demo firmware'in UART davranisini taklit eden durum makinesi; Kart'in
    kullandigi pyserial altkumesini (write/read/readline/flush/
    reset_input_buffer/close) sunar. Kartsiz selftest icindir.
    rx_tmo: eksik bayt zaman asimi (firmware ~12 s; burada kisa).
    sinif_fn(veri)->ad verilirse cikarim sonucu ondan alinir, yoksa 'yes'."""
    MENU = ("[DEMO] h=HW inference  v=new input via BLG1 (send_vector.py)  "
            "r=report  ?=menu",
            "[DEMO] baud: sw0=9600 sw1=115200 (both down=115200); "
            "OLED: class/cycles/baud")
    CEVRIM = 459062

    def __init__(self, rx_tmo=1.0, sinif_fn=None, timeout=0.25):
        self.rx_tmo, self.sinif_fn, self.timeout = rx_tmo, sinif_fn, timeout
        self.cikti = queue.Queue()          # kartin yazdigi satirlar
        self.kalan = b""                    # read() icin yarim satir
        self.kilit = threading.Lock()
        self.durum, self.got, self.tampon = "idle", 0, bytearray()
        self.uzunluk, self.veri = 0, b""
        self.son_rx, self.acik = time.time(), True
        self.yazilan = 0                    # PC'den gelen toplam bayt
        self.baudrate = 115200

    def _satir(self, s):
        self.cikti.put(("[DEMO] " + s + "\n").encode("ascii"))

    def _cikarim(self, veri):
        ad = "yes"
        if self.sinif_fn and veri is not None:
            ad = self.sinif_fn(veri)
        self._satir("class = %s  HW cycle = %d  speedup ~21.0x "
                    "(SW baseline 9,684,726)" % (ad, self.CEVRIM))

    def _bayt(self, x):
        self.son_rx = time.time()
        d = self.durum
        if d == "idle":                     # demo_main.c ana dongusu
            if x == ord("?"):
                for m in self.MENU:
                    self.cikti.put((m + "\n").encode("ascii"))
            elif x == ord("v"):
                self._satir("waiting for BLG1 frame (send_vector.py)...")
                self.durum, self.got = "magic", 0
            elif x == ord("h"):
                self._cikarim(None)
            elif x == ord("r"):
                self._satir("SW baseline 9,684,726 cycles (xPack 13.2.0 -O2, "
                            "soc-perf); live HW measurement above. Details: "
                            "README.")
        elif d == "magic":                  # firmware ile ayni yeniden-senkron
            if x == MAGIC[self.got]:
                self.got += 1
            elif x == MAGIC[0]:
                self.got = 1
            else:
                self.got = 0
            if self.got == 4:
                self.durum, self.tampon = "length", bytearray()
        elif d == "length":
            self.tampon.append(x)
            if len(self.tampon) == 4:
                self.uzunluk = struct.unpack("<I", bytes(self.tampon))[0]
                if self.uzunluk == 0 or self.uzunluk > VEKTOR_BOY:
                    self._satir("invalid length")
                    self.durum = "idle"
                else:
                    self.durum, self.tampon = "data", bytearray()
        elif d == "data":
            self.tampon.append(x)
            if len(self.tampon) == self.uzunluk:
                self.veri = bytes(self.tampon)
                self.durum, self.tampon = "checksum", bytearray()
        elif d == "checksum":
            self.tampon.append(x)
            if len(self.tampon) == 4:
                self.durum = "idle"
                chk = struct.unpack("<I", bytes(self.tampon))[0]
                if chk != (sum(self.veri) & 0xFFFFFFFF):
                    self._satir("CHECKSUM ERROR - inference skipped")
                else:
                    self._satir("input verified (%d bytes), inference:"
                                % len(self.veri))
                    self._cikarim(self.veri)

    def write(self, b):
        b = bytes(b)
        with self.kilit:
            for x in b:
                self._bayt(x)
            self.yazilan += len(b)
        return len(b)

    def _zaman_asimi_kontrol(self):
        with self.kilit:
            if self.durum != "idle" and time.time() - self.son_rx > self.rx_tmo:
                self._satir("RX timeout (%s)" % self.durum)
                self.durum = "idle"

    def readline(self):
        bitis = time.time() + self.timeout
        while True:
            if not self.acik:
                raise OSError("port closed")
            try:
                return self.cikti.get(timeout=0.02)
            except queue.Empty:
                pass
            self._zaman_asimi_kontrol()
            if time.time() >= bitis:
                return b""

    def read(self, n=1):
        if not self.kalan:
            self.kalan = self.readline()
        out, self.kalan = self.kalan[:n], self.kalan[n:]
        return out

    def reset_input_buffer(self):
        self.kalan = b""
        try:
            while True:
                self.cikti.get_nowait()
        except queue.Empty:
            pass

    def flush(self):
        pass

    def close(self):
        self.acik = False


def selftest():
    """Kartsiz kuru test: cerceve + yukleyiciler, sonra FakeSerial uzerinden
    Kart: (i) normal vektor, (ii) parcali gonderim, (iii) stres testleri a-g,
    (iv) N=45 rastgele tarama (run_accuracy_window varsa). 0 = PASS."""
    sonuclar = []

    def kontrol(ad, kosul, detay=""):
        sonuclar.append(bool(kosul))
        print("%-46s %s%s" % (ad, "OK" if kosul else "FAIL",
                              ("  " + detay) if detay else ""))

    v = bytes(((i * 37) ^ 0x5A) & 0xFF for i in range(VEKTOR_BOY))
    c = cerceve_yap(v)
    kontrol("frame", c[:8] == ONEK and c[8:12] == MAGIC
            and struct.unpack("<I", c[12:16])[0] == VEKTOR_BOY
            and struct.unpack("<I", c[-4:])[0] == sum(v) & 0xFFFFFFFF,
            "%d bytes" % len(c))
    with tempfile.TemporaryDirectory() as td:
        b = os.path.join(td, "t.bin")
        open(b, "wb").write(v * 3)
        vs, a = girdi_yukle(b)
        kontrol("bin loader", len(vs) == 3 and vs[0] == v, a)
        t = os.path.join(td, "t.csv")
        open(t, "w").write(",".join(str(b_ - 128) for b_ in v) + "\n")
        vs, a = girdi_yukle(t)
        kontrol("csv loader", len(vs) == 1 and len(vs[0]) == VEKTOR_BOY, a)
        try:
            import numpy as np
            n = os.path.join(td, "t.npy")
            np.save(n, np.frombuffer(v * 2, dtype=np.int8).reshape(2, -1))
            vs, a = girdi_yukle(n)
            kontrol("npy loader", len(vs) == 2 and vs[1] == v, a)
        except ImportError:
            print("npy loader: skipped (no numpy)")

    # --- referans (opsiyonel): run_accuracy_window + golden_vectors
    ref = None
    try:
        ref = referans_yukle()
        print("reference model: loaded (run_accuracy_window, pure Python)")
    except (Exception, SystemExit) as e:
        print("reference model: SKIP (%s)" % e)
    sinif_fn = None
    if ref:
        def sinif_fn(veri):         # sahte kart = bit-exact SW referansi
            return sw_sinif(ref, [x - 256 if x >= 128 else x for x in veri])[1]

    def bildir(o):
        if o[0] == "log":
            print("   " + o[1])
        elif o[0] == "stres":
            print("   %s %s: %s" % ("PASS" if o[2] else "FAIL", o[1], o[3]))
        elif o[0] == "tarama":
            print("   %4d/%d %-14s sw=%-8s board=%-8s %s %d cyc" % o[1:8])
        elif o[0] == "tarama_bitti":
            print("   " + o[1]["metin"])
            print("   report: " + o[1]["yol"])
        elif o[0] == "stres_bitti":
            print("   %d/%d passed" % (o[1], o[2]))

    sahte = FakeSerial(rx_tmo=1.0, sinif_fn=sinif_fn)
    kart = Kart("FAKE", ser=sahte)
    kontrol("fake board: menu handshake", kart.canli_mi())
    yes = yes_real_vektor()
    kontrol("yes_real vector", len(yes) == VEKTOR_BOY)
    # (i) normal vektor
    ad, cyc = kart.vektor_gonder(yes)
    kontrol("(i) normal vector", ad == "yes" and cyc == FakeSerial.CEVRIM,
            "class=%s cycles=%d" % (ad, cyc))
    # (ii) parcali gonderim
    once, t0 = sahte.yazilan, time.time()
    ad, cyc = kart.vektor_gonder(yes, 128, 1.0)
    beklenen = 1 + len(cerceve_yap(yes))
    kontrol("(ii) chunked send (128 B / 1 ms)",
            ad == "yes" and sahte.yazilan - once == beklenen,
            "class=%s, %d bytes, %.2f s" % (ad, sahte.yazilan - once,
                                            time.time() - t0))
    # (iii) stres testleri a-g (FakeSerial RX zaman asimi 1 s)
    print("(iii) stress tests a-g:")
    st = stres_testleri(kart, bildir, lambda: False, rx_bekle=3.0, yes_vec=yes)
    kontrol("(iii) stress tests a-g", len(st) == 7 and all(g for _, g, _ in st),
            "%d/7 passed" % sum(1 for _, g, _ in st if g))
    # (iv) N=45 rastgele tarama: kart_sweep sirasi + run_model + rapor
    if ref:
        adlar = [s[0] for s in ornekleri_uret(ref, 45, 31082026)]
        kontrol("(iv) sample order = kart_sweep.py", len(adlar) == 45
                and adlar[0] == "yes_real" and adlar[40] == "x0000_nz01",
                "%s ... %s" % (adlar[0], adlar[-1]))
        print("(iv) random sweep N=45 (fake board answers with SW reference):")
        with tempfile.TemporaryDirectory() as td:
            oz = rastgele_tarama(kart, 45, 31082026, 0, 0.0, bildir,
                                 lambda: False, td, ref)
            rapor = open(oz["yol"], encoding="utf-8").read()
            kontrol("(iv) random sweep N=45", oz["n"] == 45
                    and oz["eslesen"] == 45 and oz["zaman"] == 0
                    and "MATCHED 45/45" in rapor
                    and os.path.basename(oz["yol"]).startswith(
                        "juri_sonuclar_sweep_"), oz["metin"])
    else:
        print("(iv) random sweep: SKIP (run_accuracy_window not available)")
    # (v) dogrulama paketi: katalog + WSL yol eslemesi + komut uretici
    #     (make kosturulmaz; GUI'siz)
    hedefler = [h for _, hs in MAKE_KATALOG for h, _ in hs]
    kontrol("(v) make catalog", len(hedefler) == len(set(hedefler))
            and "test-all" in hedefler and "test-full" in hedefler
            and "jtag-sim" in hedefler,
            "%d targets" % len(hedefler))
    d1, y1 = wsl_hedef(r"\\wsl.localhost\Ubuntu-24.04\home\potato\blogic-mcu")
    d2, y2 = wsl_hedef(r"C:\Users\x\repo")
    kontrol("(v) WSL path mapping",
            (d1, y1) == ("Ubuntu-24.04", "/home/potato/blogic-mcu")
            and (d2, y2) == ("", "/mnt/c/Users/x/repo"), "%s:%s | %s" % (d1, y1, y2))
    eksik = [h for h in hedefler if h not in MAKE_ACIKLAMA]
    kontrol("(v) make descriptions", not eksik,
            "missing: %s" % ", ".join(eksik) if eksik else "%d described" % len(hedefler))
    k = make_komut("lint", "Ubuntu-24.04", "/home/potato/blogic-mcu")
    kontrol("(v) make command", k[-1] == "lint" and k[-2] == "/home/potato/blogic-mcu"
            and "setsid" in k and "bash" in k and "tflite-venv" in MAKE_BETIK
            and not make_satir_goster("ccache g++ x")
            and make_satir_goster("[SIM] PASS"), " ".join(k[:3]))
    # (vi) Questa sekmesi: katalog = tests.tcl, dalga gruplari, komut / ortam /
    #      karar (vsim kosturulmaz; PANEL_QUESTA_LIVE=1 ile uart_stp gercekten kosar)
    tcl_adlar = questa_tests_tcl()
    kontrol("(vi) questa catalog = tests.tcl", tcl_adlar == QUESTA_TESTLER
            and len(QUESTA_TESTLER) == 21, "%d tests" % len(QUESTA_TESTLER))
    g_soc = questa_gruplar("soc")
    kontrol("(vi) wave groups (soc.do)", "UART0" in g_soc and "JTAG TAP pins" in g_soc
            and "AXI-DM bridge" in g_soc, "%d groups" % len(g_soc))
    kontrol("(vi) wave groups (unit testbenches)",
            all(questa_gruplar(w) for w in ("uart_stp", "uart_stream", "ai_accel",
                                            "axi_dm_slave"))
            and QUESTA_GRUP_VARSAYILAN["soc"] == questa_gruplar("soc"))
    k1 = questa_komut("vsim", "uart_stp", True)
    k2 = questa_komut("vsim", "uart_stp", False)
    env = questa_ortam(["UART0", "QSPI"], " /tb/dut/x ; /tb/dut/y ")
    kontrol("(vi) questa command + env", k1[1] == "-gui" and "run_test.do uart_stp" in k1[3]
            and k2[1] == "-c" and "quit -code 1" in k2[3]
            and env["QUESTA_WAVE_GROUPS"] == "UART0;QSPI"
            and env["QUESTA_WAVE_EXTRA"] == "/tb/dut/x;/tb/dut/y"
            and "QUESTA_WAVE_GROUPS" not in questa_ortam([], ""))
    kontrol("(vi) questa verdict + filter", questa_karar("# *** TEST SUCCESS ***") == "PASS"
            and questa_karar("# result=FAIL") == "FAIL"
            and questa_karar("# ** Error: x") == "FAIL"
            and questa_karar("") == "NO TRANSCRIPT" and questa_karar("# hi") == "NO VERDICT"
            and not questa_satir_goster("# -- Compiling module x")
            and questa_satir_goster("# [QUESTA] running uart_stp ..."))
    if os.environ.get("PANEL_QUESTA_LIVE") == "1":
        vsim = questa_bul()
        if vsim:
            tr = os.path.join(REPO, "verif", "questa", "logs", "uart_stp.transcript")
            try:
                os.remove(tr)
            except OSError:
                pass
            t0 = time.time()
            r = subprocess.run(questa_komut(vsim, "uart_stp", False), cwd=REPO,
                               env=questa_ortam([], ""), stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT, text=True, encoding="utf-8",
                               errors="replace", timeout=900)
            try:
                with open(tr, encoding="utf-8", errors="replace") as f:
                    karar = questa_karar(f.read())
            except OSError:
                karar = "NO TRANSCRIPT"
            gorunen = [l for l in r.stdout.splitlines() if questa_satir_goster(l)]
            kontrol("(vi) live: vsim -c uart_stp", r.returncode == 0 and karar == "PASS",
                    "exit %d, %s, %.0f s, %d/%d lines shown" % (
                        r.returncode, karar, time.time() - t0, len(gorunen),
                        len(r.stdout.splitlines())))
        else:
            print("(vi) live questa run: SKIP (vsim not found)")
    kart.kapat()
    gecti = all(sonuclar)
    print("SELFTEST: %s" % ("PASS" if gecti else "FAIL"))
    return 0 if gecti else 1


if __name__ == "__main__":
    ap = argparse.ArgumentParser()
    ap.add_argument("--selftest", action="store_true",
                    help="dry test without board (frame, loaders, FakeSerial "
                         "board: stress tests + N=45 sweep)")
    ap.add_argument("--gui-smoke", action="store_true",
                    help="build the GUI without a board and close it after 1.5 s "
                         "(layout / import check)")
    a = ap.parse_args()
    if a.selftest:
        sys.exit(selftest())
    elif a.gui_smoke:
        sys.exit(gui_calistir(smoke_ms=1500))
    else:
        gui_calistir()
