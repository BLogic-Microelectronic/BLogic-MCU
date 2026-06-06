// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

VL_ATTR_COLD void Vai_accel_tb_ai_accel_tb___eval_static__TOP__ai_accel_tb(Vai_accel_tb_ai_accel_tb* vlSelf);
void Vai_accel_tb___024root___timing_ready(Vai_accel_tb___024root* vlSelf);

VL_ATTR_COLD void Vai_accel_tb___024root___eval_static(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_static\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vai_accel_tb_ai_accel_tb___eval_static__TOP__ai_accel_tb((&vlSymsp->TOP__ai_accel_tb));
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__rst_n__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__dut__DOT__status_done;
    Vai_accel_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vai_accel_tb___024root___eval_final(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_final\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vai_accel_tb___024root___eval_settle(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_settle\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vai_accel_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vai_accel_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vai_accel_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge ai_accel_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge ai_accel_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( ai_accel_tb.dut.status_done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vai_accel_tb___024root___ctor_var_reset(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___ctor_var_reset\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ai_accel_tb____PVT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
