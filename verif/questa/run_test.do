# ============================================
# Ostim BLogic Mikroelektronik
# run_test.do - entry point of the Questa / ModelSim waveform flow
# ============================================
# Inside Questa (any working directory):
#     do <repo>/verif/questa/run_test.do <test>
# or from the launchers verif/questa/wave.bat / wave.sh. Without an argument
# the available tests are listed. See verif/questa/README.md.

if {[catch {set QSCRIPT [info script]}] || $QSCRIPT eq ""} {
    # some do-implementations do not set 'info script'; the launchers cd to
    # the repository root, so fall back to that
    set QSCRIPT [file join [pwd] verif questa run_test.do]
}
set QDIR_ [file normalize [file dirname $QSCRIPT]]
source [file join $QDIR_ questa_lib.tcl]
source [file join $QDIR_ tests.tcl]

if {![info exists argc] || $argc < 1} {
    q_list
} else {
    q_run $1
}
