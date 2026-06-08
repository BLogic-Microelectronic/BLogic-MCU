// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___act_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = ((0U == (0x0000000fU & (vlSelfRef.ar_addr 
                                                 >> 0x00000010U)))
                           ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.ar_ready)
                           : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.ar_ready));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q) {
        vlSelfRef.r_valid = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.r_valid;
        vlSelfRef.r_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.r_data;
    } else {
        vlSelfRef.r_valid = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.r_valid;
        vlSelfRef.r_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.r_data;
    }
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                          ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_valid)
                          : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                              ? ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                 & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.r_valid))
                              : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.r_valid)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_data = ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                         ? ((0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                             ? vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_rdata
                             : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                 ? vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_rdata
                                 : ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                     ? vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_rdata
                                     : ((5U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                         ? vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_rdata
                                         : ((6U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                             ? vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_rdata
                                             : 0xdeadbeefU)))))
                         : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                             ? vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.r_data
                             : vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.r_data));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_valid = ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest))
                          ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.b_valid)
                          : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest))
                              ? ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                 & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.b_valid))
                              : ((3U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest))
                                  ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.b_valid)
                                  : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.b_valid))));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = ((4U 
                                                  != 
                                                  (vlSelfRef.aw_addr 
                                                   >> 0x0000001cU)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.aw_addr 
                                                     >> 0x0000001cU)));
    vlSelfRef.ar_ready = ((4U == (vlSelfRef.ar_addr 
                                  >> 0x0000001cU)) ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_ready)
                           : ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram)
                               ? ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                  & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.ar_ready))
                               : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.ar_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = (1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      (vlSelfRef.aw_addr 
                                                       >> 0x0000001cU)) 
                                                     | ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram) 
                                                        | (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)))));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__2\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U == (vlSelfRef.aw_addr >> 0x0000001cU))) {
        vlSelfRef.aw_ready = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.w_ready;
    } else {
        vlSelfRef.aw_ready = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.__VdfgRegularize_h6e95ff9d_0_54;
        vlSelfRef.w_ready = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.__VdfgRegularize_h6e95ff9d_0_54;
    }
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__r_valid = vlSelfRef.r_valid;
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready) 
                         & (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__r_valid = vlSelfRef.r_valid;
    vlSelfRef.__Vdly__b_valid = vlSelfRef.b_valid;
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    vlSelfRef.b_valid = vlSelfRef.__Vdly__b_valid;
    vlSelfRef.r_ready = ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q)) 
                         & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                         & (3U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    vlSelfRef.b_valid = vlSelfRef.__Vdly__b_valid;
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready) 
                         & (0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                         & (0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    vlSelfRef.b_valid = vlSelfRef.__Vdly__b_valid;
    if (vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.r_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_rready;
        vlSelfRef.b_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_bready;
    } else {
        vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready) 
                             & (1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest)));
        vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                             & (1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
    }
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.w_strb = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q;
        vlSelfRef.w_data = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_wdata;
    } else {
        vlSelfRef.w_strb = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.w_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data;
    }
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_54 = ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram)
                                                  ? 
                                                 ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                                  & (IData)(vlSelfRef.aw_ready))
                                                  : 
                                                 ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)
                                                   ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.aw_ready)
                                                   : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.aw_ready)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = ((0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                          ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_rvalid)
                          : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                              ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_rvalid)
                              : ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                  ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_rvalid)
                                  : ((5U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                      ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_rvalid)
                                      : ((6U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__rd_sel_q))
                                          ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_rvalid)
                                          : (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_ar_pending))))));
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready) 
                         & (2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                         & (2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__1\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_valid = ((0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q))
                          ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_bvalid)
                          : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q))
                              ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_bvalid)
                              : ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q))
                                  ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_bvalid)
                                  : ((5U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q))
                                      ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_bvalid)
                                      : ((6U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__wr_sel_q))
                                          ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_bvalid)
                                          : (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_periph_decoder__DOT__err_aw_pending))))));
}

void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_valid) 
                          & (4U == (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                    >> 0x0000001cU)));
    vlSelfRef.ar_ready = ((0U == (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                 >> 8U)))
                           ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_arready)
                           : ((1U == (0x0000000fU & 
                                      (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                       >> 8U))) ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_arready)
                               : ((2U == (0x0000000fU 
                                          & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                             >> 8U)))
                                   ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_arready)
                                   : ((5U == (0x0000000fU 
                                              & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr 
                                                 >> 8U)))
                                       ? (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_arready)
                                       : ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_arready) 
                                          | (0x00000600U 
                                             != (0x00000f00U 
                                                 & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.ar_addr)))))));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_valid) 
                         & (4U == (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                   >> 0x0000001cU)));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_valid) 
                          & (4U == (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                    >> 0x0000001cU)));
    if ((0U == (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                               >> 8U)))) {
        vlSelfRef.w_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_wready;
        vlSelfRef.aw_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__uart_awready;
    } else if ((1U == (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                      >> 8U)))) {
        vlSelfRef.w_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_wready;
        vlSelfRef.aw_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__gpio_awready;
    } else if ((2U == (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                      >> 8U)))) {
        vlSelfRef.w_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_wready;
        vlSelfRef.aw_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__timer_awready;
    } else if ((5U == (0x0000000fU & (vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr 
                                      >> 8U)))) {
        vlSelfRef.w_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_wready;
        vlSelfRef.aw_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__qspi_awready;
    } else {
        vlSelfRef.w_ready = ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_wready) 
                             | (0x00000600U != (0x00000f00U 
                                                & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)));
        vlSelfRef.aw_ready = ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_awready) 
                              | (0x00000600U != (0x00000f00U 
                                                 & vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.aw_addr)));
    }
}
