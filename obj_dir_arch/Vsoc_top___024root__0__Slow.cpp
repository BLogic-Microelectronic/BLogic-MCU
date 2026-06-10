// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

VL_ATTR_COLD void Vsoc_top___024root___eval_static(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_static\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
    vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0 = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0.fill(0U);
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__1 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready__1 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__1 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__1 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_instr__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_data__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_crossbar__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_crossbar__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_crossbar__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_crossbar__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_periph_decoder__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_periph_decoder__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_gpio__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_gpio__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_timer__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_timer__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_qspi__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_qspi__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_accel__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_accel__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_boot_rom__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_boot_rom__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_instr_sram__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_instr_sram__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_data_sram__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_data_sram__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_data_sram__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_data_sram__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_sram__DOT__clk_i__0 
        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_sram__DOT__rst_ni__0 
        = vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__clk__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n__0 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n;
}

VL_ATTR_COLD void Vsoc_top___024root___eval_static__TOP(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_static__TOP\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
    vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0 = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0.fill(0U);
}

VL_ATTR_COLD void Vsoc_top___024root___eval_initial__TOP(Vsoc_top___024root* vlSelf);
VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_instr_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_data_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__boot_rom_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__periph_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsoc_top___024root___eval_initial__TOP(vlSelf);
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_instr_bus((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_data_bus((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__boot_rom_bus((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__periph_bus((&vlSymsp->TOP__soc_top__DOT__periph_bus));
}

extern const VlWide<24>/*767:0*/ Vsoc_top__ConstPool__CONST_hda9269f3_0;
extern const VlWide<32>/*1023:0*/ Vsoc_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<16>/*511:0*/ Vsoc_top__ConstPool__CONST_h93e1b771_0;

VL_ATTR_COLD void Vsoc_top___024root___eval_initial__TOP(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial__TOP\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_jump_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_stall = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_a_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_b_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_c_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_d_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_a_mux_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_b_mux_o = 2U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_mode_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_c_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_imm_mux_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_waddr_sel_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_contention = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0x0000000fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[0U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[1U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_exc_vec_pc_mux_id = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__u_trap_base_addr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__uepc_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_targ_addr_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i = 3U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_ex_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_ack_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_a_mux_sel_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_b_mux_sel_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[0U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[1U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_clpx_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_subrot_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_subword_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_signed_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_src_fmt_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_dst_fmt_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_int_fmt_o = 2U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_op_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_lat_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fp_rnd_mode_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__prepost_useincr_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_reg_offset_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_load_event_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__atop_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_target_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_start_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_cnt_mux_sel_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fp_op_group = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__check_fprm = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_op_mod = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_op = 6U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_vec_op = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_dec_cnt_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end_4_id_d = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__wb_contention_lsu = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] = 0x8a418820U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] = 0xc5a92839U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] = 0xca307b9aU;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] = 0x38bdab49U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] = 0xffbbcdebU;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__uepc_n = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_mode_n = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_n = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmpcfg_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmpaddr_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_we_int = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__ucause_n = 0U;
    VL_ASSIGN_W(768, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_reg_n, Vsoc_top__ConstPool__CONST_hda9269f3_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__pulp_clock_en_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__scan_cg_en_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__boot_addr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__mtvec_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__dm_halt_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__hart_id_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__dm_exception_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_req_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__fetch_enable_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_gnt = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_rvalid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_rdata = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_rflags = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pulp_clock_en_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__scan_cg_en_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__boot_addr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__dm_halt_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hart_id_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__dm_exception_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_busy = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_req = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_gnt_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_op = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_rvalid_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_result_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_req_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fetch_enable_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_sec_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fregs_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_err_pmp = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_err_pmp = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__scan_cg_en_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__apu_busy_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__pulp_clock_en_i = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_d = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_busy_d = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__scan_cg_en_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__boot_addr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__dm_exception_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__dm_halt_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_err_pmp_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_failed = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_err_pmp_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush_but_first = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_but_first_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_resp = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_wait_resp_flush = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_after_resp = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_cnt_delayed_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_flush_resp_delayed = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_but_first_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__testmode_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_we_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_be_i = 0x0fU;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_wdata_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_atop_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_err = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__resp_err_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__scan_cg_en_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fs_off_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__frm_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_read_regs = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_read_regs_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_dep_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_dep_for_jalr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_write_regs = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_write_regs_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_write_dep_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_busy_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_start = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_end = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_cnt = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_jump = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_req_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mcounteren_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_write_regs = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_write_regs_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_flags = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_write_regs_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_write_regs_valid_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_read_regs_valid_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_start_o = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_end_o = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt_o = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_we_masked = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_start = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_end = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_regid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__scan_cg_en_i = 0U;
    VL_ASSIGN_W(1024, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem_fp, Vsoc_top__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fs_off_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__frm_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mcounteren_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_start_addr_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end_addr_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_jump_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_read_dep_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_read_dep_for_jalr_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_write_dep_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_jump_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end_4_id_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end0_eq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end1_eq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter0_gt_1 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter1_gt_1 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter0_eq_1 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter1_eq_1 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter0_eq_0 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_counter1_eq_0 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end0_eq_pc_plus4 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end1_eq_pc_plus4 = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_start0_leq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_start1_leq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end0_geq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_end1_geq_pc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_hwlp_body = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_stall_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fflags_we = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fflags_csr = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_read_regs_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_read_regs_valid_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_read_dep = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_read_dep_for_jalr = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_write_regs_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_write_regs_valid_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_write_dep = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_apu_type = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_apu_cont = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_apu_wb = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_ready_wb = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_busy_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_req_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_gnt_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_op_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_rvalid_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_result_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_flags_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_req_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_op_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_req = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_gnt = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_result = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_waddr = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_stall = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_active = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_ready_wb_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_perf_wb_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_perf_cont_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_perf_type_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_singlecycle = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_multicycle = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_read_dep_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_read_dep_for_jalr_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_write_dep_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__fpu_fflags_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__fpu_fflags_we_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_busy_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_err_pmp_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__load_err_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__store_err_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__resp_err = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_err_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__resp_err_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__state_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__next_state = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hart_id_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__utvec = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__utvec_mode = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_addr_i = 0x00010000U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fs_off = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__frm_csr = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__fflags_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__fflags_we_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__fregs_we_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sec_lvl_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__uepc = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mcounteren = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__current_priv_lvl = 3U;
    VL_ASSIGN_W(512, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pmp_addr, Vsoc_top__ConstPool__CONST_h93e1b771_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pmp_cfg[0U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pmp_cfg[1U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pmp_cfg[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pmp_cfg[3U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hwlp_start_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hwlp_end_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hwlp_cnt_i = 0ULL;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__apu_typeconflict_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__apu_contention_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__apu_wb_i = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_o = 3U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__sec_lvl_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__fs_off_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__frm_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_mode_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__uepc_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_o = 0U;
    VL_ASSIGN_W(512, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_addr_o, Vsoc_top__ConstPool__CONST_h93e1b771_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_cfg_o[0U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_cfg_o[1U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_cfg_o[2U] = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_cfg_o[3U] = 0U;
    VL_ASSIGN_W(768, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pmp_reg_q, Vsoc_top__ConstPool__CONST_hda9269f3_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__uepc_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__ucause_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__utvec_mode_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tinfo_types = 4U;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_we_i = 0U;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_be_i = 0x0fU;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_wdata_i = 0U;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_buser = 0U;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rlast = 1U;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_ruser = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rresp = 0U;
    vlSelfRef.soc_top__DOT__uart_bresp = 0U;
    vlSelfRef.soc_top__DOT__uart_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tready = 1U;
    vlSelfRef.soc_top__DOT__gpio_bresp = 0U;
    vlSelfRef.soc_top__DOT__gpio_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__timer_bresp = 0U;
    vlSelfRef.soc_top__DOT__timer_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__qspi_bresp = 0U;
    vlSelfRef.soc_top__DOT__qspi_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__ai_bresp = 0U;
    vlSelfRef.soc_top__DOT__ai_rresp = 0U;
    vlSelfRef.soc_top__DOT__ai_m_awid = 2U;
    vlSelfRef.soc_top__DOT__ai_m_awlen = 0U;
    vlSelfRef.soc_top__DOT__ai_m_awsize = 2U;
    vlSelfRef.soc_top__DOT__ai_m_awburst = 1U;
    vlSelfRef.soc_top__DOT__ai_m_wlast = 1U;
    vlSelfRef.soc_top__DOT__ai_m_arid = 2U;
    vlSelfRef.soc_top__DOT__ai_m_arlen = 0U;
    vlSelfRef.soc_top__DOT__ai_m_arsize = 2U;
    vlSelfRef.soc_top__DOT__ai_m_arburst = 1U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awid = 2U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awlen = 0U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awsize = 2U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awburst = 1U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wlast = 1U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arid = 2U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arlen = 0U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arsize = 2U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arburst = 1U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awid = 2U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awlen = 0U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awsize = 2U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awburst = 1U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wlast = 1U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arid = 2U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arlen = 0U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arsize = 2U;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arburst = 1U;
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000100U > vlSelfRef.soc_top__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[(0x000000ffU 
                                                      & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 256, 0, "bootrom.hex"s,  &(vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] bootrom.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"soc_top.i_boot_rom"
                 , '#',32,vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[0U]
                 , '#',32,vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[1U]);
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00004000U > vlSelfRef.soc_top__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[(0x00003fffU 
                                                        & vlSelfRef.soc_top__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.soc_top__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 16384, 0, "firmware.hex"s
                 ,  &(vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] firmware.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"soc_top.i_instr_sram"
                 , '#',32,vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.soc_top__DOT__i_instr_sram__DOT__mem[1U]);
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00004000U > vlSelfRef.soc_top__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[(0x00003fffU 
                                                       & vlSelfRef.soc_top__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelfRef.soc_top__DOT__i_data_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_data_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 16384, 0, "data_mem.hex"s
                 ,  &(vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] data_mem.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"soc_top.i_data_sram"
                 , '#',32,vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.soc_top__DOT__i_data_sram__DOT__mem[1U]);
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00001e00U > vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0U;
        if (VL_LIKELY(((0x1dffU >= (0x00001fffU & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[(0x00001fffU 
                                                         & vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.soc_top__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0;
        }
        vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 7680, 0, "ai_sram_init.hex"s
                 ,  &(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] ai_sram_init.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"soc_top.i_ai_sram"
                 , '#',32,vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.soc_top__DOT__i_ai_sram__DOT__mem[1U]);
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bresp = 0U;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rresp = 0U;
}

VL_ATTR_COLD void Vsoc_top___024root___eval_final(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_final\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

VL_ATTR_COLD void Vsoc_top___024root___eval_final__TOP(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_final__TOP\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_settle\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsoc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/soc_top.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vsoc_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vsoc_top___024root___eval_triggers_vec__stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_triggers_vec__stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                                        != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__0) 
                                                       << 5U) 
                                                      | ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                          != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__0) 
                                                         << 4U)) 
                                                     | ((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                           != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0) 
                                                          << 3U) 
                                                         | ((0U 
                                                             != 
                                                             (((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                  ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U]) 
                                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                    ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U])) 
                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                   ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U])) 
                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U])) 
                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                 ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U]))) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a;
    vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__0 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vsoc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] soc_top.i_cpu.core_i.id_stage_i.controller_i.is_decoding_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vsoc_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top__ConstPool__TABLE_h11d5385c_0;
extern const VlUnpacked<CData/*3:0*/, 512> Vsoc_top__ConstPool__TABLE_h84b64dae_0;

VL_ATTR_COLD void Vsoc_top___024root___stl_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___stl_sequent__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_4;
    __VdfgRegularize_h6e95ff9d_0_4 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_27;
    __VdfgRegularize_h6e95ff9d_0_27 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_42;
    __VdfgRegularize_h6e95ff9d_0_42 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_53;
    __VdfgRegularize_h6e95ff9d_0_53 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_54;
    __VdfgRegularize_h6e95ff9d_0_54 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_56;
    __VdfgRegularize_h6e95ff9d_0_56 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_57;
    __VdfgRegularize_h6e95ff9d_0_57 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_58;
    __VdfgRegularize_h6e95ff9d_0_58 = 0;
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_valid = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.b_ready = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[40U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[41U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[42U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[43U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[44U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[45U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[46U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[47U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[48U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[49U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[50U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[51U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[52U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[53U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[54U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[55U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[56U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[57U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[58U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[59U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[60U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[61U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[62U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[63U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])))) 
                   >> 0x00000020U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__current_priv_lvl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_clpx 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_clpx_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_subrot 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__is_subrot_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_sel_subword_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_signed_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fpu_src_fmt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_src_fmt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fpu_dst_fmt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_dst_fmt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fpu_int_fmt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fpu_int_fmt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_op_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_lat_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fp_rnd_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__fp_rnd_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__prepost_useincr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_reg_offset_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__atop_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_target_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_start_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_start_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_cnt_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_cnt_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_dec_cnt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_dec_cnt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_q;
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx 
        = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb);
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb);
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tdata 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_tdr;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w = (
                                                   (3U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                                     ? 2U
                                                     : 1U));
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
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_strb 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__be_q;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.w_data 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__wdata_q;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff = 
        ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b)
          ? vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr
          : VL_SHIFTL_III(32,32,32, vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr, 8U));
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
    vlSelfRef.soc_top__DOT__gpio_in_i = vlSelfRef.gpio_in_i;
    vlSelfRef.soc_top__DOT__qspi_io_i = vlSelfRef.qspi_io_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_o[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_op_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_err_ack_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_ack_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_pipe_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_start 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_tdr_hit;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__scalar_replication_c 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__scalar_replication_c_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_imm_mux_o;
    vlSelfRef.soc_top__DOT__uart_rxd_i = vlSelfRef.uart_rxd_i;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_out_o 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_odr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__cs_no = ((0U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
                                                  | (8U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_perf_dep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_stall;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bresp 
        = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_resp;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata 
        = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rresp 
        = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_resp;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rlast 
        = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_last;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_a_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_bmask_b_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe = ((0x0eU 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe)) 
                                                  | ((((2U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
                                                       | (3U 
                                                          == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) 
                                                      | (5U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe = (0x0000000cU 
                                                  | (1U 
                                                     & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe)));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))) {
        if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (2U | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        } else if ((6U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (0x0eU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        }
        if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (0x0eU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        }
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))) {
        if ((5U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (2U | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        } else if ((6U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (0x0eU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (3U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        }
        if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe 
                = (0x0eU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe));
        }
    }
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count = 
        (0x0000007fU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr) 
                        - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count = 
        (0x0000007fU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr) 
                        - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.soc_top__DOT__ai_m_wdata = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wdata;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o = ((8U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o)) 
                                                 | (6U 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                                                          >> (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt)))));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o = (8U 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o));
    if (((5U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
         & (2U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode)))) {
        vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o = 
            ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o)) 
             | ((2U & (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                        >> (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt)) 
                       << 1U)) | (1U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                                        >> (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                                  - (IData)(1U)))))));
    } else if (((5U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
                & (3U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode)))) {
        vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o = 
            ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o)) 
             | ((2U & (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                        >> (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                  - (IData)(2U)))) 
                       << 1U)) | (1U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                                        >> (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                                  - (IData)(3U)))))));
        vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o = 
            ((3U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o)) 
             | (((2U & (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                         >> (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt)) 
                        << 1U)) | (1U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out) 
                                         >> (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                                   - (IData)(1U)))))) 
                << 2U));
    }
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o 
        = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o 
        = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 1U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o 
        = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_fsm_cs) 
                 >> 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_a_mux_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__bmask_b_mux_o;
    vlSelfRef.soc_top__DOT__ai_m_awaddr = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awaddr;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wstrb 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wstrb_q;
    vlSelfRef.soc_top__DOT__ai_m_araddr = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_araddr;
    vlSelfRef.soc_top__DOT__ai_m_arvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_load_event_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_jump_i;
    vlSelfRef.soc_top__DOT__ai_m_awvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid;
    vlSelfRef.soc_top__DOT__ai_m_wvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus2 
        = ((IData)(2U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_plus4 
        = ((IData)(4U) + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o 
        = (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    __Vtableidx5 = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rresp 
        = Vsoc_top__ConstPool__TABLE_h11d5385c_0[__Vtableidx5];
    __Vtableidx4 = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bresp 
        = Vsoc_top__ConstPool__TABLE_h11d5385c_0[__Vtableidx4];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_ex_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__csr_save_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_vec_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o 
        = (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                   >> ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                       << 5U)));
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
    vlSelfRef.soc_top__DOT__rst_ni = vlSelfRef.rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr 
        = ((IData)(4U) + (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S 
        = (1U & (~ (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__u_exc_vec_pc_mux_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_exc_vec_pc_mux_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__clk_i = vlSelfRef.clk_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
        = (0x28001040U | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                          << 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_jump_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_jump_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__hwlp_targ_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.soc_top__DOT__ai_rdata = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__uart_rdata = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__gpio_rdata = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__timer_rdata = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__qspi_rdata = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__current_priv_lvl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_load_event_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o 
        = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o 
        = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000cU));
    __VdfgRegularize_h6e95ff9d_0_23 = (1U & (~ (IData)(
                                                       (4U 
                                                        == 
                                                        (0x00000804U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))));
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__irq_o 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done;
    vlSelfRef.soc_top__DOT__i_timer__DOT__timer_irq_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena) 
           & (vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt 
              == vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_waddr_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_d 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_d_o;
    vlSelfRef.soc_top__DOT__ai_arready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__ai_m_rready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rready;
    vlSelfRef.soc_top__DOT__uart_arready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__gpio_arready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__timer_arready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__qspi_arready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__ai_awready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__ai_wready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__uart_awready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__uart_wready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__gpio_awready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__gpio_wready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__timer_awready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__timer_wready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__qspi_awready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__qspi_wready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_c 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_c_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_b 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_b_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_type_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o = 1U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o = 1U;
    }
    vlSelfRef.soc_top__DOT__ai_m_bready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bready;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o;
    vlSelfRef.soc_top__DOT__ai_bvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__uart_bvalid = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__gpio_bvalid = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__timer_bvalid = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__qspi_bvalid = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__ai_rvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__uart_rvalid = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__gpio_rvalid = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__timer_rvalid = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__qspi_rvalid = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_a 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__reg_fp_a_o;
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
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__busy_o 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__current_priv_lvl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__current_priv_lvl_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o 
        = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_i 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__gpio_in_i);
    vlSelfRef.soc_top__DOT__i_qspi__DOT__io_i = vlSelfRef.soc_top__DOT__qspi_io_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_lat_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_operands[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_operands[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_operands[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_o[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_op_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_op_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_err_ack 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_err_ack_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_pipe_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_pipe_stall;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_start;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_data_out 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_valid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid;
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux)))))))) {
        if ((0U == (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:785: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 785, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:785: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 785, "");
        }
    }
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rxd_i = vlSelfRef.soc_top__DOT__uart_rxd_i;
    vlSelfRef.soc_top__DOT__gpio_out_o = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_out_o;
    vlSelfRef.soc_top__DOT__qspi_sclk_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_o;
    vlSelfRef.soc_top__DOT__qspi_cs_no = vlSelfRef.soc_top__DOT__i_qspi__DOT__cs_no;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_apu_dep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_perf_dep_o;
    vlSelfRef.soc_top__DOT__ai_m_bid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid;
    vlSelfRef.soc_top__DOT__ai_m_bresp = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bresp;
    vlSelfRef.soc_top__DOT__ai_m_rid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid;
    vlSelfRef.soc_top__DOT__ai_m_rdata = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata;
    vlSelfRef.soc_top__DOT__ai_m_rresp = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rresp;
    vlSelfRef.soc_top__DOT__ai_m_rlast = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rlast;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_ex;
    if ((1U & (~ VL_ONEHOT_I(((2U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)) 
                                     << 1U)) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)))))) {
        if ((0U == ((2U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)) 
                           << 1U)) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:764: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 764, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:764: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_a_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 764, "");
        }
    }
    if ((1U & (~ VL_ONEHOT_I(((2U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)) 
                                     << 1U)) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)))))) {
        if ((0U == ((2U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)) 
                           << 1U)) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel)))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:770: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 770, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:770: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_bmask_b_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 770, "");
        }
    }
    vlSelfRef.soc_top__DOT__qspi_io_oe = vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_full = 
        (0x40U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_empty = 
        (0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_full = 
        (0x40U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty = 
        (0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count));
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wdata 
        = vlSelfRef.soc_top__DOT__ai_m_wdata;
    vlSelfRef.soc_top__DOT__qspi_io_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_falling 
        = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick) 
           & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_havereset_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_running_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_halted_o;
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux)))))))) {
        if ((0U == (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:749: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 749, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:749: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.id_stage_i", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 749, "");
        }
    }
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awaddr 
        = vlSelfRef.soc_top__DOT__ai_m_awaddr;
    vlSelfRef.soc_top__DOT__ai_m_wstrb = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wstrb;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_araddr 
        = vlSelfRef.soc_top__DOT__ai_m_araddr;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arvalid 
        = vlSelfRef.soc_top__DOT__ai_m_arvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb_power 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_power_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_load_event_ex;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awvalid 
        = vlSelfRef.soc_top__DOT__ai_m_awvalid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wvalid 
        = vlSelfRef.soc_top__DOT__ai_m_wvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall;
    vlSelfRef.soc_top__DOT__lite_rresp = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rresp;
    vlSelfRef.soc_top__DOT__lite_bresp = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bresp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_save_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_o;
    if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
        }
        if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o = 1U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__multicycle_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_timer__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__rst_ni = vlSelfRef.soc_top__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mepc 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__depc 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_timer__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_data_sram__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_ai_sram__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk 
        = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__clk_i = vlSelfRef.soc_top__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_jump_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mip_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mip_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_target 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_target_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rdata 
        = vlSelfRef.soc_top__DOT__ai_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rdata 
        = vlSelfRef.soc_top__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rdata 
        = vlSelfRef.soc_top__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rdata 
        = vlSelfRef.soc_top__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rdata 
        = vlSelfRef.soc_top__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rdata 
        = vlSelfRef.soc_top__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rdata 
        = vlSelfRef.soc_top__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rdata 
        = vlSelfRef.soc_top__DOT__qspi_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rdata 
        = vlSelfRef.soc_top__DOT__qspi_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_load_event_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_sec_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fetch_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreakm 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreakm_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreaku 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_ebreaku_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 6U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_23) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
              >> 5U));
    vlSelfRef.soc_top__DOT__ai_irq = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__irq_o;
    vlSelfRef.soc_top__DOT__timer_irq = vlSelfRef.soc_top__DOT__i_timer__DOT__timer_irq_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arready 
        = vlSelfRef.soc_top__DOT__ai_arready;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rready 
        = vlSelfRef.soc_top__DOT__ai_m_rready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arready 
        = vlSelfRef.soc_top__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arready 
        = vlSelfRef.soc_top__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arready 
        = vlSelfRef.soc_top__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arready 
        = vlSelfRef.soc_top__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arready 
        = vlSelfRef.soc_top__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arready 
        = vlSelfRef.soc_top__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arready 
        = vlSelfRef.soc_top__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arready 
        = vlSelfRef.soc_top__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awready 
        = vlSelfRef.soc_top__DOT__ai_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wready 
        = vlSelfRef.soc_top__DOT__ai_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awready 
        = vlSelfRef.soc_top__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awready 
        = vlSelfRef.soc_top__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wready 
        = vlSelfRef.soc_top__DOT__uart_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wready 
        = vlSelfRef.soc_top__DOT__uart_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awready 
        = vlSelfRef.soc_top__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awready 
        = vlSelfRef.soc_top__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wready 
        = vlSelfRef.soc_top__DOT__gpio_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wready 
        = vlSelfRef.soc_top__DOT__gpio_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awready 
        = vlSelfRef.soc_top__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awready 
        = vlSelfRef.soc_top__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wready 
        = vlSelfRef.soc_top__DOT__timer_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wready 
        = vlSelfRef.soc_top__DOT__timer_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awready 
        = vlSelfRef.soc_top__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awready 
        = vlSelfRef.soc_top__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wready 
        = vlSelfRef.soc_top__DOT__qspi_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wready 
        = vlSelfRef.soc_top__DOT__qspi_wready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_fw_wb_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_wb_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_type_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_wb_o;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bready 
        = vlSelfRef.soc_top__DOT__ai_m_bready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bvalid 
        = vlSelfRef.soc_top__DOT__ai_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bvalid 
        = vlSelfRef.soc_top__DOT__uart_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bvalid 
        = vlSelfRef.soc_top__DOT__uart_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bvalid 
        = vlSelfRef.soc_top__DOT__gpio_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bvalid 
        = vlSelfRef.soc_top__DOT__gpio_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bvalid 
        = vlSelfRef.soc_top__DOT__timer_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bvalid 
        = vlSelfRef.soc_top__DOT__timer_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bvalid 
        = vlSelfRef.soc_top__DOT__qspi_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bvalid 
        = vlSelfRef.soc_top__DOT__qspi_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rvalid 
        = vlSelfRef.soc_top__DOT__ai_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rvalid 
        = vlSelfRef.soc_top__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rvalid 
        = vlSelfRef.soc_top__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rvalid 
        = vlSelfRef.soc_top__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rvalid 
        = vlSelfRef.soc_top__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rvalid 
        = vlSelfRef.soc_top__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rvalid 
        = vlSelfRef.soc_top__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rvalid 
        = vlSelfRef.soc_top__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rvalid 
        = vlSelfRef.soc_top__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex;
    vlSelfRef.soc_top__DOT__ai_busy = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_single_step 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr_int 
        = (0x00000fffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_wdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__rxd_i;
    vlSelfRef.gpio_out_o = vlSelfRef.soc_top__DOT__gpio_out_o;
    vlSelfRef.qspi_sclk_o = vlSelfRef.soc_top__DOT__qspi_sclk_o;
    vlSelfRef.qspi_cs_no = vlSelfRef.soc_top__DOT__qspi_cs_no;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__apu_dep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_apu_dep;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bid 
        = vlSelfRef.soc_top__DOT__ai_m_bid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bresp 
        = vlSelfRef.soc_top__DOT__ai_m_bresp;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rid 
        = vlSelfRef.soc_top__DOT__ai_m_rid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rdata 
        = vlSelfRef.soc_top__DOT__ai_m_rdata;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rresp 
        = vlSelfRef.soc_top__DOT__ai_m_rresp;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rlast 
        = vlSelfRef.soc_top__DOT__ai_m_rlast;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_flags = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_o;
    vlSelfRef.qspi_io_oe = vlSelfRef.soc_top__DOT__qspi_io_oe;
    vlSelfRef.qspi_io_o = vlSelfRef.soc_top__DOT__qspi_io_o;
    vlSelfRef.soc_top__DOT__uart_txd_o = vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_havereset_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_havereset_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_running_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_running_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_halted_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_halted_o;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wstrb 
        = vlSelfRef.soc_top__DOT__ai_m_wstrb;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb_power;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__hpm_events 
        = (1U | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i) 
                   << 0x0000000aU) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i) 
                                       << 9U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i) 
                                                 << 8U))) 
                 | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i) 
                        << 3U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i) 
                                  << 2U)) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i))) 
                     << 4U) | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i) 
                                 << 3U) | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i) 
                                           << 2U)) 
                               | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i) 
                                  << 1U)))));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rresp 
        = vlSelfRef.soc_top__DOT__lite_rresp;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rresp 
        = vlSelfRef.soc_top__DOT__lite_rresp;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bresp 
        = vlSelfRef.soc_top__DOT__lite_bresp;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bresp 
        = vlSelfRef.soc_top__DOT__lite_bresp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_save_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_save_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_multicycle_o;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni)));
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rst 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni)));
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__mepc_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mepc;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__depc_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__depc;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
            ? (- vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D);
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__unused = 
        ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__clk_i) 
         & (IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__rst_ni));
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__clk 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__clk;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mip 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mip_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__hwlp_target;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rdata;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_c_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_sel_subword_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__imm_vec_ext_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_sec_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_sec_ctrl;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__fetch_enable;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreakm;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreaku;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o;
    vlSelfRef.soc_top__DOT__irq_vector = (((IData)(vlSelfRef.soc_top__DOT__ai_irq) 
                                           << 0x00000011U) 
                                          | ((IData)(vlSelfRef.soc_top__DOT__timer_irq) 
                                             << 0x00000010U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wready 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i;
    __VdfgRegularize_h6e95ff9d_0_40 = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i)) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_fw_wb_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_wb;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bvalid;
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
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
           & (2U > (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active 
        = vlSelfRef.soc_top__DOT__ai_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_single_step;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
              == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr_int;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i)
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
               + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i);
    vlSelfRef.uart_txd_o = vlSelfRef.soc_top__DOT__uart_txd_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_havereset_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_havereset_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_running_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_running_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__debug_halted_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_halted_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_power_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rresp 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rresp;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rresp 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rresp;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bresp 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bresp;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bresp 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bresp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_if_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_if;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__rst_ni;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk_ungated_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk_i;
    if ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
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
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else if ((2U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__clk_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mip;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_target_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__hwlp_target_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i)));
    vlSelfRef.soc_top__DOT__lite_rdata = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
        = ((IData)(1U) << (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o;
    __VdfgRegularize_h6e95ff9d_0_56 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__fetch_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fetch_enable_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_irq_enable;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_irq_enable;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_i = vlSelfRef.soc_top__DOT__irq_vector;
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
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c 
            = (0x00000001ffffffffULL & VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword_i))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed_i;
    }
    __VdfgRegularize_h6e95ff9d_0_51 = (IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_52 = (IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                >> 1U) 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_53 = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_54 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                       & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x0000001fU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel 
        = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first 
        = ((IData)(0xfffffffeU) << (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu 
        = (1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o 
        = __VdfgRegularize_h6e95ff9d_0_40;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o 
        = __VdfgRegularize_h6e95ff9d_0_40;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_fw 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_wb_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.soc_top__DOT__lite_bvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bvalid;
    vlSelfRef.soc_top__DOT__lite_rvalid = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
           | (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_valid));
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rvalid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_valid));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_mode;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__trigger_match_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI 
        = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed 
        = (0x28U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min 
        = ((0x17U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x10U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x11U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (0x16U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    __Vtableidx2 = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i) 
                     << 7U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vsoc_top__ConstPool__TABLE_h84b64dae_0[__Vtableidx2];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed 
        = (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i));
    __VdfgRegularize_h6e95ff9d_0_38 = ((0x19U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x18U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    __VdfgRegularize_h6e95ff9d_0_37 = ((0x31U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | ((0x30U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((0x19U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((0x1dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
              | ((0x1bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i) 
                    | (0x1fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))));
    __VdfgRegularize_h6e95ff9d_0_17 = ((0x1dU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                                       | (0x1cU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_iz_type 
        = VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr, 0x00000014U);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_z_type 
        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x0000000fU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s_type 
        = (((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | ((0x00000fe0U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000014U)) | (0x0000001fU 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                     >> 7U))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_u_type 
        = (0xfffff000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_bi_type 
        = (((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 5U) 
           | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000014U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_clip_type 
        = (((IData)(1U) << (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000014U))) 
           - (IData)(1U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type 
        = ((((0x00000300U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                             >> 0x00000013U)) | (3U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                    >> 0x00000017U))) 
            << 0x00000010U) | ((0x00000300U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                               >> 0x0000000dU)) 
                               | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                         >> 0x00000013U)) 
                                  | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000019U)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type 
        = ((0x00010000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                           >> 4U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                            >> 0x00000019U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type 
        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000014U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                          >> 0x00000019U));
    __VdfgRegularize_h6e95ff9d_0_26 = ((0x0000003eU 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                           >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                >> 0x00000019U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type 
        = (((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000dU) 
           | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x0000001eU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                 >> 7U))) 
               << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                                  >> 0x00000014U)) 
                                  | (0x0000001eU & 
                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                      >> 7U)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type 
        = (((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x00000014U) 
           | ((((0x000001feU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x0000000bU)) | 
                (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                       >> 0x00000014U))) << 0x0000000bU) 
              | (0x000007feU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                >> 0x00000014U))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
              >> 0x00000014U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_d) 
            << 5U) | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 7U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_b) 
            << 5U) | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x00000014U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_fp_a) 
            << 5U) | (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0000000fU)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
        = (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
               >> 0x00000018U) == (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
        = (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                           ? ((0U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                               ? 1U : ((1U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                 ? 4U
                                                 : 8U)))
                           : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))
                               ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? 1U : ((0U == (3U 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                             ? 6U : 
                                            ((2U == 
                                              (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                              ? 0x0cU
                                              : 8U))))
                               : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st)
                                   ? ((1U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                ? 3U
                                                : (7U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))
                                   : (((1U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                    ? 0x0cU
                                                    : 8U)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 0U;
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i) 
         & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)))) {
        if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((0U != (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i))) {
            if ((3U == (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o = 1U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i)
            ? (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__mult_multicycle_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk_ungated_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mip_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__hwlp_target_i;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata 
        = vlSelfRef.soc_top__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata 
        = vlSelfRef.soc_top__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round 
        = ((- (IData)((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) 
           & VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp, 1U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
            ? (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex) 
                << 0x00000010U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex))
            : (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                << 0x00000018U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                    << 0x00000010U) 
                                   | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                       << 8U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__u_ie_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__irq_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                     >> 0x0000000fU))) 
                             | (((IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                           >> 1U) & 
                                          (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                           >> 0x00000017U))) 
                                 << 8U) | (0x000000ffU 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                              >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_51) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                      << 1U))) 
                                               | (((IData)(
                                                           (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                             >> 1U) 
                                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                               >> 7U))) 
                                                   << 8U) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
        = (((QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_52) 
                              << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i 
                                                 >> 0x00000010U)))) 
            << 0x00000011U) | (QData)((IData)((((IData)(__VdfgRegularize_h6e95ff9d_0_51) 
                                                << 0x00000010U) 
                                               | (0x0000ffffU 
                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_a_i)))));
    __VdfgRegularize_h6e95ff9d_0_58 = (((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
        = (((QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                               << 0x00000011U) | (0x0001fe00U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                     >> 0x0000000fU))) 
                             | ((0x00000100U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                 << 8U) 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                   >> 0x0000000fU))) 
                                | (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                  >> 0x00000010U)))))) 
            << 0x00000012U) | (QData)((IData)(((((IData)(__VdfgRegularize_h6e95ff9d_0_53) 
                                                 << 0x00000011U) 
                                                | (0x0001fe00U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                      << 1U))) 
                                               | ((0x00000100U 
                                                   & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_signed_i) 
                                                       << 8U) 
                                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                                         << 1U))) 
                                                  | (0x000000ffU 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i))))));
    __VdfgRegularize_h6e95ff9d_0_57 = (((IData)(__VdfgRegularize_h6e95ff9d_0_54) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_b_i 
                                          >> 0x00000010U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))));
                            } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 1U))) 
                                             << 4U)));
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                      << 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:593: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 593, "");
                                    }
                                }
                            }
                            if ((0x3eU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))
                                    ? 0x0eU : 0x0cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 8U)))) 
                                      << 2U));
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
                        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                << 1U)))));
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:653: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 653, "");
                                }
                            }
                        }
                        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x12U)))) 
                                          << 2U));
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                  >> 0x11U)))) 
                                          << 2U));
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                    >> 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:535: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 535, "");
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:633: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 633, "");
                                }
                            }
                        }
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    } else {
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:613: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 613, "");
                                }
                            }
                        }
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                        } else {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                            if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))
                                        ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))
                                            ? 7U : 0x0bU)
                                        : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))
                                            ? 0x0dU
                                            : 0x0eU));
                            } else if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i)))) 
                                          << 2U));
                                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__imm_vec_ext_i))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:554: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i));
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
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)) 
                                << 1U) | (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:863: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 863, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first) 
           << (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
           ^ (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
           & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw_power 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_fw;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid 
        = vlSelfRef.soc_top__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid 
        = vlSelfRef.soc_top__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid 
        = vlSelfRef.soc_top__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid 
        = vlSelfRef.soc_top__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_valid_i;
    vlSelfRef.soc_top__DOT__ai_m_bvalid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bvalid;
    vlSelfRef.soc_top__DOT__ai_m_rvalid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rvalid;
    __VdfgRegularize_h6e95ff9d_0_27 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_mode_i) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__trigger_match;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                               >> 0x0000001fU) & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           >> 0x0000000fU) 
                                          & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                       >> 7U) 
                                                      & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             << 1U) 
                                                            & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i)), 
                                                       ((0x00000100U 
                                                         & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_signed) 
           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
              >> 0x0000001fU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_37));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_37) 
              | ((0x27U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x37U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x35U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x49U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
              | ((0x24U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_17))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_38) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
              | ((0x1bU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 | ((0x1eU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                    | ((0x1fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                       | (0x1aU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffle_type 
        = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleb_type
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_shuffleh_type);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_id 
        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_mux)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id_imm 
        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type 
                          & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_mux)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id_imm 
        = (0x0000001fU & ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                           ? (1U & (- (IData)((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux)))))
                           : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_mux))
                               ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s3_type
                               : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_s2_type)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vs_type 
        = (((- (IData)((1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                              >> 0x00000018U)))) << 6U) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_26));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type 
        = __VdfgRegularize_h6e95ff9d_0_26;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_mux_sel)
            ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id)
            : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id));
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
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0 = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
            : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))
                : ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                     >> 7U)))))))
            : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
           & (- (IData)((0x17U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate)
            ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? (~ ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                       << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                                          >> 0x00000010U)))
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
        = (((((((0x0000000cU & (VL_COUNTONES_I((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                >> 0x0000001eU)) 
                                << 2U)) | (3U & VL_COUNTONES_I(
                                                               (3U 
                                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                   >> 0x0000001cU))))) 
               << 0x0000000cU) | (((0x0000000cU & (
                                                   VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x0000001aU))) 
                                                   << 2U)) 
                                   | (3U & VL_COUNTONES_I(
                                                          (3U 
                                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                              >> 0x00000018U))))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 0x00000016U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000014U))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (VL_COUNTONES_I(
                                                                   (3U 
                                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                       >> 0x00000012U))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                        >> 0x00000010U))))))) 
            << 0x00000010U) | (((((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000eU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 0x0000000cU))))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 0x0000000aU))) 
                                                  << 2U)) 
                                  | (3U & VL_COUNTONES_I(
                                                         (3U 
                                                          & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                             >> 8U))))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (VL_COUNTONES_I(
                                                                 (3U 
                                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                     >> 6U))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 4U))))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (VL_COUNTONES_I(
                                                                  (3U 
                                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i 
                                                                      >> 2U))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & VL_COUNTONES_I(
                                                                   (3U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__in_i)))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 0x00000018U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                       >> 8U)) : ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                    << 8U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i 
                              >> 0x00000018U)) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_ex_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__rst_n;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rdata;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rdata 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__irq_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg 
        = (0x0001ffffU & ((IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a 
                                   >> 0x00000011U)) 
                          ^ (- (IData)(((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i)) 
                                        & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0xfffc0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (0x0003ffffU & VL_MULS_III(18, (0x0003ffffU 
                                             & VL_EXTENDS_II(18,9, 
                                                             (0x000001ffU 
                                                              & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a)))), 
                                        (0x0003ffffU 
                                         & VL_EXTENDS_II(18,9, 
                                                         (0x000001ffU 
                                                          & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b)))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
        = ((0x0003ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 9U))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 9U)))))) 
              << 0x00000012U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xfffffff0U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x0000000fU & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 9U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 9U)))))) 
                             >> 0x0000000eU)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0xffc0000fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (0x003ffff0U & (VL_MULS_III(18, (0x0003ffffU 
                                              & VL_EXTENDS_II(18,9, 
                                                              (0x000001ffU 
                                                               & (IData)(
                                                                         (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                          >> 0x00000012U))))), 
                                         (0x0003ffffU 
                                          & VL_EXTENDS_II(18,9, 
                                                          (0x000001ffU 
                                                           & (IData)(
                                                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                      >> 0x00000012U)))))) 
                             << 4U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
        = ((0x003fffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U]) 
           | (VL_MULS_III(18, (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                          (0x0003ffffU & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
              << 0x00000016U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
        = (0x000000ffU & (VL_MULS_III(18, (0x0003ffffU 
                                           & VL_EXTENDS_II(18,9, 
                                                           (0x000001ffU 
                                                            & (IData)(
                                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_a 
                                                                       >> 0x0000001bU))))), 
                                      (0x0003ffffU 
                                       & VL_EXTENDS_II(18,9, 
                                                       (0x000001ffU 
                                                        & (IData)(
                                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_op_b 
                                                                   >> 0x0000001bU)))))) 
                          >> 0x0000000aU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
        = (((QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_56)
                              ? __VdfgRegularize_h6e95ff9d_0_58
                              : __VdfgRegularize_h6e95ff9d_0_57))) 
            << 0x00000011U) | (QData)((IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_56)
                                                ? __VdfgRegularize_h6e95ff9d_0_57
                                                : __VdfgRegularize_h6e95ff9d_0_58))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bset_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
        = (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value 
        = ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_17) 
                       | ((0x1fU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                          | (0x1eU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))))) 
           & VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
           + (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_b_msu 
              + VL_MULS_III(32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_op_a_msu)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw_power;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__ready_o;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_bvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_bvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rvalid 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__lite_rvalid;
    vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__s_rvalid 
        = vlSelfRef.soc_top__DOT__i_axi_lite_bridge__DOT__m_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__lsu_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_req_o;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bvalid 
        = vlSelfRef.soc_top__DOT__ai_m_bvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rvalid 
        = vlSelfRef.soc_top__DOT__ai_m_rvalid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__trigger_match_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__InVld_SI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id 
        = (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type);
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1953U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_27));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we 
        = (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[1954U] 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_27));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcounteren_we 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[774U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_we 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[800U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[803U] 
              | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[804U] 
                 | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[805U] 
                    | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[806U] 
                       | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[807U] 
                          | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[808U] 
                             | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[809U] 
                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[810U] 
                                   | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[811U] 
                                      | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[812U] 
                                         | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[813U] 
                                            | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[814U] 
                                               | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[815U] 
                                                  | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[816U] 
                                                     | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[817U] 
                                                        | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[818U] 
                                                           | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[819U] 
                                                              | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[820U] 
                                                                 | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[821U] 
                                                                    | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[822U] 
                                                                       | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[823U] 
                                                                          | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[824U] 
                                                                             | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[825U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[826U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[827U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[828U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[829U] 
                                                                                | (vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[830U] 
                                                                                | vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[831U])))))))))))))))))))))))))))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
            ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i))
                ? ((~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i) 
                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
                   | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[772U])
            ? (0xffff0888U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                      >> 8U) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                  >> 8U)
                                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                   >> 8U)
                                                   : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
        = ((((0x0000ff00U & (((0x00000080U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                               ? ((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000018U)
                                   : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 0x00000010U))
                               : ((0x00000040U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                   ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                      >> 8U) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                             << 8U)) | (0x000000ffU 
                                        & ((0x00000020U 
                                            & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                            ? ((0x00000010U 
                                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                            : ((0x00000010U 
                                                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))) 
            << 0x00000010U) | ((0x0000ff00U & (((8U 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000018U)
                                                  : 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 0x00000010U))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                  >> 8U)
                                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)) 
                                               << 8U)) 
                               | (0x000000ffU & ((2U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000018U)
                                                   : 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 0x00000010U))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                   >> 8U)
                                                   : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_eq);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
            | (0x16U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
        = (((((0x00000038U & (((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                >> 0x0000001eU) + (3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x0000001cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000001aU)) 
                                               + (3U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 0x00000018U))))) 
             << 0x00000012U) | (((0x00000038U & (((3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000016U)) 
                                                  + 
                                                  (3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                      >> 0x00000014U))) 
                                                 << 3U)) 
                                 | (7U & ((3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 0x00000012U)) 
                                          + (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x00000010U))))) 
                                << 0x0000000cU)) | 
           ((((0x00000038U & (((3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                      >> 0x0000000eU)) 
                               + (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                        >> 0x0000000cU))) 
                              << 3U)) | (7U & ((3U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                   >> 0x0000000aU)) 
                                               + (3U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                     >> 8U))))) 
             << 6U) | ((0x00000038U & (((3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                               >> 6U)) 
                                        + (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                 >> 4U))) 
                                       << 3U)) | (7U 
                                                  & ((3U 
                                                      & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1 
                                                         >> 2U)) 
                                                     + 
                                                     (3U 
                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l1))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg
            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i)
                ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
                    << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                       >> 0x00000010U))
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                     | (0x16U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))))))) {
        if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i;
    } else if ((((0x30U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x32U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x37U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)) 
                 || (0x33U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) 
                || (0x35U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                >> 0x1fU) ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_neg_rev
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_addr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
           + (VL_EXTENDS_II(32,18, (0x0003ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U])) 
              + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                       & ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                           << 0x0000000eU) 
                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[0U] 
                                             >> 0x00000012U)))) 
                 + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                          & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                             >> 4U))) 
                    + VL_EXTENDS_II(32,18, (0x0003ffffU 
                                            & ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[2U] 
                                                << 0x0000000aU) 
                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_mul[1U] 
                                                  >> 0x00000016U))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U] 
        = (IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                       (0x00000003ffffffffULL 
                                                        & VL_EXTENDS_QI(34,17, 
                                                                        (0x0001ffffU 
                                                                         & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | (IData)(((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a)))), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b)))))) 
                      >> 0x00000020U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
        = ((3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U]) 
           | ((IData)((0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                           (0x00000003ffffffffULL 
                                                            & VL_EXTENDS_QI(34,17, 
                                                                            (0x0001ffffU 
                                                                             & (IData)(
                                                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U)))))))) 
              << 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
        = (0x0000000fU & (((IData)((0x00000003ffffffffULL 
                                    & VL_MULS_QQQ(34, 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                  (0x00000003ffffffffULL 
                                                   & VL_EXTENDS_QI(34,17, 
                                                                   (0x0001ffffU 
                                                                    & (IData)(
                                                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                               >> 0x00000011U)))))))) 
                           >> 0x0000001eU) | ((IData)(
                                                      ((0x00000003ffffffffULL 
                                                        & VL_MULS_QQQ(34, 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_a_1_neg)), 
                                                                      (0x00000003ffffffffULL 
                                                                       & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & (IData)(
                                                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                                                >> 0x00000011U))))))) 
                                                       >> 0x00000020U)) 
                                              << 2U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
        = VL_EXTENDS_II(32,17, (0x0001ffffU & (IData)(
                                                      (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b 
                                                       >> 0x00000011U))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_o;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i) 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__trigger_match_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__do_min)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                                      >> 1U)))) {
                            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                           ? (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (1U 
                                                 & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpCode_SI) 
                                                    & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBSign_SI) 
                                                       ^ 
                                                       (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
                                                        >> 0x0000001fU))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_b_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_a_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_bypass_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                               ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                  >> 0x00000018U) : 
                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                   >> 0x00000010U) : 
                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                 ? 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1
                                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3 
        = ((((0x000000f0U & (((7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                     >> 0x00000015U)) 
                              + (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                       >> 0x00000012U))) 
                             << 4U)) | (0x0000000fU 
                                        & ((7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                  >> 0x0000000fU)) 
                                           + (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                               >> 0x0000000cU))))) 
            << 8U) | ((0x000000f0U & (((7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                              >> 9U)) 
                                       + (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                >> 6U))) 
                                      << 4U)) | (0x0000000fU 
                                                 & ((7U 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2 
                                                        >> 3U)) 
                                                    + 
                                                    (7U 
                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l2)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i))))))
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_we_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_start 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__p_elw_start_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
              | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_41)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o 
        = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                 >> 3U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mie_bypass;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                  >> 0x00000018U) : 
                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                   >> 0x00000010U) : 
                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_result
                                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4 
        = ((0x000003e0U & (((0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                            >> 0x0000000cU)) 
                            + (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                              >> 8U))) 
                           << 5U)) | (0x0000001fU & 
                                      ((0x0000000fU 
                                        & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3) 
                                           >> 4U)) 
                                       + (0x0000000fU 
                                          & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l3)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U]) 
                                    + (VL_EXTENDS_QI(33,32, 
                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
                                                       << 0x0000001eU) 
                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
                                                         >> 2U))) 
                                       + VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator))));
    vlSelfRef.soc_top__DOT__data_we = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__p_elw_start_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__p_elw_start;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_req_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mie_bypass_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o 
        = (0x0000003fU & ((0x0000001fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4) 
                                          >> 5U)) + 
                          (0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
           + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i)));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i 
        = vlSelfRef.soc_top__DOT__data_we;
    vlSelfRef.soc_top__DOT__data_req = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_p_elw_no_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_p_elw_no_sleep_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__debug_wfi_no_sleep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o 
        = (0U != (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_i 
                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__mie_bypass_i 
           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                  >> 0x00000018U) : 
                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                   >> 0x00000010U) : 
                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                                 >> 8U)
                                                 : 
                                                (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i
                                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_be_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_req_i 
        = vlSelfRef.soc_top__DOT__data_req;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_decision 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_wu_ctrl_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI 
        = (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clip_result 
        = ((0x17U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                         >> 0x0000001fU)))))))
            : (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                   >> 0x00000024U)) ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
        = ((0x26U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? (((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
            : (((QData)((IData)((- (IData)(((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                               >> 0x0000001fU)))))) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a))));
    vlSelfRef.soc_top__DOT__data_be = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__data_addr = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_addr_o;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid = 0U;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_decision;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_wu_ctrl;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_id_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_req_ctrl_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBIsZero_SI) 
            | (0U != vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_be_i 
        = vlSelfRef.soc_top__DOT__data_be;
    vlSelfRef.soc_top__DOT__data_wdata = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i 
        = vlSelfRef.soc_top__DOT__data_addr;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
               + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_uj_type)
            : ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_sb_type)
                : (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
                   + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id)));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_apu_stall 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o) 
                 >> 1U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rb_id))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_ra_id))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_pending) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_wu_ctrl_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_id_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__irq_req_ctrl_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__be_q;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_wdata_i 
        = vlSelfRef.soc_top__DOT__data_wdata;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__addr_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_wfi_no_sleep_o)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_dec_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_b_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
           & ((0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
              & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_wb_i) 
                 == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_transfer_insn_in_dec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_dec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wake_from_sleep_o;
    vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__wdata_q;
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
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_ar_addr_local 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__cpu_aw_addr_local 
        = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_b_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 2U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
           [(0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i))] 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__raddr_c_i) 
                                  >> 5U))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_c_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_c_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_c_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__ctrl_transfer_insn_in_dec_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ctrl_transfer_insn_in_dec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 2U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_b_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 1U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o = 0U;
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) {
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o = 1U;
        }
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i) {
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wake_from_sleep_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_b_fw_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rc_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rdata_c_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_a_fw_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jr_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph 
        = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph 
        = (4U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__operand_c_fw_mux_sel_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__wake_from_sleep_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q)));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_to_periph)) 
           & ((0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_high_nib)) 
              & (3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__ar_addr_mid_nib))));
    __VdfgRegularize_h6e95ff9d_0_42 = ((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph)) 
                                       & (0U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_high_nib)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clock_en;
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = ((3U == (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_addr_mid_nib)) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_42));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__core_sleep_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_sleep_o;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_i)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_i;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_periph) 
                                                     | ((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram) 
                                                        | (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram)))));
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

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__data_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_sequent__TOP__1(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_sequent__TOP__2(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_sequent__TOP__3(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__2(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__3(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__4(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__5(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__6(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__7(Vsoc_top___024root* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__8(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___ico_comb__TOP__10(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top___024root___eval_stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vsoc_top___024root___stl_sequent__TOP__0(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__data_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__data_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__0((&vlSymsp->TOP__soc_top__DOT__periph_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
        Vsoc_top___024root___ico_sequent__TOP__1(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__ai_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__ai_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__1((&vlSymsp->TOP__soc_top__DOT__periph_bus));
        Vsoc_top___024root___ico_sequent__TOP__2(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1((&vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__1((&vlSymsp->TOP__soc_top__DOT__cpu_data_bus));
        Vsoc_top___024root___ico_sequent__TOP__3(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
            = ((0x00010000U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                << 0x00000010U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                   << 1U))) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                  ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                     >> 0x00000010U)
                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x0000000000000020ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000cULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VstlTriggered[1U] | vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x0000000000000030ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__7(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
        Vsoc_top___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000eULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000003cULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__10(vlSelf);
    }
}

VL_ATTR_COLD bool Vsoc_top___024root___eval_phase__stl(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__stl\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsoc_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vsoc_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vsoc_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vsoc_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] soc_top.i_cpu.core_i.id_stage_i.controller_i.is_decoding_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vsoc_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] soc_top.i_cpu.core_i.id_stage_i.controller_i.is_decoding_o)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_a)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @([hybrid] soc_top.i_cpu.core_i.ex_stage_i.mult_i.short_op_b)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge soc_top.i_cpu.core_i.sleep_unit_i.clk_ungated_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge soc_top.i_cpu.core_i.sleep_unit_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(posedge soc_top.i_cpu.core_i.if_stage_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(negedge soc_top.i_cpu.core_i.if_stage_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(posedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.prefetch_controller_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(negedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.prefetch_controller_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(posedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.fifo_i.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(negedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.fifo_i.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(posedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.instruction_obi_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(negedge soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.instruction_obi_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(posedge soc_top.i_cpu.core_i.if_stage_i.aligner_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(negedge soc_top.i_cpu.core_i.if_stage_i.aligner_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(posedge soc_top.i_cpu.core_i.id_stage_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(negedge soc_top.i_cpu.core_i.id_stage_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(posedge soc_top.i_cpu.core_i.id_stage_i.register_file_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(negedge soc_top.i_cpu.core_i.id_stage_i.register_file_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(posedge soc_top.i_cpu.core_i.id_stage_i.controller_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(negedge soc_top.i_cpu.core_i.id_stage_i.controller_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(posedge soc_top.i_cpu.core_i.id_stage_i.controller_i.clk_ungated_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @(posedge soc_top.i_cpu.core_i.id_stage_i.int_controller_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @(negedge soc_top.i_cpu.core_i.id_stage_i.int_controller_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @(posedge soc_top.i_cpu.core_i.ex_stage_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @(negedge soc_top.i_cpu.core_i.ex_stage_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @(posedge soc_top.i_cpu.core_i.ex_stage_i.alu_i.alu_div_i.Clk_CI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @(negedge soc_top.i_cpu.core_i.ex_stage_i.alu_i.alu_div_i.Rst_RBI)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @(posedge soc_top.i_cpu.core_i.ex_stage_i.mult_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @(negedge soc_top.i_cpu.core_i.ex_stage_i.mult_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @(posedge soc_top.i_cpu.core_i.load_store_unit_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @(negedge soc_top.i_cpu.core_i.load_store_unit_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @(posedge soc_top.i_cpu.core_i.cs_registers_i.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @(negedge soc_top.i_cpu.core_i.cs_registers_i.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @(posedge soc_top.i_obi_axi_instr.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @(negedge soc_top.i_obi_axi_instr.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @(posedge soc_top.i_obi_axi_data.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000028U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 40 is active: @(negedge soc_top.i_obi_axi_data.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000029U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 41 is active: @(posedge soc_top.i_crossbar.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 42 is active: @(negedge soc_top.i_crossbar.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 43 is active: @(posedge soc_top.i_periph_decoder.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 44 is active: @(negedge soc_top.i_periph_decoder.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 45 is active: @(posedge soc_top.i_uart_0.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 46 is active: @(negedge soc_top.i_uart_0.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 47 is active: @(posedge soc_top.i_uart_0.i_uart_tx.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000030U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 48 is active: @(posedge soc_top.i_uart_0.i_uart_rx.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000031U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 49 is active: @(posedge soc_top.i_gpio.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000032U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 50 is active: @(negedge soc_top.i_gpio.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000033U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 51 is active: @(posedge soc_top.i_timer.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000034U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 52 is active: @(negedge soc_top.i_timer.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000035U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 53 is active: @(posedge soc_top.i_qspi.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000036U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 54 is active: @(negedge soc_top.i_qspi.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000037U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 55 is active: @(posedge soc_top.i_ai_accel.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000038U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 56 is active: @(negedge soc_top.i_ai_accel.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000039U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 57 is active: @(posedge soc_top.i_boot_rom.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 58 is active: @(negedge soc_top.i_boot_rom.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 59 is active: @(posedge soc_top.i_instr_sram.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 60 is active: @(negedge soc_top.i_instr_sram.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 61 is active: @(posedge soc_top.i_data_sram.clk_i)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 62 is active: @(negedge soc_top.i_data_sram.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 63 is active: @(posedge soc_top.i_ai_sram.clk_i)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @(negedge soc_top.i_ai_sram.rst_ni)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @(posedge soc_top.i_protocol_checkers.i_chk_periph.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @(negedge soc_top.i_protocol_checkers.i_chk_periph.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @(posedge soc_top.i_protocol_checkers.i_chk_uart.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @(negedge soc_top.i_protocol_checkers.i_chk_uart.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @(posedge soc_top.i_protocol_checkers.i_chk_gpio.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 70 is active: @(negedge soc_top.i_protocol_checkers.i_chk_gpio.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 71 is active: @(posedge soc_top.i_protocol_checkers.i_chk_timer.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 72 is active: @(negedge soc_top.i_protocol_checkers.i_chk_timer.rst_n)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 73 is active: @(posedge soc_top.i_protocol_checkers.i_chk_qspi.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 74 is active: @(negedge soc_top.i_protocol_checkers.i_chk_qspi.rst_n)\n");
    }
}
#endif  // VL_DEBUG
