// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_system_tb.h for the primary calling header

#include "Vi2c_system_tb__pch.h"

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_initial__TOP(Vi2c_system_tb___024root* vlSelf);
VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__0(Vi2c_system_tb___024root* vlSelf);
VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__1(Vi2c_system_tb___024root* vlSelf);
VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__2(Vi2c_system_tb___024root* vlSelf);
VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__3(Vi2c_system_tb___024root* vlSelf);

void Vi2c_system_tb___024root___eval_initial(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vi2c_system_tb___024root___eval_initial__TOP(vlSelf);
    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__0(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2c_system_tb__DOT__resetn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000030d40ULL, 
                                         nullptr, "verif/tb/i2c_system_tb.sv", 
                                         7);
    vlSelfRef.i2c_system_tb__DOT__resetn = 1U;
    co_return;
}

void Vi2c_system_tb___024root____VbeforeTrig_h9e1e0de9__0(Vi2c_system_tb___024root* vlSelf, const char* __VeventDescription);
void Vi2c_system_tb___024root____VbeforeTrig_h048f12b0__0(Vi2c_system_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_i2c_system_tb__DOT__uart_read__0__d;
    __Vtask_i2c_system_tb__DOT__uart_read__0__d = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i;
    __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i = 0;
    // Body
    Vi2c_system_tb___024root____VbeforeTrig_h9e1e0de9__0(vlSelf, 
                                                         "@(posedge i2c_system_tb.resetn)");
    co_await vlSelfRef.__VtrigSched_h9e1e0de9__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge i2c_system_tb.resetn)", 
                                                         "verif/tb/i2c_system_tb.sv", 
                                                         38);
    VL_WRITEF_NX("[%0t] === I2C SISTEM TESTI: NBY/ADR + TX/RX echo + latch + NACK ===\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    {
        while (true) {
            Vi2c_system_tb___024root____VbeforeTrig_h048f12b0__0(vlSelf, 
                                                                 "@(negedge i2c_system_tb.dut.i_uart_0.i_uart_tx.txd_reg)");
            co_await vlSelfRef.__VtrigSched_h048f12b0__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge i2c_system_tb.dut.i_uart_0.i_uart_tx.txd_reg)", 
                                                                 "verif/tb/i2c_system_tb.sv", 
                                                                 31);
            co_await vlSelfRef.__VdlySched.delay(0x0000000000c6ab60ULL, 
                                                 nullptr, 
                                                 "verif/tb/i2c_system_tb.sv", 
                                                 31);
            __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i = 0U;
            __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i = 0U;
            while (VL_GTS_III(32, 8U, __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i)) {
                vlSelfRef.i2c_system_tb__DOT__uart_read__Vstatic__d 
                    = (((~ ((IData)(1U) << (7U & __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i))) 
                        & (IData)(vlSelfRef.i2c_system_tb__DOT__uart_read__Vstatic__d)) 
                       | (0x00ffU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg) 
                                     << (7U & __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i))));
                co_await vlSelfRef.__VdlySched.delay(0x0000000000847240ULL, 
                                                     nullptr, 
                                                     "verif/tb/i2c_system_tb.sv", 
                                                     32);
                __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i 
                    = ((IData)(1U) + __Vtask_i2c_system_tb__DOT__uart_read__0__unnamedblk1__DOT__i);
            }
            __Vtask_i2c_system_tb__DOT__uart_read__0__d 
                = vlSelfRef.i2c_system_tb__DOT__uart_read__Vstatic__d;
            vlSelfRef.i2c_system_tb__DOT__ch = __Vtask_i2c_system_tb__DOT__uart_read__0__d;
            vlSelfRef.i2c_system_tb__DOT__received 
                = VL_CONCATN_NNN(vlSelfRef.i2c_system_tb__DOT__received, 
                                 VL_CVT_PACK_STR_NI((IData)(vlSelfRef.i2c_system_tb__DOT__ch)));
            if (VL_UNLIKELY(((0x0aU == (IData)(vlSelfRef.i2c_system_tb__DOT__ch))))) {
                VL_WRITEF_NX("[FW] %s",1, 'S',&(vlSelfRef.i2c_system_tb__DOT__received));
                if (VL_UNLIKELY((("I2C SYS OK\n"s == vlSelfRef.i2c_system_tb__DOT__received)))) {
                    VL_WRITEF_NX("*** TEST SUCCESS *** I2C sistem yolu dogrulandi\n",0);
                    VL_FINISH_MT("verif/tb/i2c_system_tb.sv", 47, "");
                    goto __Vlabel0;
                }
                if (VL_UNLIKELY((("FAIL"s == VL_SUBSTR_N(vlSelfRef.i2c_system_tb__DOT__received,0U,3U))))) {
                    VL_WRITEF_NX("[%0t] %%Error: i2c_system_tb.sv:50: Assertion failed in %m: FW FAIL satiri alindi\n",3, 'M',vlSymsp->name(),"i2c_system_tb", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("verif/tb/i2c_system_tb.sv", 50, "");
                    VL_FINISH_MT("verif/tb/i2c_system_tb.sv", 51, "");
                    goto __Vlabel0;
                }
                vlSelfRef.i2c_system_tb__DOT__received = ""s;
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__2(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000004a817c800ULL, 
                                         nullptr, "verif/tb/i2c_system_tb.sv", 
                                         59);
    VL_WRITEF_NX("[%0t] %%Error: i2c_system_tb.sv:60: Assertion failed in %m: TIMEOUT - 'I2C SYS OK' gelmedi. Son satir: %s\n",4, 'M',vlSymsp->name(),"i2c_system_tb", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), 'S',&(vlSelfRef.i2c_system_tb__DOT__received));
    VL_STOP_MT("verif/tb/i2c_system_tb.sv", 60, "");
    VL_FINISH_MT("verif/tb/i2c_system_tb.sv", 61, "");
    co_return;
}

VlCoroutine Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__3(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                             nullptr, 
                                             "verif/tb/i2c_system_tb.sv", 
                                             6);
        vlSelfRef.i2c_system_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__clk)));
    }
    co_return;
}

void Vi2c_system_tb___024root___eval_triggers_vec__act(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_triggers_vec__act\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h4435b175__0;
    __Vtrigprevexpr_h4435b175__0 = 0;
    // Body
    __Vtrigprevexpr_h4435b175__0 = ((IData)(vlSelfRef.i2c_system_tb__DOT__clk) 
                                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0)) 
                                                      << 8U) 
                                                     | (((((((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__resetn__0))) 
                                                            << 3U) 
                                                           | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                              << 2U)) 
                                                          | ((((IData)(__Vtrigprevexpr_h4435b175__0) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr_h4435b175__1))) 
                                                              << 1U) 
                                                             | ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__resetn)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__resetn__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.i2c_system_tb__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__clk__0 
        = vlSelfRef.i2c_system_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__resetn__0 
        = vlSelfRef.i2c_system_tb__DOT__resetn;
    vlSelfRef.__Vtrigprevexpr_h4435b175__1 = __Vtrigprevexpr_h4435b175__0;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg;
}

bool Vi2c_system_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___trigger_anySet__act\n"); );
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

extern const VlUnpacked<CData/*1:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_haa8c9ebd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_hfc2dea1f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_h48470b6d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_hc8c40d37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_haccd4eb4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vi2c_system_tb__ConstPool__TABLE_h90ec5698_0;

void Vi2c_system_tb___024root___act_sequent__TOP__0(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___act_sequent__TOP__0\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                      << 5U) | (((2U & ((~ (0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                        << 1U)) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S)) 
                                << 3U)) | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vi2c_system_tb__ConstPool__TABLE_haa8c9ebd_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vi2c_system_tb__ConstPool__TABLE_hfc2dea1f_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vi2c_system_tb__ConstPool__TABLE_h48470b6d_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vi2c_system_tb__ConstPool__TABLE_hc8c40d37_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vi2c_system_tb__ConstPool__TABLE_haccd4eb4_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vi2c_system_tb__ConstPool__TABLE_h90ec5698_0
        [__Vtableidx3];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    __VdfgRegularize_h6e95ff9d_0_42 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex) 
                                       & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                          & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
                                             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
}

void Vi2c_system_tb___024root___act_sequent__TOP__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___act_sequent__TOP__1\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__clk)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
    }
}

void Vi2c_system_tb___024root___act_comb__TOP__0(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___act_comb__TOP__0\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0;
    CData/*2:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0;
    CData/*4:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id = 0;
    CData/*4:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0;
    CData/*5:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0;
    CData/*2:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    // Body
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    }
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         | ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 4U;
                }
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 2U;
                    } else if (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                    }
                }
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 7U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))))) {
                    if ((0U != (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                 << 2U) | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1122: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1122, "");
                        }
                    }
                }
                if ((1U & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                    = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)
                        ? 5U : 7U);
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 1U;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if ((1U & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                          | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                         | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                        | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                       | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                     | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                        if ((1U & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if ((1U & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id 
                            = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                    << 3U) | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                      << 1U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 << 4U) | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1054: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1054, "");
                        }
                    }
                }
            }
        } else {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 2U;
                } else {
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 3U;
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0x0bU;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if ((0U != (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                     << 1U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:932: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 932, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                            = (0x00000020U | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    } else {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                    ? 8U : 5U);
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if ((((((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                     | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                    | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                   | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                  | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                     | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status))) {
                                if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                                               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                             | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 7U : 5U);
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                        << 6U) 
                                                       | (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                             | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                            | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                             << 1U) 
                                                            | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                    | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                   | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                             << 3U) 
                                            | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                   << 1U) 
                                                  | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:541: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 541, "");
                                    }
                                }
                            }
                        }
                        if ((1U & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                               | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                                | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))))) {
                                    if ((0U != ((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                     | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:677: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 677, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                }
            } else {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                     & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                        = (0x00000020U | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    if (((((((((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0305U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0340U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause) {
        if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                                   << 1U) | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                         << 1U) | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                               << 2U) | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                          << 1U) | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                     << 2U) | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                << 1U) | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q)))));
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                               << 1U) | (0U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))))) {
        if ((0U != (((1U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                     << 1U) | (0U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:132: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 132, "");
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:138: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 138, "");
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_17 = ((0U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                        ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q
                                        : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                           & (- (IData)(
                                                        (1U 
                                                         != (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
            | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                    == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U))) 
                   & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x00000014U))))) 
               | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding) 
                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                      & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
                         & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                            == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 7U)))))) 
                  | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                     & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                         == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                        & (0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))))) 
           & (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu)) 
              | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
            & (0U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))
            ? 0x00000100U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0304U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
           & (2U > ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))))))));
    __VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
                                       | (0U < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0x00010000U;
    if ((8U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                ? ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                                  ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                  : ((4U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                      ? (__VdfgRegularize_h6e95ff9d_0_17 
                                         << 8U) : (
                                                   (2U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                                    ? 0x00010000U
                                                    : 
                                                   ((__VdfgRegularize_h6e95ff9d_0_17 
                                                     << 8U) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id)))) 
                                                       & (((0U 
                                                            == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                                            ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id)
                                                            : 
                                                           ((- (IData)(
                                                                       (1U 
                                                                        != (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)))) 
                                                            & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id))) 
                                                          << 2U)))))))
                : ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                        : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target)
                    : ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id)
                        : 0x00010000U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                                                    | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                       | ((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)) 
                                                          | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
           & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex) 
                           & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready)))));
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
             & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_41)) 
           & ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
           | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready));
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
           & ((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) 
           & ((~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid) 
             & (0U < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid) 
                & (0U < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) {
                    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 1U;
                }
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((~ (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready) 
                & (0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
               | (IData)(__VdfgRegularize_h6e95ff9d_0_41))) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en 
        = (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.ar_ready) 
            & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)) 
           & (0U == (0x000f0000U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.ar_ready) 
           & ((0U != (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                     >> 0x00000010U))) 
              & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40 = ((2U 
                                                  != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                                                 & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
}

void Vi2c_system_tb___024root___act_comb__TOP__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___act_comb__TOP__1\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = 0U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) {
                if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_ready) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = 5U;
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_gnt = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) {
                    if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_ready) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_gnt = 1U;
                    }
                }
            }
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_gnt) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_gnt)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
}

void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

void Vi2c_system_tb___024root___eval_act(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_act\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        Vi2c_system_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__clk)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
                = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
        }
    }
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        Vi2c_system_tb___024root___act_comb__TOP__0(vlSelf);
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus));
        Vi2c_system_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vi2c_system_tb___024root___nba_sequent__TOP__0(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___nba_sequent__TOP__0\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__st;
    __Vdly__i2c_system_tb__DOT__slave__DOT__st = 0;
    CData/*3:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt;
    __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = 0;
    CData/*7:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__sh;
    __Vdly__i2c_system_tb__DOT__slave__DOT__sh = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr;
    __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr = 0;
    CData/*7:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte;
    __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__slave__DOT__wr_ptr;
    __Vdly__i2c_system_tb__DOT__slave__DOT__wr_ptr = 0;
    CData/*7:0*/ __VdlyVal__i2c_system_tb__DOT__slave__DOT__mem__v0;
    __VdlyVal__i2c_system_tb__DOT__slave__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__i2c_system_tb__DOT__slave__DOT__mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__slave__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__slave__DOT__mem__v0;
    __VdlySet__i2c_system_tb__DOT__slave__DOT__mem__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0U;
    vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0U;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:285: Assertion failed in %m: [OBI2AXI] AW valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 285, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_5_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__w_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:293: Assertion failed in %m: [OBI2AXI] W valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 293, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:289: Assertion failed in %m: [OBI2AXI] AR valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 289, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__aw_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:285: Assertion failed in %m: [OBI2AXI] AW valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 285, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__ar_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:289: Assertion failed in %m: [OBI2AXI] AR valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 289, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_5_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__w_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:293: Assertion failed in %m: [OBI2AXI] W valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 293, "");
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb) 
                              != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_bvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb) 
                              != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb) 
                              != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb) 
                              != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready))) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready))) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb) 
                              != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready))) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready))) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr)))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
    }
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    __Vdly__i2c_system_tb__DOT__slave__DOT__st = vlSelfRef.i2c_system_tb__DOT__slave__DOT__st;
    __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt;
    __Vdly__i2c_system_tb__DOT__slave__DOT__sh = vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh;
    __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr 
        = vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr;
    __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte 
        = vlSelfRef.i2c_system_tb__DOT__slave__DOT__tx_byte;
    __Vdly__i2c_system_tb__DOT__slave__DOT__wr_ptr 
        = vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr;
    __VdlySet__i2c_system_tb__DOT__slave__DOT__mem__v0 = 0U;
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en) {
        if ((1U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_strb))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0 
                = (0x000000ffU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_data);
            if ((0x1dffU >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx))) {
                vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0;
                vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 1U;
            }
        }
        if ((2U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_strb))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_data 
                                  >> 8U));
            if ((0x1dffU >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx))) {
                vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0;
                vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 1U;
            }
        }
        if ((4U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_strb))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_data 
                                  >> 0x10U));
            if ((0x1dffU >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx))) {
                vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0;
                vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 1U;
            }
        }
        if ((8U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_strb))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0 
                = (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.w_data 
                   >> 0x18U);
            if ((0x1dffU >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx))) {
                vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0;
                vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 1U;
            }
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en) {
        if ((1U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 
                = (0x000000ffU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 
                = (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 1U;
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__write_en) {
        if ((1U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 
                = (0x000000ffU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                  >> 8U));
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 
                = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                  >> 0x10U));
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb))) {
            vlSelfRef.__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 
                = (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                   >> 0x18U);
            vlSelfRef.__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 
                = (0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 2U));
            vlSelfRef.__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 1U;
        }
    }
    if (((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sda_q) 
         & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q) 
            & ((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_q) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))))) {
        __Vdly__i2c_system_tb__DOT__slave__DOT__st = 1U;
        __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = 0U;
        __Vdly__i2c_system_tb__DOT__slave__DOT__sh = 0U;
        vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
    } else if (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)) 
                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q) 
                   & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sda_q)) 
                      & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_q))))) {
        __Vdly__i2c_system_tb__DOT__slave__DOT__st = 0U;
        vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
    } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 0U;
            } else if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_rise) {
                __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr);
                if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16) {
                    __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte 
                        = vlSelfRef.i2c_system_tb__DOT__slave__DOT__mem
                        [(7U & ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr))];
                }
            } else if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) {
                if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__sda_q) {
                    __Vdly__i2c_system_tb__DOT__slave__DOT__st = 0U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__slv_sda_oe 
                        = (1U & (~ (vlSelfRef.i2c_system_tb__DOT__slave__DOT__mem
                                    [(7U & vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr)] 
                                    >> 7U)));
                    __Vdly__i2c_system_tb__DOT__slave__DOT__st = 5U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
            if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) {
                if ((7U == (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt))) {
                    __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = 0U;
                    vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
                    __Vdly__i2c_system_tb__DOT__slave__DOT__st = 6U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__slv_sda_oe 
                        = (1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__tx_byte) 
                                    >> (7U & ((IData)(6U) 
                                              - (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt))))));
                    __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt)));
                }
            }
        } else if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) {
            vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
            __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = 0U;
            __Vdly__i2c_system_tb__DOT__slave__DOT__st = 3U;
        }
    } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
        if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
            if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_rise) {
                __Vdly__i2c_system_tb__DOT__slave__DOT__sh 
                    = ((0x000000feU & ((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh) 
                                       << 1U)) | (1U 
                                                  & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))));
                __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt)));
            } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) 
                        & (8U == (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt)))) {
                __VdlyVal__i2c_system_tb__DOT__slave__DOT__mem__v0 
                    = vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh;
                __VdlyDim0__i2c_system_tb__DOT__slave__DOT__mem__v0 
                    = (7U & vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr);
                __VdlySet__i2c_system_tb__DOT__slave__DOT__mem__v0 = 1U;
                vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 1U;
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 4U;
                __Vdly__i2c_system_tb__DOT__slave__DOT__wr_ptr 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr);
            }
        } else if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) {
            __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt = 0U;
            if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__rw_bit) {
                __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr 
                    = vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_base;
                __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte 
                    = vlSelfRef.i2c_system_tb__DOT__slave__DOT__mem
                    [(7U & vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_base)];
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 5U;
                vlSelfRef.i2c_system_tb__DOT__slv_sda_oe 
                    = (1U & (~ (vlSelfRef.i2c_system_tb__DOT__slave__DOT__mem
                                [(7U & vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_base)] 
                                >> 7U)));
            } else {
                vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
                vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_base 
                    = vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr;
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__st))) {
        if (vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_rise) {
            __Vdly__i2c_system_tb__DOT__slave__DOT__sh 
                = ((0x000000feU & ((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh) 
                                   << 1U)) | (1U & 
                                              (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))));
            __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt)));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall) 
                    & (8U == (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt)))) {
            if ((0x42U == (0x0000007fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh) 
                                          >> 1U)))) {
                vlSelfRef.i2c_system_tb__DOT__slave__DOT__rw_bit 
                    = (1U & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh));
                vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 1U;
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 2U;
            } else {
                __Vdly__i2c_system_tb__DOT__slave__DOT__st = 0U;
            }
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_5_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__w_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__ar_ready))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__aw_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__aw_ready))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__ar_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__ar_ready))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_5_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__resetn) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__w_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__w_ready))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__st = __Vdly__i2c_system_tb__DOT__slave__DOT__st;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__bcnt 
        = __Vdly__i2c_system_tb__DOT__slave__DOT__bcnt;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__sh = __Vdly__i2c_system_tb__DOT__slave__DOT__sh;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr 
        = __Vdly__i2c_system_tb__DOT__slave__DOT__rd_ptr;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__tx_byte 
        = __Vdly__i2c_system_tb__DOT__slave__DOT__tx_byte;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr 
        = __Vdly__i2c_system_tb__DOT__slave__DOT__wr_ptr;
    if (__VdlySet__i2c_system_tb__DOT__slave__DOT__mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__slave__DOT__mem[__VdlyDim0__i2c_system_tb__DOT__slave__DOT__mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__slave__DOT__mem__v0;
    }
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__sda_q 
        = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)));
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_q 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q;
}

void Vi2c_system_tb___024root___nba_sequent__TOP__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___nba_sequent__TOP__1\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<IData/*31:0*/, 64> i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__1__w;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__1__w = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w = 0;
    CData/*1:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__acc;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__acc = 0;
    QData/*63:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__prod;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__prod = 0;
    QData/*63:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__rounded64;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__rounded64 = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word = 0;
    CData/*1:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word = 0;
    CData/*1:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__acc;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__acc = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__M_q31;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__M_q31 = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__right_shift;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__right_shift = 0;
    QData/*63:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__prod;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__prod = 0;
    QData/*63:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__half;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__half = 0;
    QData/*63:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__rounded64;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__rounded64 = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__r;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__r = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__c;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__c = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__f;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__f = 0;
    CData/*7:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8____Vlvbound_h06b16490__0;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8____Vlvbound_h06b16490__0 = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_idx;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_idx = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx = 0;
    CData/*1:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off = 0;
    IData/*31:0*/ __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w;
    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word = 0;
    CData/*1:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__f;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__f = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kh;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kh = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kw;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kw = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx = 0;
    CData/*7:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__Vfuncout;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word = 0;
    CData/*1:0*/ __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off;
    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid = 0;
    CData/*6:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = 0;
    CData/*6:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = 0;
    CData/*6:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = 0;
    CData/*6:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = 0;
    CData/*5:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = 0;
    CData/*3:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = 0;
    CData/*7:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc = 0;
    CData/*1:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = 0;
    SData/*8:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt = 0;
    CData/*1:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat = 0;
    CData/*7:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase = 0;
    CData/*1:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = 0;
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = 0;
    SData/*11:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = 0;
    SData/*9:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = 0;
    CData/*2:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = 0;
    CData/*3:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready = 0;
    CData/*4:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    CData/*5:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    CData/*5:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    CData/*5:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    CData/*7:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    // Body
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wready;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__uart_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awready;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__uart_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid;
    vlSelfRef.__Vdly__i2c_system_tb__DOT__dut__DOT__uart_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_bvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0U;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0U;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 = 0U;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0U;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0U;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 = 0U;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 = 0U;
    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 = 0U;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase;
    __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arready;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = vlSelfRef.i2c_system_tb__DOT__resetn;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
               | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                  | ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)) 
                     | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy) 
                        | (0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_bready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_bvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_ready));
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.__Vdly__r_valid = 1U;
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.r_data 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem
                [(0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                 >> 2U))];
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.r_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.r_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.__Vdly__r_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__r_valid = 1U;
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.r_data 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem
                [(0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                 >> 2U))];
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.r_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.r_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__r_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__b_valid = 1U;
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.b_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.b_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__b_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__read_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__r_valid = 1U;
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.r_data 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem
                [(0x000007ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                 >> 2U))];
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.r_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.r_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__r_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__write_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__b_valid = 1U;
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.b_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.b_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__b_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__r_valid = 1U;
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__r_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__b_valid = 1U;
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.b_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.b_ready))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__b_valid = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = 0U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = 0U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena) {
            if ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt 
                 >= vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_pre)) {
                if ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                     == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are)) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn 
                        = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn);
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = 0U;
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_mod)
                            ? ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt)
                            : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                               - (IData)(1U)));
                }
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = 0U;
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt 
                    = ((IData)(1U) + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt);
            }
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = 0U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
                = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b))));
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q 
                = (0U == (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                         >> 0x00000010U)));
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) 
             & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_gnt) 
                | (0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_ready))) {
            if ((1U & (~ ((0U == (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                 >> 8U))) 
                          | ((1U == (0x0000000fU & 
                                     (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                      >> 8U))) | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                       >> 8U))) 
                                                  | ((4U 
                                                      == 
                                                      (0x0000000fU 
                                                       & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                          >> 8U))) 
                                                     | ((5U 
                                                         == 
                                                         (0x0000000fU 
                                                          & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                             >> 8U))) 
                                                        | (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                               >> 8U))))))))))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = 1U;
            }
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = 0U;
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest 
                = ((4U == (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                           >> 0x0000001cU)) ? 2U : 
                   ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram)
                     ? 1U : 0U));
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_ready))) {
            if ((1U & (~ ((0U == (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                                 >> 8U))) 
                          | ((1U == (0x0000000fU & 
                                     (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                      >> 8U))) | ((2U 
                                                   == 
                                                   (0x0000000fU 
                                                    & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                                       >> 8U))) 
                                                  | ((4U 
                                                      == 
                                                      (0x0000000fU 
                                                       & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                                          >> 8U))) 
                                                     | ((5U 
                                                         == 
                                                         (0x0000000fU 
                                                          & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                                             >> 8U))) 
                                                        | (6U 
                                                           == 
                                                           (0x0000000fU 
                                                            & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                                               >> 8U))))))))))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = 1U;
            }
        } else if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_valid) 
                    & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = 0U;
        }
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rdata 
                = ((0U == (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr))
                    ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2)
                    : ((4U == (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr))
                        ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr)
                        : 0U));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rready))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid = 0U;
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest 
                = ((4U == (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                           >> 0x0000001cU)) ? 2U : 
                   ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram)
                     ? 1U : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)
                              ? 3U : 0U)));
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
             & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_gnt) 
                | (0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
        }
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rdata 
                = ((0x00000010U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                    ? ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? 0U : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                              ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn)))
                        : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt))
                            : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_mod)))))
                    : ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena)))
                            : 0U) : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                      ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                          ? 0U : ((1U 
                                                   & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                                   ? 0U
                                                   : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are))
                                      : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                          ? 0U : ((1U 
                                                   & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                                   ? 0U
                                                   : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_pre)))));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rready))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid = 0U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
        __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rdata 
                = ((0x00000010U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                    ? ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? 0U : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                 ? 0U : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                          ? 0U : ((1U 
                                                   & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en)))))))
                    : ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr)))
                            : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr))))
                        : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp)))
                            : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb)))));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rready))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid = 0U;
        }
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rdata 
                = ((0x00000010U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                    ? 0U : ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                             ? ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                 ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                              ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr))
                                 : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                              ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr)))
                             : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                 ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                              ? 0U : 
                                             (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)))))
                                 : 0U)));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rvalid) 
                    & ((6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
                       & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid = 0U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid = 1U;
            if ((0x00000010U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata 
                    = ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? 0U : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                 ? 0U : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                          ? 0U : ((1U 
                                                   & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b) 
                                                   << 2U)))));
            } else if ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) {
                if ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata 
                        = ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err) 
                                               << 8U) 
                                              | (((0U 
                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count)) 
                                                  << 7U) 
                                                 | ((0x40U 
                                                     == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count)) 
                                                    << 6U))) 
                                             | (((0U 
                                                  == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count)) 
                                                 << 5U) 
                                                | (((0x40U 
                                                     == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count)) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done)))))));
                } else if ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata = 0U;
                } else if ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata = 0U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata 
                        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count))
                            ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo
                           [(0x0000003fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr))]);
                    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = 1U;
                    }
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata 
                    = ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr))
                        : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                     ? 0U : ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler) 
                                               << 0x00000019U) 
                                              | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len) 
                                                 << 0x00000010U)) 
                                             | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy) 
                                                 << 0x0000000bU) 
                                                | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir) 
                                                    << 0x0000000aU) 
                                                   | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr))))))));
            }
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rready))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid = 0U;
        }
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = 0U;
        if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0U;
            } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
                        & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.b_valid))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_bready = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
                if ((1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awready) 
                           | ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awvalid)) 
                              & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wvalid)))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_bready = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 4U;
                }
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awready) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awvalid = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wvalid = 0U;
                }
            } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
                        & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_valid))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata 
                    = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_data;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_rready = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state))) {
            if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
                 & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.ar_ready))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_arvalid = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_rready = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 2U;
            }
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_araddr 
                = (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_arvalid = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 1U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awaddr 
                = (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wdata 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wvalid = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 3U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arvalid) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arready)));
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arready) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rdata 
                = ((0x00000010U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                    ? ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? 0U : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                 ? 0U : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                          ? 0U : ((1U 
                                                   & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                                   ? 0U
                                                   : 
                                                  ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_err) 
                                                     << 4U) 
                                                    | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en) 
                                                          << 2U))) 
                                                   | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en)))))))
                    : ((8U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                        ? ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_tdr))
                            : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr)))
                        : ((4U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                            ? ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_adr)))
                            : ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                ? 0U : ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)
                                         ? 0U : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_nby))))));
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rvalid) 
                    & ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
                       & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid = 0U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr 
            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync1;
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__aw_en))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr 
                = (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready = 0U;
        }
        if (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wready) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awready)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid))) {
            if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr 
                    = (0x0000ffffU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
            }
        }
        if ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wready) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awready)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid = 1U;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bready) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = 1U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = 0U;
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__aw_en))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr 
                = (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__aw_en = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready = 0U;
        }
        if (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wready) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awready)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid))) {
            if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                                if ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_mod 
                                = (1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena 
                                = (1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                        if ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are 
                            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_pre 
                        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
                }
            }
        }
        if ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wready) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awready)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid = 1U;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bready) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__aw_en = 1U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = 1U;
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__prev_tx_busy) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = 1U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en 
                = (1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data);
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data 
                          >> 1U)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = 0U;
            }
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data 
                          >> 2U)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = 0U;
            }
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = 0U;
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush)))) {
            if ((0x40U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = 2U;
            } else {
                __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data;
                __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 
                    = (0x0000003fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr));
                __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0 = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr)));
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush)))) {
            if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = 1U;
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr)));
            }
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = 0U;
        }
        if (((((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
               | (1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) 
              | (7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) 
             | (8U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = 0U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg 
                = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg)));
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt)));
        }
        if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0U;
            } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0U;
            } else if (VL_LIKELY(((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0U;
            } else {
                VL_WRITEF_NX("[%0t QSPI] DONE\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 8U;
                } else {
                    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg) 
                         & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in 
                            = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
                                ? (3U | (0x000000fcU 
                                         & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                            << 2U)))
                                : ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
                                    ? (0x0fU | (0x000000f0U 
                                                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                                   << 4U)))
                                    : (1U | (0x000000feU 
                                             & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                                << 1U)))));
                    }
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising) {
                        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                             < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w))) {
                            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))) {
                                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))) {
                                    if ((0x40U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count))) {
                                        __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 
                                            = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                                << 0x00000018U) 
                                               | (0x00ffffffU 
                                                  & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc));
                                        __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 
                                            = (0x0000003fU 
                                               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr));
                                        __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0 = 1U;
                                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr 
                                            = (0x0000007fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr)));
                                    }
                                } else {
                                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc 
                                        = ((0xff00ffffU 
                                            & __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc) 
                                           | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                              << 0x00000010U));
                                }
                            } else {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc 
                                    = ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))
                                        ? ((0xffff00ffU 
                                            & __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc) 
                                           | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                              << 8U))
                                        : ((0xffffff00U 
                                            & __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc) 
                                           | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in)));
                            }
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos)));
                            if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt) 
                                 >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len))) {
                                if (((3U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos)) 
                                     & (0x40U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count)))) {
                                    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 
                                        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))
                                            ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in)
                                            : ((1U 
                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))
                                                ? (
                                                   ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos))
                                                    ? 
                                                   (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in) 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc))
                                                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc)));
                                    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 
                                        = (0x0000003fU 
                                           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr));
                                    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1 = 1U;
                                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr 
                                        = (0x0000007fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr)));
                                }
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 7U;
                            } else {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt 
                                    = (0x000001ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt)));
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = 0U;
                            }
                        } else {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
                                = (7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                         - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w)));
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising) {
                    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                         < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w))) {
                        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt) 
                             >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len))) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 7U;
                        } else {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt 
                                = (0x000001ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt)));
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos))) {
                                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos))) {
                                    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr) 
                                         != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr))) {
                                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr 
                                            = (0x0000007fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr)));
                                    }
                                }
                            }
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos)));
                        }
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
                            = (7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                     - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w)));
                    }
                }
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising) {
                if ((1U >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt))) {
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 5U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = 1U;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 6U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = 0U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt 
                        = (0x0000001fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt) 
                                          - (IData)(1U)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising) {
                    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt))) {
                        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte) 
                             == ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b)
                                  ? 3U : 2U))) {
                            if ((0U < (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy))) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 4U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt 
                                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy;
                            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 5U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = 1U;
                            } else {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 6U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = 0U;
                            }
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte)));
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                        }
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
                            = (7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                     - (IData)(1U)));
                    }
                }
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising) {
                if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt))) {
                    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 7U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 3U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
                    }
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
                        = (7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                 - (IData)(1U)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 2U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 7U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = 0U;
            if (VL_UNLIKELY((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start))) {
                VL_WRITEF_NX("[%0t QSPI] IDLE->CS_ASSERT instr=%02x adr=%06x\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr)
                             , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr);
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = 0U;
            }
        }
    } else {
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.__Vdly__r_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus.r_data = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__r_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.__Vdly__b_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.r_data = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__r_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.__Vdly__b_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.r_data = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__r_valid = 0U;
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.__Vdly__b_valid = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rdata = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_rvalid;
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rdata = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_bready = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_arvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_rready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__uart_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__uart_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rvalid 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_rvalid;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arready 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_arready;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2 = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__aw_en = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_pre = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are = 0xffffffffU;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_mod = 1U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = 0U;
    }
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = 0U;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0U;
                } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0U;
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x18U;
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = 1U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x17U;
                    }
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[0U];
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x16U;
                    if (VL_GTS_III(8, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[1U], (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[1U];
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 1U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[2U], (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[2U];
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 2U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[3U], (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[3U];
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 3U;
                    }
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result 
                        = (0x0000000fU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx);
                } else {
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__acc 
                        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
                           + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem
                           [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx]);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__prod 
                        = VL_MULS_QQQ(64, 0x00000000732b0c78ULL, 
                                      VL_EXTENDS_QI(64,32, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__acc));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__rounded64 
                        = VL_SHIFTRS_QQI(64,64,32, 
                                         (0x0000020000000000ULL 
                                          + __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__prod), 0x0000002aU);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased 
                        = ((IData)(0x0000000eU) + (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__rounded64));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____VlemCall_0__tflite_requant 
                        = (VL_LTS_III(32, 0x0000007fU, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased)
                            ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased)
                                              ? 0x00000080U
                                              : (0x000000ffU 
                                                 & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__3__biased)));
                    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____VlemCall_0__tflite_requant;
                    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx;
                    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 1U;
                    if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x15U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx)));
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base 
                            = ((IData)(0x00000fa0U) 
                               + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base);
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0fU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x14U;
                } else {
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off 
                        = (3U & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i);
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = 1U;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word 
                        = ((0x03e7U >= (0x000003ffU 
                                        & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i 
                                           >> 2U)))
                            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem
                           [(0x000003ffU & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__i 
                                            >> 2U))]
                            : 0U);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off))
                                           ? ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word 
                                                  >> 0x18U)
                                               : (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word 
                                                  >> 8U)
                                               : __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__word)));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__Vfuncout 
                        = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__5__Vfuncout;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_pix 
                        = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_out_byte__4__Vfuncout;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off 
                        = (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off))
                                           ? ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word 
                                                  >> 0x18U)
                                               : (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word 
                                                  >> 8U)
                                               : __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__word)));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_pix 
                        = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__6__Vfuncout;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a 
                        = (0x0000ffffU & (VL_EXTENDS_II(16,8, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_pix)) 
                                          - (IData)(0xff80U)));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_pix;
                    if ((0x0f9fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x13U;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx 
                            = (0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx)));
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x10U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x12U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                    = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base 
                       + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x11U;
            }
        } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = 1U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x10U;
                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                        __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
                        __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 
                            = (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx));
                        __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 1U;
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx = 0U;
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = 0x00031bc8U;
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = 0U;
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0fU;
                        } else {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
                                = (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)));
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0dU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                        = ((IData)(0x00035a48U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx), 2U));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0eU;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                    if ((0x03e7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0dU;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)));
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0bU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                        = ((IData)(0x000307a8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx), 2U));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0cU;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q 
                        = ((0x03e7U >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))
                            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem
                           [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx]
                            : 0U);
                } else {
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__right_shift 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__SHIFT_CONV
                        [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx];
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__M_q31 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__M_CONV_Q31
                        [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx];
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__acc 
                        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
                           + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem
                           [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx]);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__prod 
                        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__acc), 
                                      VL_EXTENDS_QI(64,32, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__M_q31));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__half 
                        = VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__right_shift 
                                         - (IData)(1U)));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__rounded64 
                        = VL_SHIFTRS_QQI(64,64,32, 
                                         (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__prod 
                                          + __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__half), __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__right_shift);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased 
                        = ((IData)(0xffffff80U) + (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__rounded64));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__Vfuncout 
                        = (VL_LTS_III(32, 0x0000007fU, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased)
                            ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased)
                                              ? 0x00000080U
                                              : (0x000000ffU 
                                                 & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__biased)));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__result_byte 
                        = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__tflite_requant__7__Vfuncout;
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__result_byte;
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__f 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx;
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__c 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx;
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__r 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx;
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_idx 
                        = ((VL_MULS_III(32, (IData)(0x000000a0U), __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__r) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__c)) 
                           + __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__f);
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx 
                        = VL_SHIFTR_III(32,32,32, __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_idx, 2U);
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off 
                        = (3U & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_idx);
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w 
                        = ((0x03e7U >= (0x000003ffU 
                                        & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx))
                            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem
                           [(0x000003ffU & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx)]
                            : 0U);
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w 
                        = ((2U & (IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off))
                            ? ((1U & (IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off))
                                ? ((0x00ffffffU & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w) 
                                   | ((IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val) 
                                      << 0x00000018U))
                                : ((0xff00ffffU & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w) 
                                   | ((IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val) 
                                      << 0x00000010U)))
                            : ((1U & (IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__byte_off))
                                ? ((0xffff00ffU & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w) 
                                   | ((IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val) 
                                      << 8U)) : ((0xffffff00U 
                                                  & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w) 
                                                 | (IData)(__Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__val))));
                    __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8____Vlvbound_h06b16490__0 
                        = __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__w;
                    if (VL_LIKELY(((0x03e7U >= (0x000003ffU 
                                                & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx))))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem[(0x000003ffU 
                                                                                & __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8__word_idx)] 
                            = __Vtask_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__write_conv_out_byte__8____Vlvbound_h06b16490__0;
                    }
                    if ((0x13U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = 0U;
                        if ((0x18U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx))) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = 0U;
                            if ((7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx))) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = 0U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0bU;
                            } else {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx)));
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 7U;
                            }
                        } else {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx 
                                = (0x0000001fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx)));
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 7U;
                        }
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx)));
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0x0aU;
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ir 
                    = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx), 1U) 
                        + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx)) 
                       - (IData)(4U));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ic 
                    = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx), 1U) 
                        + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx)) 
                       - (IData)(3U));
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ic;
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ir;
                {
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout = 0;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx = 0U;
                    if ((((VL_GTS_III(32, 0U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir) 
                           | VL_LTES_III(32, 0x00000031U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir)) 
                          | VL_GTS_III(32, 0U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic)) 
                         | VL_LTES_III(32, 0x00000028U, __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic))) {
                        __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout = 0x80U;
                        goto __Vlabel0;
                    }
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx 
                        = (VL_MULS_III(32, (IData)(0x00000028U), __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ir) 
                           + __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__ic);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off 
                        = (3U & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word 
                        = ((0x01e9U >= (0x000001ffU 
                                        & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx 
                                           >> 2U)))
                            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem
                           [(0x000001ffU & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__byte_idx 
                                            >> 2U))]
                            : 0U);
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__Vfuncout = 0;
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off))
                                           ? ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word 
                                                  >> 0x18U)
                                               : (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__byte_off))
                                               ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word 
                                                  >> 8U)
                                               : __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__word)));
                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout 
                        = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__10__Vfuncout;
                    __Vlabel0: ;
                }
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_pix 
                    = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_input_pixel__9__Vfuncout;
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kw 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx;
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kh 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx;
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__f 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx;
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx 
                    = ((VL_MULS_III(32, (IData)(0x00000050U), __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__f) 
                        + VL_MULS_III(32, (IData)(8U), __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kh)) 
                       + __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__kw);
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off 
                    = (3U & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx);
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word 
                    = ((0x9fU >= (0x000000ffU & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx 
                                                 >> 2U)))
                        ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem
                       [(0x000000ffU & (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__byte_idx 
                                        >> 2U))] : 0U);
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__Vfuncout 
                    = (0x000000ffU & ((2U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off))
                                       ? ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off))
                                           ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word 
                                              >> 0x18U)
                                           : (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word 
                                              >> 0x10U))
                                       : ((1U & (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__byte_off))
                                           ? (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word 
                                              >> 8U)
                                           : __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__word)));
                __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__Vfuncout 
                    = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__get_byte_from_word__12__Vfuncout;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__weight_pix 
                    = __Vfunc_i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__read_conv_weight__11__Vfuncout;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a 
                    = (0x0000ffffU & (VL_EXTENDS_II(16,8, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_pix)) 
                                      - (IData)(0xff80U)));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__weight_pix;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = 1U;
                if ((7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = 0U;
                    if ((9U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 9U;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx)));
                    }
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = 0U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = 0U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 8U;
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
                    if (VL_LIKELY(((0x01e9U >= (0x000001ffU 
                                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)))))) {
                        __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0;
                        __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 
                            = (0x000001ffU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx));
                        __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0 = 1U;
                    }
                    if ((0x01e9U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 7U;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)));
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 5U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                    = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr 
                       + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx), 2U));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 6U;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
                __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 
                    = (7U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx));
                __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 1U;
                if ((7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 5U;
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)));
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                    = ((IData)(0x00031ba8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx), 2U));
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 4U;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
                if (VL_LIKELY(((0x9fU >= (0x000000ffU 
                                          & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)))))) {
                    __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0;
                    __VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx));
                    __VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 1U;
                }
                if ((0x009fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 3U;
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx)));
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr 
                = ((IData)(0x000317a8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx), 2U));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 2U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = 0U;
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr = 0x000317a8U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 2U;
            }
        }
    } else {
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_wready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_awready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bvalid 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__gpio_bvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_wready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_awready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bvalid 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__timer_bvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt;
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0) {
        i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo__v0;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg;
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v0;
    }
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo__v1;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx;
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    }
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    }
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem__v0;
    }
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    }
    if (__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem[__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0] 
            = __VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    }
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q 
                = (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                  >> 8U));
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_txd_hit) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_rxd_hit) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_nck_hit) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_err = 0U;
        }
        if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
            if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go) 
                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go))) {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nby_lat 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_nby;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_tdr;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
                    = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_adr) 
                        << 1U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go));
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase = 1U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx = 0U;
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen = 0U;
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr = 0U;
                }
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 1U;
            }
        } else if ((0x1eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt = 0U;
            if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0U;
                } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_err = 1U;
                        }
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done = 1U;
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done = 1U;
                        }
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 2U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                        if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 0U;
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
                            if ((1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv)) 
                                       & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen) 
                                          | (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)))))) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 4U;
                            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase) {
                                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_1 = 0U;
                                } else {
                                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__1__w 
                                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCall_0__tdr_byte 
                                        = (0x000000ffU 
                                           & __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__1__w);
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_1 
                                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCall_0__tdr_byte;
                                }
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase = 0U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = 7U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
                                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_1;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 2U;
                            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__last_byt) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 4U;
                            } else {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx 
                                    = (3U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx)));
                                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_3 = 0U;
                                } else {
                                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx 
                                        = (3U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx)));
                                    __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w 
                                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCall_2__tdr_byte 
                                        = (0x000000ffU 
                                           & ((0U == (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx))
                                               ? __Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w
                                               : ((1U 
                                                   == (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx))
                                                   ? 
                                                  (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w 
                                                   >> 8U)
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__idx))
                                                    ? 
                                                   (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w 
                                                    >> 0x10U)
                                                    : 
                                                   (__Vfunc_i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_byte__2__w 
                                                    >> 0x18U)))));
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_3 
                                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCall_2__tdr_byte;
                                }
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = 7U;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
                                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT____VlemCond_3;
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 2U;
                            }
                        } else {
                            if ((1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv)) 
                                       & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))))) {
                                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen = 1U;
                            }
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 3U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 1U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 2U;
                    } else {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr 
                                = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx))
                                    ? ((0xffffff00U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr) 
                                       | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg))
                                    : ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx))
                                        ? ((0xffff00ffU 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr) 
                                           | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                              << 8U))
                                        : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx))
                                            ? ((0xff00ffffU 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr) 
                                               | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                                  << 0x00000010U))
                                            : ((0x00ffffffU 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr) 
                                               | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                                  << 0x00000018U)))));
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull 
                                = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__last_byt)));
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 0U;
                        }
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
                                = (0x000000feU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                                  << 1U));
                        }
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
                        if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt))) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 3U;
                        } else {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt 
                                = (7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt) 
                                         - (IData)(1U)));
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit)))) {
                            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
                                = ((0x000000feU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                                   << 1U)) 
                                   | (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16))));
                        }
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 2U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull 
                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit) 
                           & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg) 
                                 >> 7U)));
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = 7U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 2U;
                    } else {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 1U;
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 2U;
                } else {
                    __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 1U;
                }
            } else {
                __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0U;
            }
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt)));
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nby_lat = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = 1U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_err = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
        }
    }
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 1U;
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync1 = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 1U;
            }
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = 0U;
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__aw_en))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr 
                = (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wready) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awready)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid))) {
            if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr)))) {
                                if ((1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = 1U;
                                }
                                if ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = 1U;
                                }
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b 
                                    = (1U & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                             >> 2U));
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data 
                                = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr)))) {
                        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr 
                            = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr 
                        = (0x000000ffU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode 
                        = (3U & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                 >> 8U));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir 
                        = (1U & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                 >> 0x0aU));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy 
                        = (0x0000001fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                          >> 0x0bU));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len 
                        = (0x000000ffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                          >> 0x10U));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler 
                        = (0x0000003fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                          >> 0x19U));
                    if ((vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                         >> 0x1fU)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = 1U;
                    } else if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy)))))) {
                        VL_WRITEF_NX("[%0t QSPI] CCR write ccr=%08x adr=%08x\n",4, 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data
                                     , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr);
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = 1U;
                    }
                }
            }
        }
        if ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wready) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awready)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bready) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = 1U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = 0U;
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awvalid) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wvalid)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q 
                = (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready = 0U;
        }
        if (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wready) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wvalid)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awready)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awvalid))) {
            if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q))) {
                if ((1U & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                           & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = 1U;
                }
                if ((2U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = 1U;
                }
            } else if ((8U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr 
                    = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
            } else if ((0x0cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr 
                    = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
            }
        }
        if ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wready) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wvalid)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awready)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_bvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid = 1U;
        } else if ((((6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
                     & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready)) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_bvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = 1U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_txd_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_rxd_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_nck_hit = 0U;
        if ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awvalid) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wvalid)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__aw_en))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready = 1U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr 
                = (0x0000001fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__aw_en = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready = 0U;
        }
        if (((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wready) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wvalid)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awready)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awvalid))) {
            if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr)))) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en 
                                    = (1U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en 
                                    = (1U & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                             >> 2U));
                                if ((1U & (~ (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                              >> 1U)))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_txd_hit = 1U;
                                }
                                if ((1U & (~ (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                              >> 3U)))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_rxd_hit = 1U;
                                }
                                if ((1U & (~ (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                                              >> 4U)))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_nck_hit = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_tdr 
                                = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr)))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_adr 
                            = (0x0000007fU & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_nby 
                        = ((0U == vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)
                            ? 1U : ((4U < vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)
                                     ? 4U : (7U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data)));
                }
            }
        }
        if ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wready) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wvalid)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awready)) 
              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awvalid)) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_bvalid)))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid = 1U;
        } else if ((((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
                     & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready)) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_bvalid))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__aw_en = 1U;
        }
        if (((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_ready))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q 
                = (0x0000000fU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                  >> 8U));
        }
    } else {
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr = 0x00030000U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr = 0x00035a58U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__aw_en = 1U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_nby = 1U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_adr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_tdr = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_txd_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_rxd_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_nck_hit = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__prev_tx_busy 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr) 
                          - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr) 
                          - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__last_byt 
        = ((7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nby_lat) 
                  - (IData)(1U))) == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit 
        = (1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read)) 
                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_wready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_awready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bvalid 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__qspi_bvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_awready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_wready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_bvalid 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__ai_bvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_awready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wready 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_wready;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_bvalid 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i2c_bvalid;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w 
        = ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
            ? 4U : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
                     ? 2U : 1U));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go 
        = ((~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done) 
               | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go))) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en));
}

void Vi2c_system_tb___024root___nba_sequent__TOP__2(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___nba_sequent__TOP__2\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_data 
                = ((0x1dffU >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                   [vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx]
                    : 0U);
        }
    } else {
        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.r_data = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_rready 
        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_rready 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_rready 
        = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_rready 
        = ((5U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bready 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bready 
        = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bready 
        = ((5U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata 
        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata 
                        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
                }
            }
        }
    }
}

extern const VlWide<32>/*1023:0*/ Vi2c_system_tb__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vi2c_system_tb__ConstPool__CONST_h6be9aa18_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vi2c_system_tb__ConstPool__TABLE_h84b64dae_0;

void Vi2c_system_tb___024root___nba_sequent__TOP__3(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___nba_sequent__TOP__3\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = 0;
    QData/*36:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = 0;
    CData/*7:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0;
    CData/*3:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0;
    CData/*4:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result = 0;
    CData/*5:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D = 0;
    QData/*33:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = 0;
    CData/*4:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0;
    QData/*32:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = 0;
    SData/*15:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = 0;
    IData/*16:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0;
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_2;
    __VdfgRegularize_h6e95ff9d_0_2 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_5;
    __VdfgRegularize_h6e95ff9d_0_5 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
    __VdfgRegularize_h6e95ff9d_0_15 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_22;
    __VdfgRegularize_h6e95ff9d_0_22 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_49;
    __VdfgRegularize_h6e95ff9d_0_49 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0;
    CData/*0:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = 0;
    VlWide<64>/*2047:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<64>/*2047:0*/ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<32>/*1023:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    VlWide<32>/*1023:0*/ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    IData/*31:0*/ __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    IData/*31:0*/ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    // Body
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn)
               ? (0x0000ffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0xffffU | __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__resetn)) 
                    | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (1U | __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffbU & __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (4U & (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__resetn)) 
                     << 2U) | (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (4U | __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff7U & __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (8U & (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__resetn)) 
                     << 3U) | (0xfffffff8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (8U | __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)
                : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                      ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                         >> 1U) : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? (((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
                    | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                       >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20))
                : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)));
    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__resetn)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready))));
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        } else if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__) 
                             | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__)))))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = (IData)((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                           >> 0x00000020U));
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        } else if (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
                    & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__)) 
                       & ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                              >> 2U)) & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret))))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = (IData)((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                           >> 0x00000020U));
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        } else if (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
                    & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__)) 
                       & ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                              >> 3U)) & (0U != (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
                                                & (1U 
                                                   | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed) 
                                                        << 0x0000000aU) 
                                                       | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken) 
                                                           << 9U) 
                                                          | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch) 
                                                             << 8U))) 
                                                      | ((((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump) 
                                                             << 3U) 
                                                            | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store) 
                                                               << 2U)) 
                                                           | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall) 
                                                                << 2U)) 
                                                            | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret) 
                                                               << 1U))))))))))) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = (IData)((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                                     << 0x00000020U) 
                                    | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                           >> 0x00000020U));
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
            __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        }
    } else {
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U])));
    VL_ASSIGN_W(1024, __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, Vi2c_system_tb__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
        = ((__Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
            & __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U]) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
              & (~ __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])));
    VL_ASSIGN_W(2048, __VdlyMask__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, Vi2c_system_tb__ConstPool__CONST_h6be9aa18_0);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
            = (3U & (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                      & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid))
                      ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid)
                          ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                          : ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                      : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid))));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
            = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                 ? (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                     << 0x0000001fU) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        >> 1U)) : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP 
            = (0x0000003fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                               ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
                               : ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))
                                   ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                      - (IData)(1U))
                                   : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
                ? (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))
                    ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                       + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                    : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                       - vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D))
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
                    : (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                        << 0x0000001fU) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                           >> 1U)))
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q 
            = (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                      ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid)
                          ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                          : ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                      : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid))));
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h 
                = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                   >> 0x10U);
        }
        if (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                = (1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                         & (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                    >> 0x20U))));
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n;
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) {
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex = 0U;
                    }
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex = 0U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex = 0U;
                    }
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex 
                            = (3U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39);
                    }
                }
            }
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c;
                }
            }
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n;
        if (((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q 
                = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q 
                = (0x0000000fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q) 
                                  | (- (IData)((1U 
                                                & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                   & (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q 
                = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q) 
                   & (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
        }
        if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set))))) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_fifo.sv:117: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.if_stage_i.prefetch_buffer_i.fifo_i", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_fifo.sv", 117, "");
                }
            }
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
                = (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)
                          ? ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q))
                          : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
            __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
                = (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_40)
                          ? ((IData)(1U) + (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q))
                          : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n;
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
            = __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = 0ULL;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = 1U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
        __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
        = __Vdly__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                  | (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id)));
    if (vlSelfRef.i2c_system_tb__DOT__resetn) {
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
             | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q 
            = (6U | (0x00000028U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
            = (0xffff0888U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__irq_vector);
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n;
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle)))) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
            }
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n;
        if (((0x07a1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q 
                = (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (((0x07a2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
             & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid) 
             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex) 
                    | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata
                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext);
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex = 4U;
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
                }
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle)))) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                        = (((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel)) 
                            & ((0x16U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator)) 
                               | (0x17U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator))))
                            ? (0x7fffffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b)
                            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b);
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                }
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = 1U;
            } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = 0U;
            }
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex;
        }
        if (((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((5U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (5U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (7U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((8U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (8U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((9U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (9U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x0fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x0fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x10U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x10U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x11U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x11U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x12U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x12U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x13U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x13U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x15U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x15U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x16U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x16U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x17U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x17U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x18U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x18U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        if (((0x1fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        } else if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
                    & (0x1fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        }
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall 
            = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall) 
                & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall 
            = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = 0U;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n;
        }
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex;
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle)))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) {
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex = 0U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex = 0U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex = 0U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex 
                            = (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                     >> 0x0dU));
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator;
                    }
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex 
                        = (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = 0U;
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = 0U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id;
                    }
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex 
                        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
                           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex 
                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id;
                    }
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex 
                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access;
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex 
                            = (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 7U));
                    }
                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex 
                            = (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 7U));
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = 0U;
                    }
                } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex = 3U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = 0U;
                }
            }
        }
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id 
                = (3U != (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned));
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed;
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = 6U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = 0x40000003U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex = 3U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id = 0U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
                        | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch) 
               & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                  >> 3U)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : ((((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                            << 1U)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 1U))) 
                    << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 1U)) | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 3U))) 
                              << 4U)) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 3U)) 
                                           | (1U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U))) 
                                          << 2U) | 
                                         ((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 5U)) 
                                          | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 7U))))) 
                 << 0x00000018U) | ((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 7U)) 
                                        | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 9U))) 
                                       << 6U) | (((2U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 9U)) 
                                                  | (1U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                        >> 0x0000000bU))) 
                                                 << 4U)) 
                                     | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU))) 
                                         << 2U) | (
                                                   (2U 
                                                    & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                         >> 0x0000000fU))))) 
                                    << 0x00000010U)) 
               | (((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                              >> 0x0000000fU)) | (1U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x00000011U))) 
                      << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        >> 0x00000011U)) 
                                 | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                          >> 0x00000013U))) 
                                << 4U)) | ((((2U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x00000013U)) 
                                             | (1U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x00000015U))) 
                                            << 2U) 
                                           | ((2U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U)) 
                                              | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000017U))))) 
                   << 8U) | (((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x00000017U)) 
                                | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x00000019U))) 
                               << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x00000019U)) 
                                          | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000001bU))) 
                                         << 4U)) | 
                             ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x0000001bU)) 
                                | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x0000001dU))) 
                               << 2U) | ((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x0000001dU)) 
                                         | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                            >> 0x0000001fU)))))));
    __VdfgRegularize_h6e95ff9d_0_51 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex) 
                                       & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                               << 2U) | (((1U == (3U 
                                                  & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))))) {
        if ((0U != (((2U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                     << 2U) | (((1U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                << 1U) | (0U == (3U 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:863: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 863, "");
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex));
    __VdfgRegularize_h6e95ff9d_0_46 = (IData)((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_47 = (IData)((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_48 = (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_49 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x0000001fU));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
              == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x0000003fU & ((0x0000001fU & ((0x0000000fU 
                                           & ((7U & 
                                               ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                   >> 0x0000001eU))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                        >> 0x0000001cU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000001aU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000018U)))))))) 
                                          + (0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000016U)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000014U)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000012U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000010U)))))))))) 
                          + (0x0000001fU & ((0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000eU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000cU)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x0000000aU)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 8U)))))))) 
                                            + (0x0000000fU 
                                               & ((7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 6U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 4U)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 2U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)))))))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               >> 0x00000018U) == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        << 1U)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                          >> 1U)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001fU))))));
    __VdfgRegularize_h6e95ff9d_0_53 = (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex));
    __VdfgRegularize_h6e95ff9d_0_52 = (((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x00000010U));
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
            } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
            }
        }
        if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
        = (1U & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                  ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith)
                  : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex)));
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
        = (3U & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                  ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword)
                  : (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex)))));
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
            } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
            } else if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
            ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed)
            : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__resetn) 
           && (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    __Vtableidx2 = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vi2c_system_tb__ConstPool__TABLE_h84b64dae_0
        [__Vtableidx2];
    __VdfgRegularize_h6e95ff9d_0_36 = ((0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    __VdfgRegularize_h6e95ff9d_0_15 = ((0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x1cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    } else if ((((0x30U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x32U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x37U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x33U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x35U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                >> 0x1fU) ? ((((((((2U & ((~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                          << 1U)) | 
                                   (1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 1U)))) 
                                  << 6U) | (((2U & 
                                              ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 3U)))) 
                                            << 4U)) 
                                | ((((2U & ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 4U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 5U)))) 
                                    << 2U) | ((2U & 
                                               ((~ 
                                                 (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 6U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                            >> 8U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 9U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000aU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000bU)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000cU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000dU)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ 
                                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000eU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                >> 0x0000000fU)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000010U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 0x00000011U)))) 
                                    << 6U) | (((2U 
                                                & ((~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000013U)))) 
                                              << 4U)) 
                                  | ((((2U & ((~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((~ 
                                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x00000017U)))))) 
                                 << 8U) | (((((2U & 
                                               ((~ 
                                                 (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000018U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000019U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((~ 
                                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001bU)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0x0000001fU))))))))
                : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    __VdfgRegularize_h6e95ff9d_0_37 = ((0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    __VdfgRegularize_h6e95ff9d_0_35 = ((0x31U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_51)
            ? __VdfgRegularize_h6e95ff9d_0_53 : __VdfgRegularize_h6e95ff9d_0_52);
    __VdfgRegularize_h6e95ff9d_0_44 = (0x0000ffffU 
                                       & ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex));
    __VdfgRegularize_h6e95ff9d_0_45 = (0x0000ffffU 
                                       & ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = (0x00000fffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex)
            ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))));
                            } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 1U))) 
                                             << 4U)));
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                      << 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:593: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 593, "");
                                    }
                                }
                            }
                            if ((0x3eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))
                                    ? 0x0eU : 0x0cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 8U)))) 
                                      << 2U));
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
                        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                << 1U)))));
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:653: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 653, "");
                                }
                            }
                        }
                        if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x12U)))) 
                                          << 2U));
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x11U)))) 
                                          << 2U));
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:535: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 535, "");
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:633: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 633, "");
                                }
                            }
                        }
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                        } else {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    } else {
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:613: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 613, "");
                                }
                            }
                        }
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                        } else {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                            if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                        ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 7U : 0x0bU)
                                        : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 0x0dU
                                            : 0x0eU));
                            } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))) 
                                          << 2U));
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:554: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 554, "");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
            : ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                : ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))))
            : ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (1U 
                                                 & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               >> 0x0000001fU) & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x0000000fU) 
                                          & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 7U) 
                                                      & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             << 1U) 
                                                            & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)), 
                                                       ((0x00000100U 
                                                         & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
              | ((0x24U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_15))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_36) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
              | ((0x1bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x1eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x1fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x1aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = (0x0000001fU & ((0U != (0x0000ffffU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                           ? ((0U != (0x000000ffU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                               ? ((0U != (0x0000000fU 
                                          & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                   ? ((0U != (3U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                       ? (1U & (- (IData)(
                                                          (1U 
                                                           & (~ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                       : ((4U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 2U : 3U))
                                   : ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 4U)))
                                       ? ((0x00000010U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 4U : 5U)
                                       : ((0x00000040U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 6U : 7U)))
                               : ((0U != (0x0000000fU 
                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 8U)))
                                   ? ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 8U)))
                                       ? ((0x00000100U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 8U : 9U)
                                       : ((0x00000400U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0aU : 0x0bU))
                                   : ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000000cU)))
                                       ? ((0x00001000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0cU : 0x0dU)
                                       : ((0x00004000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0eU : 0x0fU))))
                           : ((0U != (0x000000ffU & 
                                      (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       >> 0x00000010U)))
                               ? ((0U != (0x0000000fU 
                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000010U)))
                                   ? ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000010U)))
                                       ? ((0x00010000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x10U : 0x11U)
                                       : ((0x00040000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x12U : 0x13U))
                                   : ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000014U)))
                                       ? ((0x00100000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x14U : 0x15U)
                                       : ((0x00400000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x16U : 0x17U)))
                               : ((0U != (0x0000000fU 
                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000018U)))
                                   ? ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000018U)))
                                       ? ((0x01000000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x18U : 0x19U)
                                       : ((0x04000000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1aU : 0x1bU))
                                   : ((0U != (3U & 
                                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000001cU)))
                                       ? ((0x10000000U 
                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1cU : 0x1dU)
                                       : (0x1eU | (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                  >> 0x0000001eU)))))))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
            ? (~ ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   << 0x00000010U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                      >> 0x00000010U)))
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_37)
                ? (~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_37));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
              | ((0x27U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x37U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x35U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x49U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_35));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, (IData)(
                                                                 (0x00000003ffffffffULL 
                                                                  & VL_MULS_QQQ(34, 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 0x00000010U) 
                                                                                | (0x0000ffffU 
                                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_51)
                                                                                 ? __VdfgRegularize_h6e95ff9d_0_52
                                                                                 : __VdfgRegularize_h6e95ff9d_0_53))))))) 
                                    + (VL_EXTENDS_QI(33,32, (IData)(
                                                                    (0x00000003ffffffffULL 
                                                                     & VL_MULS_QQQ(34, 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & ((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)))) 
                                                                                ^ 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                                                << 0x00000010U) 
                                                                                | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U)))))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)))))) 
                                       + VL_EXTENDS_QI(33,32, 
                                                       ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                                                         ? 
                                                        (VL_EXTENDS_II(32,17, i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex))))))
                                                         : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_MULS_QQQ(34, 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 ((((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                    & ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                                                                       >> 0x0000000fU)) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_44)))), 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (((IData)(
                                                                           (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                             >> 1U) 
                                                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                                               >> 0x0000000fU))) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_45))))) 
                                    + (VL_EXTENDS_QQ(34,33, 
                                                     (0x00000001ffffffffULL 
                                                      & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                          ? 
                                                         (((QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))
                                                          : 
                                                         VL_EXTENDS_QI(33,32, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))) 
                                       + VL_EXTENDS_QI(34,32, 
                                                       ((- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) 
                                                        & VL_SHIFTR_III(32,32,32, 
                                                                        ((IData)(1U) 
                                                                         << (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex)), 1U))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b00U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b02U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b03U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    __VdfgRegularize_h6e95ff9d_0_5 = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_3 = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                         << 1U))];
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
        = (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & (0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? (0xffff0888U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                           ? ((0U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                               ? 1U : ((1U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                 ? 4U
                                                 : 8U)))
                           : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                               ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? 1U : ((0U == (3U 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                             ? 6U : 
                                            ((2U == 
                                              (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                              ? 0x0cU
                                              : 8U))))
                               : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? ((1U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                ? 3U
                                                : (7U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))
                                   : (((1U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                    ? 0x0cU
                                                    : 8U)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 0U;
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
        } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
        } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 0U;
    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
         & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)))) {
        if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((0U != (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((3U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? ((8U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                   ? ((0x00000080U 
                                       & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000018U)
                                           : (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 8U)
                                           : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                   : ((0x00000080U 
                                       & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000018U)
                                           : (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 8U)
                                           : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                               : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                  >> 0x00000018U)) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                            ? ((4U 
                                                & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                            : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                ((2U 
                                                  & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 8U)
                                                    : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                  : 
                                                 ((8U 
                                                   & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 8U)
                                                    : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                 : 
                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((2U 
                                                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                  : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((1U & (- (IData)((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)))))) 
                          + ((0U != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                 - (IData)(1U)) : 0x1fU)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? (~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
            : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
                ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                    << 0x00000010U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000010U))
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                         ? (IData)(
                                                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000021U))
                                                                         : (IData)(
                                                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                            ? (IData)(
                                                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000020U))
                                                                            : (IData)(
                                                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                                  ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                    ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                                    : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__)) 
              & (0x0b80U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
           & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b82U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
           & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b83U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    __VdfgRegularize_h6e95ff9d_0_22 = ((0x00000080U 
                                        & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_2
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_2
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_2
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_2
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_2 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U)))))))
                                        : ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_3
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_3
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_3
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_3
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_3 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U))))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 0x00000018U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                       >> 8U)) : ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 8U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                              >> 0x00000018U)) : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex));
    if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)(((0x17U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                        | ((0x10U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                              | (0x16U 
                                                 == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x0000003fU & ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   (0x0000001fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                                    : 0x20U)
                                                   : 
                                                  ((0U 
                                                    != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)
                                                    : 0x20U))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x1fU)
                                                     ? 0x1fU
                                                     : 0U))
                                                   : (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  (~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                ? ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                           ? (~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                    = (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                = ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                    ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                        ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)
                            ? (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex))
                            : ((0xffff0000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex) 
                               | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex 
                       + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                & VL_MULS_III(18, 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(
                                                                                (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex))))))) 
                          + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                   & VL_MULS_III(18, 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 8U)))))))) 
                             + (VL_EXTENDS_II(32,18, 
                                              (0x0003ffffU 
                                               & VL_MULS_III(18, 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              (((IData)(
                                                                                (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U)))))))) 
                                + VL_EXTENDS_II(32,18, 
                                                (0x0003ffffU 
                                                 & VL_MULS_III(18, 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U))))))))))));
        }
    } else {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
                   + ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))))) 
                      + VL_MULS_III(32, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex, 
                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                     ^ (- (IData)((1U 
                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))))))));
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
            ? ((0x00000400U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? ((0x00000200U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))
                    : (__VdfgRegularize_h6e95ff9d_0_22 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
                : (__VdfgRegularize_h6e95ff9d_0_22 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? (((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                             ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                          : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                              ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                              : ((0x28001040U | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                 << 2U)) 
                                 & (- (IData)((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))) 
                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                                       : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                           ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                            ? ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                ? __VdfgRegularize_h6e95ff9d_0_5
                                : ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? __VdfgRegularize_h6e95ff9d_0_5
                                    : ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? __VdfgRegularize_h6e95ff9d_0_5
                                        : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                            ? (__VdfgRegularize_h6e95ff9d_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))
                                            : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? (((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                 >> 8U)))))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = (0x0000001fU & (((0x40000000U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = ((0U != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((~ (IData)((4U == (0x00000804U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))) 
              & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
           & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                ? (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex) 
                    << 0x00000010U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex))
                : (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                    << 0x00000018U) | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                           << 8U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex)))))
            : ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                  | ((0x1fU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                     | (0x1eU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))) 
                      & VL_SHIFTR_III(32,32,32, i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((((0x26U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                         ? (((QData)((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                             << 0x00000020U) | (QData)((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                         : (((QData)((IData)((- (IData)(
                                                        ((i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x0000001fU) 
                                                         & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic)))))) 
                             << 0x00000020U) | (QData)((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))) 
                       >> (0x0000001fU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                      | (0x0300U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                     | (0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                    | (0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                   | (0x0340U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                  | (0x0341U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x0342U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((0x07b0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((0x07b1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x07b2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x07b3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0304U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0305U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if ((0x0340U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
         & ((0x0323U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
            | ((0x0324U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | ((0x0325U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                  | ((0x0326U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                     | ((0x0327U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | ((0x0328U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                           | ((0x0329U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                              | ((0x032aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                 | ((0x032bU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                    | ((0x032cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                       | ((0x032dU 
                                           == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                          | ((0x032eU 
                                              == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                             | ((0x032fU 
                                                 == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                | ((0x0330U 
                                                    == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                   | ((0x0331U 
                                                       == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                      | ((0x0332U 
                                                          == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                         | ((0x0333U 
                                                             == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                            | ((0x0334U 
                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                               | ((0x0335U 
                                                                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                  | ((0x0336U 
                                                                      == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                     | ((0x0337U 
                                                                         == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                        | ((0x0338U 
                                                                            == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                           | ((0x0339U 
                                                                               == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                              | ((0x033aU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033bU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033cU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033dU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033eU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | (0x033fU 
                                                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))))))))))))))))))))))))) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)), 5U)), vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x0320U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000018U) : 
                              (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                   >> 0x00000010U) : 
                               (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 8U)
                                                 : 
                                                (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
                                                  : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = (((~ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
            & ((0x2aU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : (- (IData)(((0x28U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                              & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) 
           | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                                    = ((0U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                        ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                            ? (((((
                                                   ((0x0000000cU 
                                                     & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U))) 
                                                   << 0x0000000cU) 
                                                  | (((0x0000000cU 
                                                       & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U)) 
                                                      | (3U 
                                                         & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 6U))) 
                                                     << 8U)) 
                                                 | ((((0x0000000cU 
                                                       & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 6U)) 
                                                      | (3U 
                                                         & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000000aU))) 
                                                     << 4U) 
                                                    | ((0x0000000cU 
                                                        & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000000aU)) 
                                                       | (3U 
                                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000000eU))))) 
                                                << 0x00000010U) 
                                               | (((((0x0000000cU 
                                                      & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x0000000eU)) 
                                                     | (3U 
                                                        & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U))) 
                                                    << 0x0000000cU) 
                                                   | (((0x0000000cU 
                                                        & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U)) 
                                                       | (3U 
                                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000016U))) 
                                                      << 8U)) 
                                                  | ((((0x0000000cU 
                                                        & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000016U)) 
                                                       | (3U 
                                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000001aU))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000001aU)) 
                                                        | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000001eU)))))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                                ? (
                                                   (((0x00000e00U 
                                                      & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         << 7U)) 
                                                     | ((0x000001c0U 
                                                         & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            << 1U)) 
                                                        | ((0x00000038U 
                                                            & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 5U)) 
                                                           | (7U 
                                                              & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x0000000bU))))) 
                                                    << 0x00000012U) 
                                                   | ((((0x000001c0U 
                                                         & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 8U)) 
                                                        | ((0x00000038U 
                                                            & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000000eU)) 
                                                           | (7U 
                                                              & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x00000014U)))) 
                                                       << 9U) 
                                                      | ((0x000001c0U 
                                                          & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000011U)) 
                                                         | ((0x00000038U 
                                                             & (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                >> 0x00000017U)) 
                                                            | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000001dU)))))
                                                : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                            ? (- i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                            : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D));
            }
        } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               ^ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))
                        : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                    : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? ((~ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
                            : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((0x17U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                               & (- (IData)((1U & (~ 
                                                   ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001fU) 
                                                    | (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                            : (((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                | (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                   >> 0x00000024U))
                                ? (~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                                : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                        : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                                ? ((0xffff0000U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                                : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 1U)))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x0000ffffU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffff0000U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0x0000ffffU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffff0000U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                     >> 3U));
    } else {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0x0000ffffU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffff0000U & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
}
