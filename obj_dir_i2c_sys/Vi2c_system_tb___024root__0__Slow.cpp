// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vi2c_system_tb.h for the primary calling header

#include "Vi2c_system_tb__pch.h"

void Vi2c_system_tb___024root___timing_ready(Vi2c_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_static(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_static\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2c_system_tb__DOT__clk = 0U;
    vlSelfRef.i2c_system_tb__DOT__resetn = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->i2c_system_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3357896699030400984ull);
    vlSelfRef.i2c_system_tb__DOT__received = ""s;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__resetn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_h4435b175__1 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 1U;
    Vi2c_system_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_static__TOP(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_static__TOP\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2c_system_tb__DOT__clk = 0U;
    vlSelfRef.i2c_system_tb__DOT__resetn = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->i2c_system_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3357896699030400984ull);
    vlSelfRef.i2c_system_tb__DOT__received = ""s;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
}

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_initial__TOP(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_initial__TOP\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i;
    i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i;
    i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i;
    i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i;
    i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0x0000000fU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0x0000ffffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] = 0U;
    i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000100U > i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[(0x000000ffU 
                                                                      & i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)] = 0U;
        i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 256, 0, "bootrom.hex"s,  &(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] bootrom.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_boot_rom"
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[0U]
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[1U]);
    i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[(0x000007ffU 
                                                                        & i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "firmware.hex"s
                 ,  &(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] firmware.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_instr_sram"
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[1U]);
    i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem[(0x000007ffU 
                                                                       & i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "data_mem.hex"s
                 ,  &(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] data_mem.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_data_sram"
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem[1U]);
    i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00001e00U > i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0U;
        if (VL_LIKELY(((0x1dffU >= (0x00001fffU & i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[(0x00001fffU 
                                                                         & i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0;
        }
        i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 7680, 0, "ai_sram_init.hex"s
                 ,  &(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] ai_sram_init.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_ai_sram"
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[1U]);
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__st = 0U;
    vlSelfRef.i2c_system_tb__DOT__slv_sda_oe = 0U;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_ptr = 0U;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__rd_ptr = 0U;
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__wr_base = 0U;
}

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_final(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_final\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_final__TOP(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_final__TOP\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_system_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vi2c_system_tb___024root___eval_phase__stl(Vi2c_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_settle(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_settle\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vi2c_system_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verif/tb/i2c_system_tb.sv", 4, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vi2c_system_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_triggers_vec__stl(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_triggers_vec__stl\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vi2c_system_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_system_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vi2c_system_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vi2c_system_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 512> Vi2c_system_tb__ConstPool__TABLE_h84b64dae_0;

VL_ATTR_COLD void Vi2c_system_tb___024root___stl_sequent__TOP__0(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___stl_sequent__TOP__0\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 0;
    CData/*1:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = 0;
    CData/*0:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
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
    // Body
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w 
        = ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
            ? 4U : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
                     ? 2U : 1U));
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_rise 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_q)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q));
    vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_fall 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__slave__DOT__scl_q));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr) 
                          - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr) 
                          - (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit 
        = (1U & ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read)) 
                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__last_byt 
        = ((7U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nby_lat) 
                  - (IData)(1U))) == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16 = ((IData)(vlSelfRef.i2c_system_tb__DOT__slv_sda_oe) 
                                                 | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 1U;
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))));
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
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
        if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else {
            if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            }
            if ((2U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                }
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_46 = (IData)((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_47 = (IData)((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_51 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex) 
                                       & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    __VdfgRegularize_h6e95ff9d_0_48 = (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_49 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x0000001fU));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__irq_vector 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done) 
            << 0x00000011U) | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena) 
                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                                   == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are)) 
                               << 0x00000010U));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex));
    __Vtableidx2 = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vi2c_system_tb__ConstPool__TABLE_h84b64dae_0
        [__Vtableidx2];
    __VdfgRegularize_h6e95ff9d_0_36 = ((0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    __VdfgRegularize_h6e95ff9d_0_15 = ((0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x1cU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
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
    __VdfgRegularize_h6e95ff9d_0_37 = ((0x19U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
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
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex)))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_35 = ((0x31U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = (0x00000fffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex)
            ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
              == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go 
        = ((~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done) 
               | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go))) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_25 = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
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
    __VdfgRegularize_h6e95ff9d_0_53 = (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex));
    __VdfgRegularize_h6e95ff9d_0_52 = (((IData)(__VdfgRegularize_h6e95ff9d_0_49) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x00000010U));
    if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active) {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
    } else {
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_20 = (1U 
                                                 & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
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
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 0U;
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
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)))));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (0U != (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__irq_vector))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass);
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q;
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
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 2U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 0U;
    if ((0x00000040U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000020U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x00000010U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 7U))))) {
                                if ((0U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                } else if ((1U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 1U;
                                } else if ((0x0302U 
                                            == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 1U;
                                } else if ((2U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 1U;
                                } else if ((0x07b2U 
                                            == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
                                        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 1U;
                                } else if ((0x0105U 
                                            == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                    if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep) {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                                    }
                                } else {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((0x0105U 
                                                             == 
                                                             (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                              >> 0x14U)) 
                                                            << 5U) 
                                                           | (((0x07b2U 
                                                                == 
                                                                (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                 >> 0x14U)) 
                                                               << 4U) 
                                                              | ((2U 
                                                                  == 
                                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 3U))) 
                                                          | (((0x0302U 
                                                               == 
                                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                    >> 0x14U))))))))) {
                                    if ((0U != ((((0x0105U 
                                                   == 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                  << 5U) 
                                                 | (((0x07b2U 
                                                      == 
                                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x14U)) 
                                                     << 4U) 
                                                    | ((2U 
                                                        == 
                                                        (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 3U))) 
                                                | (((0x0302U 
                                                     == 
                                                     (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U))))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2704: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                                         , '#',12,
                                                         (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2704, "");
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            } else {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                            }
                            if ((1U == (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2775: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,
                                                     (3U 
                                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2775, "");
                                    }
                                }
                            }
                            if ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x08000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x04000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x20000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                                    } else {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x10000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            } else {
                                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else {
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                = i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        if ((0U != (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 3U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                    if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? 0x0bU : 1U) : 
                               ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                 ? 0x0aU : 0U));
                    } else if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x0dU : 0x0cU);
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000010U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((3U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x1eU))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((2U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x1eU))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x1cU)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                        }
                        if ((0x40000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x20000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x02000000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00004000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else if ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                } else {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00001000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                            }
                        } else if ((0x20000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x10000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x08000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x04000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x02000000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x32U;
                                    } else {
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x33U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x30U;
                                } else {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x31U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                } else {
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 1U;
                                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                            } else {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 0U;
                                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                            }
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? ((0x00002000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x15U
                                            : 0x2eU)
                                        : ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x25U
                                            : 0x2fU))
                                    : ((0x00002000U 
                                        & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 3U : 2U)
                                        : ((0x00001000U 
                                            & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x27U
                                            : 0x18U)));
                        }
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                if ((1U & (~ VL_ONEHOT_I((((2U == (7U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (7U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if ((0U != (((2U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                 << 2U) | (((1U == 
                                             (7U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:376: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(7U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 376, "");
                        }
                    }
                }
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 1U;
                if ((0U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                } else if ((1U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                } else if ((2U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x15U : 0x2eU);
                    } else if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                        } else if ((0x20U == (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x19U))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                        } else {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                    }
                } else if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                        = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 3U : 2U);
                } else if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x27U;
                    if ((0U != (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x19U))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((8U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2683: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,
                                             (7U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU)));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2683, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((4U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    } else if ((2U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
            i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                = (1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                            >> 0x0eU)));
            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                        = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 1U : 2U);
                }
            } else if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                    = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                        ? 1U : 2U);
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
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
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
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
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((1U & (- (IData)((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)))))) 
                          + ((0U != i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                 - (IData)(1U)) : 0x1fU)));
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
    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__clk)))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
    }
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
    vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q;
    if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
                    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)))) {
                        vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 1U;
                    }
                }
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                    = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
            }
        }
        if ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
        } else if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
            if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex) {
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
                vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_araddr 
                              >> 2U));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awaddr 
                              >> 2U));
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              >> 2U));
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              >> 2U));
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram 
        = (IData)(((0x00030000U == (0xf00f0000U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (4U != (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                             >> 0x0000001cU))));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))))) {
        if ((0U == (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = (((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                  >> 0x00000018U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel)))))) 
                                                  << 6U) 
                                                 | ((0x0000003eU 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000019U))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                               << 2U) | (((3U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                          << 1U) | 
                                         (1U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                     << 2U) | (((3U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                << 1U) | (1U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:574: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.id_stage_i.jump_target_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 574, "");
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
               + (((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000001fU))) << 0x00000014U) 
                  | ((((0x000001feU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000bU)) 
                       | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))) << 0x0000000bU) 
                     | (0x000007feU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U)))))
            : ((3U == (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
                   + (((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 7U))))))
                : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                   + vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                 == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                 == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? (0x0000001fU & ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000000fU) & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux)))))))
            : (0x0000001fU & ((1U & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                               ? (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 7U) : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000001bU))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep)) 
           & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
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
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                   == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)))) {
        if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id) {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
               & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
              | (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                  & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id)) 
                 | ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) 
                    & (IData)(i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id)))));
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

VL_ATTR_COLD void Vi2c_system_tb___024root___stl_sequent__TOP__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___stl_sequent__TOP__1\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata 
        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata 
                        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rvalid = 1U;
                }
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = (IData)(((0x00010000U == (0x000f0000U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_54)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = (IData)(((0x00030000U == (0x000f0000U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_54)));
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_bready 
        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_bready 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_bready 
        = ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_bready 
        = ((5U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_arvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_arvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_arvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_arvalid 
        = (IData)(((0x00000400U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_arvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_arvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_wvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_wvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_wvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_wvalid 
        = (IData)(((0x00000400U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_wvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_wvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__uart_awvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__gpio_awvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__timer_awvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i2c_awvalid 
        = (IData)(((0x00000400U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__qspi_awvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_awvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.ar_ready) 
           & ((~ ((4U == (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                          >> 0x0000001cU)) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_valid)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_arvalid)
             : ((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.ar_valid) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.ar_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awready 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__instr_rdata
            : (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
             & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)) 
            & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en 
        = (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_awvalid)
             : ((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
           & (((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
                ? (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__ai_m_wvalid)
                : ((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid) 
                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus.aw_ready)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    if ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                    << 0x00000010U) | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((3U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata
                : ((0xffff0000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x10U)));
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                     << 2U) | (((1U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_compressed_decoder.sv:52: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"i2c_system_tb.dut.i_cpu.core_i.if_stage_i.compressed_decoder_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv", 52, "");
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 5U)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        if ((0x00000400U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                            if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00000400U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0x0cU)))) {
                        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                ? ((0x00000020U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                                : ((0x00000020U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                    }
                } else {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))));
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : ((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 2U)))
                            ? (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0U == ((0x00000020U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((2U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 0x00000012U))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 7U))) ? 
                               (0x37U | (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 0x0cU)))) 
                                          << 0x00000011U) 
                                         | ((0x0001f000U 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x0000000aU)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0x0cU)))) 
                                             << 0x00000011U) 
                                            | ((0x0001f000U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x0000000aU)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                        ? (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x6fU | (((((((2U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))));
        }
    } else if ((2U == (3U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)))) {
                            vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 8U))))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 8U)))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : (((0U == (0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 2U))) 
                            | (0U == (0x0000001fU & 
                                      (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)))) ? 
                           (0x00001013U | ((0x01f00000U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x00000012U)) 
                                           | ((0x000f8000U 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00001013U | ((0x01f00000U 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x00000012U)) 
                                              | ((0x000f8000U 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000f80U 
                                                    & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        }
    } else {
        vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    }
}

VL_ATTR_COLD void Vi2c_system_tb___024root___stl_sequent__TOP__2(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___stl_sequent__TOP__2\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
    // Body
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_data;
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                        = vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.r_data;
                    vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid = 1U;
                }
            } else if (vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid = 1U;
            }
        }
    }
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_56) 
             & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.aw_valid)) 
            & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                        >> 0x0000001fU))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                  >> 0x00000018U)) : 
                   ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                      & ((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                           >> 0x00000017U)))) 
                         | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                     << 8U) | (0x000000ffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x0000000fU)))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (0x000000ffU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                 >> 8U)))
                    : (((((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                            >> 7U)))) 
                          | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                         & (- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                        << 8U) | (0x000000ffU & vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata))))
            : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                  >> 7U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | ((0x0000ff00U 
                                                & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                   << 8U)) 
                                               | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x00000018U)))
                        : ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                            >> 0x0000001fU))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                  >> 0x00000017U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                  >> 8U)))
                        : (((((- (IData)((1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                                                >> 0x0000000fU)))) 
                              | (- (IData)((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                             & (- (IData)((0U != (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata))))
                : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                            << 8U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x00000018U))
                        : ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000010U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000018U) | (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 8U))
                        : vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rdata))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid) 
           | (0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__data_rvalid)
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))]));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
                                          >> 5U))))))));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                      & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0000000fU))))
                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id
                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : ((8U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                            : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x00000018U)))) 
                                        << 5U) | (0x0000001fU 
                                                  & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))
                                    : vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    (((IData)(1U) 
                                                      << 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                     - (IData)(1U)), 1U)
                                    : ((0x00010000U 
                                        & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 4U)) 
                                       | (1U & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x00000019U))))))
                        : ((4U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39
                                : (0x0000001fU & ((1U 
                                                   & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                   ? 
                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000019U)
                                                   : 
                                                  (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000014U))))
                            : ((2U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id)
                                        ? 2U : 4U) : 
                                   (0xfffff000U & vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id))
                                : (((- (IData)((vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & 
                                      ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? ((0x00000fe0U 
                                            & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x00000014U)) 
                                           | (0x0000001fU 
                                              & (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 7U)))
                                        : (vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 0x00000014U))))))))
                : ((1U & (IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
}

VL_ATTR_COLD void Vi2c_system_tb___024root___stl_comb__TOP__1(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___stl_comb__TOP__1\n"); );
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
    vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelfRef.i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
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

VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__periph_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__1(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus__1(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__2(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vi2c_system_tb___024root___nba_comb__TOP__4(Vi2c_system_tb___024root* vlSelf);
void Vi2c_system_tb___024root___act_sequent__TOP__0(Vi2c_system_tb___024root* vlSelf);
void Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0(Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vi2c_system_tb___024root___act_comb__TOP__1(Vi2c_system_tb___024root* vlSelf);

VL_ATTR_COLD void Vi2c_system_tb___024root___eval_stl(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_stl\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vi2c_system_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__periph_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__periph_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__boot_rom_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__instr_sram_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__data_sram_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus));
        Vi2c_system_tb___024root___stl_sequent__TOP__1(vlSelf);
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__1((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus));
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus__1((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__ai_sram_bus));
        Vi2c_system_tb___024root___stl_sequent__TOP__2(vlSelf);
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__2((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus));
        Vi2c_system_tb___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vi2c_system_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vi2c_system_tb___024root___stl_comb__TOP__1(vlSelf);
        Vi2c_system_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus));
        Vi2c_system_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vi2c_system_tb___024root___eval_phase__stl(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___eval_phase__stl\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vi2c_system_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vi2c_system_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vi2c_system_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vi2c_system_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vi2c_system_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vi2c_system_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vi2c_system_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] i2c_system_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge i2c_system_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge i2c_system_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge (i2c_system_tb.clk & i2c_system_tb.dut.i_cpu.core_i.sleep_unit_i.core_clock_gate_i.clk_en))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge i2c_system_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(negedge i2c_system_tb.dut.i_uart_0.i_uart_tx.txd_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vi2c_system_tb___024root___ctor_var_reset(Vi2c_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vi2c_system_tb___024root___ctor_var_reset\n"); );
    Vi2c_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->i2c_system_tb__DOT__slv_sda_oe = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8861389082298834015ull);
    vlSelf->i2c_system_tb__DOT__ch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7693541928415160516ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__instr_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14033618166563437107ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15227654439115556575ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13039035183020168860ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__data_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5080799990796925969ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__data_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5538155907980328878ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__data_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18385341152118941515ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__irq_vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8328805753745074733ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9793815713892361355ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15249188628127042761ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11310274611297340503ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1523455654705086510ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4083270334765739612ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4236003831172523497ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5927546691039013853ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8450420108287951379ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6773731415878383816ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972088903980930183ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__uart_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 711272823436211799ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6723615354874480618ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4993974004932347206ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9868103152197803234ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15121296468917459631ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12280088703658167331ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16472710637206606862ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2751241858688422285ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 753182846996857903ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5464785532492498301ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9503276126058250154ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__gpio_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9607952105195956264ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9419272705960211951ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12187233091574954946ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 983172677157411621ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6672808412662867550ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1138297734098214972ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6407330293588458301ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7374305130118716067ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11914605984761352594ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12436698938042513263ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17834229356656072437ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__timer_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2032381304853611333ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13285765075429407050ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4110748257812479075ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12294478168336603240ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11673703711068917652ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14248611048979814501ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13371750172570597799ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14093966954740181737ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12166261427848828124ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14873776519075330616ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10471503827945241543ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__qspi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16881205700576108196ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17932469084437292491ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16916214673532534126ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12455082759640003371ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6035236973059564056ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11782701631448062200ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3666425166067045477ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8080044438154694482ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10899169375535725686ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i2c_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7926491133145279804ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15530027432461599081ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7910340302176796559ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5019294245868475901ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 299635484301286784ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992004335814604231ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150116685611789860ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16360994150247738313ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16039698358457464717ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6825480839952168097ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7734253965069046168ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12585787899289002553ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7119705655433867081ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12672838374960699515ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316342394529894690ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7764062903762626014ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11595051779620205880ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 504748022267727473ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__ai_m_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14690159821562045977ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11471038172611372615ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3643486099527325139ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10448107228992996331ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5352698002438750291ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17070008433229242043ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3721175713483499752ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395390106157385984ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2860965529164984392ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5972123960353808785ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1466516303711181057ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16132459146435691195ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10580987649300146814ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5078399626198594854ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 914185318478980165ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1852186825702473679ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8110269065545902571ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10869243979396167463ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8168507668310559714ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1674538694875089885ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4810361646973449446ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18063548489671628162ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11410504011545003342ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11235560985968007148ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 283582758338451860ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14013833159083196526ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8147188474812883903ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14196350160072011170ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4457612702191343520ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4257989184781684683ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15744990129206907036ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14414336447973419227ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8112772365394002625ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11084326472423006111ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17651176272103500148ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 852687170085513859ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11084384208182514909ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12894637653576030124ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6523503617433555487ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3595681702167209549ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7564691137596475968ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6673295015214654595ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4413382126004125855ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5247940847754465126ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5236244406883343469ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9657624836664931330ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 366726814319820850ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 358285259828858451ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12825324486090940553ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3173467009207867657ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6876093181177208046ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2359226619506094144ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 1713532261424676957ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15874216454962136532ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1966437340214251907ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13116718391947257486ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1198463298177179694ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15977659870623917858ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9154140896097266294ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4312953669589111813ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841726109005591938ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660559654611856295ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7735208795472190046ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15650559776639627331ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1627152247903993946ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17721871282971594444ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17061697453271167955ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17790953446062404345ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13840153280128860645ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3309721733821230635ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261827143849332476ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13642371051219883308ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15771802510895571653ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17723503631507307283ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16499362703166372916ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10226804986576587681ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12930040826976660134ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11925909344185659679ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17368445254784656399ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18270529736218526300ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7414480305917953900ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16648119896931819217ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10723902146359082215ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14252700713751329072ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17726707726052428608ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 425595945593159464ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9291977300724572656ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1499329125957168521ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2139165804411196741ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17634939292474174174ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8008091681139492714ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13672867258587103830ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12904123386542504244ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16030590029135112829ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4925461501208765582ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1352653603571284493ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9210629312129437852ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5671027560223394963ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10933791280688984345ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8218688020176152563ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1837796790982820435ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3253755054640164610ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17940361127501103875ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9805379032361746123ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6049587815612590676ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17424284955681161069ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13786960131369062662ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14033464372596653235ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2746009346271179686ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12715260976285433490ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5979961092101773316ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7427466911119264140ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11148287634012250413ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17091261078765980266ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15466162260971918602ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13498103785621215377ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15838231903277617782ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16068194063495503864ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15881094242079363521ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12983106151143221716ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16482770771855158887ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14454454794024984478ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10205424867613513902ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6219066423620275049ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15258135402785416214ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2912717814249340823ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11687844892699218022ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3809489096393595269ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8626203809194699649ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11959138330762025847ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 754782472571712379ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4153390666772811881ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10136670615729841772ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 368586288072058763ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167315985524261165ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18092691318135290807ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1127739062819057118ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12298751340003562734ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1723160625420000195ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7664864192952346529ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15040725004848650361ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12377871961516281056ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150605892484553071ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11208648225871434701ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13127654041618671819ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 396978491091794634ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15109811591486962549ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2264535420498047386ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14330537409706499050ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13433885028609640083ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8597127301362622362ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6906442755389305421ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9522038360202784456ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14265998682246769290ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 194727783047393137ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11796529564242697135ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7856349028508151202ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10389016882084771205ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6282430861201423711ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9578818364910754886ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17783237802343310114ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11580113925055137838ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3202452264951381293ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1909419248360269958ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11916672515389679989ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5965408669134050645ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7982218018922300544ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8673259098909074821ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11669787192030861945ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17220126901769420340ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14807958427415944268ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12328720841438203932ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11547655071920431128ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3346085847245223129ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6760713338179552396ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1176939826766428529ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 359286246782350732ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem, __VscopeHash, 17338273765473664ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4687358349823706097ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 655616316642185118ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13454844320700152882ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17416864407922758547ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8929211276881116587ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1328238226430098025ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6480848433093641568ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1307410231357327502ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12875306405462216418ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3116366350325520781ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1901512065722372680ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11280003477173476305ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1138443896122223573ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16943335134586169980ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2847076512410350220ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15329255598809705634ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 236189080967059921ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5781537990367294364ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8906951112235802463ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9770943194015707551ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18402062695447214634ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6821832540692698429ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12618038115439845860ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14053605710384609799ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3031881522630952240ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6352625059486394287ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7245053803389916180ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 11711867558015599784ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 2101813584809200745ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7135739640210467287ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16867569154636877606ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8568262762401442610ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4645723503375753547ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12665110035566986197ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6483944277099313846ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3638351179037751520ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15247376036726749413ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1275447167337300923ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18322498005992223845ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17991575042296854233ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15409508213598461836ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9376934767624996127ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3946492092616964183ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17695699247381862603ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14883048920150379582ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 616781764226818967ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3775392617922011719ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7121412577878161623ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16892185681822518625ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8549552231300713156ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15556850672184949573ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6384333063404598577ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2272275922066867045ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6773676176466879232ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12082183166512575369ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13231290502531334584ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12568250507830186394ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14134081227781326673ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5672331148260180045ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2115447175877525611ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6594591078275924737ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6682542301519936475ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2640680756368178997ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1859074392092563226ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2507348151058888556ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7650564582802231322ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 564398903900285482ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17105906805243000997ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13897544750044826118ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11379416897876105506ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5001885262787734044ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 302951076785215297ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16595932987382055518ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 703723881985419470ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16714613074736988561ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 935189144296731784ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16543472703964427729ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3144018523311034672ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4124469131893788100ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9391001348305297158ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7111261519371868445ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4144333160225654078ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17413622079263684421ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18105977216160973324ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4824042612510805401ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12308731544690261086ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 895809482406269118ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5509602696014224959ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18294578164398632131ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5240382247536610723ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12447209219383012750ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 10655034692507810237ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15136891057376557727ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8671641216151201290ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10278019462997694158ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17448241617370170204ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7222958685751882139ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, __VscopeHash, 16678706697285578152ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, __VscopeHash, 13373862251593333844ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, __VscopeHash, 7060755537196015635ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10129582514650573833ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12391634121256185685ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3846099912437805506ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8329023631097928134ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6974304150965200801ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12136219030369224695ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17654559403667231149ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16220443743160862020ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7678644034961649745ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14711385953926063204ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11883958963235554631ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13119488087696330760ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 387287777303370680ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_1_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_3_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_5_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11013571629230848468ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15430055505024715251ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 708404945728526287ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14252890182191188618ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10031373940901724805ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_1_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_3_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_5_1 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7852379186591436764ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6237176708276719194ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7151141555368371492ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8453219919560371672ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6992854144569521949ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11773463152759058843ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6921790622977661440ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11296183931620877548ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5108494846983847663ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17531781707312666275ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14892058092490199938ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15218353544557973072ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11381265490088823707ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6303490521583964832ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6521933187060193235ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16193087437567977460ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3111037178457103882ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__prev_tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12119250851415990381ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14089691517529119683ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10945271262356730555ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2440028707287187041ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 521284117767924213ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17642421307997267011ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12243931825292119714ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2229262082768435572ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9544354776344723781ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 986024923217549102ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_gpio__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7246506097280743955ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12408338358174120390ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_are = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15148501314217516196ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15789004257810057215ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_mod = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695573120085023420ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15643693940144522791ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14917773907605102105ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11900501665094721095ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8119429565145461398ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10440360213813007438ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4460972525215520321ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_timer__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4185509170586447498ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6989207171268983854ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1460035467787916840ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9155680661145832942ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7393951802002218886ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3093168302923438494ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4395850591329378089ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16881673417434120967ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6822152207412122115ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__lane_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10903623208593345687ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10001274218066683555ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1170112100289405124ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4983934095776449467ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12675059508601573939ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5804653667863993393ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15980419974907003438ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18445430650638598798ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18169680944172614787ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8444248608380606746ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2684102235814226026ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17292171947167436140ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18259243869178107069ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2683104543491194437ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 5641647265567053390ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12522698447145764428ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13396228201020211657ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7211093795108287062ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 866607294458880467ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15515664711701838662ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2082878904300901308ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2154632945823949216ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16455761052725699866ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17649597289666905267ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3120001800023092697ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3985390410091969459ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9877341327610934606ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12282809769461856248ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13106249087682923498ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4189117198988504333ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 954840909122900256ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14237196107244197552ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_qspi__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6070252682971393463ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_nby = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17392413924750532439ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_adr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11854977016028537498ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_tdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3048816608331968778ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__i2c_rdr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3456275008326915843ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18186222915297720189ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13456321992151608243ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4074736183170539904ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18026578324160906166ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6258529120132427168ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_txd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4113423123432484911ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_rxd_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7482238100303831065ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__clr_nck_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9170550450630958295ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15598884695141124716ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9675434824594086088ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8341156288120439115ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__q_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17762436894187181945ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__phase = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9449105179006919552ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17597934062178970734ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__data_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8530021481459476720ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nby_lat = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6761208805816347332ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tdr_lat = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2165591466383338820ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__shreg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4047071464321435429ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__is_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10874989619021504806ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__addr_phase = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4783482566039780019ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__nack_seen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1178202571894797079ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__scl_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15895510704975127555ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__sda_pull = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 935757449175749786ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__tx_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12013074733069934294ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__rx_go = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9030501850417703811ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__out_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10689192027711855077ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__ack_drv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1254699204642106995ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_i2c__DOT__last_byt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9202612467936767566ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9587545249126476480ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13751068399046537072ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4279078830316057778ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10147679135374392857ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6863992518501722876ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11811345016682550537ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6763045989044028140ull);
    for (int __Vi0 = 0; __Vi0 < 490; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15042715870850038625ull);
    }
    for (int __Vi0 = 0; __Vi0 < 160; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1011940026910059783ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10197764457822224513ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14976748774121072248ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 923658631145127774ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4117121661249720214ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10222874074625202948ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3727187456527141005ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13729913166263530047ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14381656170788944743ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12787642911447795880ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6856017344842115300ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10360907017429303446ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16746016511095657399ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3191054827404917260ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12323479119155955392ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6920103494605018047ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14874972474941725022ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14029662347324496625ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4957930129244507600ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15484846834271601261ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17334069562295458323ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3896762374476456195ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18132732359154230665ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10116792043653708119ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6361012741556915181ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17457034998831848048ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13514830012650562627ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13379313064287923907ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ir = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__ic = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__input_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18354894797324480226ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__weight_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12147382467246443293ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11427296614848889029ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5316462619069851387ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__result_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15076663651310006397ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2085124885306564663ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7648152197165866105ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2950701506385871047ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 573323267475389536ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4144934712245816691ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13546966995774090478ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13938590602329576791ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12212422976117099292ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16282988128431334649ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10023049323466968623ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 483676709532900343ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0 = 0;
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 7680; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12324547579576764946ull);
    }
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 5328931764091374068ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9966241959447117902ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1761023775634972556ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410361729146498274ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14992730467659843457ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15727254238467772184ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11539424858181337405ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17793427604368069067ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10663427708991026010ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18255068763866105047ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10437259579130382801ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10513324111393043072ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16614833810715842619ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5269524434694201237ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4877200084907046792ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3178240001344704203ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8926593010586764780ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 480796239881131196ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6854393540791464043ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8948344638830961363ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16501080315273443693ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16525143177029235183ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7938691064991444097ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4252670610718652315ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14975010327761214846ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12336631388278503515ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13438518410298498489ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13173120135592009154ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15731941537973262749ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4704338640655443747ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8958740021741238301ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11736412912691390249ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17233871338617308580ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7063367036514184137ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5632476983481193866ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11025581266048749940ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4268933863397727267ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4971467830022429399ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12918241792449897035ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17573174343997730005ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8886566774078753580ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16189375181032712915ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1691874399514122533ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2392306987656204008ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4387143152478777621ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5434647990807462866ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1977283290972267356ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8896794259056397334ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13986298342847688536ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15690002123491202054ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15956607902355328197ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 181377881724370105ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17085678846676191232ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12470059363522639213ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5797907293177236059ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 812638551358012850ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16683885397622624925ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326227904413716677ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8144680779978598553ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13602544695851523241ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15840749899881809307ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12575089486013890582ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12349385452730991036ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13248585962746811846ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15540083957286552253ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11067620143497733421ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5750930831623986424ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13568422383600252244ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2483972097366193037ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 133224596924701495ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16280771377848388341ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15899859395213032724ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688215011913008408ull);
    vlSelf->i2c_system_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7724872709421950760ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__scl_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10960413322164873200ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__sda_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4381960476991649683ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__scl_rise = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6283329883991687710ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__scl_fall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18296342127023100635ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->i2c_system_tb__DOT__slave__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15148791112298613565ull);
    }
    vlSelf->i2c_system_tb__DOT__slave__DOT__wr_ptr = 0;
    vlSelf->i2c_system_tb__DOT__slave__DOT__rd_ptr = 0;
    vlSelf->i2c_system_tb__DOT__slave__DOT__wr_base = 0;
    vlSelf->i2c_system_tb__DOT__slave__DOT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7433414983924295020ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__sh = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8441612892171832283ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__tx_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1603627889084854812ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__bcnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5259029164089613740ull);
    vlSelf->i2c_system_tb__DOT__slave__DOT__rw_bit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18278716878680980899ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_40 = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__uart_awready = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__uart_wready = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__uart_bvalid = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__i2c_system_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__resetn = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_instr_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__aw_ready = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__i2c_system_tb__DOT__dut__DOT__cpu_data_bus__w_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__resetn__0 = 0;
    vlSelf->__Vtrigprevexpr_h4435b175__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__i2c_system_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
