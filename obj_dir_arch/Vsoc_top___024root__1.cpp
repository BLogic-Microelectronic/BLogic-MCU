// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top___024root___ico_sequent__TOP__3(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_sequent__TOP__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__aw_done_q;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_d 
        = vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__w_done_q;
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

void Vsoc_top___024root___ico_comb__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
        = ((0x00010000U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                            << 0x00000010U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                               << 1U))) 
           | (0x0000ffffU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                              ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                 >> 0x00000010U) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
}

void Vsoc_top___024root___ico_comb__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
        = (((IData)((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                      >> 1U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                >> 0x0000000fU))) << 0x00000010U) 
           | (0x0000ffffU & ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                              ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i 
                                 >> 0x00000010U) : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_b_i)));
}

void Vsoc_top___024root___ico_comb__TOP__2(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = (((((((IData)((0U != (0xc0000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                << 6U) | (((IData)((0U != (0x30000000U 
                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                           << 5U) | ((IData)((0U != 
                                              (0x0c000000U 
                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                     << 4U))) | ((((IData)(
                                                           (0U 
                                                            != 
                                                            (0x03000000U 
                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                                   << 3U) 
                                                  | ((IData)(
                                                             (0U 
                                                              != 
                                                              (0x00c00000U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                                     << 2U)) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x00300000U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0x000c0000U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)))))) 
             << 0x00000018U) | ((((((IData)((0U != 
                                             (0x00030000U 
                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                    << 3U) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x0000c000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                              << 2U)) 
                                  | (((IData)((0U != 
                                               (0x00003000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x00000c00U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))))) 
                                 << 0x00000014U) | 
                                (((((IData)((0U != 
                                             (0x00000300U 
                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                    << 3U) | ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x000000c0U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                              << 2U)) 
                                  | (((IData)((0U != 
                                               (0x00000030U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (0x0000000cU 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))))) 
                                 << 0x00000010U))) 
           | (((((((IData)((0U != (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i))) 
                   << 3U) | ((IData)((0U != (0x60000000U 
                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                             << 2U)) | (((IData)((0U 
                                                  != 
                                                  (0x18000000U 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                         << 1U) | (IData)(
                                                          (0U 
                                                           != 
                                                           (0x06000000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))))) 
                << 0x0000000cU) | (((((IData)((0U != 
                                               (0x01800000U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                      << 3U) | ((IData)(
                                                        (0U 
                                                         != 
                                                         (0x00600000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                << 2U)) 
                                    | (((IData)((0U 
                                                 != 
                                                 (0x00180000U 
                                                  & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                        << 1U) | (IData)(
                                                         (0U 
                                                          != 
                                                          (0x00060000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))))) 
                                   << 8U)) | ((((((IData)(
                                                          (0U 
                                                           != 
                                                           (0x00018000U 
                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                  << 3U) 
                                                 | ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x00006000U 
                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                    << 2U)) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x00001800U 
                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             (0U 
                                                              != 
                                                              (0x00000600U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))))) 
                                               << 4U) 
                                              | ((((IData)(
                                                           (0U 
                                                            != 
                                                            (0x00000180U 
                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                   << 3U) 
                                                  | ((IData)(
                                                             (0U 
                                                              != 
                                                              (0x00000060U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                     << 2U)) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x00000018U 
                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__no_ones_o 
        = (1U & (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__no_ones_o;
}

void Vsoc_top___024root___ico_comb__TOP__3(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00010000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000010U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000015U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00004000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 6U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x00000015U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 0x0000000bU))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00001000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                           >> 0x0000001cU))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 1U))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000400U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000012U))
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 9U) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000017U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000100U 
                                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                         ? 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 8U))
                                                                         : 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 0x0000000dU))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000040U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x0000001eU))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 0x0000001dU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                             >> 3U))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((0x00000010U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000014U))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000019U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((4U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000aU))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000011U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000fU))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00010000U 
                                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                   ? 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000010U))
                                                                   : 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x0000000bU) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000015U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00004000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 6U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x00000015U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 0x0000000bU))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00001000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000001cU))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 1U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000400U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000012U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 9U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000017U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000100U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 8U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000000dU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000040U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x0000001eU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000001dU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 3U))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((0x00000010U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000014U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000019U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((4U 
                                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                      ? 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000aU))
                                                                      : 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000011U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000fU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x00007c00U 
                                                                      & (((0x40000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 0x0000000aU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x00000016U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x0000001bU))) 
                                                                         << 0x0000000aU)) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x10000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x0000000cU))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x00000011U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x04000000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x00000019U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 7U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x01000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000018U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 3U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000001dU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00400000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000000eU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000000dU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000013U))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00100000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 4U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 9U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00040000U 
                                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                                ? 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                                : 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00008000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000015U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x0000000bU))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x00000010U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00002000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 6U))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00000800U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x00000017U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x0000001cU))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000200U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                         ? 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x00000013U) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x0000000dU))
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x00000012U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000080U 
                                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x0000001dU) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 3U))
                                                                         : 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 8U))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000020U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000019U))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000001eU))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((8U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x00000011U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000000fU))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000014U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((2U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x0000001bU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 5U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 0x0000000aU))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00008000U 
                                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                   ? 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000015U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x0000000bU))
                                                                   : 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x00000010U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00002000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 1U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 6U))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00000800U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x00000017U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x0000001cU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000200U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x00000013U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x0000000dU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x00000012U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000080U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x0000001dU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 3U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 8U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000020U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000019U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000001eU))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((8U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x00000011U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000000fU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000014U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((2U 
                                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x0000001bU) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 5U))
                                                                      : 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 0x0000000aU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((0x000003e0U 
                                                                        & (((1U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              << 0x0000001bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                                >> 5U))) 
                                                                           << 5U)) 
                                                                       | (0x0000001fU 
                                                                          & ((0x20000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000011U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000aU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000016U))))) 
                                                                      << 0x0000000aU) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x08000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000019U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 7U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x0000000cU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x02000000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 3U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000001dU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 2U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x00800000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 0x0000000dU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000013U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000018U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00200000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 9U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000000eU))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00080000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 1U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001fU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 4U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00020000U 
                                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x0000000bU) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                                : 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((__Vtemp_2[0U] << 0x00000010U) | __Vtemp_3[2U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((__Vtemp_2[0U] >> 0x00000010U) | (__Vtemp_2[1U] 
                                             << 0x00000010U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((__Vtemp_2[1U] >> 0x00000010U) | (__Vtemp_2[2U] 
                                                << 0x00000010U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o 
        = (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result 
        = (0x0000001fU & ((IData)(0x1fU) - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result 
        = (0x0000003fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                          - (IData)(1U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result))
                                    : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x1fU)
                                            ? 0x1fU
                                            : 0U) : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result))
                                    : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)));
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
            ? 0x1fU : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int) 
                          + (1U & (- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm
            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
                       >> (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = (((((((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                << 2U)) | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 2U))) 
               << 0x0000000cU) | (((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 2U)) 
                                   | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            >> 6U))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 6U)) 
                                               | (3U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000aU))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000aU)) 
                                                | (3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000000eU))))) 
            << 0x00000010U) | (((((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000000eU)) 
                                  | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000012U))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000012U)) 
                                  | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000016U))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000016U)) 
                                              | (3U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001aU))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000001aU)) 
                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000001eU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((((0x00000e00U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 7U)) | ((0x000001c0U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            << 1U)) 
                                        | ((0x00000038U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                           | (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000bU))))) 
            << 0x00000012U) | ((((0x000001c0U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 8U)) 
                                 | ((0x00000038U & 
                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x0000000eU)) 
                                    | (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x00000014U)))) 
                                << 9U) | ((0x000001c0U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000011U)) 
                                          | ((0x00000038U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x00000017U)) 
                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x0000001dU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed) 
           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              >> (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
            : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and 
        = ((0x2aU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
            : (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and));
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

void Vsoc_top___024root___ico_comb__TOP__4(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 0U;
    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o)))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
    }
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
    }
    if (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i)) 
          | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i))) 
         & ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i)) 
             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i)) 
            | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i) 
                   & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i) 
                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i)))))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
    }
    if (((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_dec_i)) 
         & ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i) 
              & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_wb_is_reg_a_i)) 
             | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i) 
                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i))) 
            | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_alu_is_reg_a_i))))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o = 1U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o = 0U;
    if (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i)) 
          | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__wb_ready_i)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_wb_i))) 
         & ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_a_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_b_i)) 
             | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__reg_d_ex_is_reg_c_i)) 
            | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_id_i) 
                   & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i)))) 
               & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i) 
                  == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i)))))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o = 1U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__deassert_we 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__deassert_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__load_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__deassert_we;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en_o 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_id_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn) 
           & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__deassert_we_i))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__alu_en_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_mem_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__regfile_alu_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__data_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__hwlp_we 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__hwlp_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__apu_en_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_int_en_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__mult_dot_en_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__ctrl_transfer_insn_in_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__apu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) 
           | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_transfer_insn_in_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id;
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsoc_top__ConstPool__TABLE_haa8c9ebd_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_hfc2dea1f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_h48470b6d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_hc8c40d37_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_haccd4eb4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsoc_top__ConstPool__TABLE_h90ec5698_0;

void Vsoc_top___024root___ico_comb__TOP__5(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
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

void Vsoc_top___024root___ico_comb__TOP__6(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mul 
        = (0x00000003ffffffffULL & VL_MULS_QQQ(34, 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a)), 
                                               (0x00000003ffffffffULL 
                                                & VL_EXTENDS_QI(34,17, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
        = (0x00000003ffffffffULL & (VL_EXTENDS_QQ(34,33, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_c) 
                                    + (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mul 
                                       + VL_EXTENDS_QI(34,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round))));
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_active_o) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x00000021U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x00000020U)));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x0000001fU)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0 
            = (1U & (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac 
                             >> 0x0000001fU)));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result 
        = (0x00000003ffffffffULL & VL_SHIFTRS_QQI(34,34,5, 
                                                  (((QData)((IData)(
                                                                    ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                     & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb1)))) 
                                                    << 0x00000021U) 
                                                   | (((QData)((IData)(
                                                                       ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_shift_arith) 
                                                                        & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac_msb0)))) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_mac)))), (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_imm)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o = 0U;
    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))) {
        if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
                    = (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result);
            }
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
                = ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))
                    ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
                        ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i)
                            ? (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result) 
                                << 0x00000010U) | (0x0000ffffU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i))
                            : ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i) 
                               | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result)))
                        : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result))
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_char_result);
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o 
            = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i))
                ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_result)
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_result);
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__result_o;
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsoc_top__ConstPool__TABLE_h18256ca7_0;

void Vsoc_top___024root___ico_comb__TOP__7(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__7\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mtvec_init_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_mtvec_init;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i 
        = (0xfffffffeU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_addr_n);
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
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o = 1U;
    } else {
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
             & (0U < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_flush_cnt 
                = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o = 0U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i) 
           & (- (IData)((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                  | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18 = (1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
                                                     | (0U 
                                                        < (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__flush_cnt_q)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_q;
    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
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
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__state))) {
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__branch_addr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_flush_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__req_i) 
           & (2U > ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                    + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_masked))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
           & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr 
        = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_addr_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_flush;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
           | (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__state_q) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 0U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_q);
    } else {
        if ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)) 
             & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_valid_o) 
                   & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_ready_i))))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_state = 1U;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o 
            = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__branch_i)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__aligned_branch_addr
                : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_jump_i)
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__hwlp_target_i
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_incr));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down)
                      ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__cnt_q) 
                     - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__count_down))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__trans_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q) 
           || (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_valid_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o 
        = (1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid) 
                    | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__branch_req))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__id_ready_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__fetch_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i 
        = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__trans_addr);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__perf_imiss_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__halt_if_i)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_ready));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__gen_no_trans_stable__DOT__obi_addr_q
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__trans_addr_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_busy_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__perf_imiss;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__if_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__instr_valid_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_ready 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__aligner_ready_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__obi_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_busy;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_req_o;
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
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__next_state 
            = ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i)
                ? 3U : 0U);
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__pc_n 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__branch_addr_i;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__update_state = 1U;
    }
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__core_busy_d 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__if_busy_i) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__ctrl_busy_i) 
              | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__lsu_busy_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__fetch_ready;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fetch_ready_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_pmp;
    vlSelfRef.soc_top__DOT__instr_req = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_req_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__resp_valid_i) 
           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_18) 
              & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fetch_ready_i)) 
                 | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_addr_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i 
        = vlSelfRef.soc_top__DOT__instr_req;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_pop_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_push_o;
    vlSelfRef.soc_top__DOT__instr_addr = vlSelfRef.soc_top__DOT__i_cpu__DOT__instr_addr_o;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_pop;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__push_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_push;
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_addr_i 
        = vlSelfRef.soc_top__DOT__instr_addr;
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
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.aw_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_addr 
        = vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__addr_q;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__state_q)))) {
                if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__obi_req_i) {
                    vlSymsp->TOP__soc_top__DOT__cpu_instr_bus.ar_valid = 1U;
                }
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

void Vsoc_top___024root___ico_comb__TOP__8(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__8\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rd_word_idx 
        = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.ar_ready));
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rd_word_idx 
        = (0x00003fffU & (vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_addr 
                          >> 2U));
    vlSelfRef.soc_top__DOT__i_instr_sram__DOT__read_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_valid) 
           & (IData)(vlSymsp->TOP__soc_top__DOT__instr_sram_bus.ar_ready));
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

void Vsoc_top___024root___ico_comb__TOP__9(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__9\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___ico_comb__TOP__10(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ico_comb__TOP__10\n"); );
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_id 
        = ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_wdata_fw_i
            : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_b_fw_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_wdata_wb_i
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_data_rb_id));
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

void Vsoc_top___024root___ico_sequent__TOP__0(Vsoc_top___024root* vlSelf);
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
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);
void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf);

void Vsoc_top___024root___eval_ico(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_ico\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[1U])) {
        Vsoc_top___024root___ico_sequent__TOP__0(vlSelf);
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000010ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
            = ((0x00010000U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                << 0x00000010U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                   << 1U))) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                  ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                     >> 0x00000010U)
                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000020ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (8ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000000cULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((1ULL & (vlSelfRef.__VicoTriggered[1U] | vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (2ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x0000000000000030ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (3ULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__7(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
        Vsoc_top___024root___ico_comb__TOP__8(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000000eULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
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
    if (((1ULL & vlSelfRef.__VicoTriggered[1U]) | (0x000000000000003cULL 
                                                   & vlSelfRef.__VicoTriggered[0U]))) {
        Vsoc_top___024root___ico_comb__TOP__10(vlSelf);
    }
}

void Vsoc_top___024root___eval_triggers_vec__ico(Vsoc_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsoc_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vsoc_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

bool Vsoc_top___024root___eval_phase__ico(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_phase__ico\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsoc_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsoc_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vsoc_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vsoc_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsoc_top___024root___eval_triggers_vec__act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_triggers_vec__act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (((QData)((IData)(
                                                      ((((((((((IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__clk_i) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_sram__DOT__clk_i__0))) 
                                                              << 3U) 
                                                             | (((~ (IData)(vlSelfRef.soc_top__DOT__i_data_sram__DOT__rst_ni)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_data_sram__DOT__rst_ni__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.soc_top__DOT__i_data_sram__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_data_sram__DOT__clk_i__0))) 
                                                                << 1U) 
                                                               | ((~ (IData)(vlSelfRef.soc_top__DOT__i_instr_sram__DOT__rst_ni)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_instr_sram__DOT__rst_ni__0)))) 
                                                           << 0x0000000cU) 
                                                          | ((((((IData)(vlSelfRef.soc_top__DOT__i_instr_sram__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_instr_sram__DOT__clk_i__0))) 
                                                                << 3U) 
                                                               | (((~ (IData)(vlSelfRef.soc_top__DOT__i_boot_rom__DOT__rst_ni)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_boot_rom__DOT__rst_ni__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_boot_rom__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_boot_rom__DOT__clk_i__0))) 
                                                                  << 1U) 
                                                                 | ((~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_accel__DOT__rst_ni__0)))) 
                                                             << 8U)) 
                                                         | (((((((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__clk_i) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_accel__DOT__clk_i__0))) 
                                                                << 3U) 
                                                               | (((~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rst_ni)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_qspi__DOT__rst_ni__0)) 
                                                                  << 2U)) 
                                                              | ((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__clk_i) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_qspi__DOT__clk_i__0))) 
                                                                  << 1U) 
                                                                 | ((~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_timer__DOT__rst_ni__0)))) 
                                                             << 4U) 
                                                            | (((((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_timer__DOT__clk_i__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_gpio__DOT__rst_ni__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__clk_i) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_gpio__DOT__clk_i__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__clk__0))))))) 
                                                        << 0x00000010U) 
                                                       | ((((((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__rst_ni__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_uart_0__DOT__clk_i__0))) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rst_ni)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_periph_decoder__DOT__rst_ni__0)))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_periph_decoder__DOT__clk_i__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_crossbar__DOT__rst_ni__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_crossbar__DOT__clk_i) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_crossbar__DOT__clk_i__0))) 
                                                                   << 1U) 
                                                                  | ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni__0)))) 
                                                              << 8U)) 
                                                          | (((((((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__clk_i) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_data__DOT__clk_i__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__clk_i) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_obi_axi_instr__DOT__clk_i__0))) 
                                                                   << 1U) 
                                                                  | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n__0)))) 
                                                              << 4U) 
                                                             | (((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__clk__0))) 
                                                                  << 3U) 
                                                                 | (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__rst_n__0)) 
                                                                    << 2U)) 
                                                                | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__clk__0))) 
                                                                    << 1U) 
                                                                   | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n)) 
                                                                      & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__rst_n__0))))))))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(
                                                       ((((((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clk__0))) 
                                                               << 3U) 
                                                              | (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI__0)) 
                                                                 << 2U)) 
                                                             | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Clk_CI__0))) 
                                                                 << 1U) 
                                                                | ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__rst_n__0)))) 
                                                            << 0x0000000cU) 
                                                           | ((((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__clk__0))) 
                                                                 << 3U) 
                                                                | (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__rst_n__0)) 
                                                                   << 2U)) 
                                                               | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__clk__0))) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk_ungated_i__0))))) 
                                                              << 8U)) 
                                                          | (((((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n)) 
                                                                  & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__rst_n__0)) 
                                                                 << 3U) 
                                                                | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__clk__0))) 
                                                                   << 2U)) 
                                                               | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n)) 
                                                                    & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n__0)) 
                                                                   << 1U) 
                                                                  | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__clk__0))))) 
                                                              << 4U) 
                                                             | (((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__aligner_i__DOT__clk__0))))))) 
                                                         << 0x00000010U) 
                                                        | ((((((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__rst_n__0)) 
                                                                << 3U) 
                                                               | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk) 
                                                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__instruction_obi_i__DOT__clk__0))) 
                                                                  << 2U)) 
                                                              | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni__0)) 
                                                                  << 1U) 
                                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i) 
                                                                    & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__clk_i__0))))) 
                                                             << 0x0000000cU) 
                                                            | ((((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__clk__0))) 
                                                                    << 2U)) 
                                                                | ((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n)) 
                                                                     & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n__0)) 
                                                                    << 1U) 
                                                                   | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk) 
                                                                      & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clk__0))))) 
                                                               << 8U)) 
                                                           | (((((((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n)) 
                                                                   & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__rst_n__0)) 
                                                                  << 3U) 
                                                                 | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i) 
                                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__sleep_unit_i__DOT__clk_ungated_i__0))) 
                                                                    << 2U)) 
                                                                | (((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b 
                                                                     != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_b__1) 
                                                                    << 1U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                                      != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a__1))) 
                                                               << 4U) 
                                                              | ((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                                                    != vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1) 
                                                                   << 3U) 
                                                                  | ((0U 
                                                                      != 
                                                                      (((((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U]) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                             ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U])) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U])) 
                                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                           ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U])) 
                                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                          ^ vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U]))) 
                                                                     << 2U)) 
                                                                 | ((((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready) 
                                                                      != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_ready__1)) 
                                                                     << 1U) 
                                                                    | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o) 
                                                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_decoding_o__1))))))))));
    vlSelfRef.__VactTriggered[1U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n__0)) 
                                                       << 0x0000000aU) 
                                                      | ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__clk__0))) 
                                                          << 9U) 
                                                         | (((~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n__0)) 
                                                            << 8U))) 
                                                     | (((((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__clk) 
                                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__clk__0))) 
                                                            << 3U) 
                                                           | (((~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n)) 
                                                               & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n__0)) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__clk__0))) 
                                                              << 1U) 
                                                             | ((~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n__0)))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__clk) 
                                                              & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__clk__0))) 
                                                             << 3U) 
                                                            | (((~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n)) 
                                                                & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__clk__0))) 
                                                               << 1U) 
                                                              | ((~ (IData)(vlSelfRef.soc_top__DOT__i_ai_sram__DOT__rst_ni)) 
                                                                 & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__soc_top__DOT__i_ai_sram__DOT__rst_ni__0))))))));
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
        vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                         | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vsoc_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___trigger_anySet__act\n"); );
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

void Vsoc_top___024root___act_sequent__TOP__3(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___act_sequent__TOP__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00010000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000010U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                        << 0x0000000bU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                          >> 0x00000015U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00004000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 6U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x00000015U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 0x0000000bU))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00001000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                           >> 0x0000001cU))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                           >> 1U))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000400U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000012U))
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                          << 9U) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                            >> 0x00000017U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000100U 
                                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                         ? 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 8U))
                                                                         : 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                          << 0x00000013U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                            >> 0x0000000dU))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000040U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x0000001eU))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                           << 0x0000001dU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                             >> 3U))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((0x00000010U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000014U))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                             >> 0x00000019U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((4U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000aU))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                            << 0x00000011U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              >> 0x0000000fU))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00010000U 
                                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                   ? 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000010U))
                                                                   : 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                    << 0x0000000bU) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                      >> 0x00000015U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00004000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 6U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x00000015U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 0x0000000bU))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00001000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000001cU))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                       >> 1U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000400U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000012U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 9U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 0x00000017U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000100U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 8U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                     << 0x00000013U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                       >> 0x0000000dU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000040U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x0000001eU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                      << 0x0000001dU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[1U] 
                                                                        >> 3U))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((0x00000010U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000014U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                        >> 0x00000019U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((4U 
                                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                      ? 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000aU))
                                                                      : 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                       << 0x00000011U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                         >> 0x0000000fU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)(((0x00007c00U 
                                                  & (((0x40000000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 0x0000000aU) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x00000016U))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                        << 5U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                          >> 0x0000001bU))) 
                                                     << 0x0000000aU)) 
                                                 | ((0x000003e0U 
                                                     & (((0x10000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x0000000cU))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                             >> 0x00000011U))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x04000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 2U))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                            << 0x00000019U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                              >> 7U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x01000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x00000018U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 3U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              >> 0x0000001dU))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00400000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x0000000eU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000000dU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 0x00000013U))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00100000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 4U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               >> 9U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00040000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                              << 1U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((0x00007c00U 
                                                                      & (((0x40000000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 0x0000000aU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x00000016U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                              >> 0x0000001bU))) 
                                                                         << 0x0000000aU)) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x10000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x0000000cU))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 0x00000011U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x04000000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 2U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                << 0x00000019U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                                >> 7U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x01000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000018U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[4U] 
                                                                               << 3U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000001dU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00400000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x0000000eU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000000dU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 0x00000013U))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00100000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 4U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                >> 9U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00040000U 
                                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                                ? 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001aU))
                                                                                : 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[3U] 
                                                                                << 1U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[2U] 
                                                                                >> 0x0000001fU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)(((((0x000003e0U 
                                                  & (((0x00008000U 
                                                       & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000015U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x0000000bU))
                                                       : 
                                                      ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                        << 0x00000010U) 
                                                       | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                          >> 0x00000010U))) 
                                                     << 5U)) 
                                                 | (0x0000001fU 
                                                    & ((0x00002000U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001fU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x0000001aU) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 6U))))) 
                                                << 0x0000000aU) 
                                               | ((0x000003e0U 
                                                   & (((0x00000800U 
                                                        & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x00000017U))
                                                        : 
                                                       ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x0000001cU))) 
                                                      << 5U)) 
                                                  | (0x0000001fU 
                                                     & ((0x00000200U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                         ? 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x00000013U) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x0000000dU))
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x0000000eU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x00000012U)))))))) 
                              << 0x00000014U) | (QData)((IData)(
                                                                ((((0x000003e0U 
                                                                    & (((0x00000080U 
                                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x0000001dU) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 3U))
                                                                         : 
                                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                          << 0x00000018U) 
                                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                            >> 8U))) 
                                                                       << 5U)) 
                                                                   | (0x0000001fU 
                                                                      & ((0x00000020U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 7U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000019U))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                           << 2U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000001eU))))) 
                                                                  << 0x0000000aU) 
                                                                 | ((0x000003e0U 
                                                                     & (((8U 
                                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x00000011U) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x0000000fU))
                                                                          : 
                                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                           << 0x0000000cU) 
                                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                             >> 0x00000014U))) 
                                                                        << 5U)) 
                                                                    | (0x0000001fU 
                                                                       & ((2U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x0000001bU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 5U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                            << 0x00000016U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                              >> 0x0000000aU))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          ((((0x000003e0U 
                                                              & (((0x00008000U 
                                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                   ? 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000015U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x0000000bU))
                                                                   : 
                                                                  ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                    << 0x00000010U) 
                                                                   | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                      >> 0x00000010U))) 
                                                                 << 5U)) 
                                                             | (0x0000001fU 
                                                                & ((0x00002000U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001fU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 1U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x0000001aU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 6U))))) 
                                                            << 0x0000000aU) 
                                                           | ((0x000003e0U 
                                                               & (((0x00000800U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x00000017U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x0000001cU))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000200U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x00000013U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x0000000dU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x0000000eU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x00000012U)))))))) 
                                          << 0x00000014U) 
                                         | (QData)((IData)(
                                                           ((((0x000003e0U 
                                                               & (((0x00000080U 
                                                                    & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x0000001dU) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 3U))
                                                                    : 
                                                                   ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 0x00000018U) 
                                                                    | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 8U))) 
                                                                  << 5U)) 
                                                              | (0x0000001fU 
                                                                 & ((0x00000020U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000019U))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000001eU))))) 
                                                             << 0x0000000aU) 
                                                            | ((0x000003e0U 
                                                                & (((8U 
                                                                     & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x00000011U) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x0000000fU))
                                                                     : 
                                                                    ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x0000000cU) 
                                                                     | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x00000014U))) 
                                                                   << 5U)) 
                                                               | (0x0000001fU 
                                                                  & ((2U 
                                                                      & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x0000001bU) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 5U))
                                                                      : 
                                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 0x0000000aU))))))))) 
                                        >> 0x00000020U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((
                                                   (0x000003e0U 
                                                    & (((1U 
                                                         & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                         ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                         : 
                                                        ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                          << 0x0000001bU) 
                                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                            >> 5U))) 
                                                       << 5U)) 
                                                   | (0x0000001fU 
                                                      & ((0x20000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000fU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000011U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x0000000aU) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x00000016U))))) 
                                                  << 0x0000000aU) 
                                                 | ((0x000003e0U 
                                                     & (((0x08000000U 
                                                          & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000019U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x00000014U) 
                                                          | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x0000000cU))) 
                                                        << 5U)) 
                                                    | (0x0000001fU 
                                                       & ((0x02000000U 
                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x0000001dU))
                                                           : 
                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x0000001eU) 
                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x00000014U) | (QData)((IData)(
                                                                  ((((0x000003e0U 
                                                                      & (((0x00800000U 
                                                                           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 0x0000000dU) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000013U))
                                                                           : 
                                                                          ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            << 8U) 
                                                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                              >> 0x00000018U))) 
                                                                         << 5U)) 
                                                                     | (0x0000001fU 
                                                                        & ((0x00200000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000017U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 9U))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x00000012U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 0x0000000eU))))) 
                                                                    << 0x0000000aU) 
                                                                   | ((0x000003e0U 
                                                                       & (((0x00080000U 
                                                                            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                            ? 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 1U) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               >> 0x0000001fU))
                                                                            : 
                                                                           ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                             << 0x0000001cU) 
                                                                            | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               >> 4U))) 
                                                                          << 5U)) 
                                                                      | (0x0000001fU 
                                                                         & ((0x00020000U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x0000000bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 6U) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU)))))))))) 
                      >> 0x00000018U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((0x000003e0U 
                                                                        & (((1U 
                                                                             & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__in_i)
                                                                             ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U]
                                                                             : 
                                                                            ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                              << 0x0000001bU) 
                                                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_lut[0U] 
                                                                                >> 5U))) 
                                                                           << 5U)) 
                                                                       | (0x0000001fU 
                                                                          & ((0x20000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000fU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000011U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x0000000aU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x00000016U))))) 
                                                                      << 0x0000000aU) 
                                                                     | ((0x000003e0U 
                                                                         & (((0x08000000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000019U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 7U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                               << 0x00000014U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 0x0000000cU))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x02000000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 3U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000001dU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                << 0x0000001eU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                                >> 2U)))))))) 
                                                    << 0x00000014U) 
                                                   | (QData)((IData)(
                                                                     ((((0x000003e0U 
                                                                         & (((0x00800000U 
                                                                              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 0x0000000dU) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000013U))
                                                                              : 
                                                                             ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x00000018U))) 
                                                                            << 5U)) 
                                                                        | (0x0000001fU 
                                                                           & ((0x00200000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000017U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 9U))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x00000012U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 0x0000000eU))))) 
                                                                       << 0x0000000aU) 
                                                                      | ((0x000003e0U 
                                                                          & (((0x00080000U 
                                                                               & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                               ? 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 1U) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001fU))
                                                                               : 
                                                                              ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                << 0x0000001cU) 
                                                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                                >> 4U))) 
                                                                             << 5U)) 
                                                                         | (0x0000001fU 
                                                                            & ((0x00020000U 
                                                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x0000000bU) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x00000015U))
                                                                                : 
                                                                               ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 6U) 
                                                                                | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x0000001aU))))))))) 
                                                  >> 0x00000020U)) 
                                         << 8U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((__Vtemp_2[0U] << 0x00000010U) | __Vtemp_3[2U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((__Vtemp_2[0U] >> 0x00000010U) | (__Vtemp_2[1U] 
                                             << 0x00000010U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((__Vtemp_2[1U] >> 0x00000010U) | (__Vtemp_2[2U] 
                                                << 0x00000010U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o 
        = (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U]);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__first_one_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result 
        = (0x0000001fU & ((IData)(0x1fU) - (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result 
        = (0x0000003fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result) 
                          - (IData)(1U)));
}

void Vsoc_top___024root___act_comb__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___act_comb__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                  >> 6U)))) {
        if ((0x00000020U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
            if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i) 
                              >> 3U)))) {
                    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bitop_result 
                            = ((2U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                ? ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__fl1_result))
                                    : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? 0x20U : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff1_result)))
                                : ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
                                    ? ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
                                        ? ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
                                            >> 0x1fU)
                                            ? 0x1fU
                                            : 0U) : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result))
                                    : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cnt_result)));
                    }
                }
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__ff_no_one)
            ? 0x1fU : (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clb_result));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift 
        = (0x0000003fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift_int) 
                          + (1U & (- (IData)((1U & 
                                              (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_op_a_signed))))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpBShift_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_valid)
            ? (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__div_shift)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                << 0x00000010U) | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                   >> 0x10U));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0xff000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | ((0x00ff0000U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                  << 8U)) | ((0x0000ff00U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                 >> 8U)) 
                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                                                >> 0x18U))));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left) 
               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt 
                  << 0x00000018U));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_use_round)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm
            : ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_left
                : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt));
    if ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(17,17,4, ((0x00010000U 
                                            & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                << 0x00000010U) 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                  >> 0x0000000fU))) 
                                           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                              >> 0x10U)), 
                                 (0x0000000fU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                 >> 0x10U))) 
                  << 0x00000010U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff0000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ffffU & VL_SHIFTRS_III(17,17,4, 
                                               ((0xffff0000U 
                                                 & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 0x00000010U) 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x0000ffffU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (0x0000000fU 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i))) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (VL_SHIFTRS_III(9,9,3, ((0x00000100U 
                                          & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                              << 8U) 
                                             & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                >> 0x00000017U))) 
                                         | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                            >> 0x18U)), 
                                 (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                        >> 0x18U))) 
                  << 0x00000018U));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x00ff0000U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x0001ff00U 
                                                  & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 0x0000000fU))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 0x10U))), 
                                                (7U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 0x10U))) 
                                 << 0x00000010U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x0000ff00U & (VL_SHIFTRS_III(9,9,3, 
                                                ((0x01ffff00U 
                                                  & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                      << 8U) 
                                                     & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                        >> 7U))) 
                                                 | (0x000000ffU 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       >> 8U))), 
                                                (7U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int 
                                                    >> 8U))) 
                                 << 8U)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result) 
               | (0x000000ffU & VL_SHIFTRS_III(9,9,3, 
                                               ((0xffffff00U 
                                                 & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_arithmetic) 
                                                     << 8U) 
                                                    & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a 
                                                       << 1U))) 
                                                | (0x000000ffU 
                                                   & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a)), 
                                               (7U 
                                                & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int))));
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
            = (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_op_a_32 
                       >> (0x0000001fU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_int)));
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpB_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_left_result
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_right_result);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev 
        = ((((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        << 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                         >> 1U))) << 6U) 
               | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                          >> 1U)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 3U))) 
                  << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 3U)) | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 5U))) 
                              << 2U) | ((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                        | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 7U))))) 
             << 0x00000018U) | ((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 7U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 9U))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 9U)) 
                                              | (1U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000bU))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000000bU)) 
                                      | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000dU))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000fU))))) 
                                << 0x00000010U)) | 
           (((((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                        >> 0x0000000fU)) | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000011U))) 
                << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                  >> 0x00000011U)) 
                           | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                    >> 0x00000013U))) 
                          << 4U)) | ((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000013U)) 
                                       | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x00000015U))) 
                                      << 2U) | ((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x00000015U)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x00000017U))))) 
             << 8U) | (((((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000017U)) | 
                          (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                 >> 0x00000019U))) 
                         << 6U) | (((2U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000019U)) 
                                    | (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x0000001bU))) 
                                   << 4U)) | ((((2U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001bU)) 
                                                | (1U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000001dU))) 
                                               << 2U) 
                                              | ((2U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000001dU)) 
                                                 | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001fU))))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev 
        = (((((((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                << 2U)) | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 2U))) 
               << 0x0000000cU) | (((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 2U)) 
                                   | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            >> 6U))) 
                                  << 8U)) | ((((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 6U)) 
                                               | (3U 
                                                  & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                     >> 0x0000000aU))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000000aU)) 
                                                | (3U 
                                                   & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                      >> 0x0000000eU))))) 
            << 0x00000010U) | (((((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000000eU)) 
                                  | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000012U))) 
                                 << 0x0000000cU) | 
                                (((0x0000000cU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000012U)) 
                                  | (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                           >> 0x00000016U))) 
                                 << 8U)) | ((((0x0000000cU 
                                               & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x00000016U)) 
                                              | (3U 
                                                 & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                    >> 0x0000001aU))) 
                                             << 4U) 
                                            | ((0x0000000cU 
                                                & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                   >> 0x0000001aU)) 
                                               | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x0000001eU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev 
        = ((((0x00000e00U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                             << 7U)) | ((0x000001c0U 
                                         & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                            << 1U)) 
                                        | ((0x00000038U 
                                            & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 5U)) 
                                           | (7U & 
                                              (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x0000000bU))))) 
            << 0x00000012U) | ((((0x000001c0U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 8U)) 
                                 | ((0x00000038U & 
                                     (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x0000000eU)) 
                                    | (7U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                             >> 0x00000014U)))) 
                                << 9U) | ((0x000001c0U 
                                           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                              >> 0x00000011U)) 
                                          | ((0x00000038U 
                                              & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0x00000017U)) 
                                             | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x0000001dU)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_is_signed) 
           & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result 
              >> (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__reverse_result 
        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev
            : ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_4_rev
                : ((2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel))
                    ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_8_rev
                    : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_2_rev)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and 
        = ((0x2aU == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i))
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_c_i
            : (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__extract_sign))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_result 
        = ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask 
            & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_result) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv 
              & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bextins_and));
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

void Vsoc_top___024root___eval_act(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_act\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
            = ((0x00010000U & (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_signed) 
                                << 0x00000010U) & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_op_a 
                                                   << 1U))) 
               | (0x0000ffffU & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_subword))
                                  ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
                                     >> 0x00000010U)
                                  : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i)));
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
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
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x0000000000000030ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x000000000000000cULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___act_comb__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__7(vlSelf);
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__boot_rom_bus__0((&vlSymsp->TOP__soc_top__DOT__boot_rom_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__instr_sram_bus__0((&vlSymsp->TOP__soc_top__DOT__instr_sram_bus));
        Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ico_comb__TOP__soc_top__DOT__cpu_instr_bus__0((&vlSymsp->TOP__soc_top__DOT__cpu_instr_bus));
        Vsoc_top___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x000000000000000eULL & vlSelfRef.__VactTriggered[0U])) {
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
    if ((0x000000000000003cULL & vlSelfRef.__VactTriggered[0U])) {
        Vsoc_top___024root___ico_comb__TOP__10(vlSelf);
    }
}

void Vsoc_top___024root___nba_sequent__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__aw_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:285: Assertion failed in %m: [OBI2AXI] AW valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 285, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__ar_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:289: Assertion failed in %m: [OBI2AXI] AR valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 289, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_5_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__w_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:293: Assertion failed in %m: [OBI2AXI] W valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_instr", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 293, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__aw_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__aw_ready))));
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__ar_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__ar_ready))));
    vlSelfRef.soc_top__DOT__i_obi_axi_instr__DOT___Vpast_5_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_instr__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__w_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_instr_bus__w_ready))));
}

void Vsoc_top___024root___nba_sequent__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__rst_ni) {
        if (vlSymsp->_vm_contextp__->assertOnGet(1, 1)) {
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_1_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__aw_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:285: Assertion failed in %m: [OBI2AXI] AW valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 285, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_3_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__ar_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:289: Assertion failed in %m: [OBI2AXI] AR valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 289, "");
            }
            if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_5_1)) 
                                       | (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__w_valid))))))) {
                VL_WRITEF_NX("[%0t] %%Error: obi_to_axi.sv:293: Assertion failed in %m: [OBI2AXI] W valid prematurely deasserted!\n",3, 'M',vlSymsp->name(),"soc_top.i_obi_axi_data", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("rtl/bus/obi_to_axi.sv", 293, "");
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_1_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__aw_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__aw_ready))));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_3_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__ar_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__ar_ready))));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT___Vpast_5_1 
        = ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__i_obi_axi_data__DOT__rst_ni) 
           & ((IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__w_valid) 
              & (~ (IData)(vlSelfRef.__Vsampled_TOP__soc_top__DOT__cpu_data_bus__w_ready))));
}

void Vsoc_top___024root___nba_sequent__TOP__2(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0;
    IData/*18:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0;
    CData/*3:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0;
    SData/*8:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg = 0;
    // Body
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__rst) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
    } else if ((0U < vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg)) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
            = (0x0007ffffU & (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                              - (IData)(1U)));
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 0U;
    } else if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg = 1U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 0U;
        if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tvalid) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
                = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg)));
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
                = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U) 
                                  - (IData)(1U)));
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt = 9U;
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
                = (0x00000100U | (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tdata));
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 0U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg = 1U;
        }
    } else if ((1U < (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
            = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                              - (IData)(1U)));
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
            = (0x000001ffU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg) 
                              >> 1U));
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
            = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U) 
                              - (IData)(1U)));
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg 
            = (1U & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg));
    } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt))) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
            = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt) 
                              - (IData)(1U)));
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
            = (0x0007ffffU & VL_SHIFTL_III(19,19,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale), 3U));
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg = 1U;
    }
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__bit_cnt;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__data_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tready_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__txd;
    vlSelfRef.soc_top__DOT__uart_txd_o = vlSelfRef.soc_top__DOT__i_uart_0__DOT__txd_o;
    vlSelfRef.uart_txd_o = vlSelfRef.soc_top__DOT__uart_txd_o;
}

void Vsoc_top___024root___nba_sequent__TOP__3(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__3\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_sequent__TOP__4(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__4\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0;
    IData/*18:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0;
    CData/*3:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0;
    CData/*7:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0;
    // Body
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
    if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rst) {
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg = 0U;
    } else {
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg = 0U;
        if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 0U;
        }
        if ((0U < vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg)) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                = (0x0007ffffU & (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                                  - (IData)(1U)));
        } else if ((0U < (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
            if ((9U < (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) {
                    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0U;
                    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg = 0U;
                } else {
                    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                        = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                          - (IData)(1U)));
                    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                        = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale), 3U) 
                                          - (IData)(1U)));
                }
            } else if ((1U < (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
                    = (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) 
                        << 7U) | (0x0000007fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg) 
                                                 >> 1U)));
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale), 3U) 
                                      - (IData)(1U)));
            } else if ((1U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt))) {
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
                    = (0x0000000fU & ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt) 
                                      - (IData)(1U)));
                if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg) {
                    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg 
                        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
                    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg 
                        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
                    __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg = 1U;
                } else {
                    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg = 1U;
                }
            }
        } else {
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg = 0U;
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg)))) {
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg = 0U;
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
                    = (0x0007ffffU & (VL_SHIFTL_III(19,32,32, (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale), 2U) 
                                      - (IData)(2U)));
                __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt = 0x0aU;
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg = 1U;
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__bit_cnt;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__data_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__busy_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__overrun_error_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__frame_error_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid_reg;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd_reg 
        = ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rst) 
           || (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__rxd));
}

void Vsoc_top___024root___nba_sequent__TOP__5(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__5\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0;
    // Body
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 0U;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 0U;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 0U;
    __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 0U;
    if (vlSelfRef.soc_top__DOT__i_boot_rom__DOT__write_en) {
        if ((1U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
            __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0 
                = (0x000000ffU & vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data);
            __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0 
                = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
            __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0 = 1U;
        }
        if ((2U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
            __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1 
                = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                                  >> 8U));
            __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1 
                = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
            __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1 = 1U;
        }
        if ((4U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
            __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2 
                = (0x000000ffU & (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                                  >> 0x10U));
            __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2 
                = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
            __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2 = 1U;
        }
        if ((8U & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_strb))) {
            __VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3 
                = (vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_data 
                   >> 0x18U);
            __VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3 
                = vlSelfRef.soc_top__DOT__i_boot_rom__DOT__wr_word_idx;
            __VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3 = 1U;
        }
    }
    if (__VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v0) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                [__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v0]) 
               | (IData)(__VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v0));
    }
    if (__VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v1) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                [__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v2) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                [__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__soc_top__DOT__i_boot_rom__DOT__mem__v3) {
        vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem[__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3] 
            = ((0x00ffffffU & vlSelfRef.soc_top__DOT__i_boot_rom__DOT__mem
                [__VdlyDim0__soc_top__DOT__i_boot_rom__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__soc_top__DOT__i_boot_rom__DOT__mem__v3) 
                  << 0x00000018U));
    }
}

void Vsoc_top___024root___nba_sequent__TOP__6(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__6\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__7(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__7\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__8(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__8\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__9(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__9\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count = 0;
    // Body
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
    if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_bready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__bvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_rready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__rvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__awaddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_awaddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_arready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__arvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__araddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_araddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wdata 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wdata)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__wstrb) 
                              != (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__prev_wstrb))))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count);
                VL_WRITEF_NX("[PERIPH_BUS] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count);
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__check_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__pass_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_periph__DOT__fail_count;
}

void Vsoc_top___024root___nba_sequent__TOP__10(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__10\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count = 0;
    // Body
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
    if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_bready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__bvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_rready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__awaddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_awaddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_arready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__arvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__araddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_araddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wdata 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wdata)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__wstrb) 
                              != (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__prev_wstrb))))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count);
                VL_WRITEF_NX("[UART_0] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count);
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__check_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__pass_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__fail_count;
}

void Vsoc_top___024root___nba_sequent__TOP__11(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__11\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count = 0;
    // Body
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
    if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_bready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__bvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_rready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__awaddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_awaddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_arready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__arvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__araddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_araddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wdata 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wdata)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__wstrb) 
                              != (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__prev_wstrb))))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count);
                VL_WRITEF_NX("[GPIO] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count);
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__check_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__pass_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__fail_count;
}

void Vsoc_top___024root___nba_sequent__TOP__12(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__12\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count = 0;
    // Body
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
    if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_bready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__bvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_rready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__awaddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_awaddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_arready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__arvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__araddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_araddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wdata 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wdata)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__wstrb) 
                              != (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__prev_wstrb))))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count);
                VL_WRITEF_NX("[TIMER] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count);
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__check_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__pass_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__fail_count;
}

void Vsoc_top___024root___nba_sequent__TOP__13(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__13\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count = 0;
    // Body
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
    if (vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_bready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__bvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL B1: BVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_rready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL R1: RVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AW1: AWVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__awaddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_awaddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AW2: AWADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AR1: ARVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_arready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__arvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__araddr 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_araddr)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL AR2: ARADDR degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready)))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_LIKELY((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wvalid))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W1: WVALID handshake olmadan dustu t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            }
        }
        if ((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wvalid) 
              & (~ (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wready))) 
             & (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wvalid))) {
            __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
                = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count);
            if (VL_UNLIKELY(((vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wdata 
                              != vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wdata)))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W2: WDATA degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__wstrb) 
                              != (IData)(vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__prev_wstrb))))) {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count);
                VL_WRITEF_NX("[QSPI] FAIL W3: WSTRB degisti handshake olmadan t=%0t\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
            } else {
                __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count);
            }
        }
    }
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__check_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__pass_count;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count 
        = __Vdly__soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__fail_count;
}

void Vsoc_top___024root___nba_sequent__TOP__14(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__14\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_sequent__TOP__15(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__15\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__write_addr;
    __Vdly__soc_top__DOT__i_gpio__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid = 0;
    // Body
    __Vdly__soc_top__DOT__i_gpio__DOT__write_addr = vlSelfRef.soc_top__DOT__i_gpio__DOT__write_addr;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid;
    if (vlSelfRef.soc_top__DOT__i_gpio__DOT__rst_ni) {
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arvalid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready)));
        if ((((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid)))) {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid = 1U;
            vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rdata 
                = ((0U == (0x0000001fU & vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_araddr))
                    ? (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync2)
                    : ((4U == (0x0000001fU & vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_araddr))
                        ? (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_odr)
                        : 0U));
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rready))) {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid = 0U;
        }
        vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync2 
            = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync1;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wvalid)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__aw_en))) {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready = 1U;
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready = 1U;
            __Vdly__soc_top__DOT__i_gpio__DOT__write_addr 
                = (0x0000001fU & vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awaddr);
            vlSelfRef.soc_top__DOT__i_gpio__DOT__aw_en = 0U;
        } else {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready = 0U;
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready) 
               & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wvalid)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awvalid))) {
            if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__write_addr))) {
                vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_odr 
                    = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wdata);
            }
        }
        if ((((((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready) 
                & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid)))) {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid))) {
            __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid = 0U;
            vlSelfRef.soc_top__DOT__i_gpio__DOT__aw_en = 1U;
        }
        vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync1 
            = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_i;
    } else {
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready = 0U;
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rdata = 0U;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync2 = 0U;
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready = 0U;
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready = 0U;
        __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__aw_en = 1U;
        __Vdly__soc_top__DOT__i_gpio__DOT__write_addr = 0U;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_odr = 0U;
        vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_in_sync1 = 0U;
    }
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready 
        = __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid 
        = __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__gpio_rdata = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__gpio_arready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__gpio_rvalid = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rdata 
        = vlSelfRef.soc_top__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rdata 
        = vlSelfRef.soc_top__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_arready 
        = vlSelfRef.soc_top__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_arready 
        = vlSelfRef.soc_top__DOT__gpio_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rvalid 
        = vlSelfRef.soc_top__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_rvalid 
        = vlSelfRef.soc_top__DOT__gpio_rvalid;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__write_addr 
        = __Vdly__soc_top__DOT__i_gpio__DOT__write_addr;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready 
        = __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready 
        = __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid 
        = __Vdly__soc_top__DOT__i_gpio__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_gpio__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_rdata;
    vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_out_o 
        = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_odr;
    vlSelfRef.soc_top__DOT__gpio_awready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__gpio_wready = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__gpio_bvalid = vlSelfRef.soc_top__DOT__i_gpio__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__gpio_out_o = vlSelfRef.soc_top__DOT__i_gpio__DOT__gpio_out_o;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_awready 
        = vlSelfRef.soc_top__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_awready 
        = vlSelfRef.soc_top__DOT__gpio_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_wready 
        = vlSelfRef.soc_top__DOT__gpio_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_wready 
        = vlSelfRef.soc_top__DOT__gpio_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__gpio_bvalid 
        = vlSelfRef.soc_top__DOT__gpio_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__gpio_bvalid 
        = vlSelfRef.soc_top__DOT__gpio_bvalid;
    vlSelfRef.gpio_out_o = vlSelfRef.soc_top__DOT__gpio_out_o;
}

void Vsoc_top___024root___nba_sequent__TOP__16(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__16\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr;
    __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid = 0;
    // Body
    __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__prev_tx_en 
        = ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni) 
           && (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_en));
    if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni) {
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arvalid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready)));
        if ((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid)))) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid = 1U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rdata 
                = ((0x00000010U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                    ? ((8U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                        ? 0U : ((4U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                 ? 0U : ((2U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                          ? 0U : ((1U 
                                                   & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_done) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_rx_done) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_en)))))))
                    : ((8U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                        ? ((4U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                            ? ((2U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                         ? 0U : (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_tdr)))
                            : ((2U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                         ? 0U : (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_rdr))))
                        : ((4U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                            ? ((2U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                         ? 0U : (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_stp)))
                            : ((2U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_araddr)
                                         ? 0U : vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb)))));
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rready))) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid = 0U;
        }
        if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_valid) {
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_rdr 
                = vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_data_out;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_rx_done = 1U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__prev_tx_busy) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_busy)))) {
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_done = 1U;
        }
        if (vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_hit) {
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_en 
                = (1U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_data);
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_data 
                          >> 1U)))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_rx_done = 0U;
            }
            if ((1U & (~ (vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_data 
                          >> 2U)))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_done = 0U;
            }
        }
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_hit = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_tdr_hit = 0U;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wvalid)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__aw_en))) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready = 1U;
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready = 1U;
            __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr 
                = (0x0000001fU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awaddr);
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__aw_en = 0U;
        } else {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready = 0U;
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready) 
               & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wvalid)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awvalid))) {
            if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb 
                    = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wdata;
            } else if ((4U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_stp 
                    = (3U & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wdata);
            } else if ((0x0cU == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_tdr 
                    = (0x000000ffU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wdata);
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_tdr_hit = 1U;
            } else if ((0x10U == (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr))) {
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_hit = 1U;
                vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_data 
                    = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wdata;
            }
        }
        if ((((((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready) 
                & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid)))) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid))) {
            __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid = 0U;
            vlSelfRef.soc_top__DOT__i_uart_0__DOT__aw_en = 1U;
        }
    } else {
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rdata = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_rdr = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_en = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_rx_done = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__cfg_tx_done = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready = 0U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__aw_en = 1U;
        __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb = 0x00000036U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_stp = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_tdr = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_hit = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_cfg_data = 0U;
        vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_tdr_hit = 0U;
    }
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__uart_rdata = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__uart_arready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__uart_rvalid = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rdata 
        = vlSelfRef.soc_top__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rdata 
        = vlSelfRef.soc_top__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_arready 
        = vlSelfRef.soc_top__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_arready 
        = vlSelfRef.soc_top__DOT__uart_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rvalid 
        = vlSelfRef.soc_top__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_rvalid 
        = vlSelfRef.soc_top__DOT__uart_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_uart__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_rdata;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__prev_tx_busy 
        = ((IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__rst_ni) 
           && (IData)(vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_busy));
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__write_addr 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__write_addr;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid 
        = __Vdly__soc_top__DOT__i_uart_0__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tdata 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_tdr;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_start 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__wr_tdr_hit;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__prescale 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb);
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__prescale 
        = (0x0000ffffU & vlSelfRef.soc_top__DOT__i_uart_0__DOT__uart_cpb);
    vlSelfRef.soc_top__DOT__uart_awready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__uart_wready = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__uart_bvalid = vlSelfRef.soc_top__DOT__i_uart_0__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__s_axis_tvalid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_start;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_awready 
        = vlSelfRef.soc_top__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_awready 
        = vlSelfRef.soc_top__DOT__uart_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_wready 
        = vlSelfRef.soc_top__DOT__uart_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_wready 
        = vlSelfRef.soc_top__DOT__uart_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__uart_bvalid 
        = vlSelfRef.soc_top__DOT__uart_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__uart_bvalid 
        = vlSelfRef.soc_top__DOT__uart_bvalid;
}

void Vsoc_top___024root___nba_sequent__TOP__17(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__17\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr = 0;
    CData/*6:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr = 0;
    CData/*6:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr = 0;
    CData/*6:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr = 0;
    CData/*5:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg;
    __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg = 0;
    CData/*3:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__spi_state;
    __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy;
    __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = 0;
    CData/*7:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__shift_in;
    __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos = 0;
    SData/*8:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt = 0;
    CData/*2:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word = 0;
    CData/*1:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte;
    __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__write_addr;
    __Vdly__soc_top__DOT__i_qspi__DOT__write_addr = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr;
    __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop;
    __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlyVal__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    CData/*5:0*/ __VdlyDim0__soc_top__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlyDim0__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_qspi__DOT__tx_fifo__v0;
    __VdlySet__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    CData/*5:0*/ __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v0;
    __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    CData/*5:0*/ __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v1;
    __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 = 0;
    // Body
    __Vdly__soc_top__DOT__i_qspi__DOT__write_addr = vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr;
    __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr = vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_busy;
    __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos;
    __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word;
    __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte = vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte;
    __VdlySet__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 = 0U;
    __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 = 0U;
    __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 = 0U;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr = vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr = vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr;
    __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt;
    __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg;
    __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state;
    __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop = vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_pop;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid 
        = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid;
    if (vlSelfRef.soc_top__DOT__i_qspi__DOT__rst_ni) {
        __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arvalid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready)));
        if ((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid)))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid = 1U;
            if ((0x00000010U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)) {
                vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata 
                    = ((8U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                        ? 0U : ((4U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                 ? 0U : ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                          ? 0U : ((1U 
                                                   & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b) 
                                                   << 2U)))));
            } else if ((8U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)) {
                if ((4U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)) {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata 
                        = ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                            ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                     ? 0U : ((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_fifo_err) 
                                               << 8U) 
                                              | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_empty) 
                                                  << 7U) 
                                                 | ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_full) 
                                                    << 6U))) 
                                             | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty) 
                                                 << 5U) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_full) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_busy) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_done)))))));
                } else if ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)) {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata = 0U;
                } else if ((1U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)) {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata = 0U;
                } else {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty)
                            ? 0U : vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_fifo
                           [(0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr))]);
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty)))) {
                        __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop = 1U;
                    }
                }
            } else {
                vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata 
                    = ((4U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                        ? ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                            ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                     ? 0U : vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr))
                        : ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                            ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_araddr)
                                     ? 0U : ((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_prescaler) 
                                               << 0x00000019U) 
                                              | ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_len) 
                                                 << 0x00000010U)) 
                                             | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dummy) 
                                                 << 0x0000000bU) 
                                                | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dir) 
                                                    << 0x0000000aU) 
                                                   | (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode) 
                                                       << 8U) 
                                                      | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_instr))))))));
            }
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rready))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid = 0U;
        }
        if (vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_flush) {
            __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr = 0U;
            __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr = 0U;
        }
        if (vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_flush) {
            __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr = 0U;
            __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr = 0U;
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_push) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_flush)))) {
            if (vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_full) {
                vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_fifo_err = 2U;
            } else {
                __VdlyVal__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 
                    = vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_data;
                __VdlyDim0__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 
                    = (0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr));
                __VdlySet__soc_top__DOT__i_qspi__DOT__tx_fifo__v0 = 1U;
                __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr)));
            }
        }
        if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_pop) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_flush)))) {
            if (vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty) {
                vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_fifo_err = 1U;
            } else {
                __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr 
                    = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr)));
            }
        }
        if (vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_clr_sta) {
            vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_done = 0U;
            vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_fifo_err = 0U;
        }
        if (((((0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
               | (1U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) 
              | (7U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) 
             | (8U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt = 0U;
            __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg = 0U;
        } else if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick) {
            __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg 
                = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg)));
            __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt = 0U;
        } else {
            __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt 
                = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_cnt)));
        }
        if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0U;
            } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0U;
            } else if (VL_LIKELY(((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))))) {
                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0U;
            } else {
                VL_WRITEF_NX("[%0t QSPI] DONE\n",2, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_done = 1U;
                __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = 0U;
                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                    __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 8U;
                } else {
                    if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_falling) {
                        __Vdly__soc_top__DOT__i_qspi__DOT__shift_in 
                            = ((2U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                ? ((0x000000fcU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                                   << 2U)) 
                                   | (3U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_i)))
                                : ((3U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                    ? ((0x000000f0U 
                                        & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                           << 4U)) 
                                       | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_i))
                                    : ((0x000000feU 
                                        & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                           << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__io_i) 
                                                >> 1U)))));
                    }
                    if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising) {
                        if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                             < (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w))) {
                            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))) {
                                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))) {
                                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_full)))) {
                                        __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 
                                            = (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                                << 0x00000018U) 
                                               | (0x00ffffffU 
                                                  & vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc));
                                        __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 
                                            = (0x0000003fU 
                                               & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr));
                                        __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v0 = 1U;
                                        __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr 
                                            = (0x0000007fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr)));
                                    }
                                } else {
                                    __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc 
                                        = ((0xff00ffffU 
                                            & __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc) 
                                           | ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                              << 0x00000010U));
                                }
                            } else {
                                __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc 
                                    = ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))
                                        ? ((0xffff00ffU 
                                            & __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc) 
                                           | ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                              << 8U))
                                        : ((0xffffff00U 
                                            & __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc) 
                                           | (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in)));
                            }
                            __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos)));
                            if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt) 
                                 >= (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_len))) {
                                if (((3U != (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos)) 
                                     & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_full)))) {
                                    __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 
                                        = ((0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))
                                            ? (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in)
                                            : ((1U 
                                                == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))
                                                ? (
                                                   ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                                    << 8U) 
                                                   | (0x000000ffU 
                                                      & vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos))
                                                    ? 
                                                   (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in) 
                                                     << 0x00000010U) 
                                                    | (0x0000ffffU 
                                                       & vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc))
                                                    : vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc)));
                                    __VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 
                                        = (0x0000003fU 
                                           & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr));
                                    __VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v1 = 1U;
                                    __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr 
                                        = (0x0000007fU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr)));
                                }
                                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 7U;
                            } else {
                                __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt 
                                    = (0x000001ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt)));
                                __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                                __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = 0U;
                            }
                        } else {
                            __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt 
                                = (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                         - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w)));
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising) {
                    if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                         < (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w))) {
                        if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt) 
                             >= (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_len))) {
                            __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 7U;
                        } else {
                            __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt 
                                = (0x000001ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt)));
                            __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos))) {
                                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos))) {
                                    vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                                        = (vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word 
                                           >> 0x18U);
                                    if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr) 
                                         != (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr))) {
                                        __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr 
                                            = (0x0000007fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr)));
                                        __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word 
                                            = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo
                                            [(0x0000003fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr)))];
                                    }
                                } else {
                                    vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                                        = (0x000000ffU 
                                           & (vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word 
                                              >> 0x10U));
                                }
                            } else {
                                vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                                    = (0x000000ffU 
                                       & ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos))
                                           ? (vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word 
                                              >> 8U)
                                           : vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word));
                            }
                            vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos)));
                        }
                    } else {
                        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt 
                            = (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                     - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w)));
                    }
                }
            } else if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising) {
                if ((1U >= (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt))) {
                    if (vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dir) {
                        __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 5U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word 
                            = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo
                            [(0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr))];
                        vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos = 1U;
                        vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                            = (0x000000ffU & vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo
                               [(0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr))]);
                    } else {
                        __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 6U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = 0U;
                    }
                } else {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt 
                        = (0x0000001fU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt) 
                                          - (IData)(1U)));
                }
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
                if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising) {
                    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt))) {
                        if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte) 
                             == ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b)
                                  ? 3U : 2U))) {
                            if ((0U < (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dummy))) {
                                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 4U;
                                vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt 
                                    = vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dummy;
                            } else if (vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dir) {
                                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 5U;
                                __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                                __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word 
                                    = vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo
                                    [(0x0000003fU & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr))];
                                vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos = 1U;
                                vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                                    = (0x000000ffU 
                                       & vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo
                                       [(0x0000003fU 
                                         & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr))]);
                            } else {
                                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 6U;
                                __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                                __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = 0U;
                            }
                        } else {
                            __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte)));
                            __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                            vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                                = (0x000000ffU & ((0U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte))
                                                   ? 
                                                  (vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff 
                                                   >> 0x10U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte))
                                                    ? 
                                                   (vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff 
                                                    >> 8U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte))
                                                     ? vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff
                                                     : 0U))));
                        }
                    } else {
                        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt 
                            = (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                     - (IData)(1U)));
                    }
                }
            } else if (vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising) {
                if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt))) {
                    if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))) {
                        __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 7U;
                    } else {
                        __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 3U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
                        __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte = 0U;
                        vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                            = (vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff 
                               >> 0x18U);
                    }
                } else {
                    __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt 
                        = (7U & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt) 
                                 - (IData)(1U)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 2U;
            __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 7U;
        } else {
            __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = 0U;
            if (VL_UNLIKELY((vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_start))) {
                VL_WRITEF_NX("[%0t QSPI] IDLE->CS_ASSERT instr=%02x adr=%06x\n",4, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',8,(IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_instr)
                             , '#',32,vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr);
                __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt = 0U;
                vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_start = 0U;
                __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 1U;
                __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = 1U;
                vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_done = 0U;
                __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 0U;
                __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte = 0U;
                vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt = 0U;
                __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos = 0U;
                vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos = 0U;
                vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out 
                    = vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_instr;
            }
        }
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_start = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_clr_sta = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_push = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_flush = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_flush = 0U;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wvalid)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__aw_en))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready = 1U;
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready = 1U;
            __Vdly__soc_top__DOT__i_qspi__DOT__write_addr 
                = (0x0000001fU & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awaddr);
            vlSelfRef.soc_top__DOT__i_qspi__DOT__aw_en = 0U;
        } else {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready = 0U;
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready) 
               & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wvalid)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awvalid))) {
            if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr)))) {
                                if ((1U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata)) {
                                    vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_flush = 1U;
                                }
                                if ((2U & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata)) {
                                    vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_flush = 1U;
                                }
                                vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b 
                                    = (1U & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                             >> 2U));
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr)))) {
                            vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_push = 1U;
                            vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_data 
                                = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr)))) {
                        __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr 
                            = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr)))) {
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_instr 
                        = (0x000000ffU & vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata);
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode 
                        = (3U & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                 >> 8U));
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dir 
                        = (1U & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                 >> 0x0aU));
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dummy 
                        = (0x0000001fU & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                          >> 0x0bU));
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_len 
                        = (0x000000ffU & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                          >> 0x10U));
                    vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_prescaler 
                        = (0x0000003fU & (vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                                          >> 0x19U));
                    if ((vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata 
                         >> 0x1fU)) {
                        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_clr_sta = 1U;
                    } else if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_busy)))))) {
                        VL_WRITEF_NX("[%0t QSPI] CCR write ccr=%08x adr=%08x\n",4, 'T',-9
                                     , '#',64,VL_TIME_UNITED_Q(1000)
                                     , '#',32,vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wdata
                                     , '#',32,vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr);
                        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_start = 1U;
                    }
                }
            }
        }
        if ((((((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready) 
                & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid)))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid))) {
            __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid = 0U;
            vlSelfRef.soc_top__DOT__i_qspi__DOT__aw_en = 1U;
        }
    } else {
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__spi_state = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__dummy_cnt = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_out = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__shift_in = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_byte_pos = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_done = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_fifo_err = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready = 0U;
        __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__aw_en = 1U;
        __Vdly__soc_top__DOT__i_qspi__DOT__write_addr = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_instr = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dir = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_dummy = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_len = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_prescaler = 1U;
        __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_start = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_clr_sta = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_push = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_data = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_flush = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_tx_flush = 0U;
        vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b = 0U;
    }
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready 
        = __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid 
        = __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__qspi_rdata = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__qspi_arready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__qspi_rvalid = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rdata 
        = vlSelfRef.soc_top__DOT__qspi_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rdata 
        = vlSelfRef.soc_top__DOT__qspi_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_arready 
        = vlSelfRef.soc_top__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_arready 
        = vlSelfRef.soc_top__DOT__qspi_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rvalid 
        = vlSelfRef.soc_top__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_rvalid 
        = vlSelfRef.soc_top__DOT__qspi_rvalid;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__cmd_rx_pop 
        = __Vdly__soc_top__DOT__i_qspi__DOT__cmd_rx_pop;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__shift_in = __Vdly__soc_top__DOT__i_qspi__DOT__shift_in;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_word_acc 
        = __Vdly__soc_top__DOT__i_qspi__DOT__rx_word_acc;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_byte_pos 
        = __Vdly__soc_top__DOT__i_qspi__DOT__rx_byte_pos;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__data_byte_cnt 
        = __Vdly__soc_top__DOT__i_qspi__DOT__data_byte_cnt;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_current_word 
        = __Vdly__soc_top__DOT__i_qspi__DOT__tx_current_word;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__addr_byte 
        = __Vdly__soc_top__DOT__i_qspi__DOT__addr_byte;
    if (__VdlySet__soc_top__DOT__i_qspi__DOT__tx_fifo__v0) {
        vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_fifo[__VdlyDim0__soc_top__DOT__i_qspi__DOT__tx_fifo__v0] 
            = __VdlyVal__soc_top__DOT__i_qspi__DOT__tx_fifo__v0;
    }
    if (__VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v0) {
        vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_fifo[__VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v0] 
            = __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v0;
    }
    if (__VdlySet__soc_top__DOT__i_qspi__DOT__rx_fifo__v1) {
        vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_fifo[__VdlyDim0__soc_top__DOT__i_qspi__DOT__rx_fifo__v1] 
            = __VdlyVal__soc_top__DOT__i_qspi__DOT__rx_fifo__v1;
    }
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr 
        = __Vdly__soc_top__DOT__i_qspi__DOT__rx_wr_ptr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr 
        = __Vdly__soc_top__DOT__i_qspi__DOT__tx_wr_ptr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr 
        = __Vdly__soc_top__DOT__i_qspi__DOT__tx_rd_ptr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr 
        = __Vdly__soc_top__DOT__i_qspi__DOT__rx_rd_ptr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_cnt = __Vdly__soc_top__DOT__i_qspi__DOT__sclk_cnt;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__bit_cnt = __Vdly__soc_top__DOT__i_qspi__DOT__bit_cnt;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg = __Vdly__soc_top__DOT__i_qspi__DOT__sclk_reg;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state 
        = __Vdly__soc_top__DOT__i_qspi__DOT__spi_state;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_qspi__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_rdata;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count = 
        (0x0000007fU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_wr_ptr) 
                        - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_rd_ptr)));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count = 
        (0x0000007fU & ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_wr_ptr) 
                        - (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_rd_ptr)));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__cs_no = ((0U 
                                                   == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)) 
                                                  | (8U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__spi_state)));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_full = 
        (0x40U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_empty = 
        (0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__tx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_full = 
        (0x40U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_empty = 
        (0U == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__rx_count));
    vlSelfRef.soc_top__DOT__qspi_sclk_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_o;
    vlSelfRef.soc_top__DOT__qspi_cs_no = vlSelfRef.soc_top__DOT__i_qspi__DOT__cs_no;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__write_addr 
        = __Vdly__soc_top__DOT__i_qspi__DOT__write_addr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sta_busy = __Vdly__soc_top__DOT__i_qspi__DOT__sta_busy;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr = __Vdly__soc_top__DOT__i_qspi__DOT__qspi_adr;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready 
        = __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready 
        = __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid 
        = __Vdly__soc_top__DOT__i_qspi__DOT__s_axi_bvalid;
    vlSelfRef.qspi_sclk_o = vlSelfRef.soc_top__DOT__qspi_sclk_o;
    vlSelfRef.qspi_cs_no = vlSelfRef.soc_top__DOT__qspi_cs_no;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__adr_eff = 
        ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__cfg_addr4b)
          ? vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr
          : VL_SHIFTL_III(32,32,32, vlSelfRef.soc_top__DOT__i_qspi__DOT__qspi_adr, 8U));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick 
        = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_cnt) 
           >= (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_prescaler));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__lane_w = (
                                                   (3U 
                                                    == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                                    ? 4U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__ccr_data_mode))
                                                     ? 2U
                                                     : 1U));
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
    vlSelfRef.soc_top__DOT__qspi_awready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__qspi_wready = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__qspi_bvalid = vlSelfRef.soc_top__DOT__i_qspi__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_rising 
        = ((~ (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg)) 
           & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick));
    vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_falling 
        = ((IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_tick) 
           & (IData)(vlSelfRef.soc_top__DOT__i_qspi__DOT__sclk_reg));
    vlSelfRef.soc_top__DOT__qspi_io_oe = vlSelfRef.soc_top__DOT__i_qspi__DOT__io_oe;
    vlSelfRef.soc_top__DOT__qspi_io_o = vlSelfRef.soc_top__DOT__i_qspi__DOT__io_o;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_awready 
        = vlSelfRef.soc_top__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_awready 
        = vlSelfRef.soc_top__DOT__qspi_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_wready 
        = vlSelfRef.soc_top__DOT__qspi_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_wready 
        = vlSelfRef.soc_top__DOT__qspi_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__qspi_bvalid 
        = vlSelfRef.soc_top__DOT__qspi_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__qspi_bvalid 
        = vlSelfRef.soc_top__DOT__qspi_bvalid;
    vlSelfRef.qspi_io_oe = vlSelfRef.soc_top__DOT__qspi_io_oe;
    vlSelfRef.qspi_io_o = vlSelfRef.soc_top__DOT__qspi_io_o;
}
