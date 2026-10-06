#!/usr/bin/env python3
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
# Licensed under the GNU General Public License version 3 only.
# See the LICENSE file in the repository root for the full license text.
#
# Test report: after a test has run, collects what it did into one readable file
# and prints a short summary on the screen.
#
#   python3 scripts/test_report.py <test> <logdir> [--log <run log>] [--fw <firmware.c>]
#   python3 scripts/test_report.py --markdown > docs/TESTS.md
#
# <test>    key in verif/test_catalog.py (make target or firmware name)
# <logdir>  directory with the logs of the run. Files used when present:
#             bus_summary.tsv  registers and checks (verif/sva/tb_log_pkg.sv)
#             result.log       result of a firmware run (verif/tb/sim_main.cpp)
#             uart.log         UART_0 output of a firmware run
#             stdout.log       simulator output (protocol and coverage reports)
# --log     testbench output, when it is not <logdir>/stdout.log
#
# Writes <logdir>/report.txt and adds one line to logs/report_index.txt.
# The report never changes the result of a test; it only describes it.
import datetime
import os
import pathlib
import re
import sys
import textwrap

ROOT = pathlib.Path(__file__).resolve().parent.parent


def catalog():
    ns = {}
    try:
        exec((ROOT / "verif" / "test_catalog.py").read_text(encoding="utf-8"), ns)
    except Exception as e:                                     # pragma: no cover
        print(f"[REPORT] cannot read verif/test_catalog.py: {e}")
        return {}
    return ns.get("TESTS", {})


def rel(p):
    p = pathlib.Path(p).resolve()
    try:
        return str(p.relative_to(ROOT))
    except ValueError:
        return str(p)


def read(p):
    try:
        return pathlib.Path(p).read_text(errors="replace")
    except OSError:
        return ""


def kv(text, key):
    m = re.search(rf"^{re.escape(key)}=(.*)$", text, re.M)
    return m.group(1).strip() if m else ""


def wrap(text, first, width=100):
    ind = " " * len(first)
    return textwrap.fill(text, width=width, initial_indent=first, subsequent_indent=ind)


CHECK_RE = re.compile(r"\b(PASS(ED)?|FAIL(ED|URE)?|OK|MISMATCH|ERROR|VIOLATION|TIMEOUT)\b", re.I)
FAIL_RE = re.compile(r"\b(FAIL(ED|URE)?|MISMATCH|ERROR|VIOLATION|TIMEOUT)\b", re.I)
# lines that carry a verdict word but are not a check of the test itself
NOISE_RE = re.compile(r"Protocol Check Report|\[FUNC-COV\]|^\s*- |UVM_(INFO|ERROR|WARNING|FATAL)\s*:\s*\d|"
                      r"^\[SIM\] |^\[COV\]|^\[LOG\]|%Warning|verilator", re.I)


def checks_from_text(text):
    out = []
    for line in text.splitlines():
        s = line.strip()
        if not s or NOISE_RE.search(s) or not CHECK_RE.search(s):
            continue
        # "passed=25 failed=0" style totals are a result, not a failure
        bad = bool(FAIL_RE.search(re.sub(r"\b(failed|errors?|violations?|fail)\s*[=:]\s*0\b", "", s, flags=re.I)))
        out.append((s[:160], not bad))
    return out


def main(argv):
    if argv and argv[0] == "--markdown":
        return markdown()
    if len(argv) < 2:
        print(__doc__ if __doc__ else "usage: test_report.py <test> <logdir> [--log f] [--fw f]")
        return 2
    key, logdir = argv[0], pathlib.Path(argv[1])
    runlog = fw = None
    i = 2
    while i < len(argv):
        if argv[i] == "--log" and i + 1 < len(argv):
            runlog = pathlib.Path(argv[i + 1]); i += 2
        elif argv[i] == "--fw" and i + 1 < len(argv):
            fw = argv[i + 1]; i += 2
        else:
            i += 1
    tests = catalog()
    entry = tests.get(key)
    if entry is None and fw:
        entry = tests.get(pathlib.Path(fw).stem)
    entry = entry or {}

    result_log = read(logdir / "result.log")
    uart = read(logdir / "uart.log")
    run_text = read(runlog) if runlog else read(logdir / "stdout.log")

    # registers, checks and memory traffic from the access log summary
    regs, tsv_checks, mem, cycles, unit = [], [], [], "", "cycle"
    for line in read(logdir / "bus_summary.tsv").splitlines():
        f = line.split("\t")
        if f[0] == "reg" and len(f) >= 8:
            regs.append((f[1], int(f[2]), int(f[3]), f[6], f[7]))
        elif f[0] == "check" and len(f) >= 3:
            tsv_checks.append((f[1] + (f"  ({f[3]})" if len(f) > 3 and f[3] else ""), f[2] == "PASS"))
        elif f[0] == "mem" and len(f) >= 4:
            mem.append((f[1], int(f[2]), int(f[3])))
        elif f[0] == "cycles":
            cycles = f[1]
        elif f[0] == "unit":
            unit = f[1]

    # checks: the testbench's own (bus_summary.tsv), else the verdict lines it printed
    if tsv_checks:
        checks, check_src = tsv_checks, "bus_trace.log (CHECK lines)"
    elif result_log:
        checks, check_src = checks_from_text(uart), "simulator and UART_0 output of the firmware (uart.log)"
        sim_ok = kv(result_log, "result") == "PASS"
        sweep = kv(result_log, "sweep_cpbs")
        exp = kv(result_log, "expected_output")
        if sweep:
            checks.insert(0, (f"UART_0 printed the marker at each baud rate in turn, clocks per bit {sweep} "
                              f"(phases done: {kv(result_log, 'sweep_phases_done')})", sim_ok))
        elif exp:
            checks.insert(0, (f'UART_0 output contains the expected text "{exp}" (compared by the simulator)', sim_ok))
    else:
        checks, check_src = checks_from_text(run_text), rel(runlog) if runlog else "stdout.log"
    n_ok = sum(1 for _, ok in checks if ok)
    n_bad = len(checks) - n_ok

    proto = [l.strip() for l in run_text.splitlines() if "Protocol Check Report" in l]
    proto_bad = [l for l in proto if "VIOLATION" in l]
    cov = [l.strip() for l in run_text.splitlines() if l.startswith("[FUNC-COV]")]

    result = kv(result_log, "result")
    if not result:
        result = "FAIL" if n_bad else ("PASS" if checks else "see the log")
    cyc = kv(result_log, "cycles") or cycles

    title = entry.get("title", key)
    files = {
        "report": logdir / "report.txt",
        "trace": logdir / "bus_trace.log",
    }
    has_trace = files["trace"].exists()

    # ---------------------------------------------------------------- report.txt
    R = []
    R.append(f"BLogic MCU test report: {title}")
    R.append("=" * min(100, len(R[0])))
    R.append(f"test       : {key}")
    R.append(f"date       : {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
    R.append(f"result     : {result}" + (f"  ({int(cyc):,} {unit}s simulated)" if cyc.isdigit() else ""))
    if entry.get("run"):
        R.append(wrap(entry["run"], "run with   : "))
    R.append("")
    if entry.get("purpose"):
        R.append("What this test proves")
        R.append(wrap(entry["purpose"], "  "))
        R.append("")
    if entry.get("checks"):
        R.append("What it checks (from verif/test_catalog.py)")
        for c in entry["checks"]:
            R.append(wrap(c, "  - "))
        R.append("")
    srcs = list(entry.get("sources", []))
    if fw and fw not in srcs:
        srcs.insert(0, fw)
    if srcs:
        R.append("Test files")
        R += [f"  {s}" for s in srcs]
        R.append("")
    if entry.get("dut"):
        R.append("Design files under test")
        R += [f"  {s}" for s in entry["dut"]]
        R.append("")
    R.append(f"Checks made in this run ({n_ok} passed, {n_bad} failed; source: {check_src})")
    if checks:
        for c, ok in checks:
            R.append(f"  {'PASS' if ok else 'FAIL'}  {c}")
    else:
        R.append("  none recorded; the pass criterion is the one described above")
    R.append("")
    if regs:
        R.append(f"Registers accessed ({sum(r[1] + r[2] for r in regs):,} accesses; every access is listed in bus_trace.log)")
        R.append(f"  {'register':<18} {'reads':>9} {'writes':>9}   {'last write':<10}   last read")
        for n, rd, wr, lw, lr in regs:
            R.append(f"  {n:<18} {rd:>9,} {wr:>9,}   {lw:<10}   {lr}")
        R.append("")
    elif has_trace:
        R.append("Registers accessed: none")
        R.append("")
    if mem:
        R.append("CPU loads and stores per memory region")
        for n, rd, wr in mem:
            R.append(f"  {n:<32} {rd:>10,} reads {wr:>10,} writes")
        R.append("")
    if proto:
        R.append(f"Bus protocol checkers ({len(proto)} interfaces, {len(proto_bad)} with violations)")
        R += [f"  {p}" for p in proto]
        R.append("")
    if cov:
        R.append("Functional coverage monitors")
        R += [f"  {c}" for c in cov]
        R.append("")
    R.append("Log files")
    for name, desc in (("bus_trace.log", "every register access and check, in time order"),
                       ("mem_trace.log", "every CPU load and store (only with +MEM_TRACE=1)"),
                       ("uart.log", "UART_0 output of the firmware"),
                       ("result.log", "result, cycle count and run parameters"),
                       ("stdout.log", "simulator output"),
                       ("rtl_trace.log", "program counter of every executed instruction"),
                       ("diag.log", "state at the end of a failed run")):
        p = logdir / name
        if p.exists() and p.stat().st_size > 0:
            R.append(f"  {rel(p):<60} {desc}")
    if runlog and runlog.exists():
        R.append(f"  {rel(runlog):<60} testbench output")
    text = "\n".join(R) + "\n"
    try:
        files["report"].write_text(text)
    except OSError as e:
        print(f"[REPORT] cannot write {files['report']}: {e}")
    try:
        idx = ROOT / "logs" / "report_index.txt"
        idx.parent.mkdir(parents=True, exist_ok=True)
        with idx.open("a") as f:
            f.write(f"{datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}  {result:<5} {key:<24} {rel(files['report'])}\n")
    except OSError:
        pass

    # ---------------------------------------------------------------- screen
    S = []
    S.append(f"---- Test report: {title} " + "-" * max(0, 70 - len(title)))
    if entry.get("purpose"):
        first = entry["purpose"].split(". ")[0].rstrip(".") + "."
        S.append(wrap(first, "  What it proves : "))
    if srcs:
        S.append(wrap(", ".join(srcs[:3]) + (", ..." if len(srcs) > 3 else ""), "  Test files     : "))
    if entry.get("dut"):
        d = entry["dut"]
        S.append(wrap(", ".join(d[:3]) + (", ..." if len(d) > 3 else ""), "  Design files   : "))
    S.append(f"  Checks         : {n_ok} passed, {n_bad} failed" + (" (listed in the report)" if checks else ""))
    for c, ok in checks:
        if not ok:
            S.append(f"                   FAIL  {c[:100]}")
    if regs:
        # one line per peripheral: its registers and the number of accesses
        blocks = {}
        for n, rd, wr, _, _ in regs:
            b, _, r = n.partition(".")
            if not r:
                b, r = n, ""
            blocks.setdefault(b, [[], 0])
            if r:
                blocks[b][0].append(r)
            blocks[b][1] += rd + wr
        first = True
        for b, (rs, cnt) in blocks.items():
            label = "  Registers      : " if first else "                   "
            # UART_0 is only the report channel when the test is about another block
            other = [x for x in entry.get("registers", []) if not x.startswith("UART0.")]
            note = ", console output of the firmware" if b == "UART0" and other else ""
            names = f": {', '.join(rs)}" if rs else ""
            S.append(wrap(f"{b}{names}  ({cnt:,} accesses{note})", label))
            first = False
    if proto:
        S.append(f"  Bus protocol   : {len(proto)} interfaces checked, "
                 + (f"{len(proto_bad)} with violations" if proto_bad else "no violations"))
    S.append(f"  Result         : {result}" + (f" ({int(cyc):,} {unit}s)" if cyc.isdigit() else ""))
    S.append(f"  Report         : {rel(files['report'])}")
    if has_trace:
        S.append(f"  Access log     : {rel(files['trace'])}")
    print("\n".join(S))
    return 0


def markdown():
    ns = {}
    exec((ROOT / "verif" / "test_catalog.py").read_text(encoding="utf-8"), ns)
    out = ["# Tests", "",
           "Generated from `verif/test_catalog.py` with `python3 scripts/test_report.py --markdown`.", "",
           "Every simulation test writes `report.txt` (what was tested, the checks made, the registers",
           "accessed and the result) and `bus_trace.log` (every register access and check in time order)",
           "into its log directory, and prints a short summary with the location of both files.",
           "`make test-all` collects the report locations in `logs/report_index.txt`.", ""]
    for group, d in (("Testbench and script targets", ns.get("TB", {})), ("Firmware tests", ns.get("FW", {}))):
        out += [f"## {group}", ""]
        for k, e in d.items():
            out += [f"### {k}: {e.get('title', '')}", "", e.get("purpose", ""), ""]
            if e.get("run"):
                out += [f"Run: {e['run']}", ""]
            if e.get("checks"):
                out += ["Checks:", ""] + [f"- {c}" for c in e["checks"]] + [""]
            if e.get("registers"):
                out += ["Registers: " + ", ".join(f"`{r}`" for r in e["registers"]), ""]
            if e.get("sources"):
                out += ["Test files: " + ", ".join(f"`{s}`" for s in e["sources"]), ""]
            if e.get("dut"):
                out += ["Design files: " + ", ".join(f"`{s}`" for s in e["dut"]), ""]
            if e.get("log"):
                out += [f"Log: `{e['log']}`", ""]
    print("\n".join(out))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
