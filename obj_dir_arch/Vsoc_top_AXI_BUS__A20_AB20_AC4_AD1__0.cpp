// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_instr_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q) {
        vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_id;
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_user;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_valid;
    } else {
        vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_id;
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_user;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_valid;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__iar_to_boot)
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_ready)
                           : (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_ready));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_instr_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q) {
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_user;
    } else {
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_user;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_instr_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q) {
        vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_id;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__boot_rom_bus.r_valid;
    } else {
        vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_id;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.r_valid;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__periph_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__periph_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__periph_bus.r_user;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__periph_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__periph_bus.r_valid;
    } else if ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_user;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_valid;
    } else {
        vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_resp;
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_user;
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_valid;
    }
    if ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))) {
        vlSelfRef.b_resp = vlSymsp->TOP__soc_top__DOT__periph_bus.b_resp;
        vlSelfRef.b_user = vlSymsp->TOP__soc_top__DOT__periph_bus.b_user;
        vlSelfRef.b_valid = vlSymsp->TOP__soc_top__DOT__periph_bus.b_valid;
    } else if ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))) {
        vlSelfRef.b_resp = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_resp;
        vlSelfRef.b_user = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_user;
        vlSelfRef.b_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_valid;
    } else if ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))) {
        vlSelfRef.b_resp = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_resp;
        vlSelfRef.b_user = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_user;
        vlSelfRef.b_valid = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_valid;
    } else {
        vlSelfRef.b_resp = vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_resp;
        vlSelfRef.b_user = vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_user;
        vlSelfRef.b_valid = vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_valid;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_data_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_id = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                       ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.r_id)
                       : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_id)
                           : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_id)));
    vlSelfRef.b_id = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                       ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.b_id)
                       : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_id)
                           : ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                               ? (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_id)
                               : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_id))));
    vlSelfRef.ar_ready = ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph)
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.ar_ready)
                           : ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram)
                               ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_ready)
                               : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_ready)));
    if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__periph_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__periph_bus.w_ready;
    } else if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_ready;
    } else if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_ready;
    } else {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_ready;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_data_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__periph_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__periph_bus.r_user;
    } else if ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_user;
    } else {
        vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_last;
        vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_user;
    }
    vlSelfRef.b_user = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                         ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.b_user)
                         : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                             ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_user)
                             : ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                                 ? (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_user)
                                 : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_user))));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_id = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                       ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.r_id)
                       : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_id)
                           : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_id)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_id = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                       ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.b_id)
                       : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_id)
                           : ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                               ? (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_id)
                               : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_id))));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_resp = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                         ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.r_resp)
                         : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))
                             ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_resp)
                             : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_resp)));
    vlSelfRef.b_resp = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                         ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.b_resp)
                         : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                             ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_resp)
                             : ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                                 ? (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_resp)
                                 : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_resp))));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__periph_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__periph_bus.r_valid;
    } else if ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest))) {
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_valid;
    } else {
        vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_data;
        vlSelfRef.r_valid = vlSymsp->TOP__soc_top__DOT__data_sram_bus.r_valid;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__4(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_valid = ((2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                          ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.b_valid)
                          : ((1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                              ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_valid)
                              : ((3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest))
                                  ? (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.b_valid)
                                  : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.b_valid))));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__5(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph)
                           ? (IData)(vlSymsp->TOP__soc_top__DOT__periph_bus.ar_ready)
                           : ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram)
                               ? (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_ready)
                               : (IData)(vlSymsp->TOP__soc_top__DOT__data_sram_bus.ar_ready)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__6(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_data_bus__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__periph_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__periph_bus.w_ready;
    } else if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_ready;
    } else if (vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram) {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__instr_sram_bus.w_ready;
    } else {
        vlSelfRef.aw_ready = vlSymsp->TOP__soc_top__DOT__data_sram_bus.aw_ready;
        vlSelfRef.w_ready = vlSymsp->TOP__soc_top__DOT__data_sram_bus.w_ready;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__boot_rom_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_59;
    __VdfgRegularize_h6e95ff9d_0_59 = 0;
    // Body
    vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_id;
    vlSelfRef.ar_len = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_len;
    vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_size;
    vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_burst;
    vlSelfRef.ar_lock = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_lock;
    vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_cache;
    vlSelfRef.ar_prot = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_prot;
    vlSelfRef.ar_qos = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_qos;
    vlSelfRef.ar_region = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_region;
    vlSelfRef.ar_user = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_user;
    __VdfgRegularize_h6e95ff9d_0_59 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr;
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__iar_to_boot));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__b_valid = vlSelfRef.b_valid;
    vlSelfRef.__Vdly__r_valid = vlSelfRef.r_valid;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__boot_rom_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_59;
    __VdfgRegularize_h6e95ff9d_0_59 = 0;
    // Body
    vlSelfRef.b_valid = vlSelfRef.__Vdly__b_valid;
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    __VdfgRegularize_h6e95ff9d_0_59 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_59;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_59;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__boot_rom_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__iar_to_boot));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__instr_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    // Body
    vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_id;
    vlSelfRef.aw_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_len;
    vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_size;
    vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_burst;
    vlSelfRef.aw_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_lock;
    vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_cache;
    vlSelfRef.aw_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_prot;
    vlSelfRef.aw_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_qos;
    vlSelfRef.aw_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_region;
    vlSelfRef.aw_atop = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_atop;
    vlSelfRef.aw_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_user;
    vlSelfRef.w_last = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_last;
    vlSelfRef.w_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_user;
    vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_id;
    vlSelfRef.ar_len = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_len;
    vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_size;
    vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_burst;
    vlSelfRef.ar_lock = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_lock;
    vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_cache;
    vlSelfRef.ar_prot = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_prot;
    vlSelfRef.ar_qos = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_qos;
    vlSelfRef.ar_region = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_region;
    vlSelfRef.ar_user = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_user;
    vlSelfRef.r_ready = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    __VdfgRegularize_h6e95ff9d_0_43 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_43;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr;
    vlSelfRef.ar_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__iar_to_boot)) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__r_valid = vlSelfRef.r_valid;
    vlSelfRef.__Vdly__b_valid = vlSelfRef.b_valid;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__instr_sram_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_valid = vlSelfRef.__Vdly__r_valid;
    vlSelfRef.b_valid = vlSelfRef.__Vdly__b_valid;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ird_from_boot_q)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.r_ready));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (3U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_instr_sram));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__5(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_43;
    __VdfgRegularize_h6e95ff9d_0_43 = 0;
    // Body
    __VdfgRegularize_h6e95ff9d_0_43 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_43;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_43;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__7(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__instr_sram_bus__7\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__iar_to_boot)) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__data_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__data_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    // Body
    vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_id;
    vlSelfRef.aw_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_len;
    vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_size;
    vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_burst;
    vlSelfRef.aw_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_lock;
    vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_cache;
    vlSelfRef.aw_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_prot;
    vlSelfRef.aw_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_qos;
    vlSelfRef.aw_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_region;
    vlSelfRef.aw_atop = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_atop;
    vlSelfRef.aw_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_user;
    vlSelfRef.w_last = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_last;
    vlSelfRef.w_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_user;
    vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_id;
    vlSelfRef.ar_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_len;
    vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_size;
    vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_burst;
    vlSelfRef.ar_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_lock;
    vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_cache;
    vlSelfRef.ar_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_prot;
    vlSelfRef.ar_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_qos;
    vlSelfRef.ar_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_region;
    vlSelfRef.ar_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_user;
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (0U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (0U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
    vlSelfRef.ar_valid = ((~ ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph) 
                              | (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_48) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_48) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    __VdfgRegularize_h6e95ff9d_0_44 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_44;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (0U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (0U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((~ ((IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph) 
                              | (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram))) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_48) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_48) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__data_sram_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_44;
    __VdfgRegularize_h6e95ff9d_0_44 = 0;
    // Body
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    __VdfgRegularize_h6e95ff9d_0_44 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_44;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_44;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_id;
    vlSelfRef.aw_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_len;
    vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_size;
    vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_burst;
    vlSelfRef.aw_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_lock;
    vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_cache;
    vlSelfRef.aw_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_prot;
    vlSelfRef.aw_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_qos;
    vlSelfRef.aw_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_region;
    vlSelfRef.aw_atop = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_atop;
    vlSelfRef.aw_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_user;
    vlSelfRef.w_last = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_last;
    vlSelfRef.w_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_user;
    vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_id;
    vlSelfRef.ar_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_len;
    vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_size;
    vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_burst;
    vlSelfRef.ar_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_lock;
    vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_cache;
    vlSelfRef.ar_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_prot;
    vlSelfRef.ar_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_qos;
    vlSelfRef.ar_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_region;
    vlSelfRef.ar_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_user;
    vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id;
    vlSelfRef.r_resp = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_resp;
    vlSelfRef.r_last = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_last;
    vlSelfRef.r_user = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_user;
    vlSelfRef.b_id = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id;
    vlSelfRef.b_resp = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_resp;
    vlSelfRef.b_user = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_user;
    vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data;
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.b_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_valid));
    vlSelfRef.r_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_valid));
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.ar_ready));
    vlSelfRef.aw_ready = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                          & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.aw_ready));
    vlSelfRef.w_ready = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.w_ready));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_id = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id;
    vlSelfRef.b_id = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id;
    vlSelfRef.r_data = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_valid));
    vlSelfRef.r_valid = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_valid));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (1U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__cpu_to_ai_sram_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_ai_sram));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_ai_sram));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__ai_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active) {
        vlSelfRef.aw_id = 2U;
        vlSelfRef.aw_size = 2U;
        vlSelfRef.aw_burst = 1U;
        vlSelfRef.aw_cache = 3U;
        vlSelfRef.ar_id = 2U;
        vlSelfRef.ar_size = 2U;
        vlSelfRef.ar_burst = 1U;
        vlSelfRef.ar_cache = 3U;
        vlSelfRef.r_ready = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_rready;
        vlSelfRef.b_ready = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_bready;
        vlSelfRef.w_strb = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wstrb;
        vlSelfRef.ar_addr = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_araddr;
        vlSelfRef.aw_addr = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_awaddr;
        vlSelfRef.w_data = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wdata;
        vlSelfRef.ar_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_arvalid;
        vlSelfRef.aw_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_awvalid;
        vlSelfRef.w_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wvalid;
    } else {
        vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_id;
        vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_size;
        vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_burst;
        vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_cache;
        vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_id;
        vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_size;
        vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_burst;
        vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_cache;
        vlSelfRef.r_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_ready;
        vlSelfRef.b_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_ready;
        vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_strb;
        vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_addr;
        vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_addr;
        vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_data;
        vlSelfRef.ar_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_valid;
        vlSelfRef.aw_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_valid;
        vlSelfRef.w_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_valid;
    }
    vlSelfRef.aw_len = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_len) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_lock = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_lock));
    vlSelfRef.aw_prot = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_prot) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_qos = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_qos) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_region = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_region) 
                           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_atop = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_atop) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_user));
    vlSelfRef.w_last = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_last) 
                        | (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active));
    vlSelfRef.w_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_user));
    vlSelfRef.ar_len = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_len) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_lock = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_lock));
    vlSelfRef.ar_prot = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_prot) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_qos = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_qos) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_region = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_region) 
                           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_user));
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    __VdfgRegularize_h6e95ff9d_0_45 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_45;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__ai_sram_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active) {
        vlSelfRef.aw_id = 2U;
        vlSelfRef.aw_size = 2U;
        vlSelfRef.aw_burst = 1U;
        vlSelfRef.aw_cache = 3U;
        vlSelfRef.ar_id = 2U;
        vlSelfRef.ar_size = 2U;
        vlSelfRef.ar_burst = 1U;
        vlSelfRef.ar_cache = 3U;
    } else {
        vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_id;
        vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_size;
        vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_burst;
        vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_cache;
        vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_id;
        vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_size;
        vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_burst;
        vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_cache;
    }
    vlSelfRef.aw_len = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_len) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_lock = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_lock));
    vlSelfRef.aw_prot = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_prot) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_qos = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_qos) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_region = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_region) 
                           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_atop = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_atop) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.aw_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_user));
    vlSelfRef.w_last = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_last) 
                        | (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active));
    vlSelfRef.w_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                        & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_user));
    vlSelfRef.ar_len = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_len) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_lock = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_lock));
    vlSelfRef.ar_prot = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_prot) 
                         & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_qos = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_qos) 
                        & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_region = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_region) 
                           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active))))));
    vlSelfRef.ar_user = ((~ (IData)(vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active)) 
                         & (IData)(vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_user));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active) {
        vlSelfRef.w_strb = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wstrb;
        vlSelfRef.ar_addr = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_araddr;
        vlSelfRef.aw_addr = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_awaddr;
        vlSelfRef.w_data = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wdata;
    } else {
        vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_strb;
        vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_addr;
        vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_addr;
        vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_data;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active) {
        vlSelfRef.r_ready = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_rready;
        vlSelfRef.b_ready = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_bready;
    } else {
        vlSelfRef.r_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.r_ready;
        vlSelfRef.b_ready = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.b_ready;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_active) {
        vlSelfRef.ar_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_arvalid;
        vlSelfRef.aw_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_awvalid;
        vlSelfRef.w_valid = vlSymsp->TOP.soc_top__DOT__i_ai_arb__DOT__ai_wvalid;
    } else {
        vlSelfRef.ar_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.ar_valid;
        vlSelfRef.aw_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.aw_valid;
        vlSelfRef.w_valid = vlSymsp->TOP__soc_top__DOT__cpu_to_ai_sram_bus.w_valid;
    }
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__ai_sram_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    // Body
    vlSelfRef.ar_ready = (1U & ((~ (IData)(vlSelfRef.r_valid)) 
                                | (IData)(vlSelfRef.r_ready)));
    __VdfgRegularize_h6e95ff9d_0_45 = (1U & ((~ (IData)(vlSelfRef.b_valid)) 
                                             | (IData)(vlSelfRef.b_ready)));
    vlSelfRef.aw_ready = __VdfgRegularize_h6e95ff9d_0_45;
    vlSelfRef.w_ready = __VdfgRegularize_h6e95ff9d_0_45;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_user;
    vlSelfRef.ar_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_region;
    vlSelfRef.ar_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_qos;
    vlSelfRef.ar_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_prot;
    vlSelfRef.ar_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_cache;
    vlSelfRef.ar_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_lock;
    vlSelfRef.ar_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_burst;
    vlSelfRef.ar_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_size;
    vlSelfRef.ar_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_len;
    vlSelfRef.w_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_user;
    vlSelfRef.w_last = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_last;
    vlSelfRef.aw_user = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_user;
    vlSelfRef.aw_atop = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_atop;
    vlSelfRef.aw_region = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_region;
    vlSelfRef.aw_qos = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_qos;
    vlSelfRef.aw_prot = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_prot;
    vlSelfRef.aw_cache = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_cache;
    vlSelfRef.aw_lock = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_lock;
    vlSelfRef.aw_burst = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_burst;
    vlSelfRef.aw_size = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_size;
    vlSelfRef.aw_len = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_len;
    vlSelfRef.ar_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_id;
    vlSelfRef.aw_id = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_id;
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
    vlSelfRef.r_resp = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rresp;
    vlSelfRef.b_resp = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_bresp;
    vlSelfRef.r_data = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rdata;
    vlSelfRef.b_valid = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_bvalid;
    vlSelfRef.r_valid = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rvalid;
    vlSelfRef.w_strb = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_strb;
    vlSelfRef.ar_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_addr;
    vlSelfRef.aw_addr = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_addr;
    vlSelfRef.w_data = vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_data;
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_sequent__TOP__soc_top__DOT__periph_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_id = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rid;
    vlSelfRef.b_id = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_bid;
    vlSelfRef.ar_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_arready;
    vlSelfRef.aw_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_awready;
    vlSelfRef.w_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_wready;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__periph_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_sequent__TOP__soc_top__DOT__periph_bus__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_resp = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rresp;
    vlSelfRef.b_resp = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_bresp;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__1(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.r_ready) 
                         & (2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__rd_dest)));
    vlSelfRef.b_ready = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.b_ready) 
                         & (2U == (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__wr_dest)));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__2(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_data = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rdata;
    vlSelfRef.b_valid = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_bvalid;
    vlSelfRef.r_valid = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_rvalid;
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__3(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.ar_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__ar_to_periph));
    vlSelfRef.aw_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.aw_valid) 
                          & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph));
    vlSelfRef.w_valid = ((IData)(vlSymsp->TOP__soc_top__DOT__cpu_data_bus.w_valid) 
                         & (IData)(vlSymsp->TOP.soc_top__DOT__i_crossbar__DOT__aw_to_periph));
}

void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__4(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___nba_comb__TOP__soc_top__DOT__periph_bus__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ar_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_arready;
    vlSelfRef.aw_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_awready;
    vlSelfRef.w_ready = vlSymsp->TOP.soc_top__DOT__i_axi_lite_bridge__DOT__s_wready;
}
