// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vqspi_modes_tb.h for the primary calling header

#include "Vqspi_modes_tb__pch.h"

void Vqspi_modes_tb___024root___timing_ready(Vqspi_modes_tb___024root* vlSelf);

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_static(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_static\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.qspi_modes_tb__DOT__clk = 0U;
    vlSelfRef.qspi_modes_tb__DOT__resetn = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->qspi_modes_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5407877511853387548ull);
    vlSelfRef.qspi_modes_tb__DOT__received = ""s;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__clk__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__resetn__0 = 0U;
    vlSelfRef.__Vtrigprevexpr_hac6bdf9c__1 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__qspi_cs_n__0 
        = vlSelfRef.qspi_modes_tb__DOT__qspi_cs_n;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 1U;
    Vqspi_modes_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_static__TOP(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_static__TOP\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.qspi_modes_tb__DOT__clk = 0U;
    vlSelfRef.qspi_modes_tb__DOT__resetn = 0U;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->qspi_modes_tb__DOT__uart_read__Vstatic__d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5407877511853387548ull);
    vlSelfRef.qspi_modes_tb__DOT__received = ""s;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0U;
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_initial__TOP(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_initial__TOP\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i;
    qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i;
    qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i;
    qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i;
    qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i;
    qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0x0000000fU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0x0000ffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000100U > qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[(0x000000ffU 
                                                                      & qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i)] = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 256, 0, "bootrom.hex"s,  &(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] bootrom.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_boot_rom"
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[0U]
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[1U]);
    qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[(0x000007ffU 
                                                                        & qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "firmware.hex"s
                 ,  &(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] firmware.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_instr_sram"
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[1U]);
    qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00000800U > qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem[(0x000007ffU 
                                                                       & qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i)] = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 2048, 0, "data_mem.hex"s
                 ,  &(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] data_mem.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_data_sram"
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem[1U]);
    qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x00001e00U > qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0U;
        if (VL_LIKELY(((0x1dffU >= (0x00001fffU & qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[(0x00001fffU 
                                                                         & qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0;
        }
        qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 32, 7680, 0, "ai_sram_init.hex"s
                 ,  &(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[SRAM_INIT %m] ai_sram_init.hex yuklendi, mem[0]=%08x mem[1]=%08x\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_ai_sram"
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[0U]
                 , '#',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[1U]);
    qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00002000U, qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory[(0x00001fffU 
                                                          & qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i)] = 0xffU;
        qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + qspi_modes_tb__DOT__flash__DOT__unnamedblk1__DOT__i);
    }
    VL_READMEM_N(true, 8, 8192, 0, "flash.hex"s,  &(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory)
                 , 0, ~0ULL);
    VL_WRITEF_NX("[FLASH] flash.hex yuklendi (8192 byte)\n",0);
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_final(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_final\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_final__TOP(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_final__TOP\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("=== [PERIPH_BUS] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [UART_0] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [GPIO] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [TIMER] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n=== [QSPI] AXI-Lite Protocol Check Raporu ===\n  Kontrol : %0d\n  PASS    : %0d\n  FAIL    : %0d\n",3
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count
                 , '~',32,vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
    if ((0U == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count)) {
        VL_WRITEF_NX("  >>> PROTOKOL UYUMLU <<<\n",0);
    } else {
        VL_WRITEF_NX("  >>> PROTOKOL IHLALI TESPIT EDILDI <<<\n",0);
    }
    VL_WRITEF_NX("==========================================\n",0);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqspi_modes_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vqspi_modes_tb___024root___eval_phase__stl(Vqspi_modes_tb___024root* vlSelf);

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_settle(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_settle\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vqspi_modes_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("verif/tb/qspi_modes_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vqspi_modes_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_triggers_vec__stl(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_triggers_vec__stl\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready) 
                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0)) 
                                                      << 2U) 
                                                     | ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vqspi_modes_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqspi_modes_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vqspi_modes_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vqspi_modes_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___trigger_anySet__stl\n"); );
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

extern const VlUnpacked<CData/*3:0*/, 512> Vqspi_modes_tb__ConstPool__TABLE_h84b64dae_0;

VL_ATTR_COLD void Vqspi_modes_tb___024root___stl_sequent__TOP__0(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___stl_sequent__TOP__0\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ qspi_modes_tb__DOT__flash_out;
    qspi_modes_tb__DOT__flash_out = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__flash_oe;
    qspi_modes_tb__DOT__flash_oe = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = 0;
    QData/*36:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b = 0;
    CData/*7:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0;
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0;
    CData/*4:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result = 0;
    CData/*5:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D = 0;
    QData/*33:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith = 0;
    CData/*4:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0;
    QData/*32:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result = 0;
    SData/*15:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result = 0;
    IData/*16:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0;
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
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                               << 2U) | (((1U == (3U 
                                                  & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))))) {
        if ((0U != (((2U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                     << 2U) | (((1U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
                                << 1U) | (0U == (3U 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:863: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 863, "");
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 0U;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
            vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.aw_valid = 1U;
            vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.w_valid = 1U;
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__lane_w 
        = ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
            ? 4U : ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))
                     ? 2U : 1U));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__adr_eff 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b)
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr
            : VL_SHIFTL_III(32,32,32, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr, 8U));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr) 
                          - (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_count 
        = (0x0000007fU & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr) 
                          - (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe = ((0x0eU 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe)) 
                                                | ((((2U 
                                                      == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                                                     | (3U 
                                                        == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) 
                                                    | (5U 
                                                       == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) 
                                                   | (4U 
                                                      == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))));
    vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe = (0x0000000cU 
                                                | (1U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe)));
    if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))) {
        if ((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (2U | (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        } else if ((6U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (0x0eU & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        }
        if ((4U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (0x0eU & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        }
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode))) {
        if ((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (2U | (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        } else if ((6U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (0x0eU & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        }
        if ((4U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state))) {
            vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe 
                = (0x0eU & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__qspi_io_o = ((8U 
                                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o)) 
                                               | (6U 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                        >> (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt)))));
    vlSelfRef.qspi_modes_tb__DOT__qspi_io_o = (8U | (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o));
    if (((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
         & (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode)))) {
        vlSelfRef.qspi_modes_tb__DOT__qspi_io_o = (
                                                   (0x0cU 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                           >> (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                            >> 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                                                - (IData)(1U)))))));
    } else if (((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                & (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode)))) {
        vlSelfRef.qspi_modes_tb__DOT__qspi_io_o = (
                                                   (0x0cU 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o)) 
                                                   | ((2U 
                                                       & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                           >> 
                                                           (7U 
                                                            & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                                               - (IData)(2U)))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                            >> 
                                                            (7U 
                                                             & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                                                - (IData)(3U)))))));
        vlSelfRef.qspi_modes_tb__DOT__qspi_io_o = (
                                                   (3U 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o)) 
                                                   | (((2U 
                                                        & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                            >> (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out) 
                                                             >> 
                                                             (7U 
                                                              & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt) 
                                                                 - (IData)(1U)))))) 
                                                      << 2U));
    }
    vlSelfRef.qspi_modes_tb__DOT__qspi_cs_n = ((0U 
                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)) 
                                               | (8U 
                                                  == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 0U;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 0U;
    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.r_ready = 1U;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                        >> 0x0000001fU))) << 0x0000000cU) 
           | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
              >> 0x00000014U));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
        [(0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                         >> 0x0000000fU))];
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip 
        = (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
           == ((~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex) 
               & (- (IData)((0x17U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : ((((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                            << 1U)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                             >> 1U))) 
                    << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                      >> 1U)) | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 3U))) 
                              << 4U)) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                  >> 3U)) 
                                           | (1U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 5U))) 
                                          << 2U) | 
                                         ((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 5U)) 
                                          | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 7U))))) 
                 << 0x00000018U) | ((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 7U)) 
                                        | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 9U))) 
                                       << 6U) | (((2U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                      >> 9U)) 
                                                  | (1U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                        >> 0x0000000bU))) 
                                                 << 4U)) 
                                     | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x0000000bU)) 
                                          | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000000dU))) 
                                         << 2U) | (
                                                   (2U 
                                                    & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                       >> 0x0000000dU)) 
                                                   | (1U 
                                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                         >> 0x0000000fU))))) 
                                    << 0x00000010U)) 
               | (((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                              >> 0x0000000fU)) | (1U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                     >> 0x00000011U))) 
                      << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                        >> 0x00000011U)) 
                                 | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                          >> 0x00000013U))) 
                                << 4U)) | ((((2U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                               >> 0x00000013U)) 
                                             | (1U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x00000015U))) 
                                            << 2U) 
                                           | ((2U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x00000015U)) 
                                              | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                    >> 0x00000017U))))) 
                   << 8U) | (((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x00000017U)) 
                                | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x00000019U))) 
                               << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                 >> 0x00000019U)) 
                                          | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                   >> 0x0000001bU))) 
                                         << 4U)) | 
                             ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                       >> 0x0000001bU)) 
                                | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                         >> 0x0000001dU))) 
                               << 2U) | ((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                                >> 0x0000001dU)) 
                                         | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
                                            >> 0x0000001fU)))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 0U;
    if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        if ((1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = 1U;
                }
            }
            if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 2U;
            } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = (1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 1U;
            } else if ((4U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword = 3U;
            }
        }
        if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
        } else {
            if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = 1U;
            }
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm = 0x10U;
                }
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_45 = (IData)((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_46 = (IData)((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                >> 1U) 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                  >> 0x0000001fU)));
    __VdfgRegularize_h6e95ff9d_0_50 = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex) 
                                       & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    __VdfgRegularize_h6e95ff9d_0_47 = (1U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                >> 0x0000000fU)));
    __VdfgRegularize_h6e95ff9d_0_48 = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x0000001fU));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
        = ((~ ((IData)(0xfffffffeU) << (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))) 
           << (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__irq_vector 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done) 
            << 0x00000011U) | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_ena) 
                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt 
                                   == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_are)) 
                               << 0x00000010U));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
    if ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 0U;
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
        if (((6U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)) 
             & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active = 1U;
        } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = 1U;
        }
        if ((1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                if ((3U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                    if ((4U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed 
        = ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
            >> 0x0000001fU) & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result 
        = (0x0000003fU & ((0x0000001fU & ((0x0000000fU 
                                           & ((7U & 
                                               ((3U 
                                                 & VL_COUNTONES_I(
                                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                   >> 0x0000001eU))) 
                                                + (3U 
                                                   & VL_COUNTONES_I(
                                                                    (3U 
                                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                        >> 0x0000001cU)))))) 
                                              + (7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000001aU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000018U)))))))) 
                                          + (0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000016U)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x00000014U)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000012U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x00000010U)))))))))) 
                          + (0x0000001fU & ((0x0000000fU 
                                             & ((7U 
                                                 & ((3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000eU)))) 
                                                    + 
                                                    (3U 
                                                     & VL_COUNTONES_I(
                                                                      (3U 
                                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                          >> 0x0000000cU)))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 0x0000000aU)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 8U)))))))) 
                                            + (0x0000000fU 
                                               & ((7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 6U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 4U)))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                            >> 2U)))) 
                                                      + 
                                                      (3U 
                                                       & VL_COUNTONES_I(
                                                                        (3U 
                                                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)))))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex)) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex));
    __Vtableidx2 = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex) 
                     << 7U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed 
        = Vqspi_modes_tb__ConstPool__TABLE_h84b64dae_0
        [__Vtableidx2];
    __VdfgRegularize_h6e95ff9d_0_35 = ((0x19U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x18U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
           & (2U > (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    __VdfgRegularize_h6e95ff9d_0_15 = ((0x1dU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | (0x1cU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec 
        = (((((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               >> 0x00000018U) == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                   >> 0x00000018U)) 
             << 3U) | (((0x000000ffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                        >> 0x00000010U)) 
                        == (0x000000ffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000010U))) 
                       << 2U)) | ((((0x000000ffU & 
                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 8U)) == (0x000000ffU 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U))) 
                                   << 1U) | ((0x000000ffU 
                                              & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                             == (0x000000ffU 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))));
    __VdfgRegularize_h6e95ff9d_0_36 = ((0x19U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x1dU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x1bU 
                                              == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x1fU 
                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        << 1U)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                          >> 1U)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 0x0000001fU))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex)))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    __VdfgRegularize_h6e95ff9d_0_34 = ((0x31U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                       | ((0x30U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                          | ((0x33U 
                                              == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                             | (0x32U 
                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = (0x00000fffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 0U;
    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.r_ready = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.b_ready = 1U;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex)
            ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
               + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
              == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.qspi_modes_tb__DOT____Vcellinp__flash__io_in 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe));
    qspi_modes_tb__DOT__flash_oe = 0U;
    qspi_modes_tb__DOT__flash_out = 0x0fU;
    if (((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_cs_n)) 
         & (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__phase)))) {
        if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__width))) {
            qspi_modes_tb__DOT__flash_oe = 3U;
            qspi_modes_tb__DOT__flash_out = ((0x0dU 
                                              & (IData)(qspi_modes_tb__DOT__flash_out)) 
                                             | (2U 
                                                & ((vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory
                                                    [
                                                    (0x00001fffU 
                                                     & vlSelfRef.qspi_modes_tb__DOT__flash__DOT__read_addr)] 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - 
                                                        (6U 
                                                         & ((IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__out_step) 
                                                            << 1U))))) 
                                                   << 1U)));
            qspi_modes_tb__DOT__flash_out = ((0x0eU 
                                              & (IData)(qspi_modes_tb__DOT__flash_out)) 
                                             | (1U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory
                                                   [
                                                   (0x00001fffU 
                                                    & vlSelfRef.qspi_modes_tb__DOT__flash__DOT__read_addr)] 
                                                   >> 
                                                   (7U 
                                                    & ((IData)(6U) 
                                                       - 
                                                       (6U 
                                                        & ((IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__out_step) 
                                                           << 1U)))))));
        } else if ((4U == (IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__width))) {
            qspi_modes_tb__DOT__flash_oe = 0x0fU;
            qspi_modes_tb__DOT__flash_out = (0x0000000fU 
                                             & ((1U 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__out_step))
                                                 ? vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory
                                                [(0x00001fffU 
                                                  & vlSelfRef.qspi_modes_tb__DOT__flash__DOT__read_addr)]
                                                 : 
                                                (vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory
                                                 [(0x00001fffU 
                                                   & vlSelfRef.qspi_modes_tb__DOT__flash__DOT__read_addr)] 
                                                 >> 4U)));
        } else {
            qspi_modes_tb__DOT__flash_oe = 2U;
            qspi_modes_tb__DOT__flash_out = ((0x0dU 
                                              & (IData)(qspi_modes_tb__DOT__flash_out)) 
                                             | (2U 
                                                & ((vlSelfRef.qspi_modes_tb__DOT__flash__DOT__memory
                                                    [
                                                    (0x00001fffU 
                                                     & vlSelfRef.qspi_modes_tb__DOT__flash__DOT__read_addr)] 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(7U) 
                                                        - (IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__out_step)))) 
                                                   << 1U)));
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_24 = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int));
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = (0x000000ffU 
                                       & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                           << 6U) | 
                                          (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                            << 4U) 
                                           | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))));
                            } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0x0fU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (0x00000050U 
                                          | (((8U & 
                                               ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                << 3U)) 
                                              | (2U 
                                                 & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 1U))) 
                                             << 4U)));
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                    = ((0xf0U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                       | (4U | ((8U 
                                                 & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                    << 3U)) 
                                                | (2U 
                                                   & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                      << 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:593: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 593, "");
                                    }
                                }
                            }
                            if ((0x3eU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 3U;
                            }
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                = ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))
                                    ? 0x0eU : 0x0cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (((0x00000030U 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                           >> 0x00000014U)) 
                                       | ((0x0000000cU 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000000eU)) 
                                          | (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 8U)))) 
                                      << 2U));
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xfcU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
                        } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0x0fU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (0x00000040U | 
                                      (((8U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                               >> 0x0000000dU)) 
                                        | (2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                 >> 0x0000000fU))) 
                                       << 4U)));
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel 
                                = ((0xf0U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel)) 
                                   | (4U | ((8U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   << 3U)) 
                                            | (2U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                << 1U)))));
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:653: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 653, "");
                                }
                            }
                        }
                        if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x1aU)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x12U)))) 
                                          << 2U));
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 0x0aU)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 2U)))));
                            } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 0x11U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                  >> 0x11U)))) 
                                          << 2U));
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((~ 
                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                   >> 1U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                    >> 1U)))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:535: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 535, "");
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xeeU;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:633: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 633, "");
                                }
                            }
                        }
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0cU;
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 4U;
                        } else {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    } else {
                        if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
                        } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0x44U;
                        }
                        if ((1U & (~ VL_ONEHOT_I(((
                                                   (2U 
                                                    == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                   << 1U) 
                                                  | (3U 
                                                     == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                            if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                         << 1U) | (3U 
                                                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:613: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                 , '#',64,VL_TIME_UNITED_Q(1000)
                                                 , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
                                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_alu.sv", 613, "");
                                }
                            }
                        }
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 0U;
                        if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 3U;
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 1U;
                        } else {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0xe4U;
                            if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 0U;
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                        ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 7U : 0x0bU)
                                        : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))
                                            ? 0x0dU
                                            : 0x0eU));
                            } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 1U;
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | (((2U & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex)))) 
                                          << 2U));
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel 
                                    = ((0x0cU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel)) 
                                       | ((2U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex) 
                                                 << 1U)) 
                                          | (1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex))));
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((2U 
                                                        == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                                       << 1U) 
                                                      | (3U 
                                                         == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))))) {
                                if ((0U != (((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex)) 
                                             << 1U) 
                                            | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_alu.sv:554: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.ex_stage_i.alu_i", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex));
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
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
        = ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
            : ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel))
                ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000010U) | (0x0000ffffU 
                                       & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                : ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                    << 0x00000018U) | ((0x00ff0000U 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           << 0x00000010U)) 
                                       | ((0x0000ff00U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                              << 8U)) 
                                          | (0x000000ffU 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
        = ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
            ? ((((0x0000ff00U & ((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 0x0000001fU))) 
                                 << 8U)) | (0x000000ffU 
                                            & (- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 0x00000017U)))))) 
                << 0x00000010U) | ((0x0000ff00U & (
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                  >> 0x0000000fU)))) 
                                                   << 8U)) 
                                   | (0x000000ffU & 
                                      (- (IData)((1U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))))
            : ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    __VdfgRegularize_h6e95ff9d_0_52 = (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                        << 0x00000010U) 
                                       | (0x0000ffffU 
                                          & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex));
    __VdfgRegularize_h6e95ff9d_0_51 = (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                        << 0x00000010U) 
                                       | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                          >> 0x00000010U));
    if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift_arith));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_signed;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_subword));
    } else {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith 
            = (1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword 
            = (3U & (- (IData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex))));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_19 = (1U 
                                                 & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                                    & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                        >> 0x0000001fU) 
                                                       ^ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S 
        = (((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)) 
            | (0U != vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP) 
               ^ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
                  > vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP)) 
              | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
                 == vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec 
        = (((VL_GTS_III(9, ((((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               >> 0x0000001fU) & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                  >> 3U)) 
                             << 8U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000018U)), 
                        (((IData)((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                    >> 3U) & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                              >> 0x0000001fU))) 
                          << 8U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                    >> 0x00000018U))) 
             << 3U) | (VL_GTS_III(9, ((0x00000100U 
                                       & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                           >> 0x0000000fU) 
                                          & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                             << 6U))) 
                                      | (0x000000ffU 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                            >> 0x00000010U))), 
                                  ((0x00000100U & (
                                                   ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 6U) 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 0x0000000fU))) 
                                   | (0x000000ffU & 
                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                       >> 0x00000010U)))) 
                       << 2U)) | ((VL_GTS_III(9, ((0x00000100U 
                                                   & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 7U) 
                                                      & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                         << 7U))) 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 8U))), 
                                              ((0x00000100U 
                                                & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                    << 7U) 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                      >> 7U))) 
                                               | (0x000000ffU 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                     >> 8U)))) 
                                   << 1U) | VL_GTS_III(9, 
                                                       ((0x00000100U 
                                                         & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             << 1U) 
                                                            & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                               << 8U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)), 
                                                       ((0x00000100U 
                                                         & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_signed) 
                                                             << 8U) 
                                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                                               << 1U))) 
                                                        | (0x000000ffU 
                                                           & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)))));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 0U;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 0U;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic 
        = ((0x28U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
              | ((0x24U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | (IData)(__VdfgRegularize_h6e95ff9d_0_15))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_35) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
              | ((0x1bU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x1eU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x1fU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x1aU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (0x0000000fU & (- (IData)((IData)((0x0fU 
                                             == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
            ? (~ ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   << 0x00000010U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                                      >> 0x00000010U)))
            : ((IData)(__VdfgRegularize_h6e95ff9d_0_36)
                ? (~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex) 
           | (IData)(__VdfgRegularize_h6e95ff9d_0_36));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input = 0U;
    if ((0x36U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex;
    } else if ((((0x30U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x32U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x37U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev;
    } else if ((((0x31U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 || (0x33U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) 
                || (0x35U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
            = ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                >> 0x1fU) ? ((((((((2U & ((~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                                          << 1U)) | 
                                   (1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                             >> 1U)))) 
                                  << 6U) | (((2U & 
                                              ((~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 2U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                    >> 3U)))) 
                                            << 4U)) 
                                | ((((2U & ((~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 4U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 5U)))) 
                                    << 2U) | ((2U & 
                                               ((~ 
                                                 (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 6U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 7U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((~ 
                                                           (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                            >> 8U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                             >> 9U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((~ 
                                                             (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000aU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000bU)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((~ 
                                                             (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                              >> 0x0000000cU)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000dU)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((~ 
                                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                               >> 0x0000000eU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (~ 
                                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                                >> 0x0000000fU)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                >> 0x00000010U)) 
                                            << 1U)) 
                                     | (1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 0x00000011U)))) 
                                    << 6U) | (((2U 
                                                & ((~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000012U)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ 
                                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000013U)))) 
                                              << 4U)) 
                                  | ((((2U & ((~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000014U)) 
                                              << 1U)) 
                                       | (1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                   >> 0x00000015U)))) 
                                      << 2U) | ((2U 
                                                 & ((~ 
                                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x00000016U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x00000017U)))))) 
                                 << 8U) | (((((2U & 
                                               ((~ 
                                                 (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                  >> 0x00000018U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x00000019U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((~ 
                                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001aU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001bU)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((~ 
                                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                      >> 0x0000001cU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (~ 
                                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001dU)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                       >> 0x0000001eU)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                        >> 0x0000001fU))))))))
                : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev);
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left 
        = ((0x2aU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
           | ((IData)(__VdfgRegularize_h6e95ff9d_0_34) 
              | ((0x27U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                 | ((0x37U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                    | ((0x35U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                       | (0x49U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) 
           & (IData)(__VdfgRegularize_h6e95ff9d_0_34));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b00U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b02U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0x0b03U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)));
    __VdfgRegularize_h6e95ff9d_0_5 = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q
        [(0x0000001fU & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))];
    __VdfgRegularize_h6e95ff9d_0_2 = (((0U == (0x0000001fU 
                                               & ((IData)(0x0020U) 
                                                  + 
                                                  (0x000007c0U 
                                                   & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U)))))
                                        ? 0U : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                                [(((IData)(0x0000001fU) 
                                                   + 
                                                   (0x000007ffU 
                                                    & ((IData)(0x0020U) 
                                                       + 
                                                       (0x000007c0U 
                                                        & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           << 6U))))) 
                                                  >> 5U)] 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & ((IData)(0x0020U) 
                                                     + 
                                                     (0x000007c0U 
                                                      & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         << 6U))))))) 
                                      | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
                                         [(0x0000003fU 
                                           & (((IData)(0x0020U) 
                                               + (0x000007c0U 
                                                  & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                     << 6U))) 
                                              >> 5U))] 
                                         >> (0x0000001fU 
                                             & ((IData)(0x0020U) 
                                                + (0x000007c0U 
                                                   & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                      << 6U))))));
    __VdfgRegularize_h6e95ff9d_0_3 = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q
        [(0x0000003eU & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                         << 1U))];
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata 
        = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q)
                : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q))
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
        = (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we) 
            & (0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? (0xffff0888U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_wdata)
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be 
        = (0x0000000fU & ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                           ? ((0U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                               ? 1U : ((1U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 2U : ((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                 ? 4U
                                                 : 8U)))
                           : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))
                               ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? 1U : ((0U == (3U 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                            ? 3U : 
                                           ((1U == 
                                             (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                             ? 6U : 
                                            ((2U == 
                                              (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                              ? 0x0cU
                                              : 8U))))
                               : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
                                   ? ((1U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                       ? 1U : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                ? 3U
                                                : (7U 
                                                   & (- (IData)(
                                                                (3U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))
                                   : (((1U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                        ? 0x0eU : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))
                                                    ? 0x0cU
                                                    : 8U)) 
                                      | (- (IData)(
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)))))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
                 - (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 0U;
    if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex) 
         & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)))) {
        if ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((0U != (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex))) {
            if ((3U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = 1U;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex)
            ? (0xfffffffcU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int)
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int);
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep 
        = (1U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                 | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                    | ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                        >> 2U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)))));
    vlSelfRef.qspi_modes_tb__DOT__flash__DOT__cmd_new 
        = ((0x0000007eU & ((IData)(vlSelfRef.qspi_modes_tb__DOT__flash__DOT__in_sr) 
                           << 1U)) | (1U & (IData)(vlSelfRef.qspi_modes_tb__DOT____Vcellinp__flash__io_in)));
    vlSelfRef.qspi_modes_tb__DOT__qspi_io_i = ((((2U 
                                                  & (((8U 
                                                       & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe))
                                                       ? 
                                                      ((IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o) 
                                                       >> 3U)
                                                       : 
                                                      ((~ 
                                                        ((IData)(qspi_modes_tb__DOT__flash_oe) 
                                                         >> 3U)) 
                                                       | ((IData)(qspi_modes_tb__DOT__flash_out) 
                                                          >> 3U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((4U 
                                                        & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe))
                                                        ? 
                                                       ((IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o) 
                                                        >> 2U)
                                                        : 
                                                       ((~ 
                                                         ((IData)(qspi_modes_tb__DOT__flash_oe) 
                                                          >> 2U)) 
                                                        | ((IData)(qspi_modes_tb__DOT__flash_out) 
                                                           >> 2U))))) 
                                                << 2U) 
                                               | ((2U 
                                                   & (((2U 
                                                        & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe))
                                                        ? 
                                                       ((IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o) 
                                                        >> 1U)
                                                        : 
                                                       ((~ 
                                                         ((IData)(qspi_modes_tb__DOT__flash_oe) 
                                                          >> 1U)) 
                                                        | ((IData)(qspi_modes_tb__DOT__flash_out) 
                                                           >> 1U))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((1U 
                                                         & (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_oe))
                                                         ? (IData)(vlSelfRef.qspi_modes_tb__DOT__qspi_io_o)
                                                         : 
                                                        ((~ (IData)(qspi_modes_tb__DOT__flash_oe)) 
                                                         | (IData)(qspi_modes_tb__DOT__flash_out))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result 
        = ((((0x0000ff00U & (((8U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                               ? ((8U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                   ? ((0x00000080U 
                                       & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000018U)
                                           : (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                              >> 8U)
                                           : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                   : ((0x00000080U 
                                       & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                       ? ((0x00000040U 
                                           & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000018U)
                                           : (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 0x00000010U))
                                       : ((0x00000040U 
                                           & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                           ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                              >> 8U)
                                           : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                               : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                  >> 0x00000018U)) 
                             << 8U)) | (0x000000ffU 
                                        & ((4U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                            ? ((4U 
                                                & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                ? (
                                                   (0x00000020U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                : (
                                                   (0x00000020U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((0x00000010U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((0x00000010U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                            : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                               >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                 ? 
                                                ((2U 
                                                  & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                    >> 8U)
                                                    : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                  : 
                                                 ((8U 
                                                   & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000018U)
                                                    : 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 0x00000010U))
                                                   : 
                                                  ((4U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                    >> 8U)
                                                    : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                 : 
                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in 
                                                     >> 8U)
                                                     : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r1_in))
                                                   : 
                                                  ((2U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000018U)
                                                     : 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 0x00000010U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel))
                                                     ? 
                                                    (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in 
                                                     >> 8U)
                                                     : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_r0_in)))
                                                  : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__ 
        = ((IData)(__VdfgRegularize_h6e95ff9d_0_50)
            ? __VdfgRegularize_h6e95ff9d_0_52 : __VdfgRegularize_h6e95ff9d_0_51);
    __VdfgRegularize_h6e95ff9d_0_43 = (0x0000ffffU 
                                       & ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex));
    __VdfgRegularize_h6e95ff9d_0_44 = (0x0000ffffU 
                                       & ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                           ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                                              >> 0x00000010U)
                                           : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = (0x0000000fU & (- (IData)((1U & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                            >> 3U) 
                                           | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                               >> 3U) 
                                              & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                  >> 2U) 
                                                 | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                     >> 2U) 
                                                    & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                        >> 1U) 
                                                       | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                           >> 1U) 
                                                          & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec)))))))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
        = ((0x14U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? (~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
            : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex)
                ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                    << 0x00000010U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                       >> 0x00000010U))
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ffffffc00ULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | (IData)((IData)((0x00000201U | (0x000001feU 
                                             & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                << 1U))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000ff80003ffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((0x00000100U | ((0x0001fe00U 
                                               & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                  >> 7U)) 
                                              | (0x000000ffU 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                                    >> 8U)))))) 
              << 0x0000000aU));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
        = ((0x0000000007ffffffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
           | ((QData)((IData)((1U | (0x000001feU & 
                                     (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_a 
                                      >> 0x00000017U))))) 
              << 0x0000001bU));
    if ((1U & (~ ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
                  | ((0x14U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                     | (0x16U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))))) {
        if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffffdffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ffffbffffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a 
                = (0x0000000ff7ffffffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a);
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ffffffc00ULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | (IData)((IData)((0x000001feU & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                             << 1U)))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000ff80003ffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)(((0x0001fe00U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                               >> 7U)) 
                               | (0x000000ffU & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                                 >> 8U))))) 
              << 0x0000000aU));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
        = ((0x0000000007ffffffULL & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b) 
           | ((QData)((IData)((0x000001feU & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b 
                                              >> 0x00000017U)))) 
              << 0x0000001bU));
    if (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_op_b_negate) 
         | ((0x14U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
            | (0x16U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
            = (1ULL | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000000200ULL | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000000040000ULL | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b 
                = (0x0000000008000000ULL | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b);
        }
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = (0x0000001fU & ((0U != (0x0000ffffU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                           ? ((0U != (0x000000ffU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                               ? ((0U != (0x0000000fU 
                                          & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                   ? ((0U != (3U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input))
                                       ? (1U & (- (IData)(
                                                          (1U 
                                                           & (~ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)))))
                                       : ((4U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 2U : 3U))
                                   : ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 4U)))
                                       ? ((0x00000010U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 4U : 5U)
                                       : ((0x00000040U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 6U : 7U)))
                               : ((0U != (0x0000000fU 
                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 8U)))
                                   ? ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 8U)))
                                       ? ((0x00000100U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 8U : 9U)
                                       : ((0x00000400U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0aU : 0x0bU))
                                   : ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000000cU)))
                                       ? ((0x00001000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0cU : 0x0dU)
                                       : ((0x00004000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x0eU : 0x0fU))))
                           : ((0U != (0x000000ffU & 
                                      (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                       >> 0x00000010U)))
                               ? ((0U != (0x0000000fU 
                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000010U)))
                                   ? ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000010U)))
                                       ? ((0x00010000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x10U : 0x11U)
                                       : ((0x00040000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x12U : 0x13U))
                                   : ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000014U)))
                                       ? ((0x00100000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x14U : 0x15U)
                                       : ((0x00400000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x16U : 0x17U)))
                               : ((0U != (0x0000000fU 
                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                             >> 0x00000018U)))
                                   ? ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x00000018U)))
                                       ? ((0x01000000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x18U : 0x19U)
                                       : ((0x04000000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1aU : 0x1bU))
                                   : ((0U != (3U & 
                                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                               >> 0x0000001cU)))
                                       ? ((0x10000000U 
                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                           ? 0x1cU : 0x1dU)
                                       : (0x1eU | (- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input 
                                                                  >> 0x0000001eU)))))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__)) 
              & (0x0b80U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__)) 
           & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b82U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__)) 
           & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0x0b83U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))));
    __VdfgRegularize_h6e95ff9d_0_21 = ((0x00000080U 
                                        & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_2
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_2
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_2
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_2
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_2 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U)))))))
                                        : ((- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 5U))))) 
                                           & (((0x00000010U 
                                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                ? __VdfgRegularize_h6e95ff9d_0_3
                                                : (
                                                   (8U 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                    ? __VdfgRegularize_h6e95ff9d_0_3
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                     ? __VdfgRegularize_h6e95ff9d_0_3
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                                      ? __VdfgRegularize_h6e95ff9d_0_3
                                                      : 
                                                     (__VdfgRegularize_h6e95ff9d_0_3 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))) 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ 
                                                               ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                                >> 6U))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
           | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
              | (0U != (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass 
                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__irq_vector))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
           & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass);
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata 
        = ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
            ? ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 0x00000018U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                       >> 8U)) : ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                   << 0x00000010U) 
                                                  | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                                                     >> 0x00000010U)))
            : ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                    << 8U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
                              >> 0x00000018U)) : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 3U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 2U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 0U;
    if ((0x00000040U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000020U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((0x00000010U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            if ((0U == ((0x000003e0U 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000000aU)) 
                                        | (0x0000001fU 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 7U))))) {
                                if ((0U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                                } else if ((1U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = 1U;
                                } else if ((0x0302U 
                                            == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = 1U;
                                } else if ((2U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = 1U;
                                } else if ((0x07b2U 
                                            == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                        = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec 
                                        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = 1U;
                                } else if ((0x0105U 
                                            == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x14U))) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                                    if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep) {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                                    }
                                } else {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((0x0105U 
                                                             == 
                                                             (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                              >> 0x14U)) 
                                                            << 5U) 
                                                           | (((0x07b2U 
                                                                == 
                                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                 >> 0x14U)) 
                                                               << 4U) 
                                                              | ((2U 
                                                                  == 
                                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 3U))) 
                                                          | (((0x0302U 
                                                               == 
                                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x14U)) 
                                                              << 2U) 
                                                             | (((1U 
                                                                  == 
                                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                   >> 0x14U)) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   == 
                                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                    >> 0x14U))))))))) {
                                    if ((0U != ((((0x0105U 
                                                   == 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x14U)) 
                                                  << 5U) 
                                                 | (((0x07b2U 
                                                      == 
                                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x14U)) 
                                                     << 4U) 
                                                    | ((2U 
                                                        == 
                                                        (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 3U))) 
                                                | (((0x0302U 
                                                     == 
                                                     (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                    << 2U) 
                                                   | (((1U 
                                                        == 
                                                        (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x14U)) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U))))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2704: Assertion failed in %m: unique case, but multiple matches found for '12'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                                         , '#',12,
                                                         (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x14U));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2704, "");
                                        }
                                    }
                                }
                            } else {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            }
                        } else {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                            } else {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
                            }
                            if ((1U == (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x0cU)))) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 2U);
                            } else if ((3U == (3U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU)))) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op 
                                    = ((0U == (0x0000001fU 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                  >> 0x0fU)))
                                        ? 0U : 3U);
                            } else {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     (((3U 
                                                        == 
                                                        (3U 
                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                            >> 0x0cU))) 
                                                       << 2U) 
                                                      | (((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                               >> 0x0cU))) 
                                                          << 1U) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                >> 0x0cU))))))))) {
                                if ((0U != (((3U == 
                                              (3U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))) 
                                             << 2U) 
                                            | (((2U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU))) 
                                                << 1U) 
                                               | (1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2775: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                                     , '#',2,
                                                     (3U 
                                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                         >> 0x0cU)));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2775, "");
                                    }
                                }
                            }
                            if ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                 >> 0x0000001fU)) {
                                if ((0x40000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x20000000U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x10000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x08000000U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x04000000U 
                                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x01000000U 
                                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x00800000U 
                                                     & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0U 
                                                                != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00200000U 
                                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00100000U 
                                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0U 
                                                         != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else {
                                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                }
                                            } else {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else if ((0x10000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x08000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0U 
                                                 != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0U 
                                                    != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x04000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x02000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x01000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00800000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00400000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00100000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0U 
                                                != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op))) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else if ((0x20000000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x04000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x02000000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x40000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x20000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x10000000U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x08000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x04000000U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x02000000U 
                                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                if (
                                                    (0x01000000U 
                                                     & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00800000U 
                                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00400000U 
                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) {
                                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                                    } else {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00800000U 
                                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00400000U 
                                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                } else if (
                                                           (0x00400000U 
                                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x00200000U 
                                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    } else if (
                                                               (0x00100000U 
                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                                    }
                                                }
                                            } else {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        }
                                    } else {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    }
                                } else {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else if ((0x20000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x10000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x08000000U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x04000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x02000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x01000000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00200000U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            } else if (
                                                       (0x00100000U 
                                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))) {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x02000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x01000000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00800000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00400000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        } else if (
                                                   (0x00200000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            if ((0x00100000U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                            } else {
                                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                            }
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x01000000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00800000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((0x00400000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        if ((0x00200000U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                        } else if (
                                                   (0x00100000U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                        }
                                    } else if ((0x00200000U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x00000014U)))) {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = 1U;
                                    }
                                } else {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                                }
                            } else {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec 
                                = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        } else {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 3U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        if ((0U != (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                          >> 0x0cU)))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 0U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 0U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 3U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = 3U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 2U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                    if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? 0x0bU : 1U) : 
                               ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                 ? 0x0aU : 0U));
                    } else if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x0dU : 0x0cU);
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000020U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((0x00000010U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((3U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x1eU))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else if ((2U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x1eU))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                        if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x1cU)))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                        }
                        if ((0x40000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x20000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x10000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x08000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x04000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x02000000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00004000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                } else if ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                                } else {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else if ((0x00001000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                            } else {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x19U;
                            }
                        } else if ((0x20000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x10000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x08000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x04000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        } else if ((0x02000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    if ((0x00001000U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x32U;
                                    } else {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x33U;
                                    }
                                } else if ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x30U;
                                } else {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x31U;
                                }
                            } else if ((0x00002000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                } else {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                                }
                            } else if ((0x00001000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = 1U;
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = 3U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 6U;
                            } else {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = 0U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = 1U;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = 0U;
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux = 3U;
                            }
                        } else {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                    ? ((0x00002000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x15U
                                            : 0x2eU)
                                        : ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x25U
                                            : 0x2fU))
                                    : ((0x00002000U 
                                        & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                        ? ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 3U : 2U)
                                        : ((0x00001000U 
                                            & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                            ? 0x27U
                                            : 0x18U)));
                        }
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                if ((1U & (~ VL_ONEHOT_I((((2U == (7U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                      >> 0x0cU))) 
                                           << 2U) | 
                                          (((1U == 
                                             (7U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))))) {
                    if ((0U != (((2U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                 << 2U) | (((1U == 
                                             (7U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU))) 
                                            << 1U) 
                                           | (0U == 
                                              (7U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0cU))))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:376: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000)
                                         , '#',3,(7U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 376, "");
                        }
                    }
                }
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 1U;
                if ((0U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0cU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 2U;
                } else if ((1U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 1U;
                } else if ((2U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0cU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 0U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = 0U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((0x00000010U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 2U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
                if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                                ? 0x15U : 0x2eU);
                    } else if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                        if ((0U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x19U))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x25U;
                        } else if ((0x20U == (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                              >> 0x19U))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x24U;
                        } else {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                        }
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x2fU;
                    }
                } else if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator 
                        = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 3U : 2U);
                } else if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x27U;
                    if ((0U != (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x19U))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    if ((0U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                      >> 0x0cU)))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                             >> 0x0cU)))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = 1U;
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((1U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                    >> 0x0cU))) 
                                               << 1U) 
                                              | (0U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x0cU)))))))) {
                        if ((0U != (((1U == (7U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU))) 
                                     << 1U) | (0U == 
                                               (7U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0cU)))))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_decoder.sv:2683: Assertion failed in %m: unique case, but multiple matches found for '3'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.decoder_i.instruction_decoder", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000)
                                             , '#',3,
                                             (7U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x0cU)));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_decoder.sv", 2683, "");
                            }
                        }
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    } else if ((2U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
        if ((1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = 1U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = 0x18U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = 2U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id 
                = (1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                            >> 0x0eU)));
            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                        = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                            ? 1U : 2U);
                }
            } else if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = 0U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id 
                    = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id)
                        ? 1U : 2U);
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
        }
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = 1U;
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, (IData)(
                                                                 (0x00000003ffffffffULL 
                                                                  & VL_MULS_QQQ(34, 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                                                << 0x00000010U) 
                                                                                | (0x0000ffffU 
                                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
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
                                                                                ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)) 
                                                                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)))) 
                                                                                ^ 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 0x00000010U) 
                                                                                | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U)))))), 
                                                                                (0x00000003ffffffffULL 
                                                                                & VL_EXTENDS_QI(34,17, qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__)))))) 
                                       + VL_EXTENDS_QI(33,32, 
                                                       ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                                                         ? 
                                                        (VL_EXTENDS_II(32,17, qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b__BRA__33__03a17__KET__) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex))))))
                                                         : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex)))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_MULS_QQQ(34, 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 ((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                    & ((IData)(__VdfgRegularize_h6e95ff9d_0_43) 
                                                                       >> 0x0000000fU)) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_43)))), 
                                                (0x00000003ffffffffULL 
                                                 & VL_EXTENDS_QI(34,17, 
                                                                 (((IData)(
                                                                           (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                                                             >> 1U) 
                                                                            & ((IData)(__VdfgRegularize_h6e95ff9d_0_44) 
                                                                               >> 0x0000000fU))) 
                                                                   << 0x00000010U) 
                                                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_44))))) 
                                    + (VL_EXTENDS_QQ(34,33, 
                                                     (0x00000001ffffffffULL 
                                                      & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                          ? 
                                                         (((QData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q)) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))
                                                          : 
                                                         VL_EXTENDS_QI(33,32, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex)))) 
                                       + VL_EXTENDS_QI(34,32, 
                                                       ((- (IData)(
                                                                   (3U 
                                                                    == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) 
                                                        & VL_SHIFTR_III(32,32,32, 
                                                                        ((IData)(1U) 
                                                                         << (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex)), 1U))))));
    if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((0x0cU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (3U & (- (IData)((IData)((3U == (3U 
                                                  & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec))))))));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
               | (0x0000000cU & ((- (IData)((IData)(
                                                    (0x0cU 
                                                     == 
                                                     (0x0cU 
                                                      & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec)))))) 
                                 << 2U)));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((0x0cU & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (3U & (- (IData)((1U & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                          >> 1U) | 
                                         (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                           >> 1U) & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec))))))));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = ((3U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater)) 
               | (0x0000000cU & ((- (IData)((1U & (
                                                   ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                    >> 3U) 
                                                   | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec) 
                                                       >> 3U) 
                                                      & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec) 
                                                         >> 2U)))))) 
                                 << 2U)));
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_vec;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater_vec;
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax 
        = (0x0000000fU & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                          ^ (- (IData)(((0x17U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                        | ((0x10U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                           | ((0x11U 
                                               == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                              | (0x16U 
                                                 == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
        = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
        = (0x0000001fffffffffULL & (VL_EXTENDS_QQ(37,36, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a) 
                                    + VL_EXTENDS_QQ(37,36, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                                = (0x0000000fU & ((1U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  (~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                                   : (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
                        }
                    } else {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                            = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                ? ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                   | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal))
                                : (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result 
                        = (0x0000000fU & ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                           ? (~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater))
                                           : (~ ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
                                                 | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
                }
            }
        }
        if ((0x00000020U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = (0x0000003fU & ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   (0x0000001fU 
                                                    & ((IData)(0x1fU) 
                                                       - (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                                    : 0x20U)
                                                   : 
                                                  ((0U 
                                                    != qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)
                                                    : 0x20U))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                                                   ? 
                                                  ((0U 
                                                    != qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                                                    ? 
                                                   ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                                    - (IData)(1U))
                                                    : 
                                                   ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x1fU)
                                                     ? 0x1fU
                                                     : 0U))
                                                   : (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result))));
                    }
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((1U & (- (IData)((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed)))))) 
                          + ((0U != qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_input)
                              ? ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                                 - (IData)(1U)) : 0x1fU)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x00000800U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
            ? ((0x00000400U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? ((0x00000200U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                    ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                            >> 3U))))) 
                       & ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 2U))))) 
                          & (((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                               ? (4U & (- (IData)((1U 
                                                   & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                               : (0x00000602U & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) 
                             & (- (IData)((IData)((0x0110U 
                                                   == 
                                                   (0x01f0U 
                                                    & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))
                    : (__VdfgRegularize_h6e95ff9d_0_21 
                       & (- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
                : (__VdfgRegularize_h6e95ff9d_0_21 
                   & (- (IData)((3U == (3U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                              >> 8U)))))))
            : ((0x00000400U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                ? (((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                     ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                             >> 2U))))) 
                        & (((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                             ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q
                                 : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q)
                             : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                 ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                                 : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) 
                           & (- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U)))))))
                     : (((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                          ? (4U & ((- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 1U))))) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                          : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                              ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                                 & (- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                              : ((0x28001040U | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                                                 << 2U)) 
                                 & (- (IData)((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))) 
                        & (- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                               >> 3U))))))) 
                   & (- (IData)((IData)((0x03a0U == 
                                         (0x03e0U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))
                : ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                        >> 7U))))) 
                   & (((0x00000040U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                        ? ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                >> 4U))))) 
                           & ((- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 3U))))) 
                              & (((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                   ? ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))) 
                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q 
                                         & (- (IData)(
                                                      (1U 
                                                       & (~ 
                                                          ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                           >> 1U)))))))
                                   : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                       ? (((0x80000000U 
                                            & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q) 
                                               << 0x0000001aU)) 
                                           | (0x0000001fU 
                                              & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q))) 
                                          & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))
                                       : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                           ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                           : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q))) 
                                 & (- (IData)((1U & 
                                               (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                   >> 5U))))))))
                        : ((0x00000020U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                            ? ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                ? __VdfgRegularize_h6e95ff9d_0_5
                                : ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? __VdfgRegularize_h6e95ff9d_0_5
                                    : ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                        ? __VdfgRegularize_h6e95ff9d_0_5
                                        : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                            ? (__VdfgRegularize_h6e95ff9d_0_5 
                                               & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))
                                            : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                               & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))))))))))
                            : ((- (IData)((1U & (~ 
                                                 ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                  >> 3U))))) 
                               & (((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                    ? (((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                             << 8U) 
                                            | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q))
                                         : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))
                                    : (((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))
                                         ? 0x40001104U
                                         : ((0x00020000U 
                                             & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                << 0x00000011U)) 
                                            | ((0x00001800U 
                                                & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                   << 0x0000000aU)) 
                                               | ((((8U 
                                                     & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                          >> 4U))) 
                                                   << 4U) 
                                                  | ((8U 
                                                      & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                         >> 2U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                                           >> 6U))))))) 
                                       & (- (IData)(
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                         >> 1U))))))) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                    >> 4U))))))))) 
                      & (- (IData)((3U == (3U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr) 
                                                 >> 8U)))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
            ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex))
                ? ((~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex) 
                   & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                   | qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex);
    if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__clk)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q) 
                  | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep)));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl 
        = (0x0000001fU & (((0x40000000U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                            ? 0x1eU : ((0x20000000U 
                                        & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                        ? 0x1dU : (
                                                   (0x10000000U 
                                                    & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1cU
                                                    : 
                                                   ((0x08000000U 
                                                     & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x1bU
                                                     : 
                                                    ((0x04000000U 
                                                      & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x1aU
                                                      : 
                                                     ((0x02000000U 
                                                       & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x19U
                                                       : 
                                                      ((0x01000000U 
                                                        & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x18U
                                                        : 
                                                       ((0x00800000U 
                                                         & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x17U
                                                         : 
                                                        ((0x00400000U 
                                                          & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x16U
                                                          : 
                                                         ((0x00200000U 
                                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x15U
                                                           : 
                                                          ((0x00100000U 
                                                            & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x14U
                                                            : 
                                                           ((0x00080000U 
                                                             & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x13U
                                                             : 
                                                            ((0x00040000U 
                                                              & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x12U
                                                              : 
                                                             ((0x00020000U 
                                                               & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0x11U
                                                               : 
                                                              ((0x00010000U 
                                                                & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 0x10U
                                                                : 
                                                               ((0x00008000U 
                                                                 & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                 ? 0x0fU
                                                                 : 
                                                                ((0x00004000U 
                                                                  & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                  ? 0x0eU
                                                                  : 
                                                                 ((0x00002000U 
                                                                   & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                   ? 0x0dU
                                                                   : 
                                                                  ((0x00001000U 
                                                                    & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                    ? 0x0cU
                                                                    : 
                                                                   ((0x00000800U 
                                                                     & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                     ? 0x0bU
                                                                     : 
                                                                    ((8U 
                                                                      & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                      ? 3U
                                                                      : 
                                                                     ((0x00000080U 
                                                                       & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x00000400U 
                                                                        & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                        ? 0x0aU
                                                                        : 
                                                                       ((4U 
                                                                         & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                         ? 2U
                                                                         : 
                                                                        ((0x00000040U 
                                                                          & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                          ? 6U
                                                                          : 
                                                                         ((0x00000200U 
                                                                           & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                           ? 9U
                                                                           : 
                                                                          ((2U 
                                                                            & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                            ? 1U
                                                                            : 
                                                                           ((0x00000020U 
                                                                             & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                             ? 5U
                                                                             : 
                                                                            ((0x00000100U 
                                                                              & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                              ? 8U
                                                                              : 
                                                                             (((0x00000010U 
                                                                                & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)
                                                                                ? 4U
                                                                                : 7U) 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (~ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual)))))))))))))))))))))))))))))))))) 
                          | (- (IData)((qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual 
                                        >> 0x0000001fU)))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl 
        = ((0U != qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_local_qual) 
           & ((~ (IData)((4U == (0x00000804U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)))) 
              & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                 >> 5U)));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_data 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q;
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
                    if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)))) {
                        vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_valid = 1U;
                    }
                }
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_strb 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be;
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr;
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_data 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
            }
        }
        if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q)))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            }
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
            vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
            vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
        } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex) {
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid = 1U;
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid = 1U;
            }
        }
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_araddr 
                              >> 2U));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_awaddr 
                              >> 2U));
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                              >> 2U));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx 
            = (0x00001fffU & (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                              >> 2U));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram 
        = (IData)(((0x00030000U == (0xf00f0000U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (4U != (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                             >> 0x0000001cU))));
    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                               << 1U) | (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))))) {
        if ((0U == (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel) 
                     << 1U) | (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but none matched for '1'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',1,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:610: Assertion failed in %m: unique case, but multiple matches found for '1'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.immediate_a_mux", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',1,(IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 610, "");
        }
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38 = (((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                                  >> 0x00000018U)))) 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel)))))) 
                                                  << 6U) 
                                                 | ((0x0000003eU 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                        >> 0x00000013U)) 
                                                    | (1U 
                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000019U))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                               << 2U) | (((3U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                          << 1U) | 
                                         (1U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))))) {
        if ((0U != (((2U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                     << 2U) | (((3U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)) 
                                << 1U) | (1U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_id_stage.sv:574: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.jump_target_mux", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_id_stage.sv", 574, "");
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target 
        = ((1U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
               + (((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000001fU))) << 0x00000014U) 
                  | ((((0x000001feU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000bU)) 
                       | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))) << 0x0000000bU) 
                     | (0x000007feU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U)))))
            : ((3U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id 
                   + (((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                   >> 0x0000001fU))) 
                       << 0x0000000dU) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x0000001eU)) 
                                            | (1U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 7U))) 
                                           << 0x0000000bU) 
                                          | ((0x000007e0U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 0x00000014U)) 
                                             | (0x0000001eU 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 7U))))))
                : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id 
                   + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                 == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
             & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                 == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                    >> 0x00000014U))) 
                & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x00000014U)))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id 
        = ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
            ? (0x0000001fU & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                               >> 0x0000000fU) & (- (IData)(
                                                            (1U 
                                                             & (~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux)))))))
            : (0x0000001fU & ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_mux))
                               ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 7U) : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x0000001bU))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active 
        = ((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_wfi_no_sleep)) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
               == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rega_used_dec) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
               == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                  >> 0x0000000fU))) 
              & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x0000000fU)))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                         ? (IData)(
                                                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000021U))
                                                                         : (IData)(
                                                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                                            ? (IData)(
                                                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x00000020U))
                                                                            : (IData)(
                                                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                                                                                >> 0x0000001fU)))))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), 
                                                  ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mulh_active)
                                                    ? (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_imm)
                                                    : (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex) 
           & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
              >> 3U));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = ((((0x0000ff00U & ((IData)((qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                      >> 0x0000001cU)) 
                             << 8U)) | (0x000000ffU 
                                        & (IData)((qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                   >> 0x00000013U)))) 
            << 0x00000010U) | ((0x0000ff00U & ((IData)(
                                                       (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                        >> 0x0000000aU)) 
                                               << 8U)) 
                               | (0x000000ffU & (IData)(
                                                        (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                                         >> 1U)))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
        = ((0x14U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
            ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 0U;
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu) 
                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
             & ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex) 
                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)))) {
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = 1U;
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 0U;
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) {
        if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 2U;
        }
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) {
        if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
        }
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = 0U;
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = 1U;
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall 
        = ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu) 
               & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_wb_is_reg_a_id)) 
              | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                  & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id)) 
                 | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw) 
                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_alu_is_reg_a_id)))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result = 0U;
    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
        if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))) {
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                    = (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
                = ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                    ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex)
                        ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex)
                            ? (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex))
                            : ((0xffff0000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex) 
                               | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex 
                       + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                & VL_MULS_III(18, 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               (((IData)(
                                                                                (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 7U))) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex)))), 
                                                              (0x0003ffffU 
                                                               & VL_EXTENDS_II(18,9, 
                                                                               ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                << 1U))) 
                                                                                | (0x000000ffU 
                                                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex))))))) 
                          + (VL_EXTENDS_II(32,18, (0x0003ffffU 
                                                   & VL_MULS_III(18, 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_45) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 8U))))), 
                                                                 (0x0003ffffU 
                                                                  & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_47) 
                                                                                << 8U) 
                                                                                | (0x000000ffU 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 8U)))))))) 
                             + (VL_EXTENDS_II(32,18, 
                                              (0x0003ffffU 
                                               & VL_MULS_III(18, 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              (((IData)(
                                                                                (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                >> 1U) 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000017U))) 
                                                                                << 8U) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000010U))))), 
                                                             (0x0003ffffU 
                                                              & VL_EXTENDS_II(18,9, 
                                                                              ((0x00000100U 
                                                                                & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex) 
                                                                                << 8U) 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x0000000fU))) 
                                                                               | (0x000000ffU 
                                                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000010U)))))))) 
                                + VL_EXTENDS_II(32,18, 
                                                (0x0003ffffU 
                                                 & VL_MULS_III(18, 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_46) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
                                                                                >> 0x00000018U)))), 
                                                               (0x0003ffffU 
                                                                & VL_EXTENDS_II(18,9, 
                                                                                (((IData)(__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                << 8U) 
                                                                                | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
                                                                                >> 0x00000018U))))))))))));
        }
    } else {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
            = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))
                ? (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
                   + ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
                       & (- (IData)((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex))))) 
                      + VL_MULS_III(32, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex, 
                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
                                     ^ (- (IData)((1U 
                                                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex)))))))));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q;
    if ((1U & (~ ((((((((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                       | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                      | (0x0300U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                     | (0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                    | (0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                   | (0x0340U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
                  | (0x0341U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))) {
        if ((0x0342U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((0x07b0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((0x07b1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x07b2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n 
                                = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                        }
                    }
                    if ((0x07b2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x07b3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n 
                                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q;
    if (((((((((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0304U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0305U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if ((0x0340U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n 
                                            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                                    }
                                }
                            }
                            if ((0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n 
                                        = (1U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                        if ((0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n 
                                    = (0xffff0888U 
                                       & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[10U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[11U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[12U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[13U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[14U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[15U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[16U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[17U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[18U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[19U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[20U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[21U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[22U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[23U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[24U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[25U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[26U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[27U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[28U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[29U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[30U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U];
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[31U] 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U];
    if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
         & ((0x0323U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
            | ((0x0324U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | ((0x0325U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                  | ((0x0326U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                     | ((0x0327U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                        | ((0x0328U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                           | ((0x0329U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                              | ((0x032aU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                 | ((0x032bU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                    | ((0x032cU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                       | ((0x032dU 
                                           == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                          | ((0x032eU 
                                              == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                             | ((0x032fU 
                                                 == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                | ((0x0330U 
                                                    == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                   | ((0x0331U 
                                                       == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                      | ((0x0332U 
                                                          == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                         | ((0x0333U 
                                                             == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                            | ((0x0334U 
                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                               | ((0x0335U 
                                                                   == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                  | ((0x0336U 
                                                                      == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                     | ((0x0337U 
                                                                         == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                        | ((0x0338U 
                                                                            == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                           | ((0x0339U 
                                                                               == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                              | ((0x033aU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033bU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033cU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033dU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | ((0x033eU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
                                                                                | (0x033fU 
                                                                                == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))))))))))))))))))))))))))))))) {
        VL_ASSIGNSEL_WI(1024, 32, (0x000003ffU & VL_SHIFTL_III(10,32,32, 
                                                               (0x0000001fU 
                                                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)), 5U)), vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) 
            & (0x0320U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
        = ((((0x0000ff00U & (((8U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                               ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                  >> 0x00000018U) : 
                              (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                               >> 0x00000018U)) << 8U)) 
             | (0x000000ffU & ((4U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                   >> 0x00000010U) : 
                               (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                >> 0x00000010U)))) 
            << 0x00000010U) | ((0x0000ff00U & (((2U 
                                                 & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                 ? 
                                                (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                 >> 8U)
                                                 : 
                                                (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b 
                                                 >> 8U)) 
                                               << 8U)) 
                               | (0x000000ffU & ((1U 
                                                  & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__sel_minmax))
                                                  ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex
                                                  : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__minmax_b))));
    if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                ? (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex) 
                    << 0x00000010U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex))
                : (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                    << 0x00000018U) | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                        << 0x00000010U) 
                                       | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex) 
                                           << 8U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex)))))
            : ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_rev
            : ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
                ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
                   + ((- (IData)(((IData)(__VdfgRegularize_h6e95ff9d_0_15) 
                                  | ((0x1fU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                                     | (0x1eU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)))))) 
                      & VL_SHIFTR_III(32,32,32, qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask, 1U)))
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex));
    if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((((0x26U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                         ? (((QData)((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)) 
                             << 0x00000020U) | (QData)((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))
                         : (((QData)((IData)((- (IData)(
                                                        ((qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                          >> 0x0000001fU) 
                                                         & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic)))))) 
                             << 0x00000020U) | (QData)((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)))) 
                       >> (0x0000001fU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = (((~ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
            & ((0x2aU == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                : (- (IData)(((0x28U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex)) 
                              & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex))))))) 
           | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 4U)))) {
                if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                                    = ((0U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                        ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
                                        : ((1U == (3U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                            ? (((((
                                                   ((0x0000000cU 
                                                     & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                        << 2U)) 
                                                    | (3U 
                                                       & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U))) 
                                                   << 0x0000000cU) 
                                                  | (((0x0000000cU 
                                                       & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 2U)) 
                                                      | (3U 
                                                         & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 6U))) 
                                                     << 8U)) 
                                                 | ((((0x0000000cU 
                                                       & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                          >> 6U)) 
                                                      | (3U 
                                                         & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000000aU))) 
                                                     << 4U) 
                                                    | ((0x0000000cU 
                                                        & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000000aU)) 
                                                       | (3U 
                                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000000eU))))) 
                                                << 0x00000010U) 
                                               | (((((0x0000000cU 
                                                      & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         >> 0x0000000eU)) 
                                                     | (3U 
                                                        & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U))) 
                                                    << 0x0000000cU) 
                                                   | (((0x0000000cU 
                                                        & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000012U)) 
                                                       | (3U 
                                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000016U))) 
                                                      << 8U)) 
                                                  | ((((0x0000000cU 
                                                        & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x00000016U)) 
                                                       | (3U 
                                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x0000001aU))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 0x0000001aU)) 
                                                        | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                           >> 0x0000001eU)))))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex)))
                                                ? (
                                                   (((0x00000e00U 
                                                      & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                         << 7U)) 
                                                     | ((0x000001c0U 
                                                         & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            << 1U)) 
                                                        | ((0x00000038U 
                                                            & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 5U)) 
                                                           | (7U 
                                                              & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x0000000bU))))) 
                                                    << 0x00000012U) 
                                                   | ((((0x000001c0U 
                                                         & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                            >> 8U)) 
                                                        | ((0x00000038U 
                                                            & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000000eU)) 
                                                           | (7U 
                                                              & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                 >> 0x00000014U)))) 
                                                       << 9U) 
                                                      | ((0x000001c0U 
                                                          & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                             >> 0x00000011U)) 
                                                         | ((0x00000038U 
                                                             & (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                                >> 0x00000017U)) 
                                                            | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                               >> 0x0000001dU)))))
                                                : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                    if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                    }
                } else {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                        = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result;
                }
            } else {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result)
                        : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
                            ? (- qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
                            : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D));
            }
        } else if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               ^ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex))
                        : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__pack_result
                            : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               | qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask)))
                    : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? ((~ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask) 
                               & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex)
                            : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result)
                        : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result));
        } else if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result
                : ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                    ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                        ? ((0x17U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax 
                               & (- (IData)((1U & (~ 
                                                   ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                                                     >> 0x0000001fU) 
                                                    | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip)))))))
                            : (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal_clip) 
                                | (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result_expanded 
                                   >> 0x00000024U))
                                ? (~ vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                                : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax))
                        : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))
                            ? (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
                               & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex)
                            : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex)
                                ? ((0xffff0000U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result) 
                                   | (0x0000ffffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex))
                                : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax)))
                    : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_minmax));
    } else if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
            if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex) 
                          >> 1U)))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x0000ffffU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | (((0x0000ff00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                          >> 3U)))) 
                                           << 8U)) 
                           | (0x000000ffU & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                           >> 2U)))))) 
                          << 0x00000010U));
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                    = ((0xffff0000U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                       | ((0x0000ff00U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                          (0x000000ffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
            }
        } else {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0x0000ffffU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | (((0x0000ff00U & ((- (IData)((1U 
                                                   & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                      >> 3U)))) 
                                       << 8U)) | (0x000000ffU 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                                   >> 2U)))))) 
                      << 0x00000010U));
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
                = ((0xffff0000U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
                   | ((0x0000ff00U & ((- (IData)((1U 
                                                  & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                     >> 1U)))) 
                                      << 8U)) | (0x000000ffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
        }
    } else if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = (1U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                     >> 3U));
    } else {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0x0000ffffU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | (((0x0000ff00U & ((- (IData)((1U & 
                                               ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                >> 3U)))) 
                                   << 8U)) | (0x000000ffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                                               >> 2U)))))) 
                  << 0x00000010U));
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result 
            = ((0xffff0000U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result) 
               | ((0x0000ff00U & ((- (IData)((1U & 
                                              ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                                               >> 1U)))) 
                                  << 8U)) | (0x000000ffU 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result)))))));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = 0U;
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_result;
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result;
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw 
            = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_rdata_int;
    }
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___stl_sequent__TOP__1(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___stl_sequent__TOP__1\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rdata 
        = vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q))) {
                if (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.r_valid) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rdata 
                        = vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.r_data;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid = 1U;
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram 
        = (IData)(((0x00010000U == (0x000f0000U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram 
        = (IData)(((0x00030000U == (0x000f0000U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_53)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__uart_rready 
        = ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__gpio_rready 
        = ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__timer_rready 
        = ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__qspi_rready 
        = ((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.r_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__uart_bready 
        = ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__gpio_bready 
        = ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__timer_bready 
        = ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__qspi_bready 
        = ((5U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.b_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__uart_arvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__gpio_arvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__timer_arvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__qspi_arvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_arvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__uart_wvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__gpio_wvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__timer_wvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__qspi_wvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_wvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.w_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__uart_awvalid 
        = (IData)(((0U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__gpio_awvalid 
        = (IData)(((0x00000100U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__timer_awvalid 
        = (IData)(((0x00000200U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__qspi_awvalid 
        = (IData)(((0x00000500U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_awvalid 
        = (IData)(((0x00000600U == (0x00000f00U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)) 
                   & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus.aw_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus.ar_ready) 
           & ((~ ((4U == (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                          >> 0x0000001cU)) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_valid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_arvalid)
             : ((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.ar_valid) 
                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.ar_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_awready 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
        = ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rdata
            : (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                       >> ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                           << 5U))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
             & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)) 
            & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
             ? (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_awvalid)
             : ((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
           & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)
                ? (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__ai_m_wvalid)
                : ((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram))) 
              & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus.aw_ready)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    if ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                    << 0x00000010U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h))
                : ((0xffff0000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)));
    } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata;
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
            = ((3U == (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata
                : ((0xffff0000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata) 
                   | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0x10U)));
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                               << 2U) | (((1U == (3U 
                                                  & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))))) {
        if ((0U != (((2U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                     << 2U) | (((1U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                << 1U) | (0U == (3U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_compressed_decoder.sv:52: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.if_stage_i.compressed_decoder_i", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_compressed_decoder.sv", 52, "");
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = 0U;
    if ((0U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00842023U | (((((2U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)) 
                                             | (1U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x00700000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | ((0x00000c00U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned) 
                                                | (0x00000200U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      << 3U))))));
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00042403U | ((((0x00000100U 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 3U)) 
                                        | ((0x000000e0U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 5U)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000012U) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                             << 8U)) 
                                         | (0x00000380U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 5U)))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x000000ffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 5U)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00010413U | ((((0x000003c0U 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 1U)) 
                                        | ((((6U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 0x0000000aU)) 
                                             | (1U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 5U))) 
                                            << 3U) 
                                           | (4U & 
                                              (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 4U)))) 
                                       << 0x00000014U) 
                                      | (0x00000380U 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 5U))));
            }
        }
    } else if ((1U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        if ((0x00000400U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                            if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | ((((0x00003c00U 
                                         & ((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                           >> 0x0cU)))) 
                                            << 0x0000000aU)) 
                                        | ((0x00000300U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 3U)) 
                                           | (0x00000080U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 5U)))) 
                                       << 0x00000012U) 
                                      | ((((0x000000e0U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)) 
                                           | ((4U & 
                                               (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 0x0000000bU)) 
                                              | (3U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0aU)))) 
                                          << 0x0000000aU) 
                                         | ((0x00000300U 
                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 5U)) 
                                            | (0x00000080U 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 5U))))));
            } else if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00000400U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                  >> 0x0cU)))) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                ? ((0x00000020U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                                : ((0x00000020U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                    }
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))));
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00045413U | ((((0x00001000U 
                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 2U)) 
                                            | (0x0000007cU 
                                               & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                           << 0x00000012U) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : ((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 2U)))
                            ? (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00045413U | ((((0x00001000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 2U)) 
                                                | (0x0000007cU 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) 
                                               << 0x00000012U) 
                                              | ((0x00038000U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000380U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0U == ((0x00000020U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((0U != ((0x00000020U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 2U))))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((2U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  >> 7U)))
                            ? (0x00010113U | (((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                              >> 0x0cU)))) 
                                               << 0x0000001dU) 
                                              | ((((6U 
                                                    & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 5U))) 
                                                  << 0x0000001aU) 
                                                 | ((0x02000000U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 0x00000017U)) 
                                                    | (0x01000000U 
                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                          << 0x00000012U))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 7U))) ? 
                               (0x37U | (((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                         >> 0x0cU)))) 
                                          << 0x00000011U) 
                                         | ((0x0001f000U 
                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                << 0x0000000aU)) 
                                            | (0x00000f80U 
                                               & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                : (0x37U | (((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                            >> 0x0cU)))) 
                                             << 0x00000011U) 
                                            | ((0x0001f000U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   << 0x0000000aU)) 
                                               | (0x00000f80U 
                                                  & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                        ? (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))))
                        : (0x13U | (((- (IData)((1U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    >> 0x0cU)))) 
                                     << 0x0000001aU) 
                                    | ((0x02000000U 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           << 0x0000000dU)) 
                                       | ((0x01f00000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | (0x00000f80U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                    ? (0x6fU | (((((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))));
        }
    } else if ((2U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))) {
        if ((0x00008000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012023U | ((((0x000000c0U 
                                             & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                >> 1U)) 
                                            | ((0x00000020U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)) 
                                               | (0x0000001fU 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     >> 2U)))) 
                                           << 0x00000014U) 
                                          | (0x00000e00U 
                                             & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
                }
            } else {
                if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                     >> 0x0cU)))) {
                    if ((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 2U)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 7U)))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                              >> 0x0000000dU)))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                            ? ((0U == (0x0000001fU 
                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               ((0U == (0x0000001fU 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                           >> 7U)))
                                 ? 0x00100073U : (0x00e7U 
                                                  | (0x000f8000U 
                                                     & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                        << 8U))))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))))
                            : ((0U == (0x0000001fU 
                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                          >> 2U))) ? 
                               (0x0067U | (0x000f8000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 8U)))
                                : ((0U == (0x0000001fU 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)))
                                    : (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
                }
            }
        } else if ((0x00004000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
            if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              >> 7U)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x00012003U | ((((0x000000c0U 
                                         & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                            << 4U)) 
                                        | ((0x00000020U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               >> 7U)) 
                                           | (0x0000001cU 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 >> 2U)))) 
                                       << 0x00000014U) 
                                      | (0x00000f80U 
                                         & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)));
            }
        } else {
            if ((0x00002000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                          >> 0x0000000dU)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((0x00001000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned)
                        ? (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                        : (((0U == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                   >> 2U))) 
                            | (0U == (0x0000001fU & 
                                      (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                       >> 7U)))) ? 
                           (0x00001013U | ((0x01f00000U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                               << 0x00000012U)) 
                                           | ((0x000f8000U 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 8U)) 
                                              | (0x00000f80U 
                                                 & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))
                            : (0x00001013U | ((0x01f00000U 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                  << 0x00000012U)) 
                                              | ((0x000f8000U 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned 
                                                     << 8U)) 
                                                 | (0x00000f80U 
                                                    & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned))))));
            }
        }
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned;
    }
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___stl_sequent__TOP__2(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___stl_sequent__TOP__2\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id = 0;
    // Body
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
        = vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.r_data;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rvalid = 0U;
    if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q))) {
                if (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.r_valid) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                        = vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.r_data;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rvalid = 1U;
                }
            } else if (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.b_valid) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rvalid = 1U;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__write_en 
        = ((((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.__VdfgRegularize_h6e95ff9d_0_55) 
             & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.aw_valid)) 
            & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus.aw_ready)) 
           & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus.w_valid));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
            ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                        >> 0x0000001fU))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                  >> 0x00000018U)) : 
                   ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                      & ((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                           >> 0x00000017U)))) 
                         | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                     << 8U) | (0x000000ffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x00000010U))))
                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                         & ((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                              >> 0x0000000fU)))) 
                            | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                        << 8U) | (0x000000ffU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                 >> 8U)))
                    : (((((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                            >> 7U)))) 
                          | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                         & (- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                        << 8U) | (0x000000ffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata))))
            : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q))
                ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                  >> 7U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | ((0x0000ff00U 
                                                & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                   << 8U)) 
                                               | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                  >> 0x00000018U)))
                        : ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                            >> 0x0000001fU))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((((- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))) 
                             & ((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                  >> 0x00000017U)))) 
                                | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                  >> 8U)))
                        : (((((- (IData)((1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                                                >> 0x0000000fU)))) 
                              | (- (IData)((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                             & (- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q))))) 
                            << 0x00000010U) | (0x0000ffffU 
                                               & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata))))
                : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                            << 8U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                      >> 0x00000018U))
                        : ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000010U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x00000010U)))
                    : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata 
                            << 0x00000018U) | (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 8U))
                        : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rdata))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rvalid) 
           | (0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__data_rvalid)
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q);
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id 
        = ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
               [(0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                >> 0x00000014U))]));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id 
        = ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw
            : ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata
                : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem
                   [(0x0000001fU & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))] 
                   & (- (IData)((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id) 
                                          >> 5U))))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c 
        = ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
            : ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel))
                    ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target
                    : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a 
        = ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id))
            : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel))))) 
                                      & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                         >> 0x0000000fU))))
                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                    ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id
                    : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b 
        = ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id
                    : (0x0000001fU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)))
            : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id
                    : ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type
                            : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                       >> 0x00000018U)))) 
                                        << 5U) | (0x0000001fU 
                                                  & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                     >> 0x00000014U)))
                                    : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type)
                                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? VL_SHIFTR_III(32,32,32, 
                                                    (((IData)(1U) 
                                                      << 
                                                      (0x0000001fU 
                                                       & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                          >> 0x00000014U))) 
                                                     - (IData)(1U)), 1U)
                                    : ((0x00010000U 
                                        & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 4U)) 
                                       | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x00000019U))))))
                        : ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                            ? ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_38
                                : (0x0000001fU & ((1U 
                                                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                                   ? 
                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000019U)
                                                   : 
                                                  (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                   >> 0x00000014U))))
                            : ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                ? ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                    ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id)
                                        ? 2U : 4U) : 
                                   (0xfffff000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id))
                                : (((- (IData)((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | (0x00000fffU & 
                                      ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel))
                                        ? ((0x00000fe0U 
                                            & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 0x00000014U)) 
                                           | (0x0000001fU 
                                              & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                                 >> 7U)))
                                        : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                           >> 0x00000014U))))))))
                : ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel))
                    ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id
                    : qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id)));
}

VL_ATTR_COLD void Vqspi_modes_tb___024root___stl_comb__TOP__1(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___stl_comb__TOP__1\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0;
    CData/*2:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0;
    CData/*4:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id = 0;
    CData/*4:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0;
    CData/*1:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0;
    CData/*5:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0;
    CData/*2:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id = 0;
    CData/*0:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode = 0;
    IData/*31:0*/ qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc = 0;
    IData/*23:0*/ __VdfgRegularize_h6e95ff9d_0_16;
    __VdfgRegularize_h6e95ff9d_0_16 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
    // Body
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 1U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec 
        = ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)) 
           | (1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id 
        = (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode 
        = (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 0x0000000fU));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 0U;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q;
    if ((0x00000010U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0U;
    } else if ((8U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    }
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                }
            } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                    = (((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                          | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         | ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                            & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) 
                        | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q))
                        ? 0x0bU : 0x0cU);
            } else {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                } else if ((4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q)) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 4U;
                }
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 2U;
                if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save = 1U;
                    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 2U;
                    } else if (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode) 
                                & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 1U;
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause = 3U;
                    }
                }
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 1U;
            } else {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 5U);
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id 
                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 4U : 6U);
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 3U;
                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 7U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = 0U;
                }
                if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                           << 2U) | 
                                          (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))))) {
                    if ((0U != (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec) 
                                 << 2U) | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1122: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1122, "");
                        }
                    }
                }
                if ((1U & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                    = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex)
                        ? 5U : 7U);
            } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause = 1U;
            } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                    = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                        ? 3U : 0U);
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                if ((1U & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                            >> 2U) & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                }
            } else {
                if (((((((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                           | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                          | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec)) 
                         | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                        | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                       | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)) 
                      | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec)) 
                     | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec))) {
                    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 0U;
                        if ((1U & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id 
                            = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                ? 3U : 0U);
                        if ((1U & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                        }
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id 
                            = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) {
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0aU;
                    } else if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status)))) {
                        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) {
                            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                            } else {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
                            }
                        } else {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        }
                    }
                }
                if ((1U & (~ VL_ONEHOT_I(((((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))))) {
                    if ((0U != ((((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                    << 3U) | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                      << 1U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 << 4U) | ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:1054: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                         , '#',64,VL_TIME_UNITED_Q(1000));
                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 1054, "");
                        }
                    }
                }
            }
        } else {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 2U;
                } else {
                    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 3U;
                    } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                            = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 0x0bU;
                    }
                    if ((1U & (~ VL_ONEHOT_I((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))))) {
                        if ((0U != (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                     << 1U) | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)))) {
                            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:932: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.controller_i", 'T',-9
                                             , '#',64,VL_TIME_UNITED_Q(1000));
                                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 932, "");
                            }
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 3U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause 
                        = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)));
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 0U;
                    if ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                          | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match)) 
                         & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0dU;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = 1U;
                    } else if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                                & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                            = (0x00000020U | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id = 1U;
                    } else {
                        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                    ? 8U : 5U);
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = 1U;
                        } else {
                            if ((((((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) 
                                      | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                     | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active)) 
                                    | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                   | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec)) 
                                  | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                      | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                     | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) 
                                 | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status))) {
                                if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 2U;
                                    if ((1U & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
                                               & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q))))) {
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                                        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = 1U;
                                    }
                                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                                            ? 0x0dU
                                            : ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)
                                                ? 0x0dU
                                                : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                                    ? 8U
                                                    : 5U)));
                                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                             | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                            | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec))) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 0U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) {
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 8U : 5U);
                                } else {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)
                                            ? 7U : 5U);
                                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                                }
                            }
                            if ((1U & (~ VL_ONEHOT_I(
                                                     ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                        << 6U) 
                                                       | (((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                             | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                            | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                             << 1U) 
                                                            | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))))) {
                                if ((0U != ((((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status) 
                                                << 3U) 
                                               | ((((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                    | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                   | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec)) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                             << 3U) 
                                            | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                                                   << 1U) 
                                                  | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_in_dec)))))) {
                                    if (VL_UNLIKELY((
                                                     vlSymsp->_vm_contextp__->assertOn()))) {
                                        VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:541: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                     , '#',64,VL_TIME_UNITED_Q(1000));
                                        VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 541, "");
                                    }
                                }
                            }
                        }
                        if ((1U & ((vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                                    >> 2U) & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) {
                                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
                                    = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                        | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec))
                                        ? 8U : (((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec))
                                                 ? 8U
                                                 : 
                                                (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                  | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec))
                                                  ? 8U
                                                  : 
                                                 ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id)
                                                   ? 0x0eU
                                                   : 0x0dU))));
                                if ((1U & (~ VL_ONEHOT_I(
                                                         ((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                               | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                              << 2U)) 
                                                          | ((((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                               & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                                | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))))) {
                                    if ((0U != ((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_in_id) 
                                                  << 3U) 
                                                 | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec) 
                                                     | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec)) 
                                                    << 2U)) 
                                                | ((((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_force_debug_mode)) 
                                                     & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec)) 
                                                    << 1U) 
                                                   | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                      | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))))) {
                                        if (VL_UNLIKELY((
                                                         vlSymsp->_vm_contextp__->assertOn()))) {
                                            VL_WRITEF_NX("[%0t] %%Error: cv32e40p_controller.sv:677: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.controller_i.blk_decode_level1", 'T',-9
                                                         , '#',64,VL_TIME_UNITED_Q(1000));
                                            VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_controller.sv", 677, "");
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                }
            } else {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl) 
                     & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) 
                           | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))))) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 4U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause 
                        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux = 0U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause = 1U;
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause 
                        = (0x00000020U | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl));
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
        } else {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = 1U;
            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep) {
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
                } else {
                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
                }
            } else {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = 0U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 1U;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id = 0U;
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = 1U;
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 0x0cU;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = 1U;
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
        }
    } else {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding = 0U;
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int = 0U;
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q;
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    if (((((((((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                                = (((((2U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 1U)) 
                                      | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))) 
                                     << 5U) | (((2U 
                                                 & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    >> 3U)) 
                                                | (1U 
                                                   & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 7U))) 
                                               << 3U)) 
                                   | ((6U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 0x0000000aU)) 
                                      | (1U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x11U))));
                        }
                    } else if ((0x0304U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0305U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0340U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                                        = (0xfffffffeU 
                                           & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x0342U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x00000020U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                   >> 0x0000001aU)) 
                   | (0x0000001fU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
    } else if ((0x07b0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffff7fffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00008000U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xffffc3ffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | (0x00000800U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int));
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xfffffdffU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (0xffffffefU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xfffffff8U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                         | (4U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
    } else if ((0x07b1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = (0xfffffffeU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
    }
    if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause) {
        if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) {
            qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id;
        }
        if ((1U & (~ VL_ONEHOT_I((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                                   << 1U) | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))))) {
            if ((0U != (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_id) 
                         << 1U) | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_if)))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1044: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1044, "");
                }
            }
        }
        if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_csr_save) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n);
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n 
                = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n 
                = ((0xfffffe3fU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n) 
                   | ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__debug_cause) 
                      << 6U));
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0x77U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
                   | (8U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                            >> 2U)));
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n 
                = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n 
                = qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_cause;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x5fU & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
                = (6U | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
        }
    } else if (qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0x5fU & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)) 
               | (0x00000020U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q) 
                                 << 2U)));
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x0000000eU | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n));
    }
    if ((1U & (~ VL_ONEHOT_I((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                               << 2U) | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                          << 1U) | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))))) {
        if ((0U != (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_dret_id) 
                     << 2U) | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_restore_mret_id) 
                                << 1U) | (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_save_cause))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_cs_registers.sv:1041: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.cs_registers_i.gen_no_pulp_secure_write_logic", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_cs_registers.sv", 1041, "");
            }
        }
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_cause) 
           & (- (IData)((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q)))));
    if ((1U & (~ VL_ONEHOT_I((((1U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                               << 1U) | (0U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))))) {
        if ((0U != (((1U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)) 
                     << 1U) | (0U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:132: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 132, "");
                VL_WRITEF_NX("[%0t] %%Error: cv32e40p_if_stage.sv:138: Assertion failed in %m: unique case, but multiple matches found for '2'h%X'\n",4, 'M',vlSymsp->name(),"qspi_modes_tb.dut.i_cpu.core_i.if_stage_i.EXC_PC_MUX", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux));
                VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_if_stage.sv", 138, "");
            }
        }
    }
    __VdfgRegularize_h6e95ff9d_0_16 = ((0U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                        ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q
                                        : (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
                                           & (- (IData)(
                                                        (1U 
                                                         != (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id) 
            | (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec) 
                & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                    == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                       >> 0x00000014U))) 
                   & (0U != (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                            >> 0x00000014U))))) 
               | (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding) 
                   & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we) 
                      & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
                         & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                            == (0x0000001fU & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
                                               >> 7U)))))) 
                  | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec) 
                     & (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex) 
                         == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id)) 
                        & (0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id))))))) 
           & (((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb)) 
               & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu)) 
              | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex) 
                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
        = (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
            & (0U == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))
            ? 0x00000100U : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q);
    if (((((((((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)) 
               | (2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
              | (3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
             | (0x0300U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
            | (0x0304U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
           | (0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
          | (0x0340U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) 
         | (0x0341U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr)))) {
        if ((1U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
            if ((2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                if ((3U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                    if ((0x0300U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                        if ((0x0304U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                            if ((0x0305U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr))) {
                                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int) {
                                    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n 
                                        = (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 8U);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
           & (2U > ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                       & (- (IData)((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))))))));
    __VdfgRegularize_h6e95ff9d_0_40 = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
                                       | (0U < (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0x00010000U;
    if ((8U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))) {
        if ((1U & (~ ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id)))) {
                    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n = 0U;
                }
            }
        }
    } else {
        qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                ? ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q
                        : 0U) : ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                                  ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q
                                  : ((4U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                      ? (__VdfgRegularize_h6e95ff9d_0_16 
                                         << 8U) : (
                                                   (2U 
                                                    & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id))
                                                    ? 0x00010000U
                                                    : 
                                                   ((__VdfgRegularize_h6e95ff9d_0_16 
                                                     << 8U) 
                                                    | ((- (IData)(
                                                                  (1U 
                                                                   & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__exc_pc_mux_id)))) 
                                                       & (((0U 
                                                            == (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux))
                                                            ? (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id)
                                                            : 
                                                           ((- (IData)(
                                                                       (1U 
                                                                        != (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trap_addr_mux)))) 
                                                            & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__m_exc_vec_pc_mux_id))) 
                                                          << 2U)))))))
                : ((2U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                    ? ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex
                        : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target)
                    : ((1U & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_mux_id))
                        ? ((IData)(4U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id)
                        : 0x00010000U)));
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (1U 
                                                & (~ 
                                                   ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                                                    | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                                                       | ((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)) 
                                                          | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall))))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned)) 
           & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall)) 
              & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall)) 
                 & ((~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access) 
                        & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex) 
                           & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex) 
                              >> 1U)))) & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready)))));
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
             & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) 
             & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid) 
                   & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)))))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
            = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)
                ? (0xfffffffcU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q)));
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = ((~ (IData)(__VdfgRegularize_h6e95ff9d_0_40)) 
           & ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
            if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q;
            }
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 2U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(4U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((3U == (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0x10U)))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 1U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
        } else {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = 0U;
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
                = ((IData)(2U) + vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q);
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready) 
           | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id) 
              | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid 
        = ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id)) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready));
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 0U;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = 1U;
    if ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U != (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 1U;
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
                    = (1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
            }
        } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
                = (1U & ((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                         | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)));
        } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
            if ((3U == (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0x10U)))) {
                vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = 0U;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
           & ((~ (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_if)) 
              & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : (0xfffffffcU & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret 
        = ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid) 
           & ((~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec) 
                  | ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec) 
                     | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec)))) 
              & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_decoding)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 0U;
    if ((0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((1U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h)))
                ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid));
    } else if ((2U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata))
                ? (((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : (((~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q)) 
                    | (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid)) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    } else if ((3U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state 
            = ((3U == (3U & (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata 
                             >> 0x10U))) ? ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                                            & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))
                : ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                   & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid)));
    }
    if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q;
        if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid) 
             & (0U < (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))) {
            vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n)
                ? 3U : 0U);
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = (0xfffffffeU & qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    } else if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid) 
                & (0U < (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
            = (3U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                     - (IData)(1U)));
    }
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready = 0U;
    if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set)))) {
        if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) {
            if (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_int) 
                 & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid))) {
                qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready;
            }
        }
    }
    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp) {
                    vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid = 1U;
                }
                vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                    = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
            }
        }
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = ((0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
           & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready));
    qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = ((~ (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready) 
                & (0U == (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
               | (IData)(__VdfgRegularize_h6e95ff9d_0_40))) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rvalid));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en 
        = (((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus.ar_ready) 
            & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)) 
           & (0U == (0x000f0000U & vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr)));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus.ar_ready) 
           & ((0U != (0x0000000fU & (vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_addr 
                                     >> 0x00000010U))) 
              & (IData)(vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus.ar_valid)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_39 = ((2U 
                                                  != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)) 
                                                 & (IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push));
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    if (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop) 
         & (0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
           & (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop)) 
          & (2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n 
            = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    }
    vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
        = vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q;
    if (((IData)(qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push) 
         & (2U != (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q)))) {
        vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n 
            = (((~ (0x00000000ffffffffULL << (0x0000003fU 
                                              & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U)))) 
                & vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n) 
               | ((QData)((IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__instr_rdata)) 
                  << (0x0000003fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q), 5U))));
    }
}

VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
VL_ATTR_COLD void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__1(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus__1(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__2(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vqspi_modes_tb___024root___nba_comb__TOP__4(Vqspi_modes_tb___024root* vlSelf);
void Vqspi_modes_tb___024root___act_sequent__TOP__0(Vqspi_modes_tb___024root* vlSelf);
void Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__0(Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vqspi_modes_tb___024root___act_comb__TOP__1(Vqspi_modes_tb___024root* vlSelf);

VL_ATTR_COLD void Vqspi_modes_tb___024root___eval_stl(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_stl\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vqspi_modes_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__periph_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__boot_rom_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__instr_sram_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__data_sram_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus));
        Vqspi_modes_tb___024root___stl_sequent__TOP__1(vlSelf);
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__1((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus));
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus__1((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__ai_sram_bus));
        Vqspi_modes_tb___024root___stl_sequent__TOP__2(vlSelf);
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__2((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus));
        Vqspi_modes_tb___024root___nba_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (4ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vqspi_modes_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (7ULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vqspi_modes_tb___024root___stl_comb__TOP__1(vlSelf);
        Vqspi_modes_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__0((&vlSymsp->TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus));
        Vqspi_modes_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vqspi_modes_tb___024root___eval_phase__stl(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___eval_phase__stl\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vqspi_modes_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vqspi_modes_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vqspi_modes_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vqspi_modes_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vqspi_modes_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vqspi_modes_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vqspi_modes_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.id_stage_i.ctrl_transfer_insn_in_id)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.id_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] qspi_modes_tb.dut.i_cpu.core_i.ex_ready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge qspi_modes_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(negedge qspi_modes_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge (qspi_modes_tb.clk & qspi_modes_tb.dut.i_cpu.core_i.sleep_unit_i.core_clock_gate_i.clk_en))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge qspi_modes_tb.dut.i_qspi.sclk_reg)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(posedge qspi_modes_tb.qspi_cs_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(posedge qspi_modes_tb.resetn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(negedge qspi_modes_tb.dut.i_uart_0.i_uart_tx.txd_reg)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vqspi_modes_tb___024root___ctor_var_reset(Vqspi_modes_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vqspi_modes_tb___024root___ctor_var_reset\n"); );
    Vqspi_modes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->qspi_modes_tb__DOT__qspi_cs_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11468502403840459563ull);
    vlSelf->qspi_modes_tb__DOT__qspi_io_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1282149832083571704ull);
    vlSelf->qspi_modes_tb__DOT__qspi_io_oe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15649115983377807907ull);
    vlSelf->qspi_modes_tb__DOT__qspi_io_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 977620124046891280ull);
    vlSelf->qspi_modes_tb__DOT____Vcellinp__flash__io_in = 0;
    vlSelf->qspi_modes_tb__DOT__ch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7115453440422518087ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__instr_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4669761879028040526ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__instr_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16757223969495399501ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__instr_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7680409175026140301ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__data_gnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2688808180130326088ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__data_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13939074812293257694ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__data_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12567281477083501099ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__irq_vector = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12399458059088535026ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13687408345832330110ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3525331168143088062ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2506389429673305406ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16612472440970223938ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4821755263869539668ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6575983819762627169ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12214980316843017208ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18119140173871922167ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2203028093645284834ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4952729837339453712ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__uart_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15092278632490447501ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10477785783604445495ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18070157908371648953ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685340078447380977ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15932558294902537792ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18182817746499918974ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14046856991929863377ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16127719651121326457ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6540480976601808266ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14133074495084955151ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361984459823604865ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__gpio_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9726584939249905680ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10175831148453380799ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4168553820704964643ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9090014291365216903ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9404761366310357429ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17645043162986125292ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6142279677325346132ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17128302242656617506ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6268326561097573701ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14931501936532604370ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13408936250183689264ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__timer_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5109254149117053437ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15235326936939977194ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1767457701460149179ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14206084360644031693ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12494019463290605197ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3235529234109837662ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3722465815535890048ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14580693353611099220ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10840396107370894733ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10209330734860928933ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466936020445993551ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__qspi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4133949734707110803ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2203545188322772621ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9663388190720517185ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16960589279171292057ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13730530757021056181ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15749547886965639080ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3317966808340859597ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16749709568211333851ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12644277259956815332ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3454461106503834704ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16004096526992767533ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9329951182555159532ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16297799434144611730ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13714863359246167580ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092326136802905715ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16858000934133627944ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7021340286172660220ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5514899918887444457ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__ai_m_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17730690321307303657ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1444654770705236327ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5234175222567681053ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14285345097598675612ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16028691577280639286ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2363187237841878712ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__clear_instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13163992012439414899ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2506213988359105575ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9546324318853600302ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13142731397948735704ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15955181677077977811ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_multicycle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980408995831500765ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13614465146727505370ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14296789798593116258ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675299863064432369ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3562252542211981129ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13127194790962884763ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8862685639705760937ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6555808533676973641ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4590314703567658621ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 85033295831814406ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7012689831409128017ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3384556138561656052ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12505365979312905080ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4099425991220655150ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 476015694830473148ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 470249170517964081ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6701654526969674589ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10245024835921369878ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9879470456179037345ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18041890504906472093ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4849566333649500129ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1962003527012169315ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12644055249185408318ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10393816892844828719ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2943413090694572115ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11147468814216515049ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4831383910329998082ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4580915073411999811ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 574674080862782759ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15013964003405594701ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2879554022628351676ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5818949616029845159ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16798518961423376856ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1218904976679619792ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12165698191636551642ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 503756805823396304ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12807392100378620310ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14552709462991816017ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_wdata_fw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8882697152647992661ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1402825042261460487ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17328995932723234632ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__csr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2437816763013668598ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_we_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10841505031899159813ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_type_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 409247171571235530ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15352511595554088188ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7244161883623193350ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_req_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 980369413626853248ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8251064558020216272ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15202071037940900211ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1059348108163542444ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17585530418012257201ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10422828457594703761ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13782567722533144777ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__lsu_ready_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15616024996639053622ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mie_bypass = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7330228868904275830ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16738593027110562631ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3057453626255486209ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11838826558434298166ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12399002906122587276ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13285819206405893078ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14710812218944530132ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1957070066425592180ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14024962627865951056ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2500421119389766443ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3651986334286581119ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 725693955381743334ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__wake_from_sleep = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15331400276833117127ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2205685984665142549ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 701071422308612679ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3841753850867205269ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18009401409031312055ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4987573652950159045ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4814765037027351211ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7178007633928493130ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9959693301313251391ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12715373490181128979ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9997969260057273546ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7698124810096953950ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_aligned = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10368125448930244756ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1322522621170963193ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11023157538818204465ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16626457156047703709ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1444766461183064422ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13031395320051824735ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17646175648636271689ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14667992895087223152ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17447355746947379597ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13422856850272540034ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13923885547873996122ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1512640535159596564ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1650412526023239988ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15354011157564587196ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1470259715476399284ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2808832051422513724ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7754586917452189230ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11728181770200628390ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2712490726594647169ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1716364984614685639ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13753430227961233074ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7021755863275203460ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14306037929585974067ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_atop_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4514079211929240162ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11339445799150861118ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4805608404604452066ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__r_instr_h = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4062852393381113768ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14473587157109770561ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12666003563938233497ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1887653943886780994ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3489678838671127419ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15786259596219975353ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__hwlp_update_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9343312165027221894ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17085787124734612944ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ebrk_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17666324780950292930ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4585091822026364216ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16645133509954244184ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3489406704339267512ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5754639446885501842ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14325027767922232169ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__fencei_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8286149622693117562ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regb_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12274653247885559456ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regc_used_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3829191172392864656ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11371899483454563976ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5023511829536475195ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11615040222649864435ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3659169062119274887ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16322146976392609742ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_i_type = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923808317696721159ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jump_target = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3370332469125607159ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_req_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13718262299519737242ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__irq_id_ctrl = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17626172293098465948ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_addr_rc_id = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13848362725532322321ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13025251626015569380ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_ra_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14190714642714934362ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13645857836472518613ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4328364452310568291ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9590720070944350150ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14574513849788101427ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_c_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 433189794025462296ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17140977600568080346ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2973309920397986421ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11199857645212602115ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6771187645516565619ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8205604493927381022ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5283659457894642745ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7599585488058612149ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16893361383969850757ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14521671056396346469ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14534775283865727610ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6648909374878541055ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_status = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6706253156096841231ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17140166811989874866ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10380460512700964679ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5504289963749671183ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13593302946223720828ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14133061069275132583ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11744581285923833787ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2838216590475024549ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16607593966854713569ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1346081463973270093ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9001113297749376138ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__reg_d_ex_is_reg_a_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6647054845953507171ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16703792075590782329ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__uret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5471023194737921065ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__dret_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11717730835340947738ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11474260164434258796ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1014034861561099455ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem, __VscopeHash, 5689377599014894590ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6955318856523737717ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9171991438942190198ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1347999747846917524ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16352162955686056574ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4340864194420242449ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12170933771787386475ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1628882028213367400ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15175963781186993138ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18103202172215537637ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13765296907480176065ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__jump_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2887661802369695136ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9216889582514362416ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7341174139213324199ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3473448737870456533ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1320018491105699832ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14915456416877975560ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9992913808020240480ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_entry_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13558119089782077635ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13564147270055726074ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_force_wakeup_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4279988821177980771ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1776998786160932592ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17289475454549419253ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__irq_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6001163013239862454ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_we_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11097506376741989729ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_waddr_lsu = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11050831663623701633ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8968131044030908534ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1248663922014173406ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_a = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 18140334412725545216ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_in_b = VL_SCOPED_RAND_RESET_Q(36, __VscopeHash, 14336460527095262831ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8117417927165728760ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4544049531188581622ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3659340608152075080ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7026248910364194650ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13403507197542376203ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15005413463263432039ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3376970822867901383ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1706012445872780264ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11607832915997651416ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13877050148337949812ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502625587082840045ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9362691687409654886ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8643291010254406129ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddMux_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10805271887770846463ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AddTmp_D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9750085335416227687ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6276721958580013665ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ARegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13857123309569749624ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17864381086175180330ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResRegEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7323040852578350525ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ABComp_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15225001889634948040ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__LoadEn_S = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4520948209113771591ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17513801685087217150ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8290570141161773601ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11718740052930057128ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_carry_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11695469144354913437ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18316561104584041386ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_clearcarry = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 715351773392267761ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13677004550930339794ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_CS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2725978609270230209ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_NS = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8339951711018800159ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8432035626077825571ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6972998852045535606ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10070527981004865725ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16348372582319415550ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7092637690157521657ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__count_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11455895576767089479ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9747490414458562110ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13291766785068620198ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15790886196244822156ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15802734582564687817ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5861460524784994664ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6868414488409003965ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 492351455815637160ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16775747191878089861ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7378513313633698520ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2279968227381398765ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4746210872017355646ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5185884732462034964ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2765556643230804084ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9926215840327566266ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6445637290928825480ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8932592005686519251ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10843554843087430128ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17009904970760913779ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4674024703027104207ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3257279086836209967ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12947792272664945717ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2046748859170321457ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16332304985474456218ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12481314479153857661ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4366800566401466171ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9528627233654742225ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1753979020953374325ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 17069177459342645708ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4878886998200319522ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12190507445963746175ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15527534418776635062ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6641995414458103991ull);
    VL_SCOPED_RAND_RESET_W(2048, vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, __VscopeHash, 2880237619829382866ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, __VscopeHash, 2080280492414220043ull);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n, __VscopeHash, 15539762188995488939ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10681130932036946501ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16363201836894016055ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2442655788665559880ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13909093482431578143ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3766342920982271993ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12649867133878517479ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18087710445931622937ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10864668836616890195ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9454625912394442612ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13139459697166154914ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3377817004854595073ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3382328620863624525ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12155061757189031608ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_1_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_3_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_instr__DOT___Vpast_5_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6624619397895794792ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16435766957090233860ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5785916642350356385ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8453061771489629241ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT__be_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10449125173898885782ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_1_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_3_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_obi_axi_data__DOT___Vpast_5_1 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4783958718009807901ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851063285765590044ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10906947605354380618ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13848461520865883013ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2851345067066524785ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7827160151689827511ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13936921937474942988ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1525179230703668324ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12347127466352973966ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6757204929425545848ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__uart_cpb = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 999863855420651729ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__uart_stp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4481591724977625024ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__uart_rdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8640156562747980500ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__uart_tdr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9384226093766457951ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1963502977573134619ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_rx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2019521283073001183ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__cfg_tx_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16316739356531028496ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__prev_tx_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4244056012271848121ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 631550055683796247ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__wr_cfg_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 425495128362969252ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__wr_tdr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12822065614477491455ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7152345955216389611ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 919460891315896349ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_gpio__DOT__gpio_odr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7924817879280595ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6654737435075497781ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_gpio__DOT__gpio_in_sync2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8680805196539637240ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_gpio__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16821082333856882705ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_gpio__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14072621953903828182ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_pre = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16775442653059258062ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_are = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12023968399833866667ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_ena = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 48912805413811575ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_mod = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12859123683780936853ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11098130396141643332ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__tim_evn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9490021932682840570ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__prescale_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3187926218814226206ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__wr_clr_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11475329036349697502ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__wr_evc_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17418354496420485655ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14637905661781756282ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_timer__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17567969805804603112ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_instr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14495393398614703935ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12163325815211526911ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dir = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8187048124550349662ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_dummy = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2864286137461354386ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_data_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5884917298105807211ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__ccr_prescaler = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 839619949084691849ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__qspi_adr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4493319909439593548ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cfg_addr4b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2593885394020112807ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__lane_w = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16689247186016391495ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__adr_eff = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17002287359070437930ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2108938022668853997ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3939094609695572564ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2895979386577776927ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1245204264984230343ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_wr_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11917789508801770301ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_rd_ptr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6317454838942702600ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14718147897648609509ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15697330542390401647ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__spi_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3210919907138183982ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11020017179155471817ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4866859725552934801ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__bit_cnt = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2853346368328438192ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__addr_byte = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3782973404091319551ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__dummy_cnt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2170194437053298947ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__data_byte_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6970698478391282635ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8634381190715615263ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__shift_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8618802741799937383ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3155368341773064140ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__rx_word_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11947138776296314153ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_byte_pos = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1858287045455067936ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__tx_current_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7647796783098223625ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sta_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11466827057915562707ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sta_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17037579509483625316ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sta_fifo_err = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14634902657077257397ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_tick = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6850774867377476454ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_rising = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13509065655068012992ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10220809565155715940ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_clr_sta = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17448009466634555085ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_push = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16357163163936098682ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8613678538521243044ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_pop = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13376186764188984627ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_rx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13114478946682279761ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__cmd_tx_flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 381228546508597913ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8803149109774391995ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__write_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4184303278756829162ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11634647895306534062ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_clear_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4585624747167282106ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_data_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7429581676814650023ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__csr_out_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17205582835308341159ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9606485346289040091ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3759477247265089009ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__status_result = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 711767332925479063ull);
    for (int __Vi0 = 0; __Vi0 < 490; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__input_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15934215041376867934ull);
    }
    for (int __Vi0 = 0; __Vi0 < 160; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_w_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13821445617105277671ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17526081475430943067ull);
    }
    for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13243492889496158753ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_bias_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14960760946951453554ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_out_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8275620342660618240ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7686083729200897641ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16687626288686545688ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_acc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11176568945486180617ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4556843610362033751ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mac_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9418923291078944538ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12849446893113560847ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__load_idx = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3720787349241003072ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__f_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3740132614154493206ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__r_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 697663911300695453ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__c_idx = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1458416675299407083ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__kh_idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9272301347537859486ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__kw_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6825616048045115796ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__out_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1862889524379441266ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__in_idx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 17804805489719801346ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_row_base = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13804243201418695827ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10993529562826591077ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1992553715954665147ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5991726187795553555ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17599368917940603273ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6109092226884510051ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_read_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570051308080309258ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17610181025591867164ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13704624561954553993ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__ir = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__ic = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__input_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13641011036493757264ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__weight_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9304897666811180813ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__conv_out_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7015264963231480023ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__fc_w_pix = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14974569195682837392ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__result_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3256821726375413552ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__best_idx = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__best_val = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2312252320510039355ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__aw_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10557508507334045435ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_accel__DOT__wr_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17706975433087160596ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2095334391051626322ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_boot_rom__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7590922637648985351ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10681060180726747077ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12954844442191273766ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15082316541603872161ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5626357208650550153ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9349636959635335234ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4756238399556057897ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b026c__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b03fe__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172afe20__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h172b0012__0 = 0;
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT____Vlvbound_h93f005c4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 7680; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14784944972590840173ull);
    }
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__wr_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 16906071938980148396ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__rd_word_idx = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 9870497601726476356ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13460123640847908971ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__read_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658823575787618149ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6053574307194839491ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135035895994806829ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8069748135738173569ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7660869842648591851ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14156913548158217455ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4320799548301911698ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 539793320181311474ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6993864113739548918ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15608212558271792511ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3393242522218404673ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159985757729636388ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15728702899041798556ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4005783380819621279ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13831730582830641632ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10163490153266291655ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6082945058950678232ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10152715293654894666ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8988154525126279295ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4611814944686870165ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14311702223559697097ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6218239403538660587ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18370630018463572099ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4688962054304684573ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10033296645352902957ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8370334800058259117ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11633795301596436394ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 771063491217032863ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281016844575947675ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5252386829161087415ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8895168833714212703ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4020067197480651289ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17264269769474426606ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 914655400377806666ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16819287858191429347ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 522759768811564107ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 447605083315428648ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3040046178522384168ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5164986325804813844ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6424947584163382404ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9011468174644570855ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9242821376650896303ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15571306174766967873ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9713054625963920596ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2367671783938886254ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13692198753120128735ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408757841746190411ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7478547630417632810ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18336900187190451797ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13418200451773590987ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9652979531400898931ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11746576363178820812ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1824902651786736872ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17459626274506410338ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16704391743950109074ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2442821111302243435ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6461772781914595143ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14534843555662681351ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13330865931596158818ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14898947099544751688ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6709855805958487216ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10650098170391272412ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17841151127991934626ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5849453792131681632ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11764554655029357023ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14653921263497650909ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5120762641827107948ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12956505320175778082ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15343609700449118768ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8130625102349895339ull);
    vlSelf->qspi_modes_tb__DOT__dut__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13365268541308888045ull);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->qspi_modes_tb__DOT__flash__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7809615208709605252ull);
    }
    vlSelf->qspi_modes_tb__DOT__flash__DOT__phase = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13065144780926887508ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__in_sr = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 16545386868330111237ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__in_bit_cnt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1995174232480760709ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__abytes = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14228340129406278896ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__dummy_left = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6102759290888878041ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__width = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4262023393059760132ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__steps_per_byte = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8900250947693917477ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__read_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16724623283466626359ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__out_step = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7432293330856120894ull);
    vlSelf->qspi_modes_tb__DOT__flash__DOT__cmd_new = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 670991075722228978ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_24 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_38 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__uart_awready = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__uart_wready = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__write_addr = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__uart_bvalid = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0;
    vlSelf->__Vdly__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_instr_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_data_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v1 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v2 = 0;
    vlSelf->__VdlyVal__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlyDim0__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__VdlySet__qspi_modes_tb__DOT__dut__DOT__i_ai_sram__DOT__mem__v3 = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__resetn = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_instr_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__aw_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__ar_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__w_valid = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__aw_ready = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__ar_ready = 0;
    vlSelf->__Vsampled_TOP__qspi_modes_tb__DOT__dut__DOT__cpu_data_bus__w_ready = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__id_ready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_cpu__DOT__core_i__DOT__ex_ready__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__resetn__0 = 0;
    vlSelf->__Vtrigprevexpr_hac6bdf9c__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_qspi__DOT__sclk_reg__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__qspi_cs_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__qspi_modes_tb__DOT__dut__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
