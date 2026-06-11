// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_stp_tb.h for the primary calling header

#include "Vuart_stp_tb__pch.h"

VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_stp_tb___024root* vlSelf);
VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_stp_tb___024root* vlSelf);
VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_stp_tb___024root* vlSelf);

void Vuart_stp_tb___024root___eval_initial(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_initial\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

void Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(Vuart_stp_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__0(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ uart_stp_tb__DOT____VlemCall_3__absdiff;
    IData/*31:0*/ uart_stp_tb__DOT____VlemCall_2__absdiff;
    IData/*31:0*/ uart_stp_tb__DOT____VlemCall_1__absdiff;
    IData/*31:0*/ uart_stp_tb__DOT____VlemCall_0__absdiff;
    IData/*31:0*/ uart_stp_tb__DOT__d00;
    uart_stp_tb__DOT__d00 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__d01;
    uart_stp_tb__DOT__d01 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__d10;
    uart_stp_tb__DOT__d10 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__d11;
    uart_stp_tb__DOT__d11 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__base2;
    uart_stp_tb__DOT__base2 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__s1;
    uart_stp_tb__DOT__s1 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__s2;
    uart_stp_tb__DOT__s2 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__gap;
    uart_stp_tb__DOT__gap = 0;
    IData/*31:0*/ uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__0__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__0__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__0__data;
    __Vtask_uart_stp_tb__DOT__axi_write__0__data = 0;
    CData/*1:0*/ __Vtask_uart_stp_tb__DOT__send_pair__1__stp;
    __Vtask_uart_stp_tb__DOT__send_pair__1__stp = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__1__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__1__delta = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__1__r;
    __Vtask_uart_stp_tb__DOT__send_pair__1__r = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__1__base;
    __Vtask_uart_stp_tb__DOT__send_pair__1__base = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__2__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__2__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__2__data;
    __Vtask_uart_stp_tb__DOT__axi_write__2__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__3__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__3__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__3__data;
    __Vtask_uart_stp_tb__DOT__axi_write__3__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__4__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__4__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__4__data;
    __Vtask_uart_stp_tb__DOT__axi_read__4__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__5__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__5__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__5__data;
    __Vtask_uart_stp_tb__DOT__axi_write__5__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__6__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__6__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__6__data;
    __Vtask_uart_stp_tb__DOT__axi_write__6__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__7__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__7__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__7__data;
    __Vtask_uart_stp_tb__DOT__axi_read__7__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__8__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__8__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__8__data;
    __Vtask_uart_stp_tb__DOT__axi_write__8__data = 0;
    CData/*1:0*/ __Vtask_uart_stp_tb__DOT__send_pair__9__stp;
    __Vtask_uart_stp_tb__DOT__send_pair__9__stp = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__9__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__9__delta = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__9__r;
    __Vtask_uart_stp_tb__DOT__send_pair__9__r = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__9__base;
    __Vtask_uart_stp_tb__DOT__send_pair__9__base = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__10__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__10__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__10__data;
    __Vtask_uart_stp_tb__DOT__axi_write__10__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__11__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__11__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__11__data;
    __Vtask_uart_stp_tb__DOT__axi_write__11__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__12__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__12__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__12__data;
    __Vtask_uart_stp_tb__DOT__axi_read__12__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__13__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__13__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__13__data;
    __Vtask_uart_stp_tb__DOT__axi_write__13__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__14__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__14__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__14__data;
    __Vtask_uart_stp_tb__DOT__axi_write__14__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__15__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__15__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__15__data;
    __Vtask_uart_stp_tb__DOT__axi_read__15__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__16__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__16__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__16__data;
    __Vtask_uart_stp_tb__DOT__axi_write__16__data = 0;
    CData/*1:0*/ __Vtask_uart_stp_tb__DOT__send_pair__17__stp;
    __Vtask_uart_stp_tb__DOT__send_pair__17__stp = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__17__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__17__delta = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__17__r;
    __Vtask_uart_stp_tb__DOT__send_pair__17__r = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__17__base;
    __Vtask_uart_stp_tb__DOT__send_pair__17__base = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__18__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__18__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__18__data;
    __Vtask_uart_stp_tb__DOT__axi_write__18__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__19__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__19__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__19__data;
    __Vtask_uart_stp_tb__DOT__axi_write__19__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__20__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__20__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__20__data;
    __Vtask_uart_stp_tb__DOT__axi_read__20__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__21__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__21__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__21__data;
    __Vtask_uart_stp_tb__DOT__axi_write__21__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__22__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__22__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__22__data;
    __Vtask_uart_stp_tb__DOT__axi_write__22__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__23__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__23__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__23__data;
    __Vtask_uart_stp_tb__DOT__axi_read__23__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__24__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__24__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__24__data;
    __Vtask_uart_stp_tb__DOT__axi_write__24__data = 0;
    CData/*1:0*/ __Vtask_uart_stp_tb__DOT__send_pair__25__stp;
    __Vtask_uart_stp_tb__DOT__send_pair__25__stp = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__25__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__25__delta = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__25__r;
    __Vtask_uart_stp_tb__DOT__send_pair__25__r = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__send_pair__25__base;
    __Vtask_uart_stp_tb__DOT__send_pair__25__base = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__26__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__26__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__26__data;
    __Vtask_uart_stp_tb__DOT__axi_write__26__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__27__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__27__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__27__data;
    __Vtask_uart_stp_tb__DOT__axi_write__27__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__28__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__28__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__28__data;
    __Vtask_uart_stp_tb__DOT__axi_read__28__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__29__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__29__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__29__data;
    __Vtask_uart_stp_tb__DOT__axi_write__29__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__30__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__30__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__30__data;
    __Vtask_uart_stp_tb__DOT__axi_write__30__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_read__31__addr;
    __Vtask_uart_stp_tb__DOT__axi_read__31__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_read__31__data;
    __Vtask_uart_stp_tb__DOT__axi_read__31__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__32__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__32__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__32__data;
    __Vtask_uart_stp_tb__DOT__axi_write__32__data = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__33__a;
    __Vfunc_uart_stp_tb__DOT__absdiff__33__a = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__33__b;
    __Vfunc_uart_stp_tb__DOT__absdiff__33__b = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__34__a;
    __Vfunc_uart_stp_tb__DOT__absdiff__34__a = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__34__b;
    __Vfunc_uart_stp_tb__DOT__absdiff__34__b = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__35__a;
    __Vfunc_uart_stp_tb__DOT__absdiff__35__a = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__35__b;
    __Vfunc_uart_stp_tb__DOT__absdiff__35__b = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__36__a;
    __Vfunc_uart_stp_tb__DOT__absdiff__36__a = 0;
    IData/*31:0*/ __Vfunc_uart_stp_tb__DOT__absdiff__36__b;
    __Vfunc_uart_stp_tb__DOT__absdiff__36__b = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__37__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__37__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__37__data;
    __Vtask_uart_stp_tb__DOT__axi_write__37__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__38__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__38__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__38__data;
    __Vtask_uart_stp_tb__DOT__axi_write__38__data = 0;
    CData/*4:0*/ __Vtask_uart_stp_tb__DOT__axi_write__39__addr;
    __Vtask_uart_stp_tb__DOT__axi_write__39__addr = 0;
    IData/*31:0*/ __Vtask_uart_stp_tb__DOT__axi_write__39__data;
    __Vtask_uart_stp_tb__DOT__axi_write__39__data = 0;
    // Body
    uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             153);
        uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (uart_stp_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.uart_stp_tb__DOT__rst_n = 1U;
    uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             155);
        uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (uart_stp_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    __Vtask_uart_stp_tb__DOT__axi_write__0__data = 0x000001b2U;
    __Vtask_uart_stp_tb__DOT__axi_write__0__addr = 0U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v0 
        = __Vtask_uart_stp_tb__DOT__axi_write__0__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v0 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v0 
        = __Vtask_uart_stp_tb__DOT__axi_write__0__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v0 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v0 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v0 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v1 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v1 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__send_pair__1__stp = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__1__delta = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__1__r = 0;
    __Vtask_uart_stp_tb__DOT__send_pair__1__base = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__1__base = vlSelfRef.uart_stp_tb__DOT__start_n;
    __Vtask_uart_stp_tb__DOT__axi_write__2__data = __Vtask_uart_stp_tb__DOT__send_pair__1__stp;
    __Vtask_uart_stp_tb__DOT__axi_write__2__addr = 4U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v1 
        = __Vtask_uart_stp_tb__DOT__axi_write__2__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v1 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v1 
        = __Vtask_uart_stp_tb__DOT__axi_write__2__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v1 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v2 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v2 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v3 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v3 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__3__data = 0x00000041U;
    __Vtask_uart_stp_tb__DOT__axi_write__3__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v2 
        = __Vtask_uart_stp_tb__DOT__axi_write__3__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v2 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v2 
        = __Vtask_uart_stp_tb__DOT__axi_write__3__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v2 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v4 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v4 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v5 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v5 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__4__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__4__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v0 
            = __Vtask_uart_stp_tb__DOT__axi_read__4__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v0 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v0 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v1 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__4__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__1__r = __Vtask_uart_stp_tb__DOT__axi_read__4__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__1__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__5__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__5__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v3 
        = __Vtask_uart_stp_tb__DOT__axi_write__5__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v3 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v3 
        = __Vtask_uart_stp_tb__DOT__axi_write__5__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v3 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v6 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v6 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v7 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v7 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__6__data = 0x00000042U;
    __Vtask_uart_stp_tb__DOT__axi_write__6__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v4 
        = __Vtask_uart_stp_tb__DOT__axi_write__6__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v4 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v4 
        = __Vtask_uart_stp_tb__DOT__axi_write__6__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v4 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v8 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v8 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v9 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v9 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__7__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__7__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v1 
            = __Vtask_uart_stp_tb__DOT__axi_read__7__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v1 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v2 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v3 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__7__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__1__r = __Vtask_uart_stp_tb__DOT__axi_read__7__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__1__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__8__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__8__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v5 
        = __Vtask_uart_stp_tb__DOT__axi_write__8__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v5 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v5 
        = __Vtask_uart_stp_tb__DOT__axi_write__8__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v5 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v10 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v10 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v11 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v11 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         139);
    if (VL_UNLIKELY(((vlSelfRef.uart_stp_tb__DOT__start_n 
                      != ((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__1__base))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:141: Assertion failed in %m: [STP] start kenari sayisi beklenmedik: %0d (beklenen %0d)\n",5, 'M',vlSymsp->name(),"uart_stp_tb.send_pair", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.uart_stp_tb__DOT__start_n
                     , '#',32,((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__1__base));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 141, "", false);
    }
    __Vtask_uart_stp_tb__DOT__send_pair__1__delta = 
        (vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                & ((IData)(1U) 
                                                   + __Vtask_uart_stp_tb__DOT__send_pair__1__base))] 
         - vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                  & __Vtask_uart_stp_tb__DOT__send_pair__1__base)]);
    uart_stp_tb__DOT__d00 = __Vtask_uart_stp_tb__DOT__send_pair__1__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__9__stp = 1U;
    __Vtask_uart_stp_tb__DOT__send_pair__9__delta = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__9__r = 0;
    __Vtask_uart_stp_tb__DOT__send_pair__9__base = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__9__base = vlSelfRef.uart_stp_tb__DOT__start_n;
    __Vtask_uart_stp_tb__DOT__axi_write__10__data = __Vtask_uart_stp_tb__DOT__send_pair__9__stp;
    __Vtask_uart_stp_tb__DOT__axi_write__10__addr = 4U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v6 
        = __Vtask_uart_stp_tb__DOT__axi_write__10__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v6 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v6 
        = __Vtask_uart_stp_tb__DOT__axi_write__10__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v6 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v12 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v12 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v13 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v13 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__11__data = 0x00000041U;
    __Vtask_uart_stp_tb__DOT__axi_write__11__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v7 
        = __Vtask_uart_stp_tb__DOT__axi_write__11__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v7 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v7 
        = __Vtask_uart_stp_tb__DOT__axi_write__11__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v7 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v14 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v14 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v15 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v15 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__12__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__12__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v2 
            = __Vtask_uart_stp_tb__DOT__axi_read__12__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v2 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v4 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v5 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__12__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__9__r = __Vtask_uart_stp_tb__DOT__axi_read__12__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__9__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__13__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__13__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v8 
        = __Vtask_uart_stp_tb__DOT__axi_write__13__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v8 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v8 
        = __Vtask_uart_stp_tb__DOT__axi_write__13__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v8 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v16 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v16 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v17 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v17 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__14__data = 0x00000042U;
    __Vtask_uart_stp_tb__DOT__axi_write__14__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v9 
        = __Vtask_uart_stp_tb__DOT__axi_write__14__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v9 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v9 
        = __Vtask_uart_stp_tb__DOT__axi_write__14__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v9 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v18 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v18 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v19 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v19 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__15__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__15__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v3 
            = __Vtask_uart_stp_tb__DOT__axi_read__15__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v3 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v6 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v7 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__15__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__9__r = __Vtask_uart_stp_tb__DOT__axi_read__15__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__9__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__16__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__16__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v10 
        = __Vtask_uart_stp_tb__DOT__axi_write__16__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v10 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v10 
        = __Vtask_uart_stp_tb__DOT__axi_write__16__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v10 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v20 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v20 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v21 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v21 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         139);
    if (VL_UNLIKELY(((vlSelfRef.uart_stp_tb__DOT__start_n 
                      != ((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__9__base))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:141: Assertion failed in %m: [STP] start kenari sayisi beklenmedik: %0d (beklenen %0d)\n",5, 'M',vlSymsp->name(),"uart_stp_tb.send_pair", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.uart_stp_tb__DOT__start_n
                     , '#',32,((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__9__base));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 141, "", false);
    }
    __Vtask_uart_stp_tb__DOT__send_pair__9__delta = 
        (vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                & ((IData)(1U) 
                                                   + __Vtask_uart_stp_tb__DOT__send_pair__9__base))] 
         - vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                  & __Vtask_uart_stp_tb__DOT__send_pair__9__base)]);
    uart_stp_tb__DOT__d01 = __Vtask_uart_stp_tb__DOT__send_pair__9__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__17__stp = 2U;
    __Vtask_uart_stp_tb__DOT__send_pair__17__delta = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__17__r = 0;
    __Vtask_uart_stp_tb__DOT__send_pair__17__base = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__17__base = vlSelfRef.uart_stp_tb__DOT__start_n;
    __Vtask_uart_stp_tb__DOT__axi_write__18__data = __Vtask_uart_stp_tb__DOT__send_pair__17__stp;
    __Vtask_uart_stp_tb__DOT__axi_write__18__addr = 4U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v11 
        = __Vtask_uart_stp_tb__DOT__axi_write__18__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v11 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v11 
        = __Vtask_uart_stp_tb__DOT__axi_write__18__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v11 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v22 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v22 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v23 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v23 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__19__data = 0x00000041U;
    __Vtask_uart_stp_tb__DOT__axi_write__19__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v12 
        = __Vtask_uart_stp_tb__DOT__axi_write__19__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v12 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v12 
        = __Vtask_uart_stp_tb__DOT__axi_write__19__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v12 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v24 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v24 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v25 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v25 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__20__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__20__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v4 
            = __Vtask_uart_stp_tb__DOT__axi_read__20__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v4 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v8 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v9 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__20__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__17__r 
            = __Vtask_uart_stp_tb__DOT__axi_read__20__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__17__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__21__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__21__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v13 
        = __Vtask_uart_stp_tb__DOT__axi_write__21__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v13 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v13 
        = __Vtask_uart_stp_tb__DOT__axi_write__21__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v13 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v26 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v26 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v27 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v27 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__22__data = 0x00000042U;
    __Vtask_uart_stp_tb__DOT__axi_write__22__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v14 
        = __Vtask_uart_stp_tb__DOT__axi_write__22__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v14 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v14 
        = __Vtask_uart_stp_tb__DOT__axi_write__22__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v14 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v28 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v28 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v29 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v29 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__23__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__23__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v5 
            = __Vtask_uart_stp_tb__DOT__axi_read__23__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v5 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v10 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v11 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__23__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__17__r 
            = __Vtask_uart_stp_tb__DOT__axi_read__23__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__17__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__24__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__24__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v15 
        = __Vtask_uart_stp_tb__DOT__axi_write__24__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v15 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v15 
        = __Vtask_uart_stp_tb__DOT__axi_write__24__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v15 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v30 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v30 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v31 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v31 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         139);
    if (VL_UNLIKELY(((vlSelfRef.uart_stp_tb__DOT__start_n 
                      != ((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__17__base))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:141: Assertion failed in %m: [STP] start kenari sayisi beklenmedik: %0d (beklenen %0d)\n",5, 'M',vlSymsp->name(),"uart_stp_tb.send_pair", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.uart_stp_tb__DOT__start_n
                     , '#',32,((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__17__base));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 141, "", false);
    }
    __Vtask_uart_stp_tb__DOT__send_pair__17__delta 
        = (vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_uart_stp_tb__DOT__send_pair__17__base))] 
           - vlSelfRef.uart_stp_tb__DOT__start_cyc[
           (0x0000000fU & __Vtask_uart_stp_tb__DOT__send_pair__17__base)]);
    uart_stp_tb__DOT__d10 = __Vtask_uart_stp_tb__DOT__send_pair__17__delta;
    __Vtask_uart_stp_tb__DOT__send_pair__25__stp = 3U;
    __Vtask_uart_stp_tb__DOT__send_pair__25__delta = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__25__r = 0;
    __Vtask_uart_stp_tb__DOT__send_pair__25__base = 0U;
    __Vtask_uart_stp_tb__DOT__send_pair__25__base = vlSelfRef.uart_stp_tb__DOT__start_n;
    __Vtask_uart_stp_tb__DOT__axi_write__26__data = __Vtask_uart_stp_tb__DOT__send_pair__25__stp;
    __Vtask_uart_stp_tb__DOT__axi_write__26__addr = 4U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v16 
        = __Vtask_uart_stp_tb__DOT__axi_write__26__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v16 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v16 
        = __Vtask_uart_stp_tb__DOT__axi_write__26__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v16 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v32 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v32 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v33 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v33 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__27__data = 0x00000041U;
    __Vtask_uart_stp_tb__DOT__axi_write__27__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v17 
        = __Vtask_uart_stp_tb__DOT__axi_write__27__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v17 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v17 
        = __Vtask_uart_stp_tb__DOT__axi_write__27__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v17 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v34 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v34 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v35 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v35 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__28__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__28__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v6 
            = __Vtask_uart_stp_tb__DOT__axi_read__28__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v6 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v12 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v13 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__28__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__25__r 
            = __Vtask_uart_stp_tb__DOT__axi_read__28__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__25__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__29__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__29__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v18 
        = __Vtask_uart_stp_tb__DOT__axi_write__29__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v18 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v18 
        = __Vtask_uart_stp_tb__DOT__axi_write__29__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v18 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v36 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v36 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v37 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v37 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    __Vtask_uart_stp_tb__DOT__axi_write__30__data = 0x00000042U;
    __Vtask_uart_stp_tb__DOT__axi_write__30__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v19 
        = __Vtask_uart_stp_tb__DOT__axi_write__30__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v19 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v19 
        = __Vtask_uart_stp_tb__DOT__axi_write__30__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v19 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v38 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v38 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v39 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v39 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    do {
        __Vtask_uart_stp_tb__DOT__axi_read__31__addr = 0x10U;
        __Vtask_uart_stp_tb__DOT__axi_read__31__data = 0;
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             117);
        vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v7 
            = __Vtask_uart_stp_tb__DOT__axi_read__31__addr;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v7 = 1U;
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v14 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 120);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready))));
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v15 = 1U;
        do {
            Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                               "@(posedge uart_stp_tb.clk)");
            co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge uart_stp_tb.clk)", 
                                                                 "verif/tb/uart_stp_tb.sv", 
                                                                 122);
        } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid))));
        __Vtask_uart_stp_tb__DOT__axi_read__31__data 
            = vlSelfRef.uart_stp_tb__DOT__rdata;
        __Vtask_uart_stp_tb__DOT__send_pair__25__r 
            = __Vtask_uart_stp_tb__DOT__axi_read__31__data;
    } while ((1U & (~ (__Vtask_uart_stp_tb__DOT__send_pair__25__r 
                       >> 2U))));
    __Vtask_uart_stp_tb__DOT__axi_write__32__data = 0U;
    __Vtask_uart_stp_tb__DOT__axi_write__32__addr = 0x10U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v20 
        = __Vtask_uart_stp_tb__DOT__axi_write__32__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v20 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v20 
        = __Vtask_uart_stp_tb__DOT__axi_write__32__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v20 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v40 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v40 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v41 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v41 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         139);
    if (VL_UNLIKELY(((vlSelfRef.uart_stp_tb__DOT__start_n 
                      != ((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__25__base))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:141: Assertion failed in %m: [STP] start kenari sayisi beklenmedik: %0d (beklenen %0d)\n",5, 'M',vlSymsp->name(),"uart_stp_tb.send_pair", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,vlSelfRef.uart_stp_tb__DOT__start_n
                     , '#',32,((IData)(2U) + __Vtask_uart_stp_tb__DOT__send_pair__25__base));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 141, "", false);
    }
    __Vtask_uart_stp_tb__DOT__send_pair__25__delta 
        = (vlSelfRef.uart_stp_tb__DOT__start_cyc[(0x0000000fU 
                                                  & ((IData)(1U) 
                                                     + __Vtask_uart_stp_tb__DOT__send_pair__25__base))] 
           - vlSelfRef.uart_stp_tb__DOT__start_cyc[
           (0x0000000fU & __Vtask_uart_stp_tb__DOT__send_pair__25__base)]);
    uart_stp_tb__DOT__d11 = __Vtask_uart_stp_tb__DOT__send_pair__25__delta;
    VL_WRITEF_NX("[STP] start->start (clk): STP=00 %0d, STP=01 %0d, STP=10 %0d, STP=11 %0d\n",4
                 , '#',32,uart_stp_tb__DOT__d00, '#',32,uart_stp_tb__DOT__d01
                 , '#',32,uart_stp_tb__DOT__d10, '#',32,uart_stp_tb__DOT__d11);
    __Vfunc_uart_stp_tb__DOT__absdiff__33__b = uart_stp_tb__DOT__d10;
    __Vfunc_uart_stp_tb__DOT__absdiff__33__a = uart_stp_tb__DOT__d11;
    uart_stp_tb__DOT____VlemCall_0__absdiff = 0U;
    uart_stp_tb__DOT____VlemCall_0__absdiff = ((__Vfunc_uart_stp_tb__DOT__absdiff__33__a 
                                                > __Vfunc_uart_stp_tb__DOT__absdiff__33__b)
                                                ? (__Vfunc_uart_stp_tb__DOT__absdiff__33__a 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__33__b)
                                                : (__Vfunc_uart_stp_tb__DOT__absdiff__33__b 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__33__a));
    VL_WRITEF_NX("[STP] fark(01-00)=%0d beklenen ~216, fark(10-00)=%0d beklenen ~432, fark(11-10)=%0d beklenen ~0\n",3
                 , '#',32,(uart_stp_tb__DOT__d01 - uart_stp_tb__DOT__d00)
                 , '#',32,(uart_stp_tb__DOT__d10 - uart_stp_tb__DOT__d00)
                 , '#',32,uart_stp_tb__DOT____VlemCall_0__absdiff);
    if (VL_UNLIKELY(((0x000010e0U > uart_stp_tb__DOT__d00)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:170: Assertion failed in %m: [STP] taban cerceve araligi anormal kucuk: %0d clk\n",4, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,uart_stp_tb__DOT__d00);
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 170, "", false);
    }
    __Vfunc_uart_stp_tb__DOT__absdiff__34__b = 0x000000d8U;
    __Vfunc_uart_stp_tb__DOT__absdiff__34__a = (uart_stp_tb__DOT__d01 
                                                - uart_stp_tb__DOT__d00);
    uart_stp_tb__DOT____VlemCall_1__absdiff = 0U;
    uart_stp_tb__DOT____VlemCall_1__absdiff = ((__Vfunc_uart_stp_tb__DOT__absdiff__34__a 
                                                > __Vfunc_uart_stp_tb__DOT__absdiff__34__b)
                                                ? (__Vfunc_uart_stp_tb__DOT__absdiff__34__a 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__34__b)
                                                : (__Vfunc_uart_stp_tb__DOT__absdiff__34__b 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__34__a));
    if (VL_UNLIKELY(((0x00000010U < uart_stp_tb__DOT____VlemCall_1__absdiff)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:172: Assertion failed in %m: [STP] 1.5 stop uzatmasi yanlis: +%0d clk (beklenen ~216)\n",4, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,(uart_stp_tb__DOT__d01 
                               - uart_stp_tb__DOT__d00));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 172, "", false);
    }
    __Vfunc_uart_stp_tb__DOT__absdiff__35__b = 0x000001b0U;
    __Vfunc_uart_stp_tb__DOT__absdiff__35__a = (uart_stp_tb__DOT__d10 
                                                - uart_stp_tb__DOT__d00);
    uart_stp_tb__DOT____VlemCall_2__absdiff = 0U;
    uart_stp_tb__DOT____VlemCall_2__absdiff = ((__Vfunc_uart_stp_tb__DOT__absdiff__35__a 
                                                > __Vfunc_uart_stp_tb__DOT__absdiff__35__b)
                                                ? (__Vfunc_uart_stp_tb__DOT__absdiff__35__a 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__35__b)
                                                : (__Vfunc_uart_stp_tb__DOT__absdiff__35__b 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__35__a));
    if (VL_UNLIKELY(((0x00000010U < uart_stp_tb__DOT____VlemCall_2__absdiff)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:174: Assertion failed in %m: [STP] 2 stop uzatmasi yanlis: +%0d clk (beklenen ~432)\n",4, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,(uart_stp_tb__DOT__d10 
                               - uart_stp_tb__DOT__d00));
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 174, "", false);
    }
    __Vfunc_uart_stp_tb__DOT__absdiff__36__b = uart_stp_tb__DOT__d10;
    __Vfunc_uart_stp_tb__DOT__absdiff__36__a = uart_stp_tb__DOT__d11;
    uart_stp_tb__DOT____VlemCall_3__absdiff = 0U;
    uart_stp_tb__DOT____VlemCall_3__absdiff = ((__Vfunc_uart_stp_tb__DOT__absdiff__36__a 
                                                > __Vfunc_uart_stp_tb__DOT__absdiff__36__b)
                                                ? (__Vfunc_uart_stp_tb__DOT__absdiff__36__a 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__36__b)
                                                : (__Vfunc_uart_stp_tb__DOT__absdiff__36__b 
                                                   - __Vfunc_uart_stp_tb__DOT__absdiff__36__a));
    if (VL_UNLIKELY(((0x00000010U < uart_stp_tb__DOT____VlemCall_3__absdiff)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:176: Assertion failed in %m: [STP] STP=11, STP=10 ile esdeger degil: %0d vs %0d\n",5, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,uart_stp_tb__DOT__d11
                     , '#',32,uart_stp_tb__DOT__d10);
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 176, "", false);
    }
    __Vtask_uart_stp_tb__DOT__axi_write__37__data = 2U;
    __Vtask_uart_stp_tb__DOT__axi_write__37__addr = 4U;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v21 
        = __Vtask_uart_stp_tb__DOT__axi_write__37__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v21 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v21 
        = __Vtask_uart_stp_tb__DOT__axi_write__37__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v21 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v42 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v42 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v43 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v43 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    uart_stp_tb__DOT__base2 = vlSelfRef.uart_stp_tb__DOT__start_n;
    __Vtask_uart_stp_tb__DOT__axi_write__38__data = 0x00000055U;
    __Vtask_uart_stp_tb__DOT__axi_write__38__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v22 
        = __Vtask_uart_stp_tb__DOT__axi_write__38__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v22 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v22 
        = __Vtask_uart_stp_tb__DOT__axi_write__38__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v22 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v44 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v44 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v45 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v45 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    while ((vlSelfRef.uart_stp_tb__DOT__start_n <= uart_stp_tb__DOT__base2)) {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             184);
    }
    uart_stp_tb__DOT__s1 = vlSelfRef.uart_stp_tb__DOT__start_cyc
        [(0x0000000fU & uart_stp_tb__DOT__base2)];
    while ((vlSelfRef.uart_stp_tb__DOT__cyc < ((IData)(0x000010e6U) 
                                               + uart_stp_tb__DOT__s1))) {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             189);
    }
    __Vtask_uart_stp_tb__DOT__axi_write__39__data = 0x00000056U;
    __Vtask_uart_stp_tb__DOT__axi_write__39__addr = 0x0cU;
    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                       "@(posedge uart_stp_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge uart_stp_tb.clk)", 
                                                         "verif/tb/uart_stp_tb.sv", 
                                                         105);
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v23 
        = __Vtask_uart_stp_tb__DOT__axi_write__39__addr;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v23 = 1U;
    vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v23 
        = __Vtask_uart_stp_tb__DOT__axi_write__39__data;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v23 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v46 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v46 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             110);
    } while ((1U & (~ ((IData)(vlSelfRef.uart_stp_tb__DOT__awready) 
                       & (IData)(vlSelfRef.uart_stp_tb__DOT__wready)))));
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v47 = 1U;
    vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v47 = 1U;
    do {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             113);
    } while ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid))));
    while ((vlSelfRef.uart_stp_tb__DOT__start_n <= 
            ((IData)(1U) + uart_stp_tb__DOT__base2))) {
        Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(vlSelf, 
                                                           "@(posedge uart_stp_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hfb054935__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge uart_stp_tb.clk)", 
                                                             "verif/tb/uart_stp_tb.sv", 
                                                             192);
    }
    uart_stp_tb__DOT__s2 = vlSelfRef.uart_stp_tb__DOT__start_cyc
        [(0x0000000fU & ((IData)(1U) + uart_stp_tb__DOT__base2))];
    uart_stp_tb__DOT__gap = (uart_stp_tb__DOT__s2 - uart_stp_tb__DOT__s1);
    VL_WRITEF_NX("[STP] donanim garantisi: start->start = %0d clk (alt sinir 4752, uzatmasiz ~4332 olurdu)\n",1
                 , '#',32,uart_stp_tb__DOT__gap);
    if (VL_UNLIKELY(((0x00001290U > ((IData)(4U) + uart_stp_tb__DOT__gap))))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:198: Assertion failed in %m: [STP] uzatma IHLAL edildi: %0d < 4752\n",4, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,uart_stp_tb__DOT__gap);
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 198, "", false);
    }
    if (VL_UNLIKELY(((0x000012d0U < uart_stp_tb__DOT__gap)))) {
        VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:200: Assertion failed in %m: [STP] tx_pending baslatmasi gecikti: %0d\n",4, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',32,uart_stp_tb__DOT__gap);
        VL_STOP_MT("verif/tb/uart_stp_tb.sv", 200, "", false);
    }
    VL_WRITEF_NX("\n*** TEST SUCCESS *** UART_STP 1 / 1.5 / 2 stop dogrulandi (00/01/1X)\n",0);
    VL_FINISH_MT("verif/tb/uart_stp_tb.sv", 204, "");
    co_return;
}

VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__1(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000ee6b2800ULL, 
                                         nullptr, "verif/tb/uart_stp_tb.sv", 
                                         209);
    VL_WRITEF_NX("[%0t] %%Fatal: uart_stp_tb.sv:210: Assertion failed in %m: [STP] TIMEOUT\n",3, 'M',vlSymsp->name(),"uart_stp_tb", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("verif/tb/uart_stp_tb.sv", 210, "", false);
    co_return;
}

VlCoroutine Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__2(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "verif/tb/uart_stp_tb.sv", 
                                             34);
        vlSelfRef.uart_stp_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__clk)));
    }
    co_return;
}

void Vuart_stp_tb___024root___eval_triggers_vec__act(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_triggers_vec__act\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 2U) 
                                                     | ((((~ (IData)(vlSelfRef.uart_stp_tb__DOT__rst_n)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__rst_n__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.uart_stp_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0 
        = vlSelfRef.uart_stp_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__rst_n__0 
        = vlSelfRef.uart_stp_tb__DOT__rst_n;
}

bool Vuart_stp_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___trigger_anySet__act\n"); );
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

void Vuart_stp_tb___024root___nba_sequent__TOP__0(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___nba_sequent__TOP__0\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__uart_stp_tb__DOT__arready;
    __Vdly__uart_stp_tb__DOT__arready = 0;
    CData/*0:0*/ __Vdly__uart_stp_tb__DOT__rvalid;
    __Vdly__uart_stp_tb__DOT__rvalid = 0;
    CData/*0:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending = 0;
    CData/*0:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending = 0;
    IData/*19:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt = 0;
    // Body
    vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = vlSelfRef.uart_stp_tb__DOT__awready;
    vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = vlSelfRef.uart_stp_tb__DOT__wready;
    vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr;
    vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = vlSelfRef.uart_stp_tb__DOT__bvalid;
    vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending;
    __Vdly__uart_stp_tb__DOT__arready = vlSelfRef.uart_stp_tb__DOT__arready;
    __Vdly__uart_stp_tb__DOT__rvalid = vlSelfRef.uart_stp_tb__DOT__rvalid;
    if (vlSelfRef.uart_stp_tb__DOT__rst_n) {
        __Vdly__uart_stp_tb__DOT__arready = ((IData)(vlSelfRef.uart_stp_tb__DOT__arvalid) 
                                             & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__arready)));
        if ((((IData)(vlSelfRef.uart_stp_tb__DOT__arready) 
              & (IData)(vlSelfRef.uart_stp_tb__DOT__arvalid)) 
             & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__rvalid)))) {
            __Vdly__uart_stp_tb__DOT__rvalid = 1U;
            vlSelfRef.uart_stp_tb__DOT__rdata = ((0x00000010U 
                                                  & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                  ? 
                                                 ((8U 
                                                   & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                      ? 0U
                                                      : 
                                                     (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_done) 
                                                       << 2U) 
                                                      | (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_rx_done) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_en)))))))
                                                  : 
                                                 ((8U 
                                                   & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                   ? 
                                                  ((4U 
                                                    & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                      ? 0U
                                                      : (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr)))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                      ? 0U
                                                      : (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_rdr))))
                                                   : 
                                                  ((4U 
                                                    & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                    ? 
                                                   ((2U 
                                                     & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                      ? 0U
                                                      : (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp)))
                                                    : 
                                                   ((2U 
                                                     & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & vlSelfRef.uart_stp_tb__DOT__araddr)
                                                      ? 0U
                                                      : vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb)))));
        } else if (vlSelfRef.uart_stp_tb__DOT__rvalid) {
            __Vdly__uart_stp_tb__DOT__rvalid = 0U;
        }
        if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_rdr 
                = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tdata_reg;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_rx_done = 1U;
        }
        if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_done_set) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_done = 1U;
        }
        if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_en 
                = (1U & vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data);
            if ((1U & (~ (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data 
                          >> 1U)))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_rx_done = 0U;
            }
            if ((1U & (~ (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data 
                          >> 2U)))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_done = 0U;
            }
        }
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_done_set = 0U;
        vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire = 0U;
        if (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit) 
             & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_hold))) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending = 1U;
        }
        if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending = 1U;
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt 
                = ((2U & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp))
                    ? (0x0007fff8U & vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb)
                    : (0x0003fffcU & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                      >> 1U)));
        } else if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending) {
            if ((1U < vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt)) {
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt 
                    = (0x000fffffU & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt 
                                      - (IData)(1U)));
            } else {
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending = 0U;
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt = 0U;
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_done_set = 1U;
                if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending) {
                    __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending = 0U;
                    vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire = 1U;
                }
            }
        } else if (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy) 
                    & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg)))) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_done_set = 1U;
        }
    } else {
        __Vdly__uart_stp_tb__DOT__arready = 0U;
        __Vdly__uart_stp_tb__DOT__rvalid = 0U;
        vlSelfRef.uart_stp_tb__DOT__rdata = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_rdr = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_en = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_rx_done = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__cfg_tx_done = 0U;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending = 0U;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt = 0U;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending = 0U;
        vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_done_set = 0U;
    }
    vlSelfRef.uart_stp_tb__DOT__arready = __Vdly__uart_stp_tb__DOT__arready;
    vlSelfRef.uart_stp_tb__DOT__rvalid = __Vdly__uart_stp_tb__DOT__rvalid;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_ext_cnt;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__stp_extending;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy 
        = ((IData)(vlSelfRef.uart_stp_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg));
}

void Vuart_stp_tb___024root___nba_sequent__TOP__1(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___nba_sequent__TOP__1\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__uart_stp_tb__DOT__cyc;
    __Vdly__uart_stp_tb__DOT__cyc = 0;
    CData/*0:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    CData/*3:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt = 0;
    SData/*8:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg = 0;
    CData/*3:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg = 0;
    IData/*31:0*/ __VdlyVal__uart_stp_tb__DOT__start_cyc__v0;
    __VdlyVal__uart_stp_tb__DOT__start_cyc__v0 = 0;
    CData/*3:0*/ __VdlyDim0__uart_stp_tb__DOT__start_cyc__v0;
    __VdlyDim0__uart_stp_tb__DOT__start_cyc__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_stp_tb__DOT__start_cyc__v0;
    __VdlySet__uart_stp_tb__DOT__start_cyc__v0 = 0;
    // Body
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt;
    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg 
        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg;
    __Vdly__uart_stp_tb__DOT__cyc = vlSelfRef.uart_stp_tb__DOT__cyc;
    __VdlySet__uart_stp_tb__DOT__start_cyc__v0 = 0U;
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v0;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v1;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v2;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v3;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v4;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v5;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v6;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__araddr__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__araddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__araddr__v7;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v8) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v8 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v9) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v9 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v10) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v10 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v11) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v11 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v12) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v12 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v13) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v13 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v14) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v14 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v15) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__arvalid__v15 = 0U;
        vlSelfRef.uart_stp_tb__DOT__arvalid = 0U;
    }
    __Vdly__uart_stp_tb__DOT__cyc = ((IData)(1U) + vlSelfRef.uart_stp_tb__DOT__cyc);
    if ((((((IData)(vlSelfRef.uart_stp_tb__DOT__rst_n) 
            & (IData)(vlSelfRef.uart_stp_tb__DOT__txd_q)) 
           & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg))) 
          & (vlSelfRef.uart_stp_tb__DOT__cyc >= vlSelfRef.uart_stp_tb__DOT__frame_guard)) 
         & (0x00000010U > vlSelfRef.uart_stp_tb__DOT__start_n))) {
        __VdlyVal__uart_stp_tb__DOT__start_cyc__v0 
            = vlSelfRef.uart_stp_tb__DOT__cyc;
        __VdlyDim0__uart_stp_tb__DOT__start_cyc__v0 
            = (0x0000000fU & vlSelfRef.uart_stp_tb__DOT__start_n);
        __VdlySet__uart_stp_tb__DOT__start_cyc__v0 = 1U;
        vlSelfRef.uart_stp_tb__DOT__start_n = ((IData)(1U) 
                                               + vlSelfRef.uart_stp_tb__DOT__start_n);
        vlSelfRef.uart_stp_tb__DOT__frame_guard = ((IData)(0x000010d0U) 
                                                   + vlSelfRef.uart_stp_tb__DOT__cyc);
    }
    vlSelfRef.uart_stp_tb__DOT__cyc = __Vdly__uart_stp_tb__DOT__cyc;
    if (__VdlySet__uart_stp_tb__DOT__start_cyc__v0) {
        vlSelfRef.uart_stp_tb__DOT__start_cyc[__VdlyDim0__uart_stp_tb__DOT__start_cyc__v0] 
            = __VdlyVal__uart_stp_tb__DOT__start_cyc__v0;
    }
    if (vlSelfRef.uart_stp_tb__DOT__rst_n) {
        if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        }
        if ((0U < vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg)) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg 
                                  - (IData)(1U)));
        } else if ((0U < (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt))) {
            if ((9U < (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt))) {
                if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg) {
                    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0U;
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg = 0U;
                } else {
                    __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
                        = (0x0000000fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt) 
                                          - (IData)(1U)));
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg 
                        = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                        (0x0000ffffU 
                                                         & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                            >> 3U)), 3U) 
                                          - (IData)(1U)));
                }
            } else if ((1U < (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt))) {
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg 
                    = (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg) 
                                                 >> 1U)));
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                        >> 3U)), 3U) 
                                      - (IData)(1U)));
            } else if ((1U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt))) {
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                if (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg) {
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tdata_reg 
                        = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg;
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg)))) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                (0x0000ffffU 
                                                 & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                    >> 3U)), 2U) 
                                  - (IData)(2U)));
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0x0aU;
        }
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
            = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg 
            = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg;
        vlSelfRef.uart_stp_tb__DOT__txd_q = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg;
        if ((0U < vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg)) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg 
                                  - (IData)(1U)));
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        } else if ((0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 1U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg = 0U;
            if (((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire) 
                 | ((~ (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_hold)) 
                    & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit)))) {
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg 
                    = (1U & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg)));
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                    (0x0000ffffU 
                                                     & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                        >> 3U)), 3U) 
                                      - (IData)(1U)));
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt = 9U;
                __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg 
                    = (0x00000100U | (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr));
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg = 0U;
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg = 1U;
            }
        } else if ((1U < (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg 
                = (0x000001ffU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg) 
                                  >> 1U));
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                (0x0000ffffU 
                                                 & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                    >> 3U)), 3U) 
                                  - (IData)(1U)));
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg 
                = (1U & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg));
        } else if ((1U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & VL_SHIFTL_III(19,19,32, 
                                               (0x0000ffffU 
                                                & (vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                                                   >> 3U)), 3U));
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg = 1U;
        }
    } else {
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__prescale_reg = 0U;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt 
            = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__bit_cnt;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg 
            = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__data_reg;
        vlSelfRef.uart_stp_tb__DOT__txd_q = vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__prescale_reg = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__txd_reg = 1U;
        __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg = 0U;
    }
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__bit_cnt;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg 
        = __Vdly__uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__data_reg;
}

void Vuart_stp_tb___024root___nba_sequent__TOP__2(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___nba_sequent__TOP__2\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire 
        = vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire;
    if (vlSelfRef.uart_stp_tb__DOT__rst_n) {
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 0U;
        if ((((IData)(vlSelfRef.uart_stp_tb__DOT__awvalid) 
              & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
             & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en))) {
            vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 1U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 1U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr 
                = (0x0000001fU & vlSelfRef.uart_stp_tb__DOT__awaddr);
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 0U;
        } else {
            vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 0U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 0U;
        }
        if (((((IData)(vlSelfRef.uart_stp_tb__DOT__wready) 
               & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
              & (IData)(vlSelfRef.uart_stp_tb__DOT__awready)) 
             & (IData)(vlSelfRef.uart_stp_tb__DOT__awvalid))) {
            if ((0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                    = vlSelfRef.uart_stp_tb__DOT__wdata;
            } else if ((4U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp 
                    = (3U & vlSelfRef.uart_stp_tb__DOT__wdata);
            } else if ((0x0cU == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr 
                    = (0x000000ffU & vlSelfRef.uart_stp_tb__DOT__wdata);
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 1U;
            } else if ((0x10U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 1U;
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data 
                    = vlSelfRef.uart_stp_tb__DOT__wdata;
            }
        }
        if ((((((IData)(vlSelfRef.uart_stp_tb__DOT__wready) 
                & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
               & (IData)(vlSelfRef.uart_stp_tb__DOT__awready)) 
              & (IData)(vlSelfRef.uart_stp_tb__DOT__awvalid)) 
             & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid)))) {
            vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 1U;
        } else if (vlSelfRef.uart_stp_tb__DOT__bvalid) {
            vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 1U;
        }
    } else {
        vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 0U;
        vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 0U;
        vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 1U;
        vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb = 0x000001b2U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data = 0U;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 0U;
    }
    vlSelfRef.uart_stp_tb__DOT__awready = vlSelfRef.__Vdly__uart_stp_tb__DOT__awready;
    vlSelfRef.uart_stp_tb__DOT__wready = vlSelfRef.__Vdly__uart_stp_tb__DOT__wready;
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr 
        = vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr;
    vlSelfRef.uart_stp_tb__DOT__bvalid = vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid;
}

void Vuart_stp_tb___024root___nba_sequent__TOP__3(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___nba_sequent__TOP__3\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v0;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v1;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v2;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v3;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v4;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v5;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v6;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v7;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v8) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v8 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v8;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v9) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v9 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v9;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v10) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v10 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v10;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v11) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v11 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v11;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v12) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v12 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v12;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v13) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v13 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v13;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v14) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v14 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v14;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v15) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v15 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v15;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v16) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v16 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v16;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v17) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v17 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v17;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v18) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v18 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v18;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v19) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v19 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v19;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v20) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v20 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v20;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v21) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v21 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v21;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v22) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v22 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v22;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v23) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awaddr__v23 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awaddr = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__awaddr__v23;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v0;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v1;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v2;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v3;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v4;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v5;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v6;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v7;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v8) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v8 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v8;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v9) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v9 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v9;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v10) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v10 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v10;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v11) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v11 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v11;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v12) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v12 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v12;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v13) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v13 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v13;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v14) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v14 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v14;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v15) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v15 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v15;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v16) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v16 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v16;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v17) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v17 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v17;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v18) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v18 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v18;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v19) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v19 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v19;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v20) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v20 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v20;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v21) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v21 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v21;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v22) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v22 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v22;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v23) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wdata__v23 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wdata = vlSelfRef.__VdlyVal__uart_stp_tb__DOT__wdata__v23;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v8) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v8 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v9) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v9 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v10) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v10 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v11) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v11 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v12) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v12 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v13) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v13 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v14) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v14 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v15) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v15 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v16) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v16 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v17) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v17 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v18) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v18 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v19) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v19 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v20) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v20 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v21) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v21 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v22) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v22 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v23) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v23 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v24) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v24 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v25) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v25 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v26) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v26 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v27) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v27 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v28) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v28 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v29) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v29 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v30) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v30 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v31) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v31 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v32) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v32 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v33) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v33 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v34) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v34 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v35) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v35 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v36) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v36 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v37) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v37 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v38) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v38 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v39) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v39 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v40) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v40 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v41) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v41 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v42) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v42 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v43) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v43 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v44) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v44 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v45) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v45 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v46) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v46 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v47) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__awvalid__v47 = 0U;
        vlSelfRef.uart_stp_tb__DOT__awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v0) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v0 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v1) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v1 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v2) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v2 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v3) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v3 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v4) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v4 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v5) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v5 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v6) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v6 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v7) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v7 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v8) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v8 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v9) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v9 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v10) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v10 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v11) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v11 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v12) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v12 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v13) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v13 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v14) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v14 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v15) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v15 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v16) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v16 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v17) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v17 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v18) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v18 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v19) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v19 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v20) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v20 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v21) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v21 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v22) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v22 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v23) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v23 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v24) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v24 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v25) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v25 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v26) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v26 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v27) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v27 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v28) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v28 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v29) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v29 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v30) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v30 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v31) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v31 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v32) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v32 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v33) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v33 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v34) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v34 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v35) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v35 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v36) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v36 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v37) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v37 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v38) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v38 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v39) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v39 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v40) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v40 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v41) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v41 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v42) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v42 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v43) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v43 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v44) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v44 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v45) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v45 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v46) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v46 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v47) {
        vlSelfRef.__VdlySet__uart_stp_tb__DOT__wvalid__v47 = 0U;
        vlSelfRef.uart_stp_tb__DOT__wvalid = 0U;
    }
}

void Vuart_stp_tb___024root___nba_comb__TOP__0(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___nba_comb__TOP__0\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load 
        = ((~ ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg) 
               | (0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp)))) 
           & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy));
    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_hold 
        = ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending) 
           | (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load));
}

void Vuart_stp_tb___024root___eval_nba(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_nba\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_stp_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_stp_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire 
            = vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__tx_pending_fire;
        if (vlSelfRef.uart_stp_tb__DOT__rst_n) {
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 0U;
            if ((((IData)(vlSelfRef.uart_stp_tb__DOT__awvalid) 
                  & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
                 & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en))) {
                vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 1U;
                vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 1U;
                vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr 
                    = (0x0000001fU & vlSelfRef.uart_stp_tb__DOT__awaddr);
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 0U;
            } else {
                vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 0U;
                vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 0U;
            }
            if (((((IData)(vlSelfRef.uart_stp_tb__DOT__wready) 
                   & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
                  & (IData)(vlSelfRef.uart_stp_tb__DOT__awready)) 
                 & (IData)(vlSelfRef.uart_stp_tb__DOT__awvalid))) {
                if ((0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb 
                        = vlSelfRef.uart_stp_tb__DOT__wdata;
                } else if ((4U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp 
                        = (3U & vlSelfRef.uart_stp_tb__DOT__wdata);
                } else if ((0x0cU == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr 
                        = (0x000000ffU & vlSelfRef.uart_stp_tb__DOT__wdata);
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 1U;
                } else if ((0x10U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr))) {
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 1U;
                    vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data 
                        = vlSelfRef.uart_stp_tb__DOT__wdata;
                }
            }
            if ((((((IData)(vlSelfRef.uart_stp_tb__DOT__wready) 
                    & (IData)(vlSelfRef.uart_stp_tb__DOT__wvalid)) 
                   & (IData)(vlSelfRef.uart_stp_tb__DOT__awready)) 
                  & (IData)(vlSelfRef.uart_stp_tb__DOT__awvalid)) 
                 & (~ (IData)(vlSelfRef.uart_stp_tb__DOT__bvalid)))) {
                vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 1U;
            } else if (vlSelfRef.uart_stp_tb__DOT__bvalid) {
                vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 0U;
                vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 1U;
            }
        } else {
            vlSelfRef.__Vdly__uart_stp_tb__DOT__awready = 0U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__wready = 0U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__aw_en = 1U;
            vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_cpb = 0x000001b2U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_tdr = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_hit = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_cfg_data = 0U;
            vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__wr_tdr_hit = 0U;
        }
        vlSelfRef.uart_stp_tb__DOT__awready = vlSelfRef.__Vdly__uart_stp_tb__DOT__awready;
        vlSelfRef.uart_stp_tb__DOT__wready = vlSelfRef.__Vdly__uart_stp_tb__DOT__wready;
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__write_addr 
            = vlSelfRef.__Vdly__uart_stp_tb__DOT__i_dut__DOT__write_addr;
        vlSelfRef.uart_stp_tb__DOT__bvalid = vlSelfRef.__Vdly__uart_stp_tb__DOT__bvalid;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_stp_tb___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load 
            = ((~ ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__i_uart_tx__DOT__busy_reg) 
                   | (0U == (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__uart_stp)))) 
               & (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__prev_tx_busy));
        vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_hold 
            = ((IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_extending) 
               | (IData)(vlSelfRef.uart_stp_tb__DOT__i_dut__DOT__stp_ext_load));
    }
}

void Vuart_stp_tb___024root___timing_ready(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___timing_ready\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hfb054935__0.ready("@(posedge uart_stp_tb.clk)");
    }
}

void Vuart_stp_tb___024root___timing_resume(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___timing_resume\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hfb054935__0.moveToResumeQueue(
                                                          "@(posedge uart_stp_tb.clk)");
    vlSelfRef.__VtrigSched_hfb054935__0.resume("@(posedge uart_stp_tb.clk)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vuart_stp_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vuart_stp_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vuart_stp_tb___024root___eval_phase__act(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_phase__act\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vuart_stp_tb___024root___eval_triggers_vec__act(vlSelf);
    Vuart_stp_tb___024root___timing_ready(vlSelf);
    Vuart_stp_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_stp_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vuart_stp_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vuart_stp_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vuart_stp_tb___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vuart_stp_tb___024root___eval_phase__inact(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_phase__inact\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verif/tb/uart_stp_tb.sv", 19, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vuart_stp_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_stp_tb___024root___eval_phase__nba(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_phase__nba\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_stp_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_stp_tb___024root___eval_nba(vlSelf);
        Vuart_stp_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_stp_tb___024root___eval(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_stp_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verif/tb/uart_stp_tb.sv", 19, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verif/tb/uart_stp_tb.sv", 19, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vuart_stp_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verif/tb/uart_stp_tb.sv", 19, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vuart_stp_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vuart_stp_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vuart_stp_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0(Vuart_stp_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root____VbeforeTrig_hfb054935__0\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.uart_stp_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__uart_stp_tb__DOT__clk__0 
        = vlSelfRef.uart_stp_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hfb054935__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vuart_stp_tb___024root___eval_debug_assertions(Vuart_stp_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_stp_tb___024root___eval_debug_assertions\n"); );
    Vuart_stp_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
