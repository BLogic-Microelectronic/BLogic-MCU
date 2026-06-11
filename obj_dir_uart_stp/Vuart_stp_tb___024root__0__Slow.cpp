// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_stp_tb.h for the primary calling header

#include "Vuart_stp_tb__pch.h"

void Vuart_stp_tb___024root___timing_ready(Vuart_stp_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_static(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_static\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_stp_tb__DOT__clk = 0U;
    vlSelfRef.uart_stp_tb__DOT__rst_n = 0U;
    vlSelfRef.uart_stp_tb__DOT__awaddr = 0U;
    vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__wdata = 0U;
    vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__araddr = 0U;
    vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__cyc = 0U;
    vlSelfRef.uart_stp_tb__DOT__txd_q = 1U;
    vlSelfRef.uart_stp_tb__DOT__start_n = 0U;
    vlSelfRef.uart_stp_tb__DOT__frame_guard = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__rst_n__0 = 0U;
    Vuart_stp_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_static__TOP(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_static__TOP\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_stp_tb__DOT__clk = 0U;
    vlSelfRef.uart_stp_tb__DOT__rst_n = 0U;
    vlSelfRef.uart_stp_tb__DOT__awaddr = 0U;
    vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__wdata = 0U;
    vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__araddr = 0U;
    vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    vlSelfRef.uart_stp_tb__DOT__cyc = 0U;
    vlSelfRef.uart_stp_tb__DOT__txd_q = 1U;
    vlSelfRef.uart_stp_tb__DOT__start_n = 0U;
    vlSelfRef.uart_stp_tb__DOT__frame_guard = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0U;
}

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_final(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_final\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_stp_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_stp_tb___024root___eval_phase__stl(Vuart_stp_tb___024root* vlSelf);

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_settle(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_settle\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_stp_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verif/tb/uart_stp_tb.sv", 19, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vuart_stp_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_triggers_vec__stl(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_triggers_vec__stl\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vuart_stp_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_stp_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_stp_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vuart_stp_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vuart_stp_tb___024root___eval_stl(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_stl\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load 
            = ((~ ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg) 
                   | (0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp)))) 
               & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy));
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_hold 
            = ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending) 
               | (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load));
    }
}

VL_ATTR_COLD bool Vuart_stp_tb___024root___eval_phase__stl(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_phase__stl\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_stp_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_stp_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vuart_stp_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vuart_stp_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vuart_stp_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_stp_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_stp_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge uart_stp_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge uart_stp_tb.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_stp_tb___024root___ctor_var_reset(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___ctor_var_reset\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->uart_stp_tb__DOT__awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17197124878760743897ull);
    vlSelf->uart_stp_tb__DOT__wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13343805688019848576ull);
    vlSelf->uart_stp_tb__DOT__bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6052979507305850406ull);
    vlSelf->uart_stp_tb__DOT__arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15241742295572243446ull);
    vlSelf->uart_stp_tb__DOT__rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12892518273740563901ull);
    vlSelf->uart_stp_tb__DOT__rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8645636654866876193ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->uart_stp_tb__DOT__start_cyc[__Vi0] = 0;
    }
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__uart_cpb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5066231144112142277ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__uart_stp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11658417627309023609ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__uart_rdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 283599922550592084ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__uart_tdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4819028825872166100ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__cfg_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7223477547296132683ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__cfg_rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762493084623763390ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__cfg_tx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18309649346749138741ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6459821882065291474ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 194805521019071378ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__stp_extending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1614472702461681671ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__tx_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 778084012526383013ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8819591636260785169ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__tx_done_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1360246764129324842ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__stp_ext_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6466547514272734822ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__stp_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16642457884390149175ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15404271465487927183ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10011000439535394321ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12264413477340367617ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5829750947235606766ull);
    vlSelf->uart_stp_tb__DOT__i_dut__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 469216594384665439ull);
    vlSelf->__Vdly__uart_stp_tb__DOT__awready = 0;
    vlSelf->__Vdly__uart_stp_tb__DOT__wready = 0;
    vlSelf->__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr = 0;
    vlSelf->__Vdly__uart_stp_tb__DOT__bvalid = 0;
    vlSelf->__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v0 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v1 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v1 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v3 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v2 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v5 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v0 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v1 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v3 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v7 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v4 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v9 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v9 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v1 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v3 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v5 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v11 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v11 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v6 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v13 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v13 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v7 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v15 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v15 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v2 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v5 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v8 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v16 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v16 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v17 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v17 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v9 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v9 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v9 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v9 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v18 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v18 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v19 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v19 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v3 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v7 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v10 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v20 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v20 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v21 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v21 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v11 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v11 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v11 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v11 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v22 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v22 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v23 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v23 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v12 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v24 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v24 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v25 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v25 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v4 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v8 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v9 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v13 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v13 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v13 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v13 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v26 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v26 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v27 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v27 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v14 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v28 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v28 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v29 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v29 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v5 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v10 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v11 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v15 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v15 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v15 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v15 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v30 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v30 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v31 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v31 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v16 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v16 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v16 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v16 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v32 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v32 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v33 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v33 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v17 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v17 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v17 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v17 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v34 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v34 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v35 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v35 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v6 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v12 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v13 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v18 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v18 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v18 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v18 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v36 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v36 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v37 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v37 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v19 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v19 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v19 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v19 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v38 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v38 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v39 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v39 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__araddr__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__araddr__v7 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v14 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__arvalid__v15 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v20 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v20 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v20 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v20 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v40 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v40 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v41 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v41 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v21 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v21 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v21 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v21 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v42 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v42 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v43 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v43 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v22 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v22 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v22 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v22 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v44 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v44 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v45 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v45 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__awaddr__v23 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awaddr__v23 = 0;
    vlSelf->__VdlyVal__uart_stp_tb__DOT__wdata__v23 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wdata__v23 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v46 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v46 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__awvalid__v47 = 0;
    vlSelf->__VdlySet__uart_stp_tb__DOT__wvalid__v47 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__uart_stp_tb__DOT__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
