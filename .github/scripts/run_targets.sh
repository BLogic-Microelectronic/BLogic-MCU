#!/usr/bin/env bash
# SPDX-FileCopyrightText: 2026 BLogic Mikroelektronik - Berk Muammer Kuzu and Berkin Demircan
# SPDX-License-Identifier: GPL-3.0-only
#
# Runs the given make targets one after another. A failing target does not stop
# the remaining ones. Each target's output goes to ci-logs/<target>.log, a result
# table is written to the GitHub job summary, and the script exits non-zero if
# any target failed.
#
# Usage: bash .github/scripts/run_targets.sh <target> [<target> ...]
set -uo pipefail

mkdir -p ci-logs
failed=0
rows=""

for target in "$@"; do
    echo "::group::make $target"
    start=$(date +%s)
    if make "$target" 2>&1 | tee "ci-logs/$target.log"; then
        result="PASS"
    else
        result="FAIL"
        failed=1
    fi
    secs=$(( $(date +%s) - start ))
    echo "::endgroup::"
    if [ "$result" = "PASS" ]; then
        echo "make $target: PASS (${secs} s)"
    else
        echo "::error title=make $target failed::see ci-logs/$target.log in the job artifacts"
    fi
    rows+="| \`make $target\` | $result | $((secs / 60)) min $((secs % 60)) s |"$'\n'
done

if [ -n "${GITHUB_STEP_SUMMARY:-}" ]; then
    {
        echo "| Target | Result | Duration |"
        echo "|---|---|---|"
        printf "%s" "$rows"
    } >> "$GITHUB_STEP_SUMMARY"
fi

exit "$failed"
