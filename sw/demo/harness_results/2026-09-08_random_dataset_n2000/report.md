# Demo Evaluation Report - BLogic Mikroelektronik

- Date: 2026-09-08T23:56:30+03:00
- Harness version: 1.0.2
- Configuration source: `team_icd.json`
- Effective configuration: `config_used.json` (SHA256 `02d4513aec3fb9f1`)
- Dataset: C:\demo\random_dataset_2000\manifest.csv | seed: 1337
- Interfaces: stream `COM8@115200`, core `COM7@115200`

## 1. Summary - RTL / Golden Model Agreement

> **The primary check is not model accuracy; it is fidelity of the design to the golden model.**
> The primary metric checks whether the hardware class matches the class produced by
> the golden model for the same vector. The ground-truth label (truth) is reported only
> as additional information and is not used for scoring.

| Metric | Value |
|---|---|
| Samples sent | 2000 |
| Samples with golden reference | 2000 |
| Responses received | 2000 |
| **Golden agreement** | 100.00 %  (2000/2000) |
| Mismatches | 0 |
| Timeouts (samples with reference) | 0 |
| Strict agreement (timeouts counted as errors) | 100.00 % |
| Latency (median / p95 / max) | 43.34 / 43.92 / 46.38 ms |
| Measured speedup (software / hardware) | 4.5x |
| Robustness scenarios | 11 / 11 |

> Note: latency is measured from the end of frame transmission to receipt of the final
> byte of the result. It includes UART transfer and ISR time. For pure accelerator
> cycle counts, RTL-simulation cross-checking is the authoritative method.

## 2. Agreement Matrix (rows = golden reference, columns = hardware output)

| golden \ hardware | silence | unknown | yes | no | TIMEOUT |
|---|---|---|---|---|---|
| **silence** | **27** | 0 | 0 | 0 | 0 |
| **unknown** | 0 | **481** | 0 | 0 | 0 |
| **yes** | 0 | 0 | **741** | 0 | 0 |
| **no** | 0 | 0 | 0 | **751** | 0 |

The diagonal represents agreement with the golden class. Every off-diagonal cell is a
sample where the RTL differs from the golden model.

### Informational only: accuracy against ground truth

_This section is NOT used for scoring; it only provides context about dataset difficulty._

| | Accuracy |
|---|---|
| Hardware | 100.00 % |
| Golden model (software) | 100.00 % |
| Difference | +0.00 percentage points |

## 3. Robustness Scenarios (Option F)

| Scenario | Result | Description |
|---|---|---|
| silence_zeros | PASS | output=no, latency=25.6 ms, next valid frame responded |
| silence_dither | PASS | output=no, latency=43.7 ms, next valid frame responded |
| saturate_max | PASS | output=unknown, latency=43.7 ms, next valid frame responded |
| saturate_min | PASS | output=silence, latency=43.0 ms, next valid frame responded |
| alternating | PASS | output=silence, latency=43.3 ms, next valid frame responded |
| back_to_back | PASS | received responses for 5 of 5 back-to-back frames |
| truncated_frame | PASS | recovery after truncated frame successful (output=no) |
| oversized_frame | PASS | recovery after oversized frame successful (output=no) |
| peripheral_interleave | PASS | recovery without reset after peripheral use successful; before=no, after=no |
| determinism | PASS | 1 distinct result(s) across 10 repetitions; latency jitter=0.62 ms |
| recovery_after_idle | PASS | after a 3 s idle period responded (no) |

## 4. Samples That Differ from the Golden Model

_None._

## 5. Files

- `samples.csv` - per-sample raw records and score-error information
- `robustness.csv` - robustness scenario results
- `summary.json` - machine-readable summary
- `transcript.log` - raw core-UART output
- `config_used.json` - effective ICD actually used for the run
