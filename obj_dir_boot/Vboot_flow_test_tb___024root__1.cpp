// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

void Vboot_flow_test_tb___024root___nba_sequent__TOP__5(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_sequent__TOP__5\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0]) 
               | (IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1) 
                  << 8U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (vlSelfRef.__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                [vlSelfRef.__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3]) 
               | ((IData)(vlSelfRef.__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3) 
                  << 0x00000018U));
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__resetn) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        }
        if ((0U < vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                                  - (IData)(1U)));
        } else if ((0U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
            if ((9U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) {
                    vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
                } else {
                    vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                        = (0x0000000fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                          - (IData)(1U)));
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                        = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                        (0x0000ffffU 
                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 3U) 
                                          - (IData)(1U)));
                }
            } else if ((1U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
                    = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg) 
                                                 >> 1U)));
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 3U) 
                                      - (IData)(1U)));
            } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg 
                        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg)))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 2U) 
                                  - (IData)(2U)));
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0x0aU;
        }
        if ((0U < vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                                  - (IData)(1U)));
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        } else if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit) {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
                    = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg)));
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                    (0x0000ffffU 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 3U) 
                                      - (IData)(1U)));
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 9U;
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
                    = (0x00000100U | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr));
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 1U;
            }
        } else if ((1U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
                = (0x000001ffU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg) 
                                  >> 1U));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, 
                                                (0x0000ffffU 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 3U) 
                                  - (IData)(1U)));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg 
                = (1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg));
        } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & VL_SHIFTL_III(19,19,32, 
                                               (0x0000ffffU 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb), 3U));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
        }
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg 
        = ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__resetn))) 
           || (IData)(vlSelfRef.boot_flow_test_tb__DOT__uart_rx));
}

void Vboot_flow_test_tb___024root___nba_sequent__TOP__6(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_sequent__TOP__6\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_data_phase 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase;
    vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__read_addr 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr;
    vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt;
}

void Vboot_flow_test_tb___024root___nba_sequent__TOP__7(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_sequent__TOP__7\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid = 1U;
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__irq_vector 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done) 
            << 0x00000011U) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_ena) 
                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                                   == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_are)) 
                               << 0x00000010U));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_data;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_data;
                }
            }
        }
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__resetn) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = 0U;
        if ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awvalid) 
              & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wvalid)) 
             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_awready = 1U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_wready = 1U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr 
                = (0x0000001fU & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = 0U;
        } else {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_awready = 0U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_wready = 0U;
        }
        if (((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wready) 
               & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wvalid)) 
              & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awready)) 
             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awvalid))) {
            if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb 
                    = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data;
            } else if ((4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp 
                    = (3U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data);
            } else if ((0x0cU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr 
                    = (0x000000ffU & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data);
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = 1U;
            } else if ((0x10U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data 
                    = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data;
            }
        }
        if ((((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wready) 
                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wvalid)) 
               & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awready)) 
              & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awvalid)) 
             & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bvalid)))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_bvalid = 1U;
        } else if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bready) 
                    & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bvalid))) {
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_bvalid = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = 1U;
        }
    } else {
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_awready = 0U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_wready = 0U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_bvalid = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = 1U;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb = 0x00000036U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = 0U;
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bready 
        = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wready 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_wready;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awready 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_awready;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bvalid 
        = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_bvalid;
}

void Vboot_flow_test_tb___024root___nba_sequent__TOP__8(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_sequent__TOP__8\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
                }
            } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
            }
        }
    }
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__0(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata
            : (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)))));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (0U != (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__irq_vector))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                        >> 0x0000001fU))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                  >> 0x00000018U)) : 
                   ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                      & ((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                           >> 0x00000017U)))) 
                         | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                     << 8U) | (0x000000ffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x0000000fU)))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (0x000000ffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                 >> 8U)))
                    : (((((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                            >> 7U)))) 
                          | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                         & (- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                        << 8U) | (0x000000ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata))))
            : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                  >> 7U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | ((0x0000ff00U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                   << 8U)) 
                                               | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x00000018U)))
                        : ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                            >> 0x0000001fU))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                  >> 0x00000017U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                  >> 8U)))
                        : (((((- (IData)((1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                                                >> 0x0000000fU)))) 
                              | (- (IData)((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                             & (- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata))))
                : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                            << 8U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x00000018U))
                        : ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000010U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000018U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 8U))
                        : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata))));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
                    if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)))) {
                        vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 1U;
                    }
                }
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
            }
        }
        if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
        } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid) 
           | (0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                    << 0x00000010U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata
                : ((0xffff0000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x10U)));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 2U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 0U;
    if ((0x00000040U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000020U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x00000010U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 7U))))) {
                                if ((0U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                } else if ((1U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 1U;
                                } else if ((0x0302U 
                                            == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 1U;
                                } else if ((2U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 1U;
                                } else if ((0x07b2U 
                                            == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
                                        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 1U;
                                } else if ((0x0105U 
                                            == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                    if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep) {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                                    }
                                } else {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((0x0105U 
                                                             == 
                                                             (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                              >> 0x14U)) 
                                                            << 5U) 
                                                           | (((0x07b2U 
                                                                == 
                                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                 >> 0x14U)) 
                                                               << 4U) 
                                                              | ((2U 
                                                                  == 
                                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 3U))) 
                                                          | (((0x0302U 
                                                               == 
                                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                    >> 0x14U))))))))) {
                                    if ((0U != ((((0x0105U 
                                                   == 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                  << 5U) 
                                                 | (((0x07b2U 
                                                      == 
                                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x14U)) 
                                                     << 4U) 
                                                    | ((2U 
                                                        == 
                                                        (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 3U))) 
                                                | (((0x0302U 
                                                     == 
                                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U))))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2704: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                                         , '#',12,
                                                         (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2704, "");
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            } else {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                            }
                            if ((1U == (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2775: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,
                                                     (3U 
                                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2775, "");
                                    }
                                }
                            }
                            if ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x08000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x04000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x20000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                                    } else {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x10000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            } else {
                                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        } else {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        if ((0U != (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 3U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                    if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? 0x0bU : 1U) : 
                               ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                 ? 0x0aU : 0U));
                    } else if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x0dU : 0x0cU);
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000010U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((3U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x1eU))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((2U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x1eU))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x1cU)))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                        }
                        if ((0x40000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x20000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x02000000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00004000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else if ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                } else {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00001000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                            }
                        } else if ((0x20000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x10000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x08000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x04000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x02000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x32U;
                                    } else {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x33U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x30U;
                                } else {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x31U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                } else {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                            } else {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 0U;
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                            }
                        } else {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? ((0x00002000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x15U
                                            : 0x2eU)
                                        : ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x25U
                                            : 0x2fU))
                                    : ((0x00002000U 
                                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 3U : 2U)
                                        : ((0x00001000U 
                                            & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x27U
                                            : 0x18U)));
                        }
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                if ((1U & (~ VL_ONEHOT_I((((2U == (7U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (7U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if ((0U != (((2U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                 << 2U) | (((1U == 
                                             (7U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:376: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(7U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 376, "");
                        }
                    }
                }
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 1U;
                if ((0U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                } else if ((1U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                } else if ((2U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x15U : 0x2eU);
                    } else if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                        } else if ((0x20U == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x19U))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                        } else {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                    }
                } else if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                        = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 3U : 2U);
                } else if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x27U;
                    if ((0U != (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x19U))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2683: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,
                                             (7U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU)));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2683, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    } else if ((2U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                = (1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                            >> 0x0eU)));
            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                        = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 1U : 2U);
                }
            } else if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                    = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                        ? 1U : 2U);
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_araddr 
                              >> 2U));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_awaddr 
                              >> 2U));
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              >> 2U));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              >> 2U));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram 
        = (IData)(((0x00030000U == (0xf00f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (4U != (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                             >> 0x0000001cU))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                     << 2U) | (((1U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_compressed_decoder.sv:52: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.if_stage_i.compressed_decoder_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv", 52, "");
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 5U)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        if ((0x00000400U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                            if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00000400U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0x0cU)))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                ? ((0x00000020U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                                : ((0x00000020U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))));
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : ((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 2U)))
                            ? (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0U == ((0x00000020U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((2U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 0x00000012U))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 7U))) ? 
                               (0x37U | (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 0x0cU)))) 
                                          << 0x00000011U) 
                                         | ((0x0001f000U 
                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x0000000aU)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0x0cU)))) 
                                             << 0x00000011U) 
                                            | ((0x0001f000U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x0000000aU)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                        ? (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x6fU | (((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))));
        }
    } else if ((2U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 8U))))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 8U)))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : (((0U == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 2U))) 
                            | (0U == (0x0000001fU & 
                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)))) ? 
                           (0x00001013U | ((0x01f00000U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x00000012U)) 
                                           | ((0x000f8000U 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00001013U | ((0x01f00000U 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x00000012U)) 
                                              | ((0x000f8000U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000f80U 
                                                    & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        }
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))))) {
        if ((0U == (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = (((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                  >> 0x00000018U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel)))))) 
                                                  << 6U) 
                                                 | ((0x0000003eU 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000019U))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                               << 2U) | (((3U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                          << 1U) | 
                                         (1U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                     << 2U) | (((3U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                << 1U) | (1U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:574: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.jump_target_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 574, "");
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
               + (((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000001fU))) << 0x00000014U) 
                  | ((((0x000001feU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000bU)) 
                       | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))) << 0x0000000bU) 
                     | (0x000007feU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U)))))
            : ((3U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
                   + (((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 7U))))))
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                   + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                 == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                 == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? (0x0000001fU & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000000fU) & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux)))))))
            : (0x0000001fU & ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                               ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 7U) : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000001bU))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep)) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.ar_ready) 
           & ((~ ((4U == (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                          >> 0x0000001cU)) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_arvalid)
             : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid) 
                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.ar_ready));
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))]));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
               & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
              | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                  & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id)) 
                 | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) 
                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
                                          >> 5U))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0000000fU))))
                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id
                    : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                            : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x00000018U)))) 
                                        << 5U) | (0x0000001fU 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))
                                    : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    (((IData)(1U) 
                                                      << 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                     - (IData)(1U)), 1U)
                                    : ((0x00010000U 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 4U)) 
                                       | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x00000019U))))))
                        : ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38
                                : (0x0000001fU & ((1U 
                                                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                   ? 
                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000019U)
                                                   : 
                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000014U))))
                            : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id)
                                        ? 2U : 4U) : 
                                   (0xfffff000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id))
                                : (((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & 
                                      ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? ((0x00000fe0U 
                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x00000014U)) 
                                           | (0x0000001fU 
                                              & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 7U)))
                                        : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 0x00000014U))))))))
                : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__1(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_arvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_arvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_arvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_arvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_arvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_wvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_wvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_wvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_wvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_awvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_awvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_awvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_awvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = (IData)(((0x00010000U == (0x000f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = (IData)(((0x00030000U == (0x000f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)) 
            & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_awvalid)
             : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
                ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_wvalid)
                : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.aw_ready)));
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__2(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__2\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_55) 
             & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid)) 
            & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__3(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__3\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 0U;
            }
        } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 4U;
            }
        } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if (((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) 
             & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 4U;
        } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 3U;
        } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 2U;
        }
    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d 
                = (((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) 
                    & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready))
                    ? 4U : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready)
                             ? 3U : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready)
                                      ? 2U : 1U)));
        } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_ready) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = 5U;
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) 
                     & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                }
            } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex) {
                    if (((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) 
                         & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                    } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                    } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                    }
                } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_ready) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt = 1U;
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_gnt) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex 
        = (1U & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex)) 
                 | ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                     : ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid) 
                            & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up))
                         : (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_haa8c9ebd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_hfc2dea1f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_h48470b6d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_hc8c40d37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_haccd4eb4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vboot_flow_test_tb__ConstPool__TABLE_h90ec5698_0;

void Vboot_flow_test_tb___024root___nba_comb__TOP__4(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__4\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                      << 5U) | (((2U & ((~ (0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                        << 1U)) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S)) 
                                << 3U)) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                            << 2U) 
                                           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vboot_flow_test_tb__ConstPool__TABLE_haa8c9ebd_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = Vboot_flow_test_tb__ConstPool__TABLE_hfc2dea1f_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vboot_flow_test_tb__ConstPool__TABLE_h48470b6d_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vboot_flow_test_tb__ConstPool__TABLE_hc8c40d37_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vboot_flow_test_tb__ConstPool__TABLE_haccd4eb4_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vboot_flow_test_tb__ConstPool__TABLE_h90ec5698_0
        [__Vtableidx3];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
        = (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__6(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__6\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_41;
    __VdfgRegularize_h6e95ff9d_0_41 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex) 
                                       & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                                          & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
                                             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_41));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
            | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) 
               | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) 
                  | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex)))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_41));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
}

void Vboot_flow_test_tb___024root___nba_comb__TOP__7(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___nba_comb__TOP__7\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0;
    CData/*2:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0;
    CData/*4:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id = 0;
    CData/*4:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0;
    CData/*5:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0;
    CData/*2:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    // Body
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    if ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    }
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         | ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                } else if ((4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 4U;
                }
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 2U;
                    } else if (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                    }
                }
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 7U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))))) {
                    if ((0U != (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                 << 2U) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1122: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1122, "");
                        }
                    }
                }
                if ((1U & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                    = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)
                        ? 5U : 7U);
            } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 1U;
            } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if ((1U & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                          | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                         | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                        | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                       | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                     | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                        if ((1U & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if ((1U & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id 
                            = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                    << 3U) | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                      << 1U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 << 4U) | ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1054: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1054, "");
                        }
                    }
                }
            }
        } else {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 2U;
                } else {
                    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 3U;
                    } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0x0bU;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if ((0U != (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                     << 1U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:932: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 932, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                            = (0x00000020U | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    } else {
                        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                    ? 8U : 5U);
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if ((((((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                     | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                    | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                   | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                  | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                     | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status))) {
                                if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                                               & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                             | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) {
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 7U : 5U);
                                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                        << 6U) 
                                                       | (((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                             | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                            | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                             << 1U) 
                                                            | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                    | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                   | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                             << 3U) 
                                            | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                   << 1U) 
                                                  | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:541: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 541, "");
                                    }
                                }
                            }
                        }
                        if ((1U & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                               | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                                | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))))) {
                                    if ((0U != ((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                     | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:677: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 677, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                }
            } else {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                     & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                        = (0x00000020U | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    if (((((((((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0305U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0340U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause) {
        if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                                   << 1U) | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                         << 1U) | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                               << 2U) | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                          << 1U) | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                     << 2U) | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                << 1U) | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q)))));
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                               << 1U) | (0U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))))) {
        if ((0U != (((1U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                     << 1U) | (0U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:132: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 132, "");
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:138: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 138, "");
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_16 = ((0U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                        ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q
                                        : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                           & (- (IData)(
                                                        (1U 
                                                         != (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
            | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                    == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U))) 
                   & (0U != (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x00000014U))))) 
               | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding) 
                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                      & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
                         & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                            == (0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 7U)))))) 
                  | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                     & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                         == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                        & (0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))))) 
           & (((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb)) 
               & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu)) 
              | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
            & (0U == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))
            ? 0x00000100U : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0304U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0305U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
           & (2U > ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))))))));
    __VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
                                       | (0U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
    if ((8U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                ? ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                                  ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                  : ((4U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                      ? (__VdfgRegularize_h6e95ff9d_0_16 
                                         << 8U) : (
                                                   (2U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                                    ? 0x00010000U
                                                    : 
                                                   ((__VdfgRegularize_h6e95ff9d_0_16 
                                                     << 8U) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id)))) 
                                                       & (((0U 
                                                            == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                                            ? (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id)
                                                            : 
                                                           ((- (IData)(
                                                                       (1U 
                                                                        != (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)))) 
                                                            & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id))) 
                                                          << 2U)))))))
                : ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                        : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target)
                    : ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id)
                        : 0U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                                                    | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                       | ((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)) 
                                                          | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
           & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex) 
                           & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready)))));
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
             & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
             & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_40)) 
           & ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
           | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
           & ((~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
              & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : (0xfffffffcU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) 
           & ((~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid) 
             & (0U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid) 
                & (0U < (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))) {
        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) {
                    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 1U;
                }
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((~ (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready) 
                & (0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
               | (IData)(__VdfgRegularize_h6e95ff9d_0_40))) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en 
        = (((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.ar_ready) 
            & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)) 
           & (0U == (0x000f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.ar_ready) 
           & ((0U != (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                     >> 0x00000010U))) 
              & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = ((2U 
                                                  != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                                                 & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
}

void Vboot_flow_test_tb___024root___nba_sequent__TOP__1(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb___024root___nba_sequent__TOP__2(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb___024root___nba_sequent__TOP__4(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb___024root___act_comb__TOP__1(Vboot_flow_test_tb___024root* vlSelf);

void Vboot_flow_test_tb___024root___eval_nba(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_nba\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr;
    __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr = 0;
    CData/*5:0*/ __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt;
    __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt = 0;
    CData/*5:0*/ __Vinline__nba_comb__TOP__4___Vtableidx3;
    __Vinline__nba_comb__TOP__4___Vtableidx3 = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_41;
    __Vinline__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_41 = 0;
    // Body
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
            = vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr;
        __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt 
            = vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr 
            = vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__read_addr;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt 
            = vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt;
        vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase 
            = vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_data_phase;
        if (vlSelfRef.boot_flow_test_tb__DOT__qspi_cs_n) {
            __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt = 0U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr = 0U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt = 0U;
            vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase = 0U;
        } else if (vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_data_phase) {
            if ((7U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt))) {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr 
                    = (0x00ffffffU & ((IData)(1U) + vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__read_addr));
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt = 0U;
            } else {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt)));
            }
        } else {
            __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
                = ((vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
                    << 1U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash_mosi));
            __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt)));
            if ((0x1fU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt))) {
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase = 1U;
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr 
                    = ((0x00fffffeU & (vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
                                       << 1U)) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__flash_mosi));
                vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt = 0U;
                if (VL_UNLIKELY(((3U != (vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
                                         >> 0x18U))))) {
                    VL_WRITEF_NX("[FLASH] uyari: desteksiz cmd 0x%02h\n",1
                                 , '#',8,(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
                                          >> 0x18U));
                }
            }
        }
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr 
            = __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr;
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt 
            = __Vinline__nba_sequent__TOP__0___Vdly__boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        Vboot_flow_test_tb___024root___nba_sequent__TOP__2(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus));
        if (vlSelfRef.boot_flow_test_tb__DOT__resetn) {
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.r_data 
                    = ((0x1dffU >= (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx))
                        ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem
                       [vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx]
                        : 0U);
            }
        } else {
            vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.r_data = 0U;
        }
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_awready 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.aw_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_rready 
            = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_rready 
            = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_rready 
            = ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_rready 
            = ((5U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_bready 
            = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_bready 
            = ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_bready 
            = ((5U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata 
            = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
        if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                    if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata 
                            = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
                    }
                }
            }
        }
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__in_data_phase 
            = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase;
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__read_addr 
            = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr;
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt 
            = vlSelfRef.__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt;
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_sequent__TOP__7(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 0U;
        if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                    if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
                    }
                } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
                }
            }
        }
    }
    if ((0x0000000000000038ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_comb__TOP__0(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_arvalid 
            = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_arvalid 
            = (IData)(((0x00000100U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_arvalid 
            = (IData)(((0x00000200U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_arvalid 
            = (IData)(((0x00000500U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_arvalid 
            = (IData)(((0x00000600U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_wvalid 
            = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_wvalid 
            = (IData)(((0x00000100U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_wvalid 
            = (IData)(((0x00000200U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_wvalid 
            = (IData)(((0x00000500U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_wvalid 
            = (IData)(((0x00000600U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_awvalid 
            = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_awvalid 
            = (IData)(((0x00000100U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_awvalid 
            = (IData)(((0x00000200U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_awvalid 
            = (IData)(((0x00000500U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_awvalid 
            = (IData)(((0x00000600U == (0x00000f00U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_valid)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram 
            = (IData)(((0x00010000U == (0x000f0000U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram 
            = (IData)(((0x00030000U == (0x000f0000U 
                                        & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                       & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en 
            = ((((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)) 
                & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.aw_ready)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en 
            = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
                 ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_awvalid)
                 : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                    & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
               & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
                    ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_wvalid)
                    : ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid) 
                       & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
                  & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.aw_ready)));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__write_en 
            = ((((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_55) 
                 & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid)) 
                & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.aw_ready)) 
               & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000034ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__4___Vtableidx3 = 
            ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
               << 5U) | (((2U & ((~ (0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))) 
                                 << 1U)) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S)) 
                         << 3U)) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid) 
                                     << 2U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
            = Vboot_flow_test_tb__ConstPool__TABLE_haa8c9ebd_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
            = Vboot_flow_test_tb__ConstPool__TABLE_hfc2dea1f_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
            = Vboot_flow_test_tb__ConstPool__TABLE_h48470b6d_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
            = Vboot_flow_test_tb__ConstPool__TABLE_hc8c40d37_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
            = Vboot_flow_test_tb__ConstPool__TABLE_haccd4eb4_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
            = Vboot_flow_test_tb__ConstPool__TABLE_h90ec5698_0
            [__Vinline__nba_comb__TOP__4___Vtableidx3];
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S)
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    }
    if ((0x0000000000000138ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__clk)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
                = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
        }
    }
    if ((0x000000000000003cULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_41 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex) 
               & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready) 
                  & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready) 
                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb))));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
               | __Vinline__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_41);
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid 
            = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
                | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) 
                   | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) 
                      | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex)))) 
               & __Vinline__nba_comb__TOP__6___VdfgRegularize_h6e95ff9d_0_41);
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
        if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if (((6U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
        } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
        } else if ((4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
            }
        }
    }
    if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vboot_flow_test_tb___024root___nba_comb__TOP__7(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus));
        Vboot_flow_test_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vboot_flow_test_tb___024root___timing_ready(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___timing_ready\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h5779b419__0.ready("@( boot_flow_test_tb.resetn)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h92872cf7__0.ready("@(posedge boot_flow_test_tb.clk)");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h22230bdb__0.ready("@(negedge boot_flow_test_tb.dut.i_uart_0.i_uart_tx.txd_reg)");
    }
}

void Vboot_flow_test_tb___024root___timing_resume(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___timing_resume\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h5779b419__0.moveToResumeQueue(
                                                          "@( boot_flow_test_tb.resetn)");
    vlSelfRef.__VtrigSched_h92872cf7__0.moveToResumeQueue(
                                                          "@(posedge boot_flow_test_tb.clk)");
    vlSelfRef.__VtrigSched_h22230bdb__0.moveToResumeQueue(
                                                          "@(negedge boot_flow_test_tb.dut.i_uart_0.i_uart_tx.txd_reg)");
    vlSelfRef.__VtrigSched_h5779b419__0.resume("@( boot_flow_test_tb.resetn)");
    vlSelfRef.__VtrigSched_h92872cf7__0.resume("@(posedge boot_flow_test_tb.clk)");
    vlSelfRef.__VtrigSched_h22230bdb__0.resume("@(negedge boot_flow_test_tb.dut.i_uart_0.i_uart_tx.txd_reg)");
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vboot_flow_test_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vboot_flow_test_tb___024root___eval_triggers_vec__act(Vboot_flow_test_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_flow_test_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vboot_flow_test_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vboot_flow_test_tb___024root___eval_act(Vboot_flow_test_tb___024root* vlSelf);

bool Vboot_flow_test_tb___024root___eval_phase__act(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_phase__act\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vboot_flow_test_tb___024root___eval_triggers_vec__act(vlSelf);
    Vboot_flow_test_tb___024root___timing_ready(vlSelf);
    Vboot_flow_test_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboot_flow_test_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vboot_flow_test_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vboot_flow_test_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vboot_flow_test_tb___024root___timing_resume(vlSelf);
        Vboot_flow_test_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vboot_flow_test_tb___024root___eval_phase__inact(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_phase__inact\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("verif/tb/boot_flow_test_tb.sv", 4, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vboot_flow_test_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vboot_flow_test_tb___024root___eval_phase__nba(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_phase__nba\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vboot_flow_test_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vboot_flow_test_tb___024root___eval_nba(vlSelf);
        Vboot_flow_test_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vboot_flow_test_tb___024root___sample(Vboot_flow_test_tb___024root* vlSelf);

void Vboot_flow_test_tb___024root___eval(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    Vboot_flow_test_tb___024root___sample(vlSelf);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vboot_flow_test_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("verif/tb/boot_flow_test_tb.sv", 4, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("verif/tb/boot_flow_test_tb.sv", 4, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vboot_flow_test_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("verif/tb/boot_flow_test_tb.sv", 4, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vboot_flow_test_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vboot_flow_test_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vboot_flow_test_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vboot_flow_test_tb___024root____VbeforeTrig_h5779b419__0(Vboot_flow_test_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root____VbeforeTrig_h5779b419__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.boot_flow_test_tb__DOT__resetn) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__resetn__0)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__resetn__0 
        = vlSelfRef.boot_flow_test_tb__DOT__resetn;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h5779b419__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vboot_flow_test_tb___024root____VbeforeTrig_h92872cf7__0(Vboot_flow_test_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root____VbeforeTrig_h92872cf7__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.boot_flow_test_tb__DOT__clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__clk__0))) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__clk__0 
        = vlSelfRef.boot_flow_test_tb__DOT__clk;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h92872cf7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vboot_flow_test_tb___024root____VbeforeTrig_h22230bdb__0(Vboot_flow_test_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root____VbeforeTrig_h22230bdb__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg)) 
                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0)) 
                                  << 0x0000000aU)));
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg;
    if ((0x0000000000000400ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h22230bdb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h22230bdb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vboot_flow_test_tb___024root___sample(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___sample\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__w_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.w_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__resetn 
        = vlSelfRef.boot_flow_test_tb__DOT__resetn;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__ar_ready 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.ar_ready;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__aw_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__ar_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__w_valid 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__aw_ready 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_ready;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__ar_ready 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_ready;
    vlSelfRef.__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__w_ready 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_ready;
}

#ifdef VL_DEBUG
void Vboot_flow_test_tb___024root___eval_debug_assertions(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_debug_assertions\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
