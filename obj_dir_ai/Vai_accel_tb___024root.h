// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vai_accel_tb.h for the primary calling header

#ifndef VERILATED_VAI_ACCEL_TB___024ROOT_H_
#define VERILATED_VAI_ACCEL_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vai_accel_tb_ai_accel_tb;
class Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg;


class Vai_accel_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vai_accel_tb___024root final {
  public:
    // CELLS
    Vai_accel_tb_ai_accel_tb* __PVT__ai_accel_tb;
    Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16__Vclpkg* ai_accel_tb__03a__03a__VDynScope_16__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ai_accel_tb____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h83f6c349__0;
    VlTriggerScheduler __VtrigSched_h255dd428__0;

    // INTERNAL VARIABLES
    Vai_accel_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vai_accel_tb___024root(Vai_accel_tb__Syms* symsp, const char* namep);
    ~Vai_accel_tb___024root();
    VL_UNCOPYABLE(Vai_accel_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
