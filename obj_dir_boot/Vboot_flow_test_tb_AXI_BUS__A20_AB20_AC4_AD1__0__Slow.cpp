// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vboot_flow_test_tb.h for the primary calling header

#include "Vboot_flow_test_tb__pch.h"

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q) {
        vlSelfRef.r_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus.r_valid;
    } else {
        vlSelfRef.r_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus.r_valid;
    }
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__0\n"); );
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
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_53 = ((4U 
                                                  != 
                                                  (vlSelfRef.aw_addr 
                                                   >> 0x0000001cU)) 
                                                 & (0U 
                                                    == 
                                                    (vlSelfRef.aw_addr 
                                                     >> 0x0000001cU)));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus__1\n"); );
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
    vlSelfRef.r_valid = ((2U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                          ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.r_valid)
                          : ((1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest))
                              ? ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                 & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.r_valid))
                              : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.r_valid)));
    vlSelfRef.ar_ready = ((4U == (vlSelfRef.ar_addr 
                                  >> 0x0000001cU)) ? (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus.ar_ready)
                           : ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ar_to_ai_sram)
                               ? ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy)) 
                                  & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus.ar_ready))
                               : (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus.ar_ready)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_55 = (1U 
                                                 & (~ 
                                                    ((4U 
                                                      == 
                                                      (vlSelfRef.aw_addr 
                                                       >> 0x0000001cU)) 
                                                     | ((IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_ai_sram) 
                                                        | (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__aw_to_instr_sram)))));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__boot_rom_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready) 
                         & (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__instr_sram_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((~ (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__ird_from_boot_q)) 
                         & (IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_instr_bus.r_ready));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                         & (3U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__data_sram_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready) 
                         & (0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                         & (0U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__ai_sram_bus__0\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__status_busy) {
        vlSelfRef.r_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_rready;
        vlSelfRef.b_ready = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_bready;
        vlSelfRef.w_strb = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_ai_accel__DOT__mem_wstrb_q;
        vlSelfRef.w_data = vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__ai_m_wdata;
    } else {
        vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.r_ready) 
                             & (1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__rd_dest)));
        vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.b_ready) 
                             & (1U == (IData)(vlSymsp->TOP.boot_flow_test_tb__DOT__dut__DOT__i_crossbar__DOT__wr_dest)));
        vlSelfRef.w_strb = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_strb;
        vlSelfRef.w_data = vlSymsp->TOP__boot_flow_test_tb__DOT__dut__DOT__cpu_data_bus.w_data;
    }
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    vlSelfRef.aw_ready = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                | (IData)(vlSelfRef.b_ready)));
}

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___stl_sequent__TOP__boot_flow_test_tb__DOT__dut__DOT__periph_bus__0\n"); );
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

VL_ATTR_COLD void Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vboot_flow_test_tb_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset\n"); );
    Vboot_flow_test_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->aw_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12137323606626064423ull);
    vlSelf->aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1754404075958931966ull);
    vlSelf->aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 191578932042233452ull);
    vlSelf->w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1356167372520825866ull);
    vlSelf->w_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10345301724960173782ull);
    vlSelf->w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1598689714110194787ull);
    vlSelf->w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6191156139041826059ull);
    vlSelf->b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040118903267060698ull);
    vlSelf->b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3038769386468159021ull);
    vlSelf->ar_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11238140989117108765ull);
    vlSelf->ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3917887198715823980ull);
    vlSelf->ar_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6480720733453627862ull);
    vlSelf->r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9282394983452304596ull);
    vlSelf->r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716220725288817265ull);
    vlSelf->r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812217113783743825ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__Vdly__r_valid = 0;
    vlSelf->__Vdly__b_valid = 0;
}
