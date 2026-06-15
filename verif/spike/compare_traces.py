#!/usr/bin/env python3
# ============================================
# Ostim BLogic Mikroelektronik
# compare_traces.py  -  Spike ve RTL iz karsilastirma
# ============================================
"""Spike commit log'u ile RTL PC izini karsilastirir.

Spike `-l --log-commits` ile kosulmali. Sadece [0x10000, 0x20000) araligi kiyaslanir.
"""

import sys
import re
import argparse
from dataclasses import dataclass
from typing import List, Optional

HEX = r"[0-9a-fA-F]+"

# Spike commit satiri
SPIKE_COMMIT_RE = re.compile(
    rf"^core\s+\d+:\s+\d+\s+0x({HEX})\s+\(0x({HEX})\)(.*)$"
)
SPIKE_REG_RE = re.compile(rf"\bx(\d+)\s+0x({HEX})")
SPIKE_MEM_RE = re.compile(rf"\bmem\s+0x({HEX})(?:\s+0x({HEX}))?")

RTL_RE = re.compile(rf"^RTL_PC:\s+0x({HEX})")

INST_SRAM_LO = 0x10000
INST_SRAM_HI = 0x20000


@dataclass
class Retire:
    pc: int
    insn: int
    rd: Optional[int] = None
    rdval: Optional[int] = None
    mem_addr: Optional[int] = None
    mem_data: Optional[int] = None
    raw: str = ""


def parse_spike(path, lo=INST_SRAM_LO, hi=INST_SRAM_HI):
    out = []
    with open(path, 'r', errors='replace') as f:
        for line in f:
            m = SPIKE_COMMIT_RE.match(line)
            if not m:
                continue
            pc = int(m.group(1), 16)
            if pc < lo or pc >= hi:
                continue
            insn = int(m.group(2), 16)
            tail = m.group(3)
            r = Retire(pc=pc, insn=insn, raw=line.rstrip())
            reg = SPIKE_REG_RE.search(tail)
            if reg:
                r.rd, r.rdval = int(reg.group(1)), int(reg.group(2), 16)
            mem = SPIKE_MEM_RE.search(tail)
            if mem:
                r.mem_addr = int(mem.group(1), 16)
                if mem.group(2):
                    r.mem_data = int(mem.group(2), 16)
            out.append(r)
    return out


def parse_rtl(path):
    out = []
    with open(path, 'r', errors='replace') as f:
        for line in f:
            m = RTL_RE.search(line.strip())
            if m:
                out.append(int(m.group(1), 16))
    return out


def fmt_spike(r):
    s = f"pc=0x{r.pc:08x} insn=0x{r.insn:08x}"
    if r.rd is not None:
        s += f" x{r.rd}=0x{r.rdval:08x}"
    if r.mem_addr is not None:
        s += f" mem[0x{r.mem_addr:08x}]"
        if r.mem_data is not None:
            s += f"=0x{r.mem_data:08x}"
    return s


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("spike_log")
    ap.add_argument("rtl_log")
    ap.add_argument("--show", type=int, default=0,
                    help="ilk N kaydi her iki kaynaktan bas ve cik")
    ap.add_argument("--strict", action="store_true",
                    help="rd ve mem yazimlarini da kiyasla (RTL rd henuz yok)")
    args = ap.parse_args()

    try:
        spike = parse_spike(args.spike_log)
    except FileNotFoundError:
        print(f"[FAIL] Spike log yok: {args.spike_log}")
        return 1
    try:
        rtl = parse_rtl(args.rtl_log)
    except FileNotFoundError:
        print(f"[FAIL] RTL log yok: {args.rtl_log}")
        return 1

    print(f"[LOCKSTEP] Spike kayit: {len(spike)}, RTL kayit: {len(rtl)}")

    if args.show:
        n = min(args.show, max(len(spike), len(rtl)))
        print(f"\n== Spike (ilk {min(n, len(spike))}) ==")
        for r in spike[:n]:
            print(f"  {fmt_spike(r)}")
        print(f"\n== RTL (ilk {min(n, len(rtl))}) ==")
        for pc in rtl[:n]:
            print(f"  pc=0x{pc:08x}")
        return 0

    if not spike:
        print("[FAIL] Spike log'undan kayit cikmadi.")
        print("       Spike `-l --log-commits` ile mi kosturuluyor?")
        print("       Beklenen satir formati: 'core 0: 3 0xPC (0xINSN) ...'")
        return 1
    if not rtl:
        print("[FAIL] RTL log'undan tek 'RTL_PC: 0x...' satiri yok.")
        return 1

    n = min(len(spike), len(rtl))
    for i in range(n):
        s, r_pc = spike[i], rtl[i]
        if s.pc != r_pc:
            print(f"[FAIL] {i+1}. komutta uyusmazlik")
            print(f"  Spike : 0x{s.pc:08x} (insn 0x{s.insn:08x})")
            print(f"  RTL   : 0x{r_pc:08x}")
            lo = max(0, i - 2); hi = min(n, i + 3)
            print(f"  --- pencere [{lo}..{hi-1}] ---")
            for j in range(lo, hi):
                marker = "  >>" if j == i else "    "
                print(f"  {marker} #{j}: spike=0x{spike[j].pc:08x}  rtl=0x{rtl[j]:08x}")
            return 1

    print(f"[PASS] {n} komutluk PC dizisi eslesti")
    if len(spike) != len(rtl):
        print(f"[UYARI] iz uzunluklari farkli (spike={len(spike)} rtl={len(rtl)}); ilk {n} kiyaslandi")
    return 0


if __name__ == "__main__":
    sys.exit(main())
