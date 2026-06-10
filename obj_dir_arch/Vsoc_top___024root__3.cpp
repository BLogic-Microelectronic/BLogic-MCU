// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top___024root___nba_comb__TOP__5(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    // Body
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__be_q;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__wdata_q;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_be_i;
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i;
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i;
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_wdata_i;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_mid_nib 
        = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
                          >> 0x00000010U));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib 
        = (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
           >> 0x0000001cU);
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib 
        = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
                          >> 0x00000010U));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib 
        = (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
           >> 0x0000001cU);
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph 
        = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph 
        = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph)) 
           & ((0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib)) 
              & (3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_mid_nib))));
    __VdfgRegularize_h6e95ff9d_0_42 = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph)) 
                                       & (0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib)));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph) 
                                                     | ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram) 
                                                        | (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram)))));
}

void Vsoc_top___024root___nba_comb__TOP__6(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__wr_word_idx 
        = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__rd_word_idx 
        = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__wr_word_idx 
        = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wstrb 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.w_strb;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_araddr 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.ar_addr;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awaddr 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.aw_addr;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wdata 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.w_data;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wstrb 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_araddr 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awaddr 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wdata 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__lite_wstrb = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wstrb;
    vlSelfRef.soc_top__DOT__lite_araddr = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_araddr;
    vlSelfRef.soc_top__DOT__lite_awaddr = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awaddr;
    vlSelfRef.soc_top__DOT__lite_wdata = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wstrb 
        = vlSelfRef.soc_top__DOT__lite_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb 
        = vlSelfRef.soc_top__DOT__lite_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_araddr 
        = vlSelfRef.soc_top__DOT__lite_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr 
        = vlSelfRef.soc_top__DOT__lite_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awaddr 
        = vlSelfRef.soc_top__DOT__lite_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr 
        = vlSelfRef.soc_top__DOT__lite_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wdata 
        = vlSelfRef.soc_top__DOT__lite_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata 
        = vlSelfRef.soc_top__DOT__lite_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wstrb 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wstrb 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wstrb 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wstrb 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wstrb 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wstrb 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__araddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_araddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_araddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_araddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_araddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_araddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel 
        = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_araddr 
                          >> 8U));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awaddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awaddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awaddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awaddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awaddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awaddr 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel 
        = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awaddr 
                          >> 8U));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wdata 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wdata 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wdata 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wdata 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wdata 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wdata;
    vlSelfRef.soc_top__DOT__ai_wstrb = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wstrb;
    vlSelfRef.soc_top__DOT__uart_wstrb = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wstrb;
    vlSelfRef.soc_top__DOT__gpio_wstrb = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wstrb;
    vlSelfRef.soc_top__DOT__timer_wstrb = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wstrb;
    vlSelfRef.soc_top__DOT__qspi_wstrb = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wstrb;
    vlSelfRef.soc_top__DOT__ai_araddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_araddr;
    vlSelfRef.soc_top__DOT__uart_araddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_araddr;
    vlSelfRef.soc_top__DOT__gpio_araddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_araddr;
    vlSelfRef.soc_top__DOT__timer_araddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_araddr;
    vlSelfRef.soc_top__DOT__qspi_araddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_araddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_valid_addr 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)) 
           | ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)) 
              | ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)) 
                 | ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)) 
                    | (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))))));
    vlSelfRef.soc_top__DOT__ai_awaddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awaddr;
    vlSelfRef.soc_top__DOT__uart_awaddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awaddr;
    vlSelfRef.soc_top__DOT__gpio_awaddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awaddr;
    vlSelfRef.soc_top__DOT__timer_awaddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awaddr;
    vlSelfRef.soc_top__DOT__qspi_awaddr = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awaddr;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_valid_addr 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)) 
           | ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)) 
              | ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)) 
                 | ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)) 
                    | (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))))));
    vlSelfRef.soc_top__DOT__ai_wdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wdata;
    vlSelfRef.soc_top__DOT__uart_wdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wdata;
    vlSelfRef.soc_top__DOT__gpio_wdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wdata;
    vlSelfRef.soc_top__DOT__timer_wdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wdata;
    vlSelfRef.soc_top__DOT__qspi_wdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wdata;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wstrb 
        = vlSelfRef.soc_top__DOT__ai_wstrb;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wstrb 
        = vlSelfRef.soc_top__DOT__uart_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wstrb 
        = vlSelfRef.soc_top__DOT__uart_wstrb;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wstrb 
        = vlSelfRef.soc_top__DOT__gpio_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wstrb 
        = vlSelfRef.soc_top__DOT__gpio_wstrb;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wstrb 
        = vlSelfRef.soc_top__DOT__timer_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wstrb 
        = vlSelfRef.soc_top__DOT__timer_wstrb;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wstrb 
        = vlSelfRef.soc_top__DOT__qspi_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wstrb 
        = vlSelfRef.soc_top__DOT__qspi_wstrb;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr 
        = vlSelfRef.soc_top__DOT__ai_araddr;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr 
        = vlSelfRef.soc_top__DOT__uart_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_araddr 
        = vlSelfRef.soc_top__DOT__uart_araddr;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_araddr 
        = vlSelfRef.soc_top__DOT__gpio_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_araddr 
        = vlSelfRef.soc_top__DOT__gpio_araddr;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr 
        = vlSelfRef.soc_top__DOT__timer_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_araddr 
        = vlSelfRef.soc_top__DOT__timer_araddr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr 
        = vlSelfRef.soc_top__DOT__qspi_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_araddr 
        = vlSelfRef.soc_top__DOT__qspi_araddr;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awaddr 
        = vlSelfRef.soc_top__DOT__ai_awaddr;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awaddr 
        = vlSelfRef.soc_top__DOT__uart_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awaddr 
        = vlSelfRef.soc_top__DOT__uart_awaddr;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awaddr 
        = vlSelfRef.soc_top__DOT__gpio_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awaddr 
        = vlSelfRef.soc_top__DOT__gpio_awaddr;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awaddr 
        = vlSelfRef.soc_top__DOT__timer_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awaddr 
        = vlSelfRef.soc_top__DOT__timer_awaddr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awaddr 
        = vlSelfRef.soc_top__DOT__qspi_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awaddr 
        = vlSelfRef.soc_top__DOT__qspi_awaddr;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wdata 
        = vlSelfRef.soc_top__DOT__ai_wdata;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wdata 
        = vlSelfRef.soc_top__DOT__uart_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wdata 
        = vlSelfRef.soc_top__DOT__uart_wdata;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wdata 
        = vlSelfRef.soc_top__DOT__gpio_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wdata 
        = vlSelfRef.soc_top__DOT__gpio_wdata;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata 
        = vlSelfRef.soc_top__DOT__timer_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wdata 
        = vlSelfRef.soc_top__DOT__timer_wdata;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
        = vlSelfRef.soc_top__DOT__qspi_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wdata 
        = vlSelfRef.soc_top__DOT__qspi_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wstrb 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wstrb 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wstrb 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wstrb 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wstrb;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__araddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__araddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__araddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__araddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_araddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awaddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awaddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awaddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awaddr 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awaddr;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wdata;
}

void Vsoc_top___024root___nba_sequent__TOP__55(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__55\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if;
}

void Vsoc_top___024root___nba_comb__TOP__7(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__7\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI) 
            | (0U != vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
}

void Vsoc_top___024root___nba_sequent__TOP__56(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__56\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = ((((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2847U]) 
                  << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2846U]) 
                            << 2U)) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2845U]) 
                                        << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2844U]))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2843U]) 
                                     << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2842U]) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2841U]) 
                                       << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2840U]))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2839U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2838U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2837U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2836U]))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2835U]) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2834U]) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2833U]) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2832U]))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2831U]) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2830U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2829U]) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2828U]))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2827U]) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2826U]) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2825U]) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2824U]))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2823U]) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2822U]) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2821U]) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2820U]))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2819U]) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2818U]) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2817U]) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2816U]))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
        = ((((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                   & (0x1fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                  << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                             & (0x1eU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                            << 2U)) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                         & (0x1dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                        << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                      & (0x1bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                     << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                        & (0x19U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                       << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (0x0dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                     & (0x0bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                       & (9U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                   & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                          >> 0x0000001fU)) & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2975U])) 
                  << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                             & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                    >> 0x0000001eU)) 
                                & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2974U])) 
                            << 2U)) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                         & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                >> 0x0000001dU)) 
                                            & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2973U])) 
                                        << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x0000001cU)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2972U])))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                      & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                             >> 0x0000001bU)) 
                                         & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2971U])) 
                                     << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000001aU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2970U])) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                        & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                               >> 0x00000019U)) 
                                           & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2969U])) 
                                       << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 0x00000018U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2968U])))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & ((~ 
                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                       >> 0x00000017U)) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2967U])) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000016U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2966U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 0x00000015U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2965U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000014U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2964U])))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 0x00000013U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2963U])) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000012U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2962U])) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ 
                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                          >> 0x00000011U)) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2961U])) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & ((~ 
                                                          (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                           >> 0x00000010U)) 
                                                         & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2960U])))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000fU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2959U])) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000eU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2958U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 0x0000000dU)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2957U])) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 0x0000000cU)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2956U])))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                            >> 0x0000000bU)) 
                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2955U])) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                               & ((~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 0x0000000aU)) 
                                                  & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2954U])) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                       & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                              >> 9U)) 
                                          & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2953U])) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & ((~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                     >> 8U)) 
                                                   & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2952U])))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                 & ((~ 
                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 7U)) 
                                                    & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2951U])) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 6U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2950U])) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & ((~ 
                                                       (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                        >> 5U)) 
                                                      & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2949U])) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 4U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2948U])))) 
                                             << 4U) 
                                            | (((((~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    >> 3U)) 
                                                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2947U])) 
                                                 << 3U) 
                                                | (((~ 
                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                      >> 2U)) 
                                                    & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2946U])) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & ((~ 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                         >> 1U)) 
                                                       & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2945U])) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
                                                     & ((~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower) 
                                                        & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[2944U])))))));
}

void Vsoc_top___024root___nba_comb__TOP__8(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__8\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))];
    __VdfgRegularize_h6e95ff9d_0_3 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_4 = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                         << 1U))];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                 >> 3U)) & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                >> 3U)) & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               >> 3U)) 
                                           & (0U != 
                                              ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((4U & (((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                  >> 2U)) & ((~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
                                                 >> 2U)) 
                                             & ((~ 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                  >> 2U)) 
                                                & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events) 
                                                   >> 1U)))) 
                             << 2U)) | (1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
                                                    | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 = ((0x00000080U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                  ? 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_3
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_3
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_3
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_3
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_3 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U)))))))
                                                  : 
                                                 ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                  >> 5U))))) 
                                                  & (((0x00000010U 
                                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                       ? __VdfgRegularize_h6e95ff9d_0_4
                                                       : 
                                                      ((8U 
                                                        & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                        ? __VdfgRegularize_h6e95ff9d_0_4
                                                        : 
                                                       ((4U 
                                                         & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                         ? __VdfgRegularize_h6e95ff9d_0_4
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                                          ? __VdfgRegularize_h6e95ff9d_0_4
                                                          : 
                                                         (__VdfgRegularize_h6e95ff9d_0_4 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))) 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                                       >> 6U))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[772U])
            ? (0xffff0888U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mie_bypass;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i;
}

void Vsoc_top___024root___nba_comb__TOP__9(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__9\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
              == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i));
}

void Vsoc_top___024root___nba_comb__TOP__10(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__10\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rready 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.r_ready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bready 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.b_ready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rready 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bready 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bready;
    vlSelfRef.soc_top__DOT__lite_rready = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rready;
    vlSelfRef.soc_top__DOT__lite_bready = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rready 
        = vlSelfRef.soc_top__DOT__lite_rready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready 
        = vlSelfRef.soc_top__DOT__lite_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bready 
        = vlSelfRef.soc_top__DOT__lite_bready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready 
        = vlSelfRef.soc_top__DOT__lite_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bready;
}

void Vsoc_top___024root___nba_comb__TOP__11(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__11\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
            } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
            } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                }
            }
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o;
}

void Vsoc_top___024root___nba_sequent__TOP__57(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__57\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
        = ((((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                   & (0x1fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                  << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                             & (0x1eU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                            << 2U)) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                         & (0x1dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                        << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x1cU 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
               << 0x0000000cU) | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                      & (0x1bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                     << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x1aU 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                               << 2U)) 
                                   | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                        & (0x19U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                       << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (0x18U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                  << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (0x17U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x16U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (0x15U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x14U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                              << 4U) 
                                             | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (0x13U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x12U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 2U)) 
                                                | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0x11U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                      & (0x10U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))) 
            << 0x00000010U) | ((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0eU 
                                                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (0x0dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (0x0cU 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 0x0000000cU) | 
                                ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                     & (0x0bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                    << 3U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                               & (0x0aU 
                                                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                              << 2U)) 
                                  | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                       & (9U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                      << 1U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                & (8U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                 << 8U)) | (((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                 & (7U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                << 3U) 
                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (6U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 2U)) 
                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                   & (5U 
                                                      == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (4U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))) 
                                             << 4U) 
                                            | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                  & (3U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                 << 3U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (2U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 2U)) 
                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                    & (1U 
                                                       == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))) 
                                                   << 1U) 
                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i) 
                                                     & (0U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a))))))));
}

void Vsoc_top___024root___nba_comb__TOP__12(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__12\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i) 
                                  >> 5U))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i) 
                                  >> 5U))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o;
}

void Vsoc_top___024root___nba_comb__TOP__13(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__13\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rdata;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rvalid;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rdata;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rvalid;
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rdata;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rvalid;
    } else if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rdata;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rvalid;
    } else if ((6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rdata;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rvalid;
    } else {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata = 0xdeadbeefU;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_ar_pending;
    }
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
            ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bvalid)
            : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bvalid)
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                    ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bvalid)
                    : ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bvalid)
                        : ((6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                            ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bvalid)
                            : (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_aw_pending))))));
    vlSelfRef.soc_top__DOT__lite_rdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata;
    vlSelfRef.soc_top__DOT__lite_bvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid;
    vlSelfRef.soc_top__DOT__lite_rvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata 
        = vlSelfRef.soc_top__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata 
        = vlSelfRef.soc_top__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid 
        = vlSelfRef.soc_top__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid 
        = vlSelfRef.soc_top__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid 
        = vlSelfRef.soc_top__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid 
        = vlSelfRef.soc_top__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rdata 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid;
}

void Vsoc_top___024root___nba_sequent__TOP__58(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__58\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode;
}

void Vsoc_top___024root___nba_sequent__TOP__59(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__59\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wready;
}

void Vsoc_top___024root___nba_sequent__TOP__60(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__60\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wready;
}

void Vsoc_top___024root___nba_sequent__TOP__61(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__61\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wready;
}

void Vsoc_top___024root___nba_sequent__TOP__62(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__62\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wready;
}

void Vsoc_top___024root___nba_comb__TOP__14(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__14\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i)))) {
                        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid = 1U;
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
            vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
        } else if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
            if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
            }
        }
    }
}

void Vsoc_top___024root___nba_comb__TOP__15(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__15\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_arvalid 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.ar_valid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awvalid 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.aw_valid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wvalid 
        = vlSymsp->TOP__soc_top__DOT__periph_bus.w_valid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_arvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wvalid;
    vlSelfRef.soc_top__DOT__lite_arvalid = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arvalid;
    vlSelfRef.soc_top__DOT__lite_awvalid = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awvalid;
    vlSelfRef.soc_top__DOT__lite_wvalid = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arvalid 
        = vlSelfRef.soc_top__DOT__lite_arvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid 
        = vlSelfRef.soc_top__DOT__lite_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awvalid 
        = vlSelfRef.soc_top__DOT__lite_awvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid 
        = vlSelfRef.soc_top__DOT__lite_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wvalid 
        = vlSelfRef.soc_top__DOT__lite_wvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid 
        = vlSelfRef.soc_top__DOT__lite_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
           & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
           & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
           & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
           & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
           & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
           & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
           & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
           & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid) 
           & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid) 
           & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid) 
           & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wvalid) 
           & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    vlSelfRef.soc_top__DOT__ai_arvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arvalid;
    vlSelfRef.soc_top__DOT__uart_arvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arvalid;
    vlSelfRef.soc_top__DOT__gpio_arvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arvalid;
    vlSelfRef.soc_top__DOT__timer_arvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arvalid;
    vlSelfRef.soc_top__DOT__qspi_arvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arvalid;
    vlSelfRef.soc_top__DOT__ai_awvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awvalid;
    vlSelfRef.soc_top__DOT__uart_awvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awvalid;
    vlSelfRef.soc_top__DOT__gpio_awvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awvalid;
    vlSelfRef.soc_top__DOT__timer_awvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awvalid;
    vlSelfRef.soc_top__DOT__qspi_awvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awvalid;
    vlSelfRef.soc_top__DOT__ai_wvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wvalid;
    vlSelfRef.soc_top__DOT__uart_wvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wvalid;
    vlSelfRef.soc_top__DOT__gpio_wvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wvalid;
    vlSelfRef.soc_top__DOT__timer_wvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wvalid;
    vlSelfRef.soc_top__DOT__qspi_wvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arvalid 
        = vlSelfRef.soc_top__DOT__ai_arvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arvalid 
        = vlSelfRef.soc_top__DOT__uart_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arvalid 
        = vlSelfRef.soc_top__DOT__uart_arvalid;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arvalid 
        = vlSelfRef.soc_top__DOT__gpio_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arvalid 
        = vlSelfRef.soc_top__DOT__gpio_arvalid;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arvalid 
        = vlSelfRef.soc_top__DOT__timer_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arvalid 
        = vlSelfRef.soc_top__DOT__timer_arvalid;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arvalid 
        = vlSelfRef.soc_top__DOT__qspi_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arvalid 
        = vlSelfRef.soc_top__DOT__qspi_arvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awvalid 
        = vlSelfRef.soc_top__DOT__ai_awvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awvalid 
        = vlSelfRef.soc_top__DOT__uart_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awvalid 
        = vlSelfRef.soc_top__DOT__uart_awvalid;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awvalid 
        = vlSelfRef.soc_top__DOT__gpio_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awvalid 
        = vlSelfRef.soc_top__DOT__gpio_awvalid;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awvalid 
        = vlSelfRef.soc_top__DOT__timer_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awvalid 
        = vlSelfRef.soc_top__DOT__timer_awvalid;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awvalid 
        = vlSelfRef.soc_top__DOT__qspi_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awvalid 
        = vlSelfRef.soc_top__DOT__qspi_awvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wvalid 
        = vlSelfRef.soc_top__DOT__ai_wvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wvalid 
        = vlSelfRef.soc_top__DOT__uart_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wvalid 
        = vlSelfRef.soc_top__DOT__uart_wvalid;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wvalid 
        = vlSelfRef.soc_top__DOT__gpio_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wvalid 
        = vlSelfRef.soc_top__DOT__gpio_wvalid;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wvalid 
        = vlSelfRef.soc_top__DOT__timer_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wvalid 
        = vlSelfRef.soc_top__DOT__timer_wvalid;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wvalid 
        = vlSelfRef.soc_top__DOT__qspi_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wvalid 
        = vlSelfRef.soc_top__DOT__qspi_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wvalid;
}

void Vsoc_top___024root___nba_comb__TOP__16(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__16\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div);
            }
        } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               ^ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)
                            : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i))
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bset_result))
                    : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clip_result
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)
                            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
                                ? ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))
                                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 1U)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                    = ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
                = ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o 
            = ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_o;
}

void Vsoc_top___024root___nba_comb__TOP__17(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__17\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rd_word_idx 
        = (0x00001fffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx 
        = (0x00001fffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_addr 
                          >> 2U));
}

void Vsoc_top___024root___nba_comb__TOP__18(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__18\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arready 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
            ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arready)
            : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arready)
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                    ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arready)
                    : ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arready)
                        : ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arready) 
                           | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)))))));
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wready;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wready;
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wready;
    } else if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wready;
    } else {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awready) 
               | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wready) 
               | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
    }
    vlSelfRef.soc_top__DOT__lite_arready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arready;
    vlSelfRef.soc_top__DOT__lite_awready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready;
    vlSelfRef.soc_top__DOT__lite_wready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arready 
        = vlSelfRef.soc_top__DOT__lite_arready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arready 
        = vlSelfRef.soc_top__DOT__lite_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awready 
        = vlSelfRef.soc_top__DOT__lite_awready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awready 
        = vlSelfRef.soc_top__DOT__lite_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wready 
        = vlSelfRef.soc_top__DOT__lite_wready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wready 
        = vlSelfRef.soc_top__DOT__lite_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_arready 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awready 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wready;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wready 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wready;
}

void Vsoc_top___024root___nba_comb__TOP__19(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__19\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
            ? ((0x00000400U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? ((0x00000200U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))))
                    : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
                : (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_22 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                ? (((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                             ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                 ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                          : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                              ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                              : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
                                 & (- (IData)((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))) 
                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))
                                       : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                           ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                            ? ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6
                                : ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6
                                    : ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                        ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6
                                        : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                            ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))
                                            : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                    ? (((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i) 
                                                 >> 8U)))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o 
        = (0x0000001fU & (((0x40000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable) 
           & (0U != vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o))
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
                        | (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                       | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                      | (0x0300U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                     | (0x0304U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                    | (0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                   | (0x0340U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
                  | (0x0341U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))))) {
        if ((0x0342U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((0x07b0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((0x07b1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x07b2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x07b3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if ((0x0340U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)), 5U)), vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl;
}

void Vsoc_top___024root___nba_comb__TOP__20(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__20\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o 
        = (0U != (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i 
                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl;
}

void Vsoc_top___024root___nba_comb__TOP__21(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__21\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_data;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 0U;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o 
                        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_data;
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 1U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 1U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__instr_rdata = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o;
    vlSelfRef.soc_top__DOT__instr_rvalid = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__instr_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rvalid_i 
        = vlSelfRef.soc_top__DOT__instr_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i;
}

void Vsoc_top___024root___nba_comb__TOP__22(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__22\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
           & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
           & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
           & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
           & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
           & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
           & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
           & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
           & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
           & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
    vlSelfRef.soc_top__DOT__ai_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rready;
    vlSelfRef.soc_top__DOT__uart_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rready;
    vlSelfRef.soc_top__DOT__gpio_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rready;
    vlSelfRef.soc_top__DOT__timer_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rready;
    vlSelfRef.soc_top__DOT__qspi_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rready;
    vlSelfRef.soc_top__DOT__ai_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bready;
    vlSelfRef.soc_top__DOT__uart_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bready;
    vlSelfRef.soc_top__DOT__gpio_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bready;
    vlSelfRef.soc_top__DOT__timer_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bready;
    vlSelfRef.soc_top__DOT__qspi_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rready 
        = vlSelfRef.soc_top__DOT__ai_rready;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rready 
        = vlSelfRef.soc_top__DOT__uart_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rready 
        = vlSelfRef.soc_top__DOT__uart_rready;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rready 
        = vlSelfRef.soc_top__DOT__gpio_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rready 
        = vlSelfRef.soc_top__DOT__gpio_rready;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rready 
        = vlSelfRef.soc_top__DOT__timer_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rready 
        = vlSelfRef.soc_top__DOT__timer_rready;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rready 
        = vlSelfRef.soc_top__DOT__qspi_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rready 
        = vlSelfRef.soc_top__DOT__qspi_rready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bready 
        = vlSelfRef.soc_top__DOT__ai_bready;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bready 
        = vlSelfRef.soc_top__DOT__uart_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bready 
        = vlSelfRef.soc_top__DOT__uart_bready;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bready 
        = vlSelfRef.soc_top__DOT__gpio_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bready 
        = vlSelfRef.soc_top__DOT__gpio_bready;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bready 
        = vlSelfRef.soc_top__DOT__timer_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bready 
        = vlSelfRef.soc_top__DOT__timer_bready;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bready 
        = vlSelfRef.soc_top__DOT__qspi_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bready 
        = vlSelfRef.soc_top__DOT__qspi_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bready;
}

void Vsoc_top___024root___nba_comb__TOP__25(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__25\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_p_elw_no_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__debug_p_elw_no_sleep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_p_elw_no_sleep;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 3U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 2U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 0U;
    if ((0x00000040U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((0x00000010U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 7U))))) {
                                if ((0U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                            >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o = 1U;
                                } else if ((1U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o = 1U;
                                } else if ((0x0302U 
                                            == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o 
                                        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o = 1U;
                                } else if ((2U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o 
                                        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o)));
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o = 1U;
                                } else if ((0x07b2U 
                                            == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i)));
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o 
                                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o = 1U;
                                } else if ((0x0105U 
                                            == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x14U))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o = 1U;
                                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                                    }
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((0x0105U 
                                                             == 
                                                             (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                              >> 0x14U)) 
                                                            << 5U) 
                                                           | (((0x07b2U 
                                                                == 
                                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                 >> 0x14U)) 
                                                               << 4U) 
                                                              | ((2U 
                                                                  == 
                                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                   >> 0x14U)) 
                                                                 << 3U))) 
                                                          | (((0x0302U 
                                                               == 
                                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                    >> 0x14U))))))))) {
                                    if ((0U != ((((0x0105U 
                                                   == 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x14U)) 
                                                  << 5U) 
                                                 | (((0x07b2U 
                                                      == 
                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                       >> 0x14U)) 
                                                     << 4U) 
                                                    | ((2U 
                                                        == 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x14U)) 
                                                       << 3U))) 
                                                | (((0x0302U 
                                                     == 
                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x14U)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x14U)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U))))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2704: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                                         , '#',12,
                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                          >> 0x14U));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2704, "");
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            }
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 0U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 0U;
                            }
                            if ((1U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x0cU)))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU)))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2775: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,
                                                     (3U 
                                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2775, "");
                                    }
                                }
                            }
                            if (((3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                        >> 0x1cU)) 
                                 > (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__current_priv_lvl_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x08000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x04000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x20000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                                    } else {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x10000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                            } else {
                                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o = 1U;
                                    }
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o 
                                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 3U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        if ((0U != (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                          >> 0x0cU)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o = 3U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 2U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                    if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                ? ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? 0x0bU : 1U) : 
                               ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                 ? 0x0aU : 0U));
                    } else if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                ? 0x0dU : 0x0cU);
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((0x00000010U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((3U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                >> 0x1eU))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else if ((2U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                       >> 0x1eU))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                        if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x1cU)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                        }
                        if ((0x40000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x20000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x02000000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x00004000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                } else if ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else if ((0x00001000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x19U;
                            }
                        } else if ((0x20000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x10000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x08000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x04000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        } else if ((0x02000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x32U;
                                    } else {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x33U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x30U;
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x31U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o = 1U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o = 3U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 6U;
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o = 0U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o = 3U;
                            }
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                                = ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                    ? ((0x00002000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 0x15U
                                            : 0x2eU)
                                        : ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 0x25U
                                            : 0x2fU))
                                    : ((0x00002000U 
                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                        ? ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 3U : 2U)
                                        : ((0x00001000U 
                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                            ? 0x27U
                                            : 0x18U)));
                        }
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                if ((1U & (~ VL_ONEHOT_I((((2U == (7U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU))))))))) {
                    if ((0U != (((2U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU))) 
                                 << 2U) | (((1U == 
                                             (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                >> 0x0cU))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:376: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(7U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0cU)));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 376, "");
                        }
                    }
                }
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 1U;
                if ((0U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                  >> 0x0cU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 2U;
                } else if ((1U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                         >> 0x0cU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 1U;
                } else if ((2U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                         >> 0x0cU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o = 0U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 2U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
                if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                            = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                                ? 0x15U : 0x2eU);
                    } else if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                        if ((0U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                    >> 0x19U))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x25U;
                        } else if ((0x20U == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                              >> 0x19U))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x24U;
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x2fU;
                    }
                } else if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o 
                        = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                            ? 3U : 2U);
                } else if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x27U;
                    if ((0U != (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                >> 0x19U))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    if ((0U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                      >> 0x0cU)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                    } else if ((1U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                             >> 0x0cU)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o = 1U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                                   >> 0x0cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2683: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,
                                             (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                                               >> 0x0cU)));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2683, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
        if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o = 0x18U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o = 2U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o 
                = (1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
                            >> 0x0eU)));
            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                        = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                            ? 1U : 2U);
                }
            } else if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o = 0U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o 
                    = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i)
                        ? 1U : 2U);
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o = 1U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_operator_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_operator_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_signed_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_type_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_sign_extension_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_a_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_a_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_c_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_op_b_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__imm_b_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_target_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_status_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fencei_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mret_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__uret_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__dret_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ebrk_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ecall_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_access_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__wfi_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_used_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regb_used_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regc_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__rega_used_o;
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))))) {
        if ((0U == (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b 
        = ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type, 1U)
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type)))
            : ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type))
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i)
                            ? 2U : 4U) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                               << 2U) | (((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                          << 1U) | 
                                         (1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                     << 2U) | (((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                << 1U) | (1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:574: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.jump_target_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 574, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                 << 5U) | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                          >> 0x0000000fU))) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))))))
            : (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c) 
                << 5U) | (0x0000001fU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                                          ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 7U)
                                          : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                             >> 0x0000001bU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_transfer_insn_in_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_transfer_insn_in_dec;
}

void Vsoc_top___024root___nba_comb__TOP__26(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__26\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1953U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_27));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1954U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_27));
}

void Vsoc_top___024root___nba_comb__TOP__27(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__27\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep;
}

void Vsoc_top___024root___nba_comb__TOP__28(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__28\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
}

void Vsoc_top___024root___nba_comb__TOP__29(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__29\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_ready));
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__write_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_ready) 
           & ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_valid) 
              & ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_ready))));
}

void Vsoc_top___024root___nba_comb__TOP__30(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__30\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_ready));
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_ready));
    vlSelfRef.soc_top__DOT__ai_m_arready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arready;
    vlSelfRef.soc_top__DOT__ai_m_awready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awready;
    vlSelfRef.soc_top__DOT__ai_m_wready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arready 
        = vlSelfRef.soc_top__DOT__ai_m_arready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awready 
        = vlSelfRef.soc_top__DOT__ai_m_awready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wready 
        = vlSelfRef.soc_top__DOT__ai_m_wready;
}

void Vsoc_top___024root___nba_comb__TOP__31(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__31\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__write_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_ready) 
           & ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_valid) 
              & ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_ready))));
}

void Vsoc_top___024root___nba_comb__TOP__33(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__33\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_data;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o 
                        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_data;
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__data_rdata = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rdata_i 
        = vlSelfRef.soc_top__DOT__data_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o;
}

void Vsoc_top___024root___nba_comb__TOP__34(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__34\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 0U;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 1U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 1U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__data_rvalid = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rvalid_i 
        = vlSelfRef.soc_top__DOT__data_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid;
}

void Vsoc_top___024root___nba_comb__TOP__35(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__35\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
               + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type)
            : ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                  >> 5U))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id;
}

void Vsoc_top___024root___nba_comb__TOP__36(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__36\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o) 
                 >> 1U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
               == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
}

void Vsoc_top___024root___nba_comb__TOP__37(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__37\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id;
}

void Vsoc_top___024root___nba_comb__TOP__38(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__38\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__core_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__core_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
}

void Vsoc_top___024root___nba_comb__TOP__39(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__39\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                    << 0x00000010U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i;
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o 
            = ((3U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                             >> 0x10U))) ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i
                : ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i) 
                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                      >> 0x10U)));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_aligned_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                     << 2U) | (((1U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_compressed_decoder.sv:52: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.if_stage_i.compressed_decoder_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv", 52, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o = 0U;
    if ((0U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 5U)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        if ((0x00000400U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                            if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x6fU | (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00000400U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                  >> 0x0cU)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                            = ((0x00000040U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                ? ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                                : ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))));
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : ((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 2U)))
                            ? (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                            : (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
            }
        } else if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0U == ((0x00000020U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 2U))))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((2U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                          << 0x00000012U))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 7U))) ? 
                               (0x37U | (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                         >> 0x0cU)))) 
                                          << 0x00000011U) 
                                         | ((0x0001f000U 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                << 0x0000000aU)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                            >> 0x0cU)))) 
                                             << 0x00000011U) 
                                            | ((0x0001f000U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   << 0x0000000aU)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))
                        ? (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                = ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                    ? (0x6fU | (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))));
        }
    } else if ((2U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))) {
        if ((0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                }
                if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                } else if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 7U)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                              >> 0x0000000dU)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                        = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                        << 8U))))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 8U)))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
            if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              >> 7U)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            } else if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o = 1U;
            }
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                          >> 0x0000000dU)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
                    = ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                        : (((0U == (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                   >> 2U))) 
                            | (0U == (0x0000001fU & 
                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                       >> 7U)))) ? 
                           (0x00001013U | ((0x01f00000U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                               << 0x00000012U)) 
                                           | ((0x000f8000U 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))
                            : (0x00001013U | ((0x01f00000U 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                  << 0x00000012U)) 
                                              | ((0x000f8000U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i 
                                                     << 8U)) 
                                                 | (0x00000f80U 
                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i))))));
            }
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o 
        = (3U != (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__illegal_instr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__instr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_compressed_int 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__compressed_decoder_i__DOT__is_compressed_o;
}

void Vsoc_top___024root___nba_comb__TOP__40(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__40\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_ready));
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__write_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_ready) 
           & ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_valid) 
              & ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_ready))));
}

void Vsoc_top___024root___nba_comb__TOP__41(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__41\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i;
}

void Vsoc_top___024root___nba_comb__TOP__42(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__42\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                    << 8U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                              >> 0x00000018U));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000001fU))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 8U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                              >> 0x00000018U));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                          >> 7U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | ((0x0000ff00U 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                           << 8U)) 
                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                          >> 0x00000018U)));
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
                = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                    << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                       >> 0x00000010U));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                          >> 0x00000017U)))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 8U) | (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                             >> 0x00000010U)));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                     & ((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000001fU))) 
                        | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                    << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                       >> 0x00000010U));
        }
    } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
            = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                << 0x00000018U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                   >> 8U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                 & ((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                      >> 0x0000000fU)))) 
                    | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                << 8U) | (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                         >> 8U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = ((((- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                 & ((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                      >> 0x00000017U)))) 
                    | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                << 0x00000010U) | (0x0000ffffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                                  >> 8U)));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (((((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 7U)))) | (- (IData)(
                                                           (2U 
                                                            == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                 & (- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                << 8U) | (0x000000ffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (((((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
                                    >> 0x0000000fU)))) 
                  | (- (IData)((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                 & (- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_h_ext
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_w_ext));
}

void Vsoc_top___024root___nba_comb__TOP__43(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__43\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i) 
           & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q)));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
            }
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_valid) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
            }
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
        if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
             & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 3U;
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 2U;
        }
    } else if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
        if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d 
                = (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                    & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))
                    ? 4U : ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)
                             ? 3U : ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready)
                                      ? 2U : 1U)));
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 5U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_finish 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_finish_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_finish;
}

void Vsoc_top___024root___nba_comb__TOP__44(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__44\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
           | (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wb_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i;
}

void Vsoc_top___024root___nba_comb__TOP__45(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__45\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 1U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
        = ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
           & ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
              | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o;
}

void Vsoc_top___024root___nba_comb__TOP__46(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__46\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o;
}

void Vsoc_top___024root___nba_comb__TOP__47(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__47\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_q;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_q;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                              & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))))) {
                    if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 1U;
                    }
                    if ((1U & (~ (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)))) {
                        if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 1U;
                        }
                    }
                }
                if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 0U;
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 0U;
                if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
                    if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
                        if ((1U & (~ ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                                      & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))))) {
                            if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 1U;
                            }
                            if ((1U & (~ (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)))) {
                                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 1U;
                                }
                            }
                        }
                        if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                             & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                        }
                    } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__data_gnt = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_gnt_i 
        = vlSelfRef.soc_top__DOT__data_gnt;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13;
}

void Vsoc_top___024root___nba_comb__TOP__49(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__49\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id));
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id 
            = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
                              >> 5U));
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id_imm;
    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id 
            = (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id);
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a)
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b)
                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec 
        = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c))))
            : ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec 
        = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                << 0x00000018U) | ((0x00ff0000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                                   << 0x00000010U)) 
                                   | ((0x0000ff00U 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                                          << 8U)) | 
                                      (0x000000ffU 
                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b))))
            : ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
                << 0x00000010U) | (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication_c)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_vec
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_vec
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b);
}

void Vsoc_top___024root___nba_comb__TOP__50(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__50\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o 
        = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i)) 
                 | ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)
                     : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))
                         : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down)
                      ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex;
}

void Vsoc_top___024root___nba_comb__TOP__51(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__51\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_39;
    __VdfgRegularize_h6e95ff9d_0_39 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_39 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
                                       & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready) 
                                          & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i) 
                                             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) 
            | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) 
               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i)))) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_39));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i) 
           | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_contention)) 
              & (IData)(__VdfgRegularize_h6e95ff9d_0_39)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (((6U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
    } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ex_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i;
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsoc_top__ConstPool__TABLE_haa8c9ebd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_hfc2dea1f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_h48470b6d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_hc8c40d37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_haccd4eb4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_h90ec5698_0;

void Vsoc_top___024root___nba_comb__TOP__52(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__52\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI) 
                      << 5U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S) 
                                 << 4U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI) 
                        << 2U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
        = Vsoc_top__ConstPool__TABLE_haa8c9ebd_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO 
        = Vsoc_top__ConstPool__TABLE_hfc2dea1f_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
        = Vsoc_top__ConstPool__TABLE_h48470b6d_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
        = Vsoc_top__ConstPool__TABLE_hc8c40d37_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
        = Vsoc_top__ConstPool__TABLE_haccd4eb4_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
        = Vsoc_top__ConstPool__TABLE_h90ec5698_0[__Vtableidx3];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                     >> 1U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI)) 
                | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                   >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
             ? (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                 << 0x0000001fU) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 1U)) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S)
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
               + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
            : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
               - vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
}

void Vsoc_top___024root___nba_comb__TOP__53(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__53\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall)) 
           & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_stall)) 
                    & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall)) 
                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_ready;
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsoc_top__ConstPool__TABLE_h18256ca7_0;

void Vsoc_top___024root___nba_comb__TOP__55(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__55\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
           | (1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i) 
            & (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i) 
              & (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 3U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    }
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i)) 
                          | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))) 
                         | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i)) 
                        | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 2U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 1U;
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 3U;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 4U;
                }
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 2U;
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o = 1U;
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 2U;
                    } else if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 1U;
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o = 3U;
                    }
                }
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 3U;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 3U;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 7U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i))))))) {
                    if ((0U != (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_dec_i) 
                                 << 2U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_dec_i) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_dec_i))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1122: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1122, "");
                        }
                    }
                }
                if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                     & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i)
                        ? 5U : 7U);
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o = 1U;
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                     & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)) 
                          | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i)) 
                         | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                        | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                       | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)) 
                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i)) 
                     | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) {
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 0U;
                        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o 
                            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o 
                            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o 
                            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)))) {
                        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) {
                            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) 
                                    << 3U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                      << 1U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                 << 4U) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1054: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1054, "");
                        }
                    }
                }
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ex_valid_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 2U;
                } else {
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 3U;
                    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                            = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                ? 8U : 0x0bU);
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))))) {
                        if ((0U != (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                     << 1U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:932: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 932, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 3U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o 
                        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
                          | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i)) 
                         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i) 
                                & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o 
                                = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                    ? 1U : 0U);
                        }
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                            = (0x00000020U | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o = 1U;
                    } else {
                        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                    ? 8U : 5U);
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if (((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                       | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                     | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)) 
                                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i)) 
                                   | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                       | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) 
                                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i)) 
                                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i))) {
                                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o)) 
                                               & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                            | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i))) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 0U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i)
                                            ? 7U : 5U);
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                            << 2U)) 
                                                        | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_status_i) 
                                                  << 2U)) 
                                              | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                   | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn_i)) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fencei_insn_i))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:541: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 541, "");
                                    }
                                }
                            }
                        }
                        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                             & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                        | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i))
                                        ? 8U : (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i))
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                               | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                                                | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)))))))) {
                                    if ((0U != ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn_i) 
                                                     | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__uret_insn_i)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_i)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) 
                                                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_i)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:677: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 677, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i) 
                     & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
                           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 4U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o = 0U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o 
                            = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i))
                                ? 1U : 0U);
                    }
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o 
                        = (0x00000020U | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i));
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o = 1U;
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 1U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o = 1U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_pipeline_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__perf_pipeline_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_mask 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_mask_o;
    __Vtableidx1 = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns 
        = Vsoc_top__ConstPool__TABLE_h18256ca7_0[__Vtableidx1];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_uret_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_uret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_irq_sec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_irq_sec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_ack_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_ack_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_busy_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_if_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_mret_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_dret_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_cause_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_csr_save_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_csr_save_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_cause_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_cause_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__exc_pc_mux_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_pc_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trap_addr_mux_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trap_addr_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__exc_cause_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_mux_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_set_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_set_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_uret_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_uret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_irq_sec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_irq_sec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_ack_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_ack_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_id_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_decoding 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clear_instr_valid_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_if 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_mret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_restore_dret_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_csr_save_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_cause 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__exc_pc_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trap_addr_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__exc_cause_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_int 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_set 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_set_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_uret_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_uret_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_irq_sec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_irq_sec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_ack_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_ack_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_id_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__is_decoding_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_decoding;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clear_instr_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) 
           & ((~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_decoding_o)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_if;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_csr_save_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_cause_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_cause;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__halt_if 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec_mode)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__req_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_int;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_set;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clear_instr_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__is_irq 
        = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i) 
                 >> 5U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__halt_if;
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i)) 
                               << 1U) | (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))))))) {
        if ((0U != (((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i)) 
                     << 1U) | (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:132: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 132, "");
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:138: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 138, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__req_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__req_i;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o 
            = (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 1U;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req = 0U;
    }
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i;
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_addr_mux_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__u_trap_base_addr_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__u_exc_vec_pc_mux_i;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_exc_vec_pc_mux_i;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc 
        = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
               << 8U) : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
                          ? 0x00010000U : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc_mux_i))
                                            ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                                                << 8U) 
                                               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_vec_pc_mux) 
                                                  << 2U))
                                            : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__trap_base_addr 
                                               << 8U))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__req_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_mtvec_init 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__csr_mtvec_init_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_mtvec_init;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i)
            ? 0x00000100U : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0304U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush;
}

void Vsoc_top___024root___nba_comb__TOP__56(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__56\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
    if (((((((((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)) 
               | (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
              | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
             | (0x0300U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
            | (0x0304U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
           | (0x0305U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
          | (0x0340U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) 
         | (0x0341U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i)))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
            if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                if ((3U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                    if ((0x0300U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                        if ((0x0305U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                            if ((0x0340U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
                                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i;
        } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i;
        } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) 
                                   << 2U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i))))))) {
            if ((0U != (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i) 
                         << 2U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_id_i) 
                                    << 1U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_if_i))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_csr_save_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_cause_i) 
                      << 6U));
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_cause_i;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n = 3U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_n 
            = (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q);
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) 
                               << 2U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) 
                                          << 1U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i))))))) {
        if ((0U != (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_dret_i) 
                     << 2U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_restore_mret_i) 
                                << 1U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_cause_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
}

void Vsoc_top___024root___nba_comb__TOP__57(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__57\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
    if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
                }
            }
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__depc_i
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__uepc_i)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__mepc_i
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc))
                : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                    ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i)
                    : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? ((IData)(4U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o)
                        : 0U)));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr 
        = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i);
}

void Vsoc_top___024root___nba_comb__TOP__58(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__58\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
             & (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
    } else if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                & (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
}

void Vsoc_top___024root___nba_comb__TOP__59(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__59\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i) 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)))))));
}

void Vsoc_top___024root___nba_comb__TOP__60(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__60\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                                     | (0U 
                                                        < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
}

void Vsoc_top___024root___nba_comb__TOP__61(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__61\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        if ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) 
                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i)
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q);
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
            }
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
            }
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                              >> 0x10U)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
            }
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i)
                ? 3U : 0U);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i;
    }
}

void Vsoc_top___024root___nba_comb__TOP__62(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__62\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q)
            ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)
            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i 
        = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
}

void Vsoc_top___024root___nba_comb__TOP__63(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__63\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i) 
           & (2U > ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           | (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i)));
}

void Vsoc_top___024root___nba_comb__TOP__64(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__64\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o 
        = (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid;
}

void Vsoc_top___024root___nba_comb__TOP__65(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__65\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__instr_addr = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i 
        = vlSelfRef.soc_top__DOT__instr_addr;
}

void Vsoc_top___024root___nba_comb__TOP__66(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__66\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
             & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           || (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__instr_req = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i 
        = vlSelfRef.soc_top__DOT__instr_req;
}

void Vsoc_top___024root___nba_comb__TOP__67(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__67\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o = 1U;
    if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o 
                    = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)));
            }
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o 
                = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)));
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                              >> 0x10U)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o = 0U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))
                ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i)));
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i));
    } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))
                ? (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                : (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i)) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i)));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                             >> 0x10U))) ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                                            & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i))
                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i)));
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_set_i)))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__req_i) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
              & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i)) 
                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q)));
    }
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n 
            = (1U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i)) 
          & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o))) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
}

void Vsoc_top___024root___nba_comb__TOP__68(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__68\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_addr 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i;
                vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_iar_addr_local 
        = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_mid_nib 
        = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_iar_addr_local 
                          >> 0x00000010U));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_to_boot 
        = (0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_mid_nib));
}

void Vsoc_top___024root___nba_comb__TOP__69(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__69\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rd_word_idx 
        = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rd_word_idx 
        = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_addr 
                          >> 2U));
}

void Vsoc_top___024root___nba_comb__TOP__70(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__70\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down)
                      ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down))));
}

void Vsoc_top___024root___nba_comb__TOP__71(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__71\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 1U;
                }
            }
        }
    }
}

void Vsoc_top___024root___nba_comb__TOP__72(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__72\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_ready));
}

void Vsoc_top___024root___nba_comb__TOP__73(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__73\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
            }
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_valid) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
            }
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
        }
    } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
        if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) 
             & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready))) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 3U;
        } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 2U;
        }
    } else if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
        if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready) {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 5U;
        }
    }
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready))) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                }
            } else if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_ready));
    vlSelfRef.soc_top__DOT__instr_gnt = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_gnt_i 
        = vlSelfRef.soc_top__DOT__instr_gnt;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
}

void Vsoc_top___024root___nba_sequent__TOP__0(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__1(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__4(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__9(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__10(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__11(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__12(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__13(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__15(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__16(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__17(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__18(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__22(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__29(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__30(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__31(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__33(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__34(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___nba_sequent__TOP__40(Vsoc_top___024root* vlSelf);
extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top__ConstPool__TABLE_h11d5385c_0;
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__periph_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__2(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___nba_comb__TOP__4(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__4(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__5(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__4(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__6(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__5(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__6(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__4(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__7(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

void Vsoc_top___024root___eval_nba(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_nba\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    IData/*18:0*/ __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
    __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0;
    SData/*8:0*/ __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__41___Vtableidx4;
    __Vinline__nba_sequent__TOP__41___Vtableidx4 = 0;
    CData/*3:0*/ __Vinline__nba_sequent__TOP__41___Vtableidx5;
    __Vinline__nba_sequent__TOP__41___Vtableidx5 = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__5___VdfgRegularize_h6e95ff9d_0_42;
    __Vinline__nba_comb__TOP__5___VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__26___VdfgRegularize_h6e95ff9d_0_27;
    __Vinline__nba_comb__TOP__26___VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*0:0*/ __Vinline__nba_comb__TOP__51___VdfgRegularize_h6e95ff9d_0_39;
    __Vinline__nba_comb__TOP__51___VdfgRegularize_h6e95ff9d_0_39 = 0;
    CData/*5:0*/ __Vinline__nba_comb__TOP__52___Vtableidx3;
    __Vinline__nba_comb__TOP__52___Vtableidx3 = 0;
    // Body
    if ((0x0000002000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000008000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
        __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
        __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
        __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
        if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__rst) {
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
        } else if ((0U < vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg)) {
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                                  - (IData)(1U)));
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        } else if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 1U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
            if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tvalid) {
                __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
                    = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg)));
                __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U) 
                                      - (IData)(1U)));
                __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 9U;
                __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
                    = (0x00000100U | (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tdata));
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 0U;
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 1U;
            }
        } else if ((1U < (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
                = (0x000001ffU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg) 
                                  >> 1U));
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U) 
                                  - (IData)(1U)));
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg 
                = (1U & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg));
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                                  - (IData)(1U)));
            __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & VL_SHIFTL_III(19,19,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U));
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
        }
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
            = __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
            = __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
            = __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
            = __Vinline__nba_sequent__TOP__2___Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd;
        vlSelfRef.soc_top__DOT__uart_txd_o = vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o;
        vlSelfRef.uart_txd_o = vlSelfRef.soc_top__DOT__uart_txd_o;
    }
    if ((0x0600000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        if (vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rst_ni) {
            if (vlSelfRef.soc_top__DOT__i_boot_rom__DOT__write_en) {
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__b_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.b_id 
                    = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_id;
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.b_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.b_ready))) {
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__b_valid = 0U;
            }
            if (vlSelfRef.soc_top__DOT__i_boot_rom__DOT__read_en) {
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__r_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_id 
                    = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_id;
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_data 
                    = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                    [vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rd_word_idx];
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_ready))) {
                vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__r_valid = 0U;
            }
        } else {
            vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__b_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__boot_rom_bus.__Vdly__r_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__boot_rom_bus.b_id = 0U;
            vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_id = 0U;
            vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_data = 0U;
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__1((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x0200000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0U;
        __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0U;
        __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0U;
        __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0U;
        if (vlSelfRef.soc_top__DOT__i_boot_rom__DOT__write_en) {
            if ((1U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
                __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0 
                    = (0x000000ffU & vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data);
                __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0 
                    = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
                __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
                __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                                      >> 8U));
                __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1 
                    = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
                __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
                __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                                      >> 0x10U));
                __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2 
                    = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
                __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
                __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3 
                    = (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                       >> 0x18U);
                __Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3 
                    = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
                __Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 1U;
            }
        }
        if (__Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0) {
            vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0] 
                = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                    [__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0]) 
                   | __Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0);
        }
        if (__Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1) {
            vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1] 
                = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                    [__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1) 
                      << 8U));
        }
        if (__Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2) {
            vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2] 
                = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                    [__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2) 
                      << 0x00000010U));
        }
        if (__Vinline__nba_sequent__TOP__5___VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3) {
            vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3] 
                = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                    [__Vinline__nba_sequent__TOP__5___VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3]) 
                   | ((IData)(__Vinline__nba_sequent__TOP__5___VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3) 
                      << 0x00000018U));
        }
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v0 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v1 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v2 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v3 = 0U;
        if (vlSelfRef.soc_top__DOT__i_instr_sram__DOT__write_en) {
            if ((1U & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v0 
                    = (0x000000ffU & vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_data);
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v0 
                    = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v1 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_data 
                                      >> 8U));
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v1 
                    = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v2 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_data 
                                      >> 0x10U));
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v2 
                    = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v3 
                    = (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_data 
                       >> 0x18U);
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v3 
                    = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v3 = 1U;
            }
        }
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v0 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v1 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v2 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v3 = 0U;
        if (vlSelfRef.soc_top__DOT__i_data_sram__DOT__write_en) {
            if ((1U & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v0 
                    = (0x000000ffU & vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_data);
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v0 
                    = vlSelfRef.soc_top__DOT__i_data_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v1 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_data 
                                      >> 8U));
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v1 
                    = vlSelfRef.soc_top__DOT__i_data_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v2 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_data 
                                      >> 0x10U));
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v2 
                    = vlSelfRef.soc_top__DOT__i_data_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_strb))) {
                vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v3 
                    = (vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_data 
                       >> 0x18U);
                vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v3 
                    = vlSelfRef.soc_top__DOT__i_data_sram__DOT__wr_word_idx;
                vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v3 = 1U;
            }
        }
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v0 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v1 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v2 = 0U;
        vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v3 = 0U;
        if (vlSelfRef.soc_top__DOT__i_ai_sram__DOT__write_en) {
            if ((1U & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_strb))) {
                vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0 
                    = (0x000000ffU & vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_data);
                if ((0x1dffU >= (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx))) {
                    vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v0 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0;
                    vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v0 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx;
                    vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v0 = 1U;
                }
            }
            if ((2U & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_strb))) {
                vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_data 
                                      >> 8U));
                if ((0x1dffU >= (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx))) {
                    vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v1 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0;
                    vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v1 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx;
                    vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v1 = 1U;
                }
            }
            if ((4U & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_strb))) {
                vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0 
                    = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_data 
                                      >> 0x10U));
                if ((0x1dffU >= (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx))) {
                    vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v2 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0;
                    vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v2 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx;
                    vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v2 = 1U;
                }
            }
            if ((8U & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_strb))) {
                vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0 
                    = (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_data 
                       >> 0x18U);
                if ((0x1dffU >= (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx))) {
                    vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v3 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0;
                    vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v3 
                        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx;
                    vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v3 = 1U;
                }
            }
        }
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vsoc_top___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vsoc_top___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vsoc_top___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x0000000000000080ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vsoc_top___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x0000000000000200ULL & vlSelfRef.__VnbaTriggered[1U])) {
        Vsoc_top___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x1800000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        if (vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rst_ni) {
            if (vlSelfRef.soc_top__DOT__i_instr_sram__DOT__read_en) {
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__r_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_id 
                    = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_id;
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_data 
                    = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem
                    [vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rd_word_idx];
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_ready))) {
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__r_valid = 0U;
            }
            if (vlSelfRef.soc_top__DOT__i_instr_sram__DOT__write_en) {
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__b_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_id 
                    = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_id;
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_ready))) {
                vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__b_valid = 0U;
            }
        } else {
            vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__r_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__instr_sram_bus.__Vdly__b_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_id = 0U;
            vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_id = 0U;
            vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_data = 0U;
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
    }
    if ((0x0006000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x0000600000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x0060000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x0018000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((0x6000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
        if (vlSelfRef.soc_top__DOT__i_data_sram__DOT__rst_ni) {
            if (vlSelfRef.soc_top__DOT__i_data_sram__DOT__read_en) {
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__r_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_id 
                    = vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_id;
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_data 
                    = vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem
                    [vlSelfRef.soc_top__DOT__i_data_sram__DOT__rd_word_idx];
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_ready))) {
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__r_valid = 0U;
            }
            if (vlSelfRef.soc_top__DOT__i_data_sram__DOT__write_en) {
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__b_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_id 
                    = vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_id;
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_ready))) {
                vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__b_valid = 0U;
            }
        } else {
            vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__r_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__data_sram_bus.__Vdly__b_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_id = 0U;
            vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_id = 0U;
            vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_data = 0U;
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x8000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
        if (vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rst_ni) {
            if (vlSelfRef.soc_top__DOT__i_ai_sram__DOT__read_en) {
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__r_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id 
                    = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_id;
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data 
                    = ((0x1dffU >= (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rd_word_idx))
                        ? vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem
                       [vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rd_word_idx]
                        : 0U);
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_ready))) {
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__r_valid = 0U;
            }
            if (vlSelfRef.soc_top__DOT__i_ai_sram__DOT__write_en) {
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__b_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id 
                    = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_id;
            } else if (((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_valid) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_ready))) {
                vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__b_valid = 0U;
            }
        } else {
            vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__r_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__ai_sram_bus.__Vdly__b_valid = 0U;
            vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id = 0U;
            vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id = 0U;
            vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data = 0U;
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid 
            = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id;
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid 
            = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id;
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata 
            = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data;
        vlSelfRef.soc_top__DOT__ai_m_rid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid;
        vlSelfRef.soc_top__DOT__ai_m_bid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid;
        vlSelfRef.soc_top__DOT__ai_m_rdata = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rid 
            = vlSelfRef.soc_top__DOT__ai_m_rid;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bid 
            = vlSelfRef.soc_top__DOT__ai_m_bid;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
    }
    if ((0x0180000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__22(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__ai_sram_bus__2((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
    }
    if ((0x00000000000000c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_busy_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fetch_enable 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fetch_enable;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i;
    }
    if ((0x0000006000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) 
               && (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_d));
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) 
               && (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_d));
        if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) {
            if (((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) 
                 & ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o) 
                    | (0U == (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__we_q = 0U;
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__be_q = 0x0fU;
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__wdata_q = 0U;
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i;
            }
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q 
                = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d;
        } else {
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__we_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__be_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__wdata_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q = 0U;
        }
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_valid = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_ready = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_valid = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_strb 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__be_q;
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_data 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__wdata_q;
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_q;
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_q;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_valid = 1U;
                }
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_valid = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_strb = 0x0fU;
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_data = 0U;
                }
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) 
                                  & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready))))) {
                        if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_d = 1U;
                        }
                        if ((1U & (~ (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready)))) {
                            if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_d = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__aw_done_d = 0U;
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__w_done_d = 0U;
                }
            }
        }
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready = 0U;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_ready = 1U;
                }
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready = 1U;
                }
            }
        }
    }
    if ((0x0000018000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni) 
               && (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d));
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni) 
               && (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d));
        if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni) {
            if (((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) 
                 & ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o) 
                    | (0U == (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__wdata_q 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_wdata_i;
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__be_q 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_be_i;
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__we_q 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i;
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q 
                    = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i;
            }
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q 
                = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d;
        } else {
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__wdata_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__be_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__we_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q = 0U;
            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q = 0U;
        }
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready = 0U;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready = 1U;
                }
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready = 1U;
                }
            }
        }
    }
    if ((0x0000000600000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt;
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                 & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                    = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i) 
                        | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o))
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext);
            }
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                    = (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        }
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h 
                    = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                       >> 0x10U);
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state)))) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i;
                }
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2 
            = ((IData)(2U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4 
            = ((IData)(4U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_ns;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
               && ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done) 
                   & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o 
            = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                     >> 1U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o 
            = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                     >> 2U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_havereset_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_running_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_halted_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_havereset_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_havereset_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_running_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_running_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_halted_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_halted_o;
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x0000000000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__30(vlSelf);
    }
    if ((0x0000000000000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__31(vlSelf);
    }
    if ((0x0000000000000c00ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state));
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt;
            if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr 
            = ((IData)(4U) + (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q));
    }
    if ((0x0000000060000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__33(vlSelf);
    }
    if ((0x0000001800000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__34(vlSelf);
    }
    if ((0x000000000000c000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n) {
            if (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state));
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_wdata_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_be_o = 0x0fU;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_atop_o = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_we_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o 
            = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready;
    }
    if ((0x0000060000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_crossbar__DOT__rst_ni) {
            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready))) {
                vlSelfRef.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q 
                    = vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_to_boot;
            }
            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready))) {
                vlSelfRef.soc_top__DOT__i_crossbar__DOT__rd_dest 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph)
                        ? 2U : ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram)
                                 ? 1U : 0U));
            }
            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready))) {
                vlSelfRef.soc_top__DOT__i_crossbar__DOT__wr_dest 
                    = ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph)
                        ? 2U : ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram)
                                 ? 1U : ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram)
                                          ? 3U : 0U)));
            }
        } else {
            vlSelfRef.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q = 0U;
            vlSelfRef.soc_top__DOT__i_crossbar__DOT__rd_dest = 0U;
            vlSelfRef.soc_top__DOT__i_crossbar__DOT__wr_dest = 0U;
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_data_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x0000000180000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q 
                    = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry)) 
                             & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                        >> 0x20U))));
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
            }
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                    }
                }
                if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
                } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
                } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
                }
            }
            if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            } else {
                if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
                }
                if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                    }
                }
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 0U;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i;
    }
    if ((0x0000000006000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n)
                ? (0xffff0888U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i)
                : 0U);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mip_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mip 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mip_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mip;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip_i;
    }
    if ((0x0000000018000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
                }
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 1U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_fw_wb_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb_power 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_fw_wb_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb_power;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i;
    }
    if ((0x0000000000300000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__40(vlSelf);
    }
    if ((0x0000180000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rst_ni) {
            if (((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arvalid) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arready))) {
                vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q 
                    = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel;
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_valid_addr)))) {
                    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_ar_pending = 1U;
                }
            } else if (((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid) 
                        & (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready))) {
                vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_ar_pending = 0U;
            }
            if (((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awvalid) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready))) {
                vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q 
                    = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel;
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_valid_addr)))) {
                    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_aw_pending = 1U;
                }
            } else if (((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid) 
                        & (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready))) {
                vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_aw_pending = 0U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q = 0U;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q = 0U;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_aw_pending = 0U;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_ar_pending = 0U;
        }
        __Vinline__nba_sequent__TOP__41___Vtableidx5 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rresp 
            = Vsoc_top__ConstPool__TABLE_h11d5385c_0
            [__Vinline__nba_sequent__TOP__41___Vtableidx5];
        __Vinline__nba_sequent__TOP__41___Vtableidx4 
            = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bresp 
            = Vsoc_top__ConstPool__TABLE_h11d5385c_0
            [__Vinline__nba_sequent__TOP__41___Vtableidx4];
        vlSelfRef.soc_top__DOT__lite_rresp = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rresp;
        vlSelfRef.soc_top__DOT__lite_bresp = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bresp;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rresp 
            = vlSelfRef.soc_top__DOT__lite_rresp;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rresp 
            = vlSelfRef.soc_top__DOT__lite_rresp;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bresp 
            = vlSelfRef.soc_top__DOT__lite_bresp;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bresp 
            = vlSelfRef.soc_top__DOT__lite_bresp;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rresp 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rresp;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rresp 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rresp;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bresp 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bresp;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bresp 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bresp;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__periph_bus__0((&vlSymsp->TOP__soc_top__DOT__periph_bus));
    }
    if ((0x0000000001800000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q;
    }
    if ((0x0600000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__write_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_valid) 
               & ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_valid) 
                  & ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_ready) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_ready))));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered[1U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awvalid));
        if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awaddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__araddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wdata;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wstrb;
        } else {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb = 0U;
        }
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wvalid));
    }
    if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[1U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awvalid));
        if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awaddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__araddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wdata;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wstrb;
        } else {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb = 0U;
        }
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wvalid));
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[1U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awvalid));
        if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awaddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__araddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wdata;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wstrb;
        } else {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb = 0U;
        }
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wvalid));
    }
    if ((0x0000000000000180ULL & vlSelfRef.__VnbaTriggered[1U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awvalid));
        if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awaddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__araddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wdata;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wstrb;
        } else {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb = 0U;
        }
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wvalid));
    }
    if ((0x0000000000000600ULL & vlSelfRef.__VnbaTriggered[1U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awvalid));
        if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awaddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__araddr;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wdata;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb 
                = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wstrb;
        } else {
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata = 0U;
            vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb = 0U;
        }
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arvalid));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wready));
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wvalid));
    }
    if ((0x0800000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v0) {
            vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v0] 
                = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v0]) 
                   | (IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v0));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v1) {
            vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v1] 
                = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v1]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v1) 
                      << 8U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v2) {
            vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v2] 
                = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v2]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v2) 
                      << 0x00000010U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_instr_sram__DOT__mem__v3) {
            vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v3] 
                = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_instr_sram__DOT__mem__v3]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_instr_sram__DOT__mem__v3) 
                      << 0x00000018U));
        }
    }
    if ((0x0001000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_data_out 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_valid 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid;
    }
    if ((0x0000800000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_busy 
            = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy;
    }
    if ((0x2000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v0) {
            vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v0] 
                = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v0]) 
                   | (IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v0));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v1) {
            vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v1] 
                = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v1]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v1) 
                      << 8U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v2) {
            vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v2] 
                = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v2]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v2) 
                      << 0x00000010U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_data_sram__DOT__mem__v3) {
            vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v3] 
                = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_data_sram__DOT__mem__v3]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_data_sram__DOT__mem__v3) 
                      << 0x00000018U));
        }
    }
    if ((0x8000000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v0) {
            vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v0] 
                = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v0]) 
                   | (IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v0));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v1) {
            vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v1] 
                = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v1]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v1) 
                      << 8U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v2) {
            vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v2] 
                = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v2]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v2) 
                      << 0x00000010U));
        }
        if (vlSelfRef.__VdlySet__soc_top__DOT__i_ai_sram__DOT__mem__v3) {
            vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v3] 
                = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem
                    [vlSelfRef.__VdlyDim0__soc_top__DOT__i_ai_sram__DOT__mem__v3]) 
                   | ((IData)(vlSelfRef.__VdlyVal__soc_top__DOT__i_ai_sram__DOT__mem__v3) 
                      << 0x00000018U));
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x8000000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rdata 
            = vlSelfRef.soc_top__DOT__ai_m_rdata;
    }
    if ((0x0198000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__irq_vector = (((IData)(vlSelfRef.soc_top__DOT__ai_irq) 
                                               << 0x00000011U) 
                                              | ((IData)(vlSelfRef.soc_top__DOT__timer_irq) 
                                                 << 0x00000010U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_i = vlSelfRef.soc_top__DOT__irq_vector;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_i;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x8180000000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_valid));
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rvalid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_valid));
        vlSelfRef.soc_top__DOT__ai_m_bvalid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bvalid;
        vlSelfRef.soc_top__DOT__ai_m_rvalid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rvalid;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bvalid 
            = vlSelfRef.soc_top__DOT__ai_m_bvalid;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rvalid 
            = vlSelfRef.soc_top__DOT__ai_m_rvalid;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
    }
    if ((0x00000006000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
               & (2U > (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
               | (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_busy 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_busy;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_pmp 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_start 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_pmp;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_start_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_start;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_req_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__data_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o;
        vlSelfRef.soc_top__DOT__data_req = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_req_o;
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i 
            = vlSelfRef.soc_top__DOT__data_req;
    }
    if ((0x00000000000c0008ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x00000000000c000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x00000180000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__be_q;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__wdata_q;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_be_i;
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i;
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i;
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_wdata_i;
                }
            }
        }
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
            = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
            = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_mid_nib 
            = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
                              >> 0x00000010U));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib 
            = (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
               >> 0x0000001cU);
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib 
            = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
                              >> 0x00000010U));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib 
            = (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
               >> 0x0000001cU);
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph 
            = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph 
            = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph)) 
               & ((0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib)) 
                  & (3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_mid_nib))));
        __Vinline__nba_comb__TOP__5___VdfgRegularize_h6e95ff9d_0_42 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph)) 
               & (0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib)));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram 
            = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
               & __Vinline__nba_comb__TOP__5___VdfgRegularize_h6e95ff9d_0_42);
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram 
            = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
               & __Vinline__nba_comb__TOP__5___VdfgRegularize_h6e95ff9d_0_42);
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = 
            (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph) 
                      | ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram) 
                         | (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram)))));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__periph_bus));
        Vsoc_top___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x0000000000030000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if;
    }
    if ((0x00000000600c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
            = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI) 
                | (0U != vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
               & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                   ^ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                      > vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
                  | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                     == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    }
    if ((0x00000000000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__56(vlSelf);
    }
    if ((0x00000018000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__8(vlSelf);
    }
    if ((0x0000001800000300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
                  == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = 
            ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i));
    }
    if ((0x1e00060000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
    }
    if ((0x0000066000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xe000060000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x0000078000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__1((&vlSymsp->TOP__soc_top__DOT__periph_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__2((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__2((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rready 
            = vlSymsp->TOP__soc_top__DOT__periph_bus.r_ready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bready 
            = vlSymsp->TOP__soc_top__DOT__periph_bus.b_ready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rready 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bready 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bready;
        vlSelfRef.soc_top__DOT__lite_rready = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rready;
        vlSelfRef.soc_top__DOT__lite_bready = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rready 
            = vlSelfRef.soc_top__DOT__lite_rready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready 
            = vlSelfRef.soc_top__DOT__lite_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bready 
            = vlSelfRef.soc_top__DOT__lite_bready;
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready 
            = vlSelfRef.soc_top__DOT__lite_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bready;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf800060000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__1((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x00000001800c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
        if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                        = (2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
                } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                        = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
                } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
                }
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
            if (((6U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
            }
        } else if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
                = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
                = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i))));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
                = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
                = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
                = (0x00000001ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
                = (3U & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i))));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o;
    }
    if ((0x0000000018000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_sequent__TOP__57(vlSelf);
    }
    if ((0x0000000000300300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o 
            = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i))] 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i) 
                                      >> 5U))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o 
            = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i))] 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i) 
                                      >> 5U))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o;
    }
    if ((0x01fe780000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rdata;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rvalid;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rdata;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rvalid;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rdata;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rvalid;
        } else if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rdata;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rvalid;
        } else if ((6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rdata;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rvalid;
        } else {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata = 0xdeadbeefU;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_ar_pending;
        }
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid 
            = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bvalid)
                : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                    ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bvalid)
                    : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bvalid)
                        : ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                            ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bvalid)
                            : ((6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q))
                                ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bvalid)
                                : (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__err_aw_pending))))));
        vlSelfRef.soc_top__DOT__lite_rdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata;
        vlSelfRef.soc_top__DOT__lite_bvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid;
        vlSelfRef.soc_top__DOT__lite_rvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata 
            = vlSelfRef.soc_top__DOT__lite_rdata;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata 
            = vlSelfRef.soc_top__DOT__lite_rdata;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid 
            = vlSelfRef.soc_top__DOT__lite_bvalid;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid 
            = vlSelfRef.soc_top__DOT__lite_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid 
            = vlSelfRef.soc_top__DOT__lite_rvalid;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid 
            = vlSelfRef.soc_top__DOT__lite_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rdata 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rdata 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bvalid 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rvalid 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__2((&vlSymsp->TOP__soc_top__DOT__periph_bus));
    }
    if ((0x00001e0000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__2((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x0000000000c00000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n) 
               && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode;
    }
    if ((0x0000600000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wready;
    }
    if ((0x0006000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wready;
    }
    if ((0x0018000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wready;
    }
    if ((0x0060000000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rvalid 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rvalid;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wready;
    }
    if ((0x00000186000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 0U;
        vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                    if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
                        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i)))) {
                            vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid = 1U;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
                }
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
                vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
            } else if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
                if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 1U;
                    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 1U;
                }
            }
        }
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__3((&vlSymsp->TOP__soc_top__DOT__periph_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__2((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__3((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__3((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x00000000600c000cULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x01800180000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_addr 
                              >> 2U));
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_addr 
                              >> 2U));
    }
    if ((0x01fe6180000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arready 
            = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arready)
                : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                    ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arready)
                    : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arready)
                        : ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel))
                            ? (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arready)
                            : ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arready) 
                               | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ar_sel)))))));
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awready;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wready;
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awready;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wready;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awready;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wready;
        } else if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel))) {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awready;
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
                = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wready;
        } else {
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready 
                = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awready) 
                   | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
            vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready 
                = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wready) 
                   | (6U != (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__aw_sel)));
        }
        vlSelfRef.soc_top__DOT__lite_arready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_arready;
        vlSelfRef.soc_top__DOT__lite_awready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_awready;
        vlSelfRef.soc_top__DOT__lite_wready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_wready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arready 
            = vlSelfRef.soc_top__DOT__lite_arready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arready 
            = vlSelfRef.soc_top__DOT__lite_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awready 
            = vlSelfRef.soc_top__DOT__lite_awready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awready 
            = vlSelfRef.soc_top__DOT__lite_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wready 
            = vlSelfRef.soc_top__DOT__lite_wready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wready 
            = vlSelfRef.soc_top__DOT__lite_wready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_arready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_arready 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_arready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_awready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_awready 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_awready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_wready;
        vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_wready 
            = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_wready;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__4((&vlSymsp->TOP__soc_top__DOT__periph_bus));
    }
    if ((0x00000018060c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__19(vlSelf);
    }
    if ((0x01980018000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o 
            = (0U != (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i 
                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl;
    }
    if ((0x1e00066000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o 
            = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_data;
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 0U;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                    if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_valid) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o 
                            = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_data;
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 1U;
                    }
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o = 1U;
                }
            }
        }
        vlSelfRef.soc_top__DOT__instr_rdata = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rdata_o;
        vlSelfRef.soc_top__DOT__instr_rvalid = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_rvalid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rdata_i 
            = vlSelfRef.soc_top__DOT__instr_rdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rvalid_i 
            = vlSelfRef.soc_top__DOT__instr_rvalid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_rdata_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i;
    }
    if ((0x0600066000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__1((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
    }
    if ((0x1800066000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__1((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
    }
    if ((0x6000078000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__3((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
    }
    if ((0x0180078000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
    }
    if ((0x1800078000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__5((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
    }
    if ((0x00001f8000000000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
               & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
               & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
               & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
               & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rready) 
               & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
               & (6U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
               & (0U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
               & (1U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
               & (2U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
        vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bready) 
               & (5U == (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q)));
        vlSelfRef.soc_top__DOT__ai_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rready;
        vlSelfRef.soc_top__DOT__uart_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rready;
        vlSelfRef.soc_top__DOT__gpio_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rready;
        vlSelfRef.soc_top__DOT__timer_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rready;
        vlSelfRef.soc_top__DOT__qspi_rready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rready;
        vlSelfRef.soc_top__DOT__ai_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bready;
        vlSelfRef.soc_top__DOT__uart_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bready;
        vlSelfRef.soc_top__DOT__gpio_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bready;
        vlSelfRef.soc_top__DOT__timer_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bready;
        vlSelfRef.soc_top__DOT__qspi_bready = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rready 
            = vlSelfRef.soc_top__DOT__ai_rready;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rready 
            = vlSelfRef.soc_top__DOT__uart_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rready 
            = vlSelfRef.soc_top__DOT__uart_rready;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rready 
            = vlSelfRef.soc_top__DOT__gpio_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rready 
            = vlSelfRef.soc_top__DOT__gpio_rready;
        vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rready 
            = vlSelfRef.soc_top__DOT__timer_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rready 
            = vlSelfRef.soc_top__DOT__timer_rready;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rready 
            = vlSelfRef.soc_top__DOT__qspi_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rready 
            = vlSelfRef.soc_top__DOT__qspi_rready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bready 
            = vlSelfRef.soc_top__DOT__ai_bready;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bready 
            = vlSelfRef.soc_top__DOT__uart_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bready 
            = vlSelfRef.soc_top__DOT__uart_bready;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bready 
            = vlSelfRef.soc_top__DOT__gpio_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bready 
            = vlSelfRef.soc_top__DOT__gpio_bready;
        vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bready 
            = vlSelfRef.soc_top__DOT__timer_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bready 
            = vlSelfRef.soc_top__DOT__timer_bready;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bready 
            = vlSelfRef.soc_top__DOT__qspi_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bready 
            = vlSelfRef.soc_top__DOT__qspi_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bready;
        vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bready 
            = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bready;
    }
    if ((0x00000001800c0010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
            = ((0x00010000U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                << 0x00000010U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                   << 1U))) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                  ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                     >> 0x00000010U)
                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
    }
    if ((0x00000001800c0020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
            = (((IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                          >> 1U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                    >> 0x0000000fU))) 
                << 0x00000010U) | (0x0000ffffU & ((2U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
                                                   >> 0x00000010U)
                                                   : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i)));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xe1fe7e0000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__3((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7e0000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__4((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x0000001801c00300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__25(vlSelf);
    }
    if ((0x0000000000cc0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_comb__TOP__26___VdfgRegularize_h6e95ff9d_0_27 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
            = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1953U] 
               & __Vinline__nba_comb__TOP__26___VdfgRegularize_h6e95ff9d_0_27);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
            = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1954U] 
               & __Vinline__nba_comb__TOP__26___VdfgRegularize_h6e95ff9d_0_27);
    }
    if ((0x01800186000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__2((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
    }
    if ((0x0198001801cc0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep;
    }
    if ((0x1e00066000003000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_rdata
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_rdata_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    }
    if ((0x60000786000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_data_sram__DOT__read_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_valid) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_ready));
        vlSelfRef.soc_top__DOT__i_data_sram__DOT__write_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_ready) 
               & ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_valid) 
                  & ((IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_valid) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_ready))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x8180078000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__3((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_ready));
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_ready));
        vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_ready));
        vlSelfRef.soc_top__DOT__ai_m_arready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arready;
        vlSelfRef.soc_top__DOT__ai_m_awready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awready;
        vlSelfRef.soc_top__DOT__ai_m_wready = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arready 
            = vlSelfRef.soc_top__DOT__ai_m_arready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awready 
            = vlSelfRef.soc_top__DOT__ai_m_awready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wready 
            = vlSelfRef.soc_top__DOT__ai_m_wready;
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
    }
    if ((0x18000786000c0000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_instr_sram__DOT__write_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_ready) 
               & ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_valid) 
                  & ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_valid) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_ready))));
    }
    if ((0x00000001800c0030ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xe1fe7f8000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o 
            = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_data;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                    if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o 
                            = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_data;
                    }
                }
            }
        }
        vlSelfRef.soc_top__DOT__data_rdata = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rdata_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rdata_i 
            = vlSelfRef.soc_top__DOT__data_rdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_rdata 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_rdata_o;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f8000000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 0U;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                    if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 1U;
                    }
                } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o = 1U;
                }
            }
        }
        vlSelfRef.soc_top__DOT__data_rvalid = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_rvalid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rvalid_i 
            = vlSelfRef.soc_top__DOT__data_rvalid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_rvalid_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid;
    }
    if ((0x0000001801f00300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
            = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type)
                : ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                    ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                       + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type)
                    : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
                       + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o 
            = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                      >> 5U))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id;
    }
    if ((0x0000001801cc0300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o) 
                     >> 1U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
               & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                  & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
               & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                  & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
               & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o) 
                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                  & (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
    }
    if ((0x0000001819c00300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
               & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id;
    }
    if ((0x0198001801cc00c0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__core_sleep_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o;
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_sleep_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__core_sleep_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_gated_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__clk;
    }
    if ((0x1e00066000033000ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vsoc_top___024root___nba_comb__TOP__39(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0x81800786000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT__read_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_valid) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_ready));
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT__write_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_ready) 
               & ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_valid) 
                  & ((IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_valid) 
                     & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_ready))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xe1fe6780000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__5((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe6780000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__6((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    }
    if ((0x00000019e60c003cULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_rdata_i;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_wdata_fw_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xe1fe7f8600000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___nba_comb__TOP__42(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f86000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rvalid_i) 
               & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)) 
                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_q)));
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 4U;
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 3U;
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 2U;
            }
        } else if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
            if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d 
                    = (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))
                        ? 4U : ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)
                                 ? 3U : ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready)
                                          ? 2U : 1U)));
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_d = 5U;
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_finish 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_finish_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_finish_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_finish;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f8600000000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
               | (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_wb_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_rdata 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ex_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wb_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_rdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wb_ready_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_rdata_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_wdata_wb_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i;
    }
    if ((0x0000001819cc0300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 2U;
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 1U;
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 2U;
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o 
            = ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
               & ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                      & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o;
    }
    if ((0x0000001999cc0300ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 0U;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 2U;
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o = 1U;
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe6786000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_q;
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_q;
        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                                  & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))))) {
                        if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 1U;
                        }
                        if ((1U & (~ (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)))) {
                            if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 1U;
                            }
                        }
                    }
                    if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                    } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                    } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 0U;
                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 0U;
                    if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i) {
                        if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i) {
                            if ((1U & (~ ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))))) {
                                if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                                    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d = 1U;
                                }
                                if ((1U & (~ (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready)))) {
                                    if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                                        vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d = 1U;
                                    }
                                }
                            }
                            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) 
                                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready))) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_ready) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                            } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_ready) {
                                vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                            }
                        } else if (vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_ready) {
                            vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o = 1U;
                        }
                    }
                }
            }
        }
        vlSelfRef.soc_top__DOT__data_gnt = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_gnt_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__data_gnt_i 
            = vlSelfRef.soc_top__DOT__data_gnt;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_pmp 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_gnt_pmp;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_ready_o;
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13 = 
            ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up 
            = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9e19cc0301ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9ffffc033cULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___nba_comb__TOP__49(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f86000c0000ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o 
            = (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i)) 
                     | ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                         ? (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13)
                         : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q))
                             ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) 
                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_13))
                             : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__next_cnt 
            = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up)
                      ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down)
                          ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)
                          : ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)))
                      : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_down))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__lsu_ready_ex_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f87800c0002ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        __Vinline__nba_comb__TOP__51___VdfgRegularize_h6e95ff9d_0_39 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready) 
                  & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_ready_ex_i) 
                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_ready_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o 
            = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i) 
                | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i) 
                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i) 
                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i)))) 
               & __Vinline__nba_comb__TOP__51___VdfgRegularize_h6e95ff9d_0_39);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i) 
               | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_contention)) 
                  & __Vinline__nba_comb__TOP__51___VdfgRegularize_h6e95ff9d_0_39));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ex_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_valid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS;
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if (((6U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 2U;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 3U;
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 4U;
        } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = 0U;
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ex_ready_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ex_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_valid_i;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f87e00c0002ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        __Vinline__nba_comb__TOP__52___Vtableidx3 = 
            ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutRdy_SI) 
               << 5U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S) 
                          << 4U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                                    << 3U))) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN 
            = Vsoc_top__ConstPool__TABLE_haa8c9ebd_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO 
            = Vsoc_top__ConstPool__TABLE_hfc2dea1f_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S 
            = Vsoc_top__ConstPool__TABLE_h48470b6d_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S 
            = Vsoc_top__ConstPool__TABLE_hc8c40d37_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S 
            = Vsoc_top__ConstPool__TABLE_haccd4eb4_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S 
            = Vsoc_top__ConstPool__TABLE_h90ec5698_0
            [__Vinline__nba_comb__TOP__52___Vtableidx3];
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutVld_SO;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
                = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                         >> 1U));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
                = (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI)) 
                    | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                       >> 1U)) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN 
                = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN 
            = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S)
                 ? (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S) 
                     << 0x0000001fU) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        >> 1U)) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP) 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
            = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__PmSel_S)
                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D 
                   - vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddOut_D
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f99cc0303ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall)) 
               & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                  & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                     & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_stall)) 
                        & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall)) 
                           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_ready 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__id_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_ready_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f87e00c000eULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                = (0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN 
                = (0x0000003fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S)
                                   ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP)
                                   : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP) 
                                      - (IData)(1U))));
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D 
                = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
                    << 0x0000001fU) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                                       >> 1U));
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BMux_D
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fcc03c3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___nba_comb__TOP__55(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fcf03c3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___nba_comb__TOP__56(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9ffc03c3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
        if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i)))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
                    }
                }
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
                = ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                    ? ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__depc_i
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__uepc_i)
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__mepc_i
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__exc_pc))
                    : ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i)
                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_mux_i))
                            ? ((IData)(4U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o)
                            : 0U)));
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i 
            = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i 
            = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr 
            = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9fcc0fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                 & (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                    = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                             - (IData)(1U)));
            }
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                    & (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                         - (IData)(1U)));
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fcc33c3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i) 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                      | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)))))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fcc0fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = 
            (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                      | (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9fff33c3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
            if ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i) 
                     | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i)
                            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q);
                }
            } else {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
            if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                if ((3U == (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                }
            } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                if ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                }
            } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
                if ((3U == (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_rdata_i 
                                  >> 0x10U)))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2;
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
                = ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i)
                    ? 3U : 0U);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i;
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9ffc0fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q)
                ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)
                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                    : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)
                        ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i
                        : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i 
            = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fcc3fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i) 
               & (2U > ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                        + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
               | (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i) 
               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i)));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9fcc3fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o 
            = (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                        | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
            = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9ffccfc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o;
        vlSelfRef.soc_top__DOT__instr_addr = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o;
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i 
            = vlSelfRef.soc_top__DOT__instr_addr;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7f9f9fccffc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
            if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
                 & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
            }
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
               || (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o;
        vlSelfRef.soc_top__DOT__instr_req = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o;
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i 
            = vlSelfRef.soc_top__DOT__instr_req;
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9fcf3fc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top___024root___nba_comb__TOP__67(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7fff9ffccfc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_addr 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_addr 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i;
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr 
                        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i;
                }
            }
        }
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_iar_addr_local 
            = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr;
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_mid_nib 
            = (0x0000000fU & (vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_iar_addr_local 
                              >> 0x00000010U));
        vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_to_boot 
            = (0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__iar_mid_nib));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__2((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__2((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rd_word_idx 
            = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_addr 
                              >> 2U));
        vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rd_word_idx 
            = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_addr 
                              >> 2U));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9fccffc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
            = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up)
                      ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down)
                          ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                          : ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                      : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down))));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7fff9fccffc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                    if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
                        vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 1U;
                    }
                }
            }
        }
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9ffccfc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xf9fe7fff9ffcffc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__3((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__7((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        vlSelfRef.soc_top__DOT__i_instr_sram__DOT__read_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_valid) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_ready));
    }
    if (((1ULL & vlSelfRef.__VnbaTriggered[1U]) | (0xfffe7fff9ffcffc3ULL 
                                                   & vlSelfRef.__VnbaTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d 
            = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_valid) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
                }
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
            if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready))) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 4U;
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 3U;
            } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 2U;
            }
        } else if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
            if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready) {
                vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_d = 5U;
            }
        }
        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 0U;
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q))) {
                    if (((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready))) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                    } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                    } else if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                    }
                } else if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
                    if (vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_ready) {
                        vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o = 1U;
                    }
                }
            }
        }
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__read_en 
            = ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_valid) 
               & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_ready));
        vlSelfRef.soc_top__DOT__instr_gnt = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_gnt_o;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_gnt_i 
            = vlSelfRef.soc_top__DOT__instr_gnt;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_pmp 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_gnt_pmp;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_gnt_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_gnt_i;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o) 
                 & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_gnt_i)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = 1U;
            }
        }
    }
}
