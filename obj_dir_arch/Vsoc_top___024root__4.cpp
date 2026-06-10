// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 2> &out, const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U >= n));
}

void Vsoc_top___024root___eval_triggers_vec__act(Vsoc_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);
void Vsoc_top___024root___eval_act(Vsoc_top___024root* vlSelf);

bool Vsoc_top___024root___eval_phase__act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vsoc_top___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vsoc_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vsoc_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vsoc_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vsoc_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 2> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((2U > n));
}

void Vsoc_top___024root___eval_nba(Vsoc_top___024root* vlSelf);

bool Vsoc_top___024root___eval_phase__nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vsoc_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vsoc_top___024root___eval_nba(vlSelf);
        Vsoc_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vsoc_top___024root___sample(Vsoc_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vsoc_top___024root___eval_phase__ico(Vsoc_top___024root* vlSelf);

void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vsoc_top___024root___sample(vlSelf);
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/soc_top.sv", 5, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vsoc_top___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/soc_top.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsoc_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/soc_top.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vsoc_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vsoc_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vsoc_top___024root___sample(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___sample\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__aw_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__ar_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__w_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__aw_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__ar_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__w_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__aw_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__ar_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__w_valid 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__aw_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__ar_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready;
    vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__w_ready 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready;
}

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_debug_assertions\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.uart_rxd_i & 0xfeU)))) {
        Verilated::overWidthError("uart_rxd_i");
    }
    if (VL_UNLIKELY(((vlSelfRef.qspi_io_i & 0xf0U)))) {
        Verilated::overWidthError("qspi_io_i");
    }
}
#endif  // VL_DEBUG
