# Feature Vector Format (K13)

The exact definition of the input data the accelerator expects. **The B11
host script is required to perform this conversion**; if it does not,
inference silently produces the wrong class.

## Summary

| Field | Value |
|---|---|
| Length | **1960 bytes** = 490 words (32-bit) |
| Shape | 49 time steps × 40 frequency bins, **row-major** (time outer, frequency inner) |
| Element type | **int8, signed** (-128 … 127) |
| Zero-point | **-128** (`ai_accelerator.sv:72` → `INPUT_ZP = -8'sd128`) |
| Word packing | **little-endian**: byte 0 = LSB of the word |
| Target address | AI SRAM `0x0003_0000` (INPUT region, offset 0) |

## Critical conversion: uint8 → int8

The `audio_microfrontend` frontend of TFLite Micro produces **uint8
(0…255)**. The model, however, expects **int8**. The shift between the two
must be applied on the host side:

```python
int8_value = uint8_value - 128        # equivalent: byte ^ 0x80
```

In two's complement this is the same as inverting the most significant bit.

**Verification:** the contents of `golden_vectors/input_yes_real.hex` have
already been through this conversion — range -128…118, 64.2% of the bytes
negative. If raw uint8 is sent, the value 200 for example is interpreted as
-56 instead of +72, and the entire MAC accumulation of the conv layer
shifts.

## The MCU side performs no conversion

The `sw/tests/ai_uart_load_test.c` protocol carries **raw bytes** and writes
the incoming byte into AI SRAM as it is (`dst[i] = (uint8_t)b`). This is
deliberate: whatever scaling the jury supplies, the firmware runs unchanged.
Responsibility for the conversion lies with the host script.

## If the jury supplies raw uint8

Two options:
1. **Convert in the host script** (preferred) — a single line, does not
   touch the firmware.
2. Convert in the firmware — `dst[i] = (uint8_t)(b ^ 0x80u);`, a
   one-character change, but it then corrupts int8 data if that arrives.
   It would have to be guarded by a flag.

Which convention the data coming from the jury follows is determined in the
field **from the first vector**: if it is int8, negative values are around
~60%; if it is uint8, no negatives appear at all (all bytes lie in the
0…255 range and the mean is ~128).

## Region map (AI SRAM 0x0003_0000)

| Region | Offset | Size |
|---|---|---|
| INPUT | 0x0000 | 1,960 B ← this document |
| CONV_OUT (scratch) | 0x07A8 | 4,000 B |
| CONV_W | 0x17A8 | 640 B |
| CONV_BIAS | 0x1BA8 | 32 B |
| FC_W | 0x1BC8 | 16,000 B |
| FC_BIAS | 0x5A48 | 16 B |
| RESULT | 0x5A58 | 4 B |

Source: `rtl/ai_accelerator/ai_accelerator.sv:89-93`

## UART Transfer Protocol and Handshake (August 14, board measurement)

**Critical:** the UART receiver has **no** FIFO — there is a single `RDR`
register (`rtl/peripherals/uart_axil.sv`). Bytes that arrive while the CPU
is not inside its read loop are overwritten and lost. For this reason the
sending side **must wait** for the line that announces the board is ready to
read.

### Correct flow with the demo firmware (`sw/demo/demo_main.c`)

1. The host sends the character `v`.
2. The board prints the line
   `[DEMO] BLG1 cercevesi bekleniyor (send_vector.py)...` (EN: waiting for
   the BLG1 frame).
3. **Only after seeing this line** does the host send the BLG1 frame:
   `'B','L','G','1'` + length[4, little-endian] + data + checksum[4, LE].
4. The board verifies the checksum; if it does not match, it does not run
   inference and prints an error.

If step 2 is skipped (that is, the data is sent back-to-back with `v`), the
~50 bytes that arrive while the prompt is being printed are lost and the
frame header cannot be caught — measured on the board.

### Ready-made tools

| Tool | Usage |
|---|---|
| `sw/ai_model/send_vector.py` | `--input <hex> --komut v --port <COM>` — performs the handshake itself |
| `sw/ai_model/kart_sweep.py` | `--n <N>` — sends N vectors in sequence and compares the hardware result against the software reference |
