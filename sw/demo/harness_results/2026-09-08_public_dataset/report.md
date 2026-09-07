# Demo Evaluation Report - BLogic Mikroelektronik

- Date: 2026-09-08T00:54:39+03:00
- Harness version: 1.0.2
- Configuration source: `C:\demo\demo_program\team_icd.json`
- Effective configuration: `config_used.json` (SHA256 `220628f1d78e5961`)
- Dataset: C:\demo\demo_program\public_dataset\manifest.csv | seed: 1337
- Interfaces: stream `COM8@115200`, core `COM7@115200`

## 1. Summary - RTL / Golden Model Agreement

> **The primary check is not model accuracy; it is fidelity of the design to the golden model.**
> The primary metric checks whether the hardware class matches the class produced by
> the golden model for the same vector. The ground-truth label (truth) is reported only
> as additional information and is not used for scoring.

| Metric | Value |
|---|---|
| Samples sent | 156 |
| Samples with golden reference | 156 |
| Responses received | 156 |
| **Golden agreement** | 100.00 %  (156/156) |
| Mismatches | 0 |
| Timeouts (samples with reference) | 0 |
| Strict agreement (timeouts counted as errors) | 100.00 % |
| Latency (median / p95 / max) | 43.28 / 43.81 / 44.06 ms |
| Measured speedup (software / hardware) | 4.5x |
| Robustness scenarios | 11 / 11 |

> Note: latency is measured from the end of frame transmission to receipt of the final
> byte of the result. It includes UART transfer and ISR time. For pure accelerator
> cycle counts, RTL-simulation cross-checking is the authoritative method.

## 2. Agreement Matrix (rows = golden reference, columns = hardware output)

| golden \ hardware | silence | unknown | yes | no | TIMEOUT |
|---|---|---|---|---|---|
| **silence** | **6** | 0 | 0 | 0 | 0 |
| **unknown** | 0 | **16** | 0 | 0 | 0 |
| **yes** | 0 | 0 | **50** | 0 | 0 |
| **no** | 0 | 0 | 0 | **84** | 0 |

The diagonal represents agreement with the golden class. Every off-diagonal cell is a
sample where the RTL differs from the golden model.

### Informational only: accuracy against ground truth

_This section is NOT used for scoring; it only provides context about dataset difficulty._

| | Accuracy |
|---|---|
| Hardware | 72.44 % |
| Golden model (software) | 72.44 % |
| Difference | +0.00 percentage points |

## 3. Robustness Scenarios (Option F)

| Scenario | Result | Description |
|---|---|---|
| silence_zeros | PASS | output=no, latency=43.3 ms, next valid frame responded |
| silence_dither | PASS | output=no, latency=43.6 ms, next valid frame responded |
| saturate_max | PASS | output=unknown, latency=43.9 ms, next valid frame responded |
| saturate_min | PASS | output=silence, latency=43.3 ms, next valid frame responded |
| alternating | PASS | output=silence, latency=43.3 ms, next valid frame responded |
| back_to_back | PASS | received responses for 5 of 5 back-to-back frames |
| truncated_frame | PASS | recovery after truncated frame successful (output=no) |
| oversized_frame | PASS | recovery after oversized frame successful (output=no) |
| peripheral_interleave | PASS | recovery without reset after peripheral use successful; before=no, after=no |
| determinism | PASS | 1 distinct result(s) across 10 repetitions; latency jitter=0.90 ms |
| recovery_after_idle | PASS | after a 3 s idle period responded (no) |

## 4. Samples That Differ from the Golden Model

_None._

## 5. Files

- `samples.csv` - per-sample raw records and score-error information
- `robustness.csv` - robustness scenario results
- `summary.json` - machine-readable summary
- `transcript.log` - raw core-UART output
- `config_used.json` - effective ICD actually used for the run
