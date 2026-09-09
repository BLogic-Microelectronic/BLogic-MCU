# Supporting evidence: STA of the delivered database at the 20 ns PnR target

Same placed-and-routed database and the same extracted parasitics as
`reports/timing/` (run `RUN_hold035_2026-09-09`), re-timed with the PnR SDC
(`constraints/design.sdc`, `create_clock -period 20.000`) instead of the signoff
SDC (`constraints/design_signoff.sdc`, 37.000 ns). Produced with
`librelane ... --only OpenROAD.STAPostPNR -c SIGNOFF_SDC_FILE=dir::constraints/design.sdc`
(step 83 of the run directory). It documents how the delivered netlist behaves at
the 50 MHz *target*; the *verified* operating frequency is the one in
`reports/timing/` (asic/README.md 9.1). File set identical to `reports/timing/`.
