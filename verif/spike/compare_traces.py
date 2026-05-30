#!/usr/bin/env python3
import sys

def parse_spike(spike_log):
    pcs = []
    try:
        with open(spike_log, 'r') as f:
            for line in f:
                if line.startswith("core") and "0x0001" in line and not ": 3 " in line:
                    parts = line.split()
                    if len(parts) > 2 and parts[2].startswith("0x"):
                        pcs.append(int(parts[2], 16))
    except FileNotFoundError:
        print(f"Hata: {spike_log} bulunamadı.")
    return pcs

def parse_rtl(rtl_log):
    pcs = []
    try:
        with open(rtl_log, 'r') as f:
            for line in f:
                if "RTL_PC:" in line:
                    parts = line.split()
                    if len(parts) > 1:
                        pcs.append(int(parts[1], 16))
    except FileNotFoundError:
        print(f"Hata: {rtl_log} bulunamadı.")
    return pcs

spike_pcs = parse_spike("spike_trace.log")
rtl_pcs = parse_rtl("obj_dir/rtl_sim.log")

if not spike_pcs or not rtl_pcs:
    print("❌ [LOCKSTEP FAIL] İz dosyaları boş veya okunamadı!")
    sys.exit(1)

print(f"[LOCKSTEP] Spike Adım Sayısı: {len(spike_pcs)}, RTL Adım Sayısı: {len(rtl_pcs)}")

mismatch = False
max_steps = min(len(spike_pcs), len(rtl_pcs))

for i in range(max_steps):
    if spike_pcs[i] != rtl_pcs[i]:
        print(f"❌ [MISMATCH] {i+1}. adımda kilitlenme (Divergence)!")
        print(f"  → Spike PC : 0x{spike_pcs[i]:08X}")
        print(f"  → RTL PC   : 0x{rtl_pcs[i]:08X}")
        mismatch = True
        break

if not mismatch:
    print("✓ [LOCKSTEP PASS] RTL ve Spike ISS buyruk izleri başarıyla eşleşti!")
    sys.exit(0)
else:
    sys.exit(1)
