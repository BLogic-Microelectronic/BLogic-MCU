// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__1(Vai_accel_tb_ai_accel_tb* vlSelf);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__2(Vai_accel_tb_ai_accel_tb* vlSelf);

void Vai_accel_tb___024root___eval_initial(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_initial\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0((&vlSymsp->TOP__ai_accel_tb), std::make_shared<VlProcess>());
    Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__1((&vlSymsp->TOP__ai_accel_tb));
    Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__2((&vlSymsp->TOP__ai_accel_tb));
}

void Vai_accel_tb___024root___eval_triggers_vec__act(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_triggers_vec__act\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSymsp->TOP__ai_accel_tb.__PVT__dut__DOT__status_done) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0)) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSymsp->TOP__ai_accel_tb.__PVT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSymsp->TOP__ai_accel_tb.__PVT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__rst_n__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__dut__DOT__status_done;
}

bool Vai_accel_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__0(Vai_accel_tb_ai_accel_tb* vlSelf);
void Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__1(Vai_accel_tb_ai_accel_tb* vlSelf);

void Vai_accel_tb___024root___eval_nba(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_nba\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__0((&vlSymsp->TOP__ai_accel_tb));
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__1((&vlSymsp->TOP__ai_accel_tb));
    }
}

void Vai_accel_tb___024root___timing_ready(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___timing_ready\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h83f6c349__0.ready("@(posedge ai_accel_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h255dd428__0.ready("@( ai_accel_tb.dut.status_done)");
    }
}

void Vai_accel_tb___024root___timing_resume(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___timing_resume\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h83f6c349__0.moveToResumeQueue(
                                                          "@(posedge ai_accel_tb.clk)");
    vlSelfRef.__VtrigSched_h255dd428__0.moveToResumeQueue(
                                                          "@( ai_accel_tb.dut.status_done)");
    vlSelfRef.__VtrigSched_h83f6c349__0.resume("@(posedge ai_accel_tb.clk)");
    vlSelfRef.__VtrigSched_h255dd428__0.resume("@( ai_accel_tb.dut.status_done)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vai_accel_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vai_accel_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vai_accel_tb___024root___eval_phase__act(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_phase__act\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vai_accel_tb___024root___eval_triggers_vec__act(vlSelf);
    Vai_accel_tb___024root___timing_ready(vlSelf);
    Vai_accel_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vai_accel_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vai_accel_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vai_accel_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vai_accel_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vai_accel_tb___024root___eval_phase__inact(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_phase__inact\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verif/tb/ai_accel_tb.sv", 17, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vai_accel_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vai_accel_tb___024root___eval_phase__nba(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_phase__nba\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vai_accel_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vai_accel_tb___024root___eval_nba(vlSelf);
        Vai_accel_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vai_accel_tb___024root___eval(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vai_accel_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verif/tb/ai_accel_tb.sv", 17, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verif/tb/ai_accel_tb.sv", 17, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vai_accel_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verif/tb/ai_accel_tb.sv", 17, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vai_accel_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vai_accel_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vai_accel_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0(Vai_accel_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSymsp->TOP__ai_accel_tb.__PVT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__clk__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h83f6c349__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vai_accel_tb___024root____VbeforeTrig_h255dd428__0(Vai_accel_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root____VbeforeTrig_h255dd428__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSymsp->TOP__ai_accel_tb.__PVT__dut__DOT__status_done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__ai_accel_tb____PVT__dut__DOT__status_done__0 
        = vlSymsp->TOP__ai_accel_tb.__PVT__dut__DOT__status_done;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h255dd428__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vai_accel_tb___024root___eval_debug_assertions(Vai_accel_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vai_accel_tb___024root___eval_debug_assertions\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
