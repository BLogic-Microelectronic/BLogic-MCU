// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

void Vboot_flow_test_tb___024root___timing_ready(Vboot_flow_test_tb___024root* vlSelf);

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_static(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_static\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__clk = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__resetn = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__uart_rx = 1U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->boot_flow_test_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15213907182006033054ull);
    vlSelfRef.boot_flow_test_tb__DOT__received = ""s;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__resetn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h8f08237f__1 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__qspi_cs_n__0 
        = vlSelfRef.boot_flow_test_tb__DOT__qspi_cs_n;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 1U;
    Vboot_flow_test_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_static__TOP(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_static__TOP\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__clk = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__resetn = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__uart_rx = 1U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->boot_flow_test_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15213907182006033054ull);
    vlSelfRef.boot_flow_test_tb__DOT__received = ""s;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_initial__TOP(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_initial__TOP\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i;
    boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i;
    boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i;
    boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i;
    boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i;
    boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0x0000000fU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0x0000ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000100U > boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[(0x000000ffU 
                                                                          & boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)] = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 256, 0, "bootrom.hex"s,  &(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] bootrom.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_boot_rom"
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[0U]
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[1U]);
    boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[(0x000007ffU 
                                                                            & boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "firmware.hex"s
                 ,  &(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] firmware.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_instr_sram"
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[1U]);
    boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[(0x000007ffU 
                                                                           & boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "data_mem.hex"s
                 ,  &(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] data_mem.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_data_sram"
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[1U]);
    boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00001e00U > boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0U;
        if (VL_LIKELY(((0x1dffU >= (0x00001fffU & boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[(0x00001fffU 
                                                                             & boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0;
        }
        boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 7680, 0, "ai_sram_init.hex"s
                 ,  &(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] ai_sram_init.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_ai_sram"
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[1U]);
    boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00002000U, boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__memory[(0x00001fffU 
                                                              & boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i)] = 0xffU;
        boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + boot_flow_test_tb__DOT__flash__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 8, 8192, 0, "flash.hex"s,  &(vlSelfRef.boot_flow_test_tb__DOT__flash__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[FLASH] flash.hex yuklendi (8192 byte)\n",0);
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_final(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_final\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_final__TOP(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_final__TOP\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_flow_test_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vboot_flow_test_tb___024root___eval_phase__stl(Vboot_flow_test_tb___024root* vlSelf);

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_settle(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_settle\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vboot_flow_test_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verif/tb/boot_flow_test_tb.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vboot_flow_test_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_triggers_vec__stl(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_triggers_vec__stl\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vboot_flow_test_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_flow_test_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vboot_flow_test_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vboot_flow_test_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 512> Vboot_flow_test_tb__ConstPool__TABLE_h84b64dae_0;

VL_ATTR_COLD void Vboot_flow_test_tb___024root___stl_sequent__TOP__0(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = 0;
    QData/*36:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = 0;
    CData/*7:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0;
    CData/*3:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0;
    CData/*4:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result = 0;
    CData/*5:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D = 0;
    QData/*33:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = 0;
    CData/*4:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0;
    QData/*32:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = 0;
    SData/*15:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = 0;
    IData/*16:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ = 0;
    CData/*1:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int = 0;
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata = 0;
    CData/*0:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0;
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
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_21;
    __VdfgRegularize_h6e95ff9d_0_21 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_34;
    __VdfgRegularize_h6e95ff9d_0_34 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_35;
    __VdfgRegularize_h6e95ff9d_0_35 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_36;
    __VdfgRegularize_h6e95ff9d_0_36 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    SData/*15:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_48;
    __VdfgRegularize_h6e95ff9d_0_48 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    IData/*16:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                               << 2U) | (((1U == (3U 
                                                  & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))))) {
        if ((0U != (((2U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                     << 2U) | (((1U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                << 1U) | (0U == (3U 
                                                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:863: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 863, "");
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__qspi_cs_n = (
                                                   (0U 
                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                                                   | (8U 
                                                      == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr) 
                          - (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr) 
                          - (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.boot_flow_test_tb__DOT__flash_mosi = 
        (1U & ((~ ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                   | ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                      | ((5U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                         | (4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)))))) 
               | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                  >> (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 1U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : ((((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                            << 1U)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 1U))) 
                    << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 1U)) | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 3U))) 
                              << 4U)) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 3U)) 
                                           | (1U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U))) 
                                          << 2U) | 
                                         ((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 5U)) 
                                          | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 7U))))) 
                 << 0x00000018U) | ((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 7U)) 
                                        | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 9U))) 
                                       << 6U) | (((2U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 9U)) 
                                                  | (1U 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                        >> 0x0000000bU))) 
                                                 << 4U)) 
                                     | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU))) 
                                         << 2U) | (
                                                   (2U 
                                                    & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                         >> 0x0000000fU))))) 
                                    << 0x00000010U)) 
               | (((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                              >> 0x0000000fU)) | (1U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x00000011U))) 
                      << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        >> 0x00000011U)) 
                                 | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                          >> 0x00000013U))) 
                                << 4U)) | ((((2U & 
                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x00000013U)) 
                                             | (1U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x00000015U))) 
                                            << 2U) 
                                           | ((2U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U)) 
                                              | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000017U))))) 
                   << 8U) | (((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x00000017U)) 
                                | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x00000019U))) 
                               << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x00000019U)) 
                                          | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000001bU))) 
                                         << 4U)) | 
                             ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x0000001bU)) 
                                | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x0000001dU))) 
                               << 2U) | ((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x0000001dU)) 
                                         | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                            >> 0x0000001fU)))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    if ((0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
        if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else {
            if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            }
            if ((2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                }
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_45 = (IData)((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_46 = (IData)((((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_50 = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex) 
                                       & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    __VdfgRegularize_h6e95ff9d_0_47 = (1U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                             & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_48 = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x0000001fU));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__irq_vector 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done) 
            << 0x00000011U) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_ena) 
                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                                   == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_are)) 
                               << 0x00000010U));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0U;
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        if ((1U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x0000003fU & ((0x0000001fU & ((0x0000000fU 
                                           & ((7U & 
                                               ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                   >> 0x0000001eU))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                        >> 0x0000001cU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000001aU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000018U)))))))) 
                                          + (0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000016U)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000014U)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000012U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000010U)))))))))) 
                          + (0x0000001fU & ((0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000eU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000cU)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x0000000aU)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 8U)))))))) 
                                            + (0x0000000fU 
                                               & ((7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 6U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 4U)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 2U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)))))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex));
    __Vtableidx2 = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vboot_flow_test_tb__ConstPool__TABLE_h84b64dae_0
        [__Vtableidx2];
    __VdfgRegularize_h6e95ff9d_0_35 = ((0x19U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 0U;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    __VdfgRegularize_h6e95ff9d_0_15 = ((0x1dU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x1cU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               >> 0x00000018U) == (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))));
    __VdfgRegularize_h6e95ff9d_0_36 = ((0x19U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        << 1U)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                          >> 1U)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001fU))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex)))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_34 = ((0x31U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = (0x00000fffU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 1U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex)
            ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               + vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
              == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))));
                            } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 1U))) 
                                             << 4U)));
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                      << 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:593: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 593, "");
                                    }
                                }
                            }
                            if ((0x3eU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))
                                    ? 0x0eU : 0x0cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 8U)))) 
                                      << 2U));
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
                        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                << 1U)))));
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:653: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 653, "");
                                }
                            }
                        }
                        if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x12U)))) 
                                          << 2U));
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x11U)))) 
                                          << 2U));
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:535: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 535, "");
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:633: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 633, "");
                                }
                            }
                        }
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                        } else {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    } else {
                        if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:613: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 613, "");
                                }
                            }
                        }
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                        } else {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                            if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                        ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 7U : 0x0bU)
                                        : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 0x0dU
                                            : 0x0eU));
                            } else if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))) 
                                          << 2U));
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:554: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"boot_flow_test_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
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
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
            : ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                : ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))))
            : ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    __VdfgRegularize_h6e95ff9d_0_52 = (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex));
    __VdfgRegularize_h6e95ff9d_0_51 = (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x00000010U));
    if (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
    } else {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (1U 
                                                 & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               >> 0x0000001fU) & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x0000000fU) 
                                          & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 7U) 
                                                      & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             << 1U) 
                                                            & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)), 
                                                       ((0x00000100U 
                                                         & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)))));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 0U;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
              | ((0x24U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_15))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
              | ((0x1bU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x1eU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x1fU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x1aU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
            ? (~ ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   << 0x00000010U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                      >> 0x00000010U)))
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                ? (~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_36));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    } else if ((((0x30U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x32U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x37U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x33U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x35U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                >> 0x1fU) ? ((((((((2U & ((~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                          << 1U)) | 
                                   (1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 1U)))) 
                                  << 6U) | (((2U & 
                                              ((~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 3U)))) 
                                            << 4U)) 
                                | ((((2U & ((~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 4U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 5U)))) 
                                    << 2U) | ((2U & 
                                               ((~ 
                                                 (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 6U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                            >> 8U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 9U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000aU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000bU)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000cU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000dU)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ 
                                                              (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000eU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                >> 0x0000000fU)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000010U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 0x00000011U)))) 
                                    << 6U) | (((2U 
                                                & ((~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000013U)))) 
                                              << 4U)) 
                                  | ((((2U & ((~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (~ (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((~ 
                                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x00000017U)))))) 
                                 << 8U) | (((((2U & 
                                               ((~ 
                                                 (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000018U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000019U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((~ 
                                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001bU)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0x0000001fU))))))))
                : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
              | ((0x27U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x37U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x35U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x49U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b00U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b02U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b03U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    __VdfgRegularize_h6e95ff9d_0_5 = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_3 = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                         << 1U))];
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
        = (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & (0x0304U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? (0xffff0888U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                           ? ((0U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                               ? 1U : ((1U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                 ? 4U
                                                 : 8U)))
                           : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                               ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? 1U : ((0U == (3U 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                             ? 6U : 
                                            ((2U == 
                                              (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                              ? 0x0cU
                                              : 8U))))
                               : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? ((1U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                ? 3U
                                                : (7U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))
                                   : (((1U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                    ? 0x0cU
                                                    : 8U)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 0U;
    if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
         & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)))) {
        if ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((0U != (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((3U == (3U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? ((8U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                   ? ((0x00000080U 
                                       & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000018U)
                                           : (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 8U)
                                           : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                   : ((0x00000080U 
                                       & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000018U)
                                           : (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 8U)
                                           : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                               : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                  >> 0x00000018U)) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                            ? ((4U 
                                                & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                            : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                ((2U 
                                                  & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 8U)
                                                    : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                  : 
                                                 ((8U 
                                                   & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 8U)
                                                    : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                 : 
                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((2U 
                                                    & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                  : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_50)
            ? __VdfgRegularize_h6e95ff9d_0_52 : __VdfgRegularize_h6e95ff9d_0_51);
    __VdfgRegularize_h6e95ff9d_0_43 = (0x0000ffffU 
                                       & ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex));
    __VdfgRegularize_h6e95ff9d_0_44 = (0x0000ffffU 
                                       & ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? (~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
            : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
                ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                    << 0x00000010U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000010U))
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = (0x0000001fU & ((0U != (0x0000ffffU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                           ? ((0U != (0x000000ffU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                               ? ((0U != (0x0000000fU 
                                          & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                   ? ((0U != (3U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                       ? (1U & (- (IData)(
                                                          (1U 
                                                           & (~ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                       : ((4U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 2U : 3U))
                                   : ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 4U)))
                                       ? ((0x00000010U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 4U : 5U)
                                       : ((0x00000040U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 6U : 7U)))
                               : ((0U != (0x0000000fU 
                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 8U)))
                                   ? ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 8U)))
                                       ? ((0x00000100U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 8U : 9U)
                                       : ((0x00000400U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0aU : 0x0bU))
                                   : ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000000cU)))
                                       ? ((0x00001000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0cU : 0x0dU)
                                       : ((0x00004000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0eU : 0x0fU))))
                           : ((0U != (0x000000ffU & 
                                      (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       >> 0x00000010U)))
                               ? ((0U != (0x0000000fU 
                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000010U)))
                                   ? ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000010U)))
                                       ? ((0x00010000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x10U : 0x11U)
                                       : ((0x00040000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x12U : 0x13U))
                                   : ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000014U)))
                                       ? ((0x00100000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x14U : 0x15U)
                                       : ((0x00400000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x16U : 0x17U)))
                               : ((0U != (0x0000000fU 
                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000018U)))
                                   ? ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000018U)))
                                       ? ((0x01000000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x18U : 0x19U)
                                       : ((0x04000000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1aU : 0x1bU))
                                   : ((0U != (3U & 
                                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000001cU)))
                                       ? ((0x10000000U 
                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1cU : 0x1dU)
                                       : (0x1eU | (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                  >> 0x0000001eU)))))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__)) 
              & (0x0b80U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
           & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b82U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
           & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b83U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    __VdfgRegularize_h6e95ff9d_0_21 = ((0x00000080U 
                                        & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_2
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_2
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_2
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_2
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_2 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U)))))))
                                        : ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_3
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_3
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_3
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_3
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_3 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (0U != (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
                        & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__irq_vector))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass);
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = ((2U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 0x00000018U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                       >> 8U)) : ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 8U) | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                              >> 0x00000018U)) : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
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
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, (IData)(
                                                                 (0x00000003ffffffffULL 
                                                                  & VL_MULS_QQQ(34, 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                                                << 0x00000010U) 
                                                                                | (0x0000ffffU 
                                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                ((IData)(__VdfgRegularize_h6e95ff9d_0_50)
                                                                                 ? __VdfgRegularize_h6e95ff9d_0_51
                                                                                 : __VdfgRegularize_h6e95ff9d_0_52))))))) 
                                    + (VL_EXTENDS_QI(33,32, (IData)(
                                                                    (0x00000003ffffffffULL 
                                                                     & VL_MULS_QQQ(34, 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                (0x0001ffffU 
                                                                                & ((- (IData)(
                                                                                ((~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)))) 
                                                                                ^ 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 0x00000010U) 
                                                                                | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U)))))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)))))) 
                                       + VL_EXTENDS_QI(33,32, 
                                                       ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                                                         ? 
                                                        (VL_EXTENDS_II(32,17, boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex))))))
                                                         : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_MULS_QQQ(34, 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 ((((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                    & ((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                                                       >> 0x0000000fU)) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_43)))), 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (((IData)(
                                                                           (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                             >> 1U) 
                                                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                                                                               >> 0x0000000fU))) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_44))))) 
                                    + (VL_EXTENDS_QQ(34,33, 
                                                     (0x00000001ffffffffULL 
                                                      & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                          ? 
                                                         (((QData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))
                                                          : 
                                                         VL_EXTENDS_QI(33,32, vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))) 
                                       + VL_EXTENDS_QI(34,32, 
                                                       ((- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) 
                                                        & VL_SHIFTR_III(32,32,32, 
                                                                        ((IData)(1U) 
                                                                         << (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex)), 1U))))));
    if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)(((0x17U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                        | ((0x10U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                              | (0x16U 
                                                 == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  (~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                ? ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                           ? (~ (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
        if ((0x00000020U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x0000003fU & ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   (0x0000001fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                                    : 0x20U)
                                                   : 
                                                  ((0U 
                                                    != boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)
                                                    : 0x20U))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x1fU)
                                                     ? 0x1fU
                                                     : 0U))
                                                   : (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((1U & (- (IData)((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)))))) 
                          + ((0U != boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                 - (IData)(1U)) : 0x1fU)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
            ? ((0x00000400U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? ((0x00000200U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))
                    : (__VdfgRegularize_h6e95ff9d_0_21 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
                : (__VdfgRegularize_h6e95ff9d_0_21 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? (((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                             ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                          : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                              ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                              : ((0x28001040U | ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                 << 2U)) 
                                 & (- (IData)((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))) 
                                      & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                                       : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                           ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                            ? ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                ? __VdfgRegularize_h6e95ff9d_0_5
                                : ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? __VdfgRegularize_h6e95ff9d_0_5
                                    : ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? __VdfgRegularize_h6e95ff9d_0_5
                                        : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                            ? (__VdfgRegularize_h6e95ff9d_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))
                                            : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? (((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                 >> 8U)))))))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__clk)))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = (0x0000001fU & (((0x40000000U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = ((0U != boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((~ (IData)((4U == (0x00000804U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))) 
              & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U)));
    vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q;
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
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
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
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex)));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                         ? (IData)(
                                                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000021U))
                                                                         : (IData)(
                                                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                            ? (IData)(
                                                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000020U))
                                                                            : (IData)(
                                                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                                  ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                    ? (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                                    : (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
           & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
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
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
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
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                    = (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                = ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                    ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                        ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)
                            ? (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex))
                            : ((0xffff0000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex) 
                               | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex 
                       + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                & VL_MULS_III(18, 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(
                                                                                (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex))))))) 
                          + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                   & VL_MULS_III(18, 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 8U)))))))) 
                             + (VL_EXTENDS_II(32,18, 
                                              (0x0003ffffU 
                                               & VL_MULS_III(18, 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              (((IData)(
                                                                                (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U)))))))) 
                                + VL_EXTENDS_II(32,18, 
                                                (0x0003ffffU 
                                                 & VL_MULS_III(18, 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U))))))))))));
        }
    } else {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                ? (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
                   + ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))))) 
                      + VL_MULS_III(32, vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex, 
                                    (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                     ^ (- (IData)((1U 
                                                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))))))));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                      | (0x0300U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                     | (0x0304U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                    | (0x0305U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                   | (0x0340U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                  | (0x0341U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x0342U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((0x07b0U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((0x07b1U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x07b2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x07b3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
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
                            if ((0x0305U != (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if ((0x0340U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
         & ((0x0323U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
            | ((0x0324U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | ((0x0325U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                  | ((0x0326U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                     | ((0x0327U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | ((0x0328U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                           | ((0x0329U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                              | ((0x032aU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                 | ((0x032bU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                    | ((0x032cU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                       | ((0x032dU 
                                           == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                          | ((0x032eU 
                                              == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                             | ((0x032fU 
                                                 == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                | ((0x0330U 
                                                    == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                   | ((0x0331U 
                                                       == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                      | ((0x0332U 
                                                          == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                         | ((0x0333U 
                                                             == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                            | ((0x0334U 
                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                               | ((0x0335U 
                                                                   == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                  | ((0x0336U 
                                                                      == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                     | ((0x0337U 
                                                                         == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                        | ((0x0338U 
                                                                            == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                           | ((0x0339U 
                                                                               == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                              | ((0x033aU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033bU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033cU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033dU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033eU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | (0x033fU 
                                                                                == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))))))))))))))))))))))))) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)), 5U)), vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x0320U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000018U) : 
                              (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                   >> 0x00000010U) : 
                               (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 8U)
                                                 : 
                                                (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
                                                  : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                ? (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex) 
                    << 0x00000010U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex))
                : (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                    << 0x00000018U) | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                           << 8U) | (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex)))))
            : ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                  | ((0x1fU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                     | (0x1eU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))) 
                      & VL_SHIFTR_III(32,32,32, boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    if ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((((0x26U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                         ? (((QData)((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                             << 0x00000020U) | (QData)((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                         : (((QData)((IData)((- (IData)(
                                                        ((boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x0000001fU) 
                                                         & (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic)))))) 
                             << 0x00000020U) | (QData)((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))) 
                       >> (0x0000001fU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = (((~ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
            & ((0x2aU == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : (- (IData)(((0x28U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                              & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) 
           | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                                    = ((0U == (3U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                        ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                            ? (((((
                                                   ((0x0000000cU 
                                                     & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U))) 
                                                   << 0x0000000cU) 
                                                  | (((0x0000000cU 
                                                       & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U)) 
                                                      | (3U 
                                                         & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 6U))) 
                                                     << 8U)) 
                                                 | ((((0x0000000cU 
                                                       & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 6U)) 
                                                      | (3U 
                                                         & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000000aU))) 
                                                     << 4U) 
                                                    | ((0x0000000cU 
                                                        & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000000aU)) 
                                                       | (3U 
                                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000000eU))))) 
                                                << 0x00000010U) 
                                               | (((((0x0000000cU 
                                                      & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x0000000eU)) 
                                                     | (3U 
                                                        & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U))) 
                                                    << 0x0000000cU) 
                                                   | (((0x0000000cU 
                                                        & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U)) 
                                                       | (3U 
                                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000016U))) 
                                                      << 8U)) 
                                                  | ((((0x0000000cU 
                                                        & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000016U)) 
                                                       | (3U 
                                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000001aU))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000001aU)) 
                                                        | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000001eU)))))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                                ? (
                                                   (((0x00000e00U 
                                                      & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         << 7U)) 
                                                     | ((0x000001c0U 
                                                         & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            << 1U)) 
                                                        | ((0x00000038U 
                                                            & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 5U)) 
                                                           | (7U 
                                                              & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x0000000bU))))) 
                                                    << 0x00000012U) 
                                                   | ((((0x000001c0U 
                                                         & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 8U)) 
                                                        | ((0x00000038U 
                                                            & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000000eU)) 
                                                           | (7U 
                                                              & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x00000014U)))) 
                                                       << 9U) 
                                                      | ((0x000001c0U 
                                                          & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000011U)) 
                                                         | ((0x00000038U 
                                                             & (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                >> 0x00000017U)) 
                                                            | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000001dU)))))
                                                : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                            ? (- boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                            : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D));
            }
        } else if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               ^ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))
                        : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                    : ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? ((~ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
                            : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((0x17U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                               & (- (IData)((1U & (~ 
                                                   ((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001fU) 
                                                    | (IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                            : (((IData)(boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                | (boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                   >> 0x00000024U))
                                ? (~ vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                                : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                        : ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                                ? ((0xffff0000U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                                : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 1U)))) {
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x0000ffffU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffff0000U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0x0000ffffU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffff0000U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = (1U & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                     >> 3U));
    } else {
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0x0000ffffU & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffff0000U & boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) {
        vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___stl_sequent__TOP__1(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___stl_sequent__TOP__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata 
                        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rvalid = 1U;
                }
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = (IData)(((0x00010000U == (0x000f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = (IData)(((0x00030000U == (0x000f0000U & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
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
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__uart_bready 
        = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__gpio_bready 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__timer_bready 
        = ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__qspi_bready 
        = ((5U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_ready));
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
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__ai_m_awready 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__instr_rdata
            : (IData)((vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
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
}

VL_ATTR_COLD void Vboot_flow_test_tb___024root___stl_sequent__TOP__2(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___stl_sequent__TOP__2\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
    // Body
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_data;
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rdata 
                        = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_data;
                    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
                }
            } else if (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid = 1U;
            }
        }
    }
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_55) 
             & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid)) 
            & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
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
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid) 
           | (0U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__data_rvalid)
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))]));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : (vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
                                          >> 5U))))))));
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

VL_ATTR_COLD void Vboot_flow_test_tb___024root___stl_comb__TOP__1(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___stl_comb__TOP__1\n"); );
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
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
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

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb___024root___nba_comb__TOP__3(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb___024root___act_sequent__TOP__0(Vboot_flow_test_tb___024root* vlSelf);
void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vboot_flow_test_tb___024root___act_comb__TOP__1(Vboot_flow_test_tb___024root* vlSelf);

VL_ATTR_COLD void Vboot_flow_test_tb___024root___eval_stl(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_stl\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vboot_flow_test_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        Vboot_flow_test_tb___024root___stl_sequent__TOP__1(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus));
        Vboot_flow_test_tb___024root___stl_sequent__TOP__2(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus));
        Vboot_flow_test_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vboot_flow_test_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vboot_flow_test_tb___024root___stl_comb__TOP__1(vlSelf);
        Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus));
        Vboot_flow_test_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vboot_flow_test_tb___024root___eval_phase__stl(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___eval_phase__stl\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vboot_flow_test_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vboot_flow_test_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vboot_flow_test_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vboot_flow_test_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vboot_flow_test_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vboot_flow_test_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vboot_flow_test_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] boot_flow_test_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge boot_flow_test_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge boot_flow_test_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge (boot_flow_test_tb.clk & boot_flow_test_tb.dut.i_cpu.core_i.sleep_unit_i.core_clock_gate_i.clk_en))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge boot_flow_test_tb.dut.i_qspi.sclk_reg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge boot_flow_test_tb.qspi_cs_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( boot_flow_test_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(negedge boot_flow_test_tb.dut.i_uart_0.i_uart_tx.txd_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vboot_flow_test_tb___024root___ctor_var_reset(Vboot_flow_test_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vboot_flow_test_tb___024root___ctor_var_reset\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->boot_flow_test_tb__DOT__qspi_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15529873652570405627ull);
    vlSelf->boot_flow_test_tb__DOT__flash_mosi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5978570382668931874ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__instr_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9075017213354195929ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 762744630403809271ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17920174443346980756ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__data_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2360120875799600011ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__data_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7023121650497898382ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__data_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12049639246561050419ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__irq_vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14177149893244344838ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 587950658622672858ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 520988155499973916ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15835358689550145641ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11352584525290695484ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17865498694893535189ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2558777668611148113ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8021710069034387678ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1405510999831030993ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3308491738188119654ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1600777361512625245ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__uart_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17713567184058870454ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1351721751290395228ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13482832770315105905ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12236889617424864528ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9931480361703591560ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17472312146994572489ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4389135516340824078ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5510129558283807422ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8088709681774429624ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16230442323936339639ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17140104067709695441ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__gpio_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11558704624435679022ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11358130620072462816ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8904000160480493144ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2056325686065968329ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15298896668347235346ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9587871564646803533ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6101270119936335821ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16904696631623372200ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5278160238020496618ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17814759810507942597ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1981793186623306575ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__timer_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5943910400311935734ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 594001536774506643ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11522500040597448060ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17286516580130219529ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7992317256424957887ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7723308010753587047ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 169242280523367567ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5666399721647164683ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8689390769721676597ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10604608823206820385ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8761622247506450681ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__qspi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14517073219046388614ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1530108656809206715ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 357767756174363496ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7539107444865696860ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942139917225583608ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3468270665774289306ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12428980739312868820ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5496223764643342676ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2648558306671144861ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8583762235897623801ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1355714434668511500ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2978045801211555790ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2632653212963909320ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11147109385378232948ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1749312840386919141ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16530523538185291099ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5634859858900629853ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18320687489793196536ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__ai_m_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10997718817601235464ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2966397230660044371ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8273096443703527206ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5869743250081008092ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17789902849332896446ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 529366063186975413ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12074239439746982264ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9517506193622263946ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10557435997319658540ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3386987833922144307ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7878685200270837009ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 708120771063065918ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8261689783014347004ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 606862659330540552ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9594287285524956155ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8850533367327373709ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3054021191405564978ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15027622226543710627ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6202055613793518002ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2590359214023324330ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6044943716659284211ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1478370422389225647ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14452457402341480419ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6947943530274216893ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7784177489748566524ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9319252349361678897ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7714672227517491687ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4637282982610389722ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3128065866930891138ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8149922469500468128ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16914263669669697434ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1805082071575381573ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17652712785832542216ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17464901681747995952ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 908348312392576545ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17684790621432321630ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8670205210800868782ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1546679276145138878ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18160463012652207400ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3080168384314678897ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11559778368608626272ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2364978049646613469ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14369158293251295044ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15036163607703654103ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6852025874284062204ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3897223520502223047ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17656687284805688389ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12027471752847444263ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15541680763248775860ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9241818268071695399ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7644593674876565765ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3129265343179312612ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14713450077610985254ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4632479746103832864ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11199869223681087347ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11789021434408367941ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4551799803624480247ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17492506131425496608ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10076527227940199018ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3509349896018145128ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5966692267579734799ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1138580167950183371ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10976540753564354990ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16757693685378982900ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17249304335777019617ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13882183878080125711ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5231611393666540269ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12218882847249761620ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12492724454807214391ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13415527189848645918ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13868107274412863785ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10056817111978158017ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9825499384459235280ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11253830772880125148ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11579847647098716189ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15690710856843527046ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 449553739629421991ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2248852970212780547ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4673329715591574560ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4659749655556805648ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10110611772665851821ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8464335057492540022ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695136227164150462ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090755126644131865ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15782453584635179560ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4863004496601818137ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14860817211285811355ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11287879996374581993ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12731414504527936921ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17552162954800241855ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2986838319592414041ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7242158486580151221ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 824532507732978319ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10288650105560595925ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16719663162460678656ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1657340383793201585ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4972193375591373391ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16902693423763269585ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10900435718938504102ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1378041497641813679ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 670836091854719209ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8154257999756717678ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6010921886026010206ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16039680829319333529ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16148321985323641402ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10171952783009344592ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11012480183803173598ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3290144651083033521ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6745059113979854657ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5567941357322247982ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4838571051436525593ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 50064848543490737ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11387941617298711819ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9067843176865735647ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1134624721930048665ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1217843702921029660ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5136109974559786535ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4138264386380963429ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17794151350329509442ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8545547657369406583ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7646265785396892425ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 45215976877003567ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18302935675137682869ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10885499298719626533ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1730368620359983883ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8492740843696446767ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18075044054272660824ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16698109877665718890ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16665917678139707494ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15239592526744327372ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5707244222831148633ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8301226992886760468ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6931747801807423012ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6817881477431069601ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17062186020082436196ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17286759774450193365ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15114467633664383986ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4614792166877902816ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9804961837063322675ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10968475103389229030ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 663142384009606029ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15505393961325176071ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2135547853394116613ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4222455185080544770ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12676587399331156554ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11142304797749206813ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8594093717737727218ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6858925520423930034ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10524349703278174573ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2860362698258362514ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1113842758192677802ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11191711918882983011ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6550447425666599128ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18234398096520538625ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6581056905466783910ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7448462962685475493ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10036755265733393597ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17201510755775100106ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13689786478246443877ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285327043000990319ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8828466243821203256ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3877418038037757780ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14718314053620869482ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13618482957239725537ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1591918936966118127ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13819988514301123514ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13413018312539329031ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16809620566415802375ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2873866670167314832ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6586676293825235925ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11603506231195882668ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10627899393199498990ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 461872415162375751ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969736111571273775ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17790731357114140519ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12630130615520055219ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16227411080329561268ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem, __VscopeHash, 14966662308150967528ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1788185463692495727ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16666451118364461157ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6979003536502253535ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8994254544800852508ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12145705552589766512ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13776476452703279601ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4105184100991704634ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9366035711518773768ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3875684713834322241ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1155403730218322895ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14397243434370893827ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10972912171441503639ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7752807308744895022ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2200432053455637128ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16951605875173936508ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9701113249140459666ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3251408400820089277ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15386734240826239177ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13900053471899397934ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2701762939023148756ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8831378177750178745ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5117181672988952910ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4728234915155553866ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13780214345968587329ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3945771615053803018ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8434815657397671536ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 691461513609926798ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 12089792856146657158ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 3240616184494889069ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8028312628308040963ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6530446775997497569ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5716544839979144730ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18439201410870493822ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15855787102052960960ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 910185967870839155ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13815291687409829985ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3141843265490579807ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15664373905591388443ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16036506800426936003ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10126428086420338470ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18329737254340988955ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1801078593799039873ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 246653010747619652ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8252779699115177188ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17889954316804774595ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7697300676518123275ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12952038217824416845ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2333569013325515527ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5049417839252949178ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18288220192333419411ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9475151244641835755ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 213631415056553677ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15143548489877634110ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13516745103510969203ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7039405958802718345ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8822013197943762832ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13855516596190850855ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15252101069866165563ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13391544603996826691ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8214334314446367514ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18051049043971962634ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13626764534574652906ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7716055939830266721ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16504427411339115175ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7619176914429771328ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222857337811527784ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16190667742712436300ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16821568161532741841ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2380943148998053971ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14662283248060739738ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13946719335320046630ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6853048987256642724ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5046658568959721373ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14427940633952609336ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14170780605538317823ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6127712179802643033ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2316281252151832071ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8476907627761272689ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9134513571443661435ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7887750236782941597ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5460349536546402246ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14624387674398136719ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15018809069953218904ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9712203575391963093ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2092112434483647617ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16742372489621554812ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6893156143943015876ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4515277230770774078ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7686445664291108232ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5489544106169505894ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6939919493843412375ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 6338166616901407393ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11695120411441934032ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12325682590699625445ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3862327786108382446ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5260846319229989762ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14276419169565083840ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, __VscopeHash, 10484947246047444458ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, __VscopeHash, 10355491214840759017ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, __VscopeHash, 5650944415151845431ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13259418469445783395ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11903474608594741079ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2636382358580717961ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10542956238406828024ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13767559708361779241ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008394374713995443ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10022430077759237920ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3478761327444424764ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12033269828216486899ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10749672331860709025ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 330305486226812826ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14798672664955464736ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5621272371309855724ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_1_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_3_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_5_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16156350339378832963ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3242990839759889639ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6384320803388749558ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3436840882500339233ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4583214591674089317ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_1_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_3_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_5_1 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12844755915940206012ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5905465624552315249ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13555939798790059182ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11409986295728889133ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1587967928341897923ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1542878395705571121ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9986734580301703133ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15430614389666493759ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5834153895131910142ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6300909043389542131ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5162616083132310554ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6437961743390412555ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3537842884422521931ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6053105758349976931ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3245700347058840139ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15190653469625498040ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4515305953647573593ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__prev_tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2623096069901324481ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8409326962511075085ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15548108619475992172ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1087354261874100673ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17342552716795507921ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1122347673264738220ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 913028882613007828ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7544523467056048286ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10486536682978241165ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12354980817254429865ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_gpio__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12891250950781030013ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18211691417400921049ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_are = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4205169918267533101ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10570269840359633148ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_mod = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3403470452499601481ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4571632355452103365ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13293512702411461650ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7301225860911300074ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3912098285603328603ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3342162239732956058ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6457190887807118191ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_timer__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7033781716977825828ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1822689446418530680ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10177843042583442632ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6018078000854077752ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1649369095140649855ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9440440218734046961ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3150035876066346594ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10906554923733625173ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16068556713077365185ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4716511281314363981ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12314361852606531999ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10828148884493589030ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8176697565493319271ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15298431382391706463ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3203894722198205738ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16639250381091073852ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 271746629249877706ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2139576698602827996ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17476252783583741747ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3902579182781231233ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17849539924594056948ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 858357971629476415ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7779793732180679805ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__shift_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13521157574885490332ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 23938596703615444ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14284653979327021441ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5306334059031458818ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11635535703464514172ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__tx_current_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3478300487480759507ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13880031149509081380ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2255657950523969649ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1478563271880332358ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10111889881991993946ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9767989294968889280ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16260818517198909301ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3421953895712288005ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 482811379968779149ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4684253494401168186ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1973803622443664503ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15845449608449311114ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5627032992788265995ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 366264959645245451ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4627058866190278616ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11794551643641817987ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6782094890230719790ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9013596657353555212ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14446299826890161224ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261567091262408225ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17608067225114784956ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10107789595531252703ull);
    for (int __Vi0 = 0; __Vi0 < 490; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5651404784153647299ull);
    }
    for (int __Vi0 = 0; __Vi0 < 160; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11417813002466791100ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 249881467372948383ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1347278884349674373ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16940109010098205528ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3172405048226703605ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1160734180789217474ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11287116987615472308ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12121357886585814462ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9642777749884419118ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8699292845433873362ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 785979054645419649ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1597284030207379180ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3780941364503093498ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4105981199299666155ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4088257373765646724ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16577179605970774441ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10164847004671579707ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17079341848043802082ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1403680312154882043ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6078491151323019078ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17201581094297530117ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3101674688556982690ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16468644434811588053ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3778825988536763383ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12446719399485731928ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9125630362757561955ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18327977619939990795ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4252190211242458138ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__ir = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__ic = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__input_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16835339033559023012ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__weight_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7738313759070428980ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13449670218740100439ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6077585579626341575ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__result_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16433332106658332912ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11088966289314297362ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16289154751275267633ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17941549327673842869ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11504246495736674629ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13732967284434052165ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14224019621801568988ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9737740374694470667ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12877931039609275618ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4585798018703002915ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7362993536398936394ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8678327456336236899ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0 = 0;
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 7680; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4933341315979920819ull);
    }
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 1991717980533146086ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 15615599103227151929ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12230029187874598657ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1556515851618743299ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1440264931532671312ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8499167026579954055ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1739527259580464715ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9007597009214104970ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7052772386793770064ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9168260640710006692ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17846193209485311201ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17848465395428270749ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7124322240989213799ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1153696063218362555ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8072632932029835391ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7577364603668949899ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17776586819195620650ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3374610732558913886ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539938450774809580ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13568156414275065783ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2619037536832289418ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11107329713036558113ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7504653393648235913ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1896615422788486821ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5099668461063253702ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16076687660620107990ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16447663367184118554ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5038581006975057968ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8661428556713159512ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12765784106055104178ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14649661043082216202ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15773507530536051387ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6034980661036350536ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12813338813795151649ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16850399129230773404ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10210748544925171626ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 604250351823388768ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13116383714277341976ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16998637837312977101ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15455256683669017140ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3837464174985742807ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4263921890504021986ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15950583977355896129ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11769934764972618371ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 175147286159024319ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10451130215486995557ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14805160598417423128ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8725024512669324493ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18308146046664602047ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7311684266878292444ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8289209111592333908ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7596436188640008162ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1249909868355846230ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17458498070271359820ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10303365893726512722ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347241410300711746ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8485540213312618496ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7459047050109640365ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4637569611871207432ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1651259390793609247ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14055603796650106652ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9557845383951364414ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16478391931049653236ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 147183529038443498ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13634918759315896058ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10425662124982132770ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1618164642341801537ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16202815077326618641ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7351681945744997960ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7955125554229679649ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13531589353288483262ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3141253403709855397ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11631441243086524941ull);
    vlSelf->boot_flow_test_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13677712339534852488ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->boot_flow_test_tb__DOT__flash__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8259628073196545633ull);
    }
    vlSelf->boot_flow_test_tb__DOT__flash__DOT__cmd_addr_sr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10812841634869502102ull);
    vlSelf->boot_flow_test_tb__DOT__flash__DOT__in_bit_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2017337408654956137ull);
    vlSelf->boot_flow_test_tb__DOT__flash__DOT__read_addr = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5746848371103079664ull);
    vlSelf->boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5346069532612785594ull);
    vlSelf->boot_flow_test_tb__DOT__flash__DOT__in_data_phase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13613164289278693597ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_awready = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_wready = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__uart_bvalid = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__flash__DOT__read_addr = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__flash__DOT__out_bit_cnt = 0;
    vlSelf->__Vdly__boot_flow_test_tb__DOT__flash__DOT__in_data_phase = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__boot_flow_test_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__resetn = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__aw_ready = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__w_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__resetn__0 = 0;
    vlSelf->__Vtrigprevexpr_h8f08237f__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__qspi_cs_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__boot_flow_test_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
