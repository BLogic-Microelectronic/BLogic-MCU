// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

void Vsoc_top___024root___nba_sequent__TOP__18(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__18\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt;
    __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt;
    __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_timer__DOT__tim_evn;
    __Vdly__soc_top__DOT__i_timer__DOT__tim_evn = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_timer__DOT__write_addr;
    __Vdly__soc_top__DOT__i_timer__DOT__write_addr = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid = 0;
    // Body
    __Vdly__soc_top__DOT__i_timer__DOT__write_addr 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt 
        = vlSelfRef.soc_top__DOT__i_timer__DOT__prescale_cnt;
    __Vdly__soc_top__DOT__i_timer__DOT__tim_evn = vlSelfRef.soc_top__DOT__i_timer__DOT__tim_evn;
    __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt = vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt;
    if (vlSelfRef.soc_top__DOT__i_timer__DOT__rst_ni) {
        if (vlSelfRef.soc_top__DOT__i_timer__DOT__wr_clr_hit) {
            __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt = 0U;
            __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt = 0U;
        } else if (vlSelfRef.soc_top__DOT__i_timer__DOT__wr_evc_hit) {
            __Vdly__soc_top__DOT__i_timer__DOT__tim_evn = 0U;
        } else if (vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena) {
            if ((vlSelfRef.soc_top__DOT__i_timer__DOT__prescale_cnt 
                 >= vlSelfRef.soc_top__DOT__i_timer__DOT__tim_pre)) {
                if ((vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt 
                     == vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are)) {
                    __Vdly__soc_top__DOT__i_timer__DOT__tim_evn 
                        = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_timer__DOT__tim_evn);
                    __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt = 0U;
                } else {
                    __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__tim_mod)
                            ? ((IData)(1U) + vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt)
                            : (vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt 
                               - (IData)(1U)));
                }
                __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt = 0U;
            } else {
                __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt 
                    = ((IData)(1U) + vlSelfRef.soc_top__DOT__i_timer__DOT__prescale_cnt);
            }
        }
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arvalid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready)));
        if ((((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid)))) {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid = 1U;
            vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rdata 
                = ((0x00000010U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                    ? ((8U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                        ? ((4U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                            ? 0U : ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                     ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                              ? 0U : vlSelfRef.soc_top__DOT__i_timer__DOT__tim_evn)))
                        : ((4U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                            ? ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                         ? 0U : vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt))
                            : ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                         ? 0U : (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__tim_mod)))))
                    : ((8U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                        ? ((4U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                            ? ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                         ? 0U : (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena)))
                            : 0U) : ((4U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                      ? ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                          ? 0U : ((1U 
                                                   & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                                   ? 0U
                                                   : vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are))
                                      : ((2U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                          ? 0U : ((1U 
                                                   & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_araddr)
                                                   ? 0U
                                                   : vlSelfRef.soc_top__DOT__i_timer__DOT__tim_pre)))));
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rready))) {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid = 0U;
        }
        vlSelfRef.soc_top__DOT__i_timer__DOT__wr_clr_hit = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__wr_evc_hit = 0U;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wvalid)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__aw_en))) {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready = 1U;
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready = 1U;
            __Vdly__soc_top__DOT__i_timer__DOT__write_addr 
                = (0x0000001fU & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awaddr);
            vlSelfRef.soc_top__DOT__i_timer__DOT__aw_en = 0U;
        } else {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready = 0U;
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready) 
               & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wvalid)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awvalid))) {
            if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                    if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                                if ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata)) {
                                    vlSelfRef.soc_top__DOT__i_timer__DOT__wr_evc_hit = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                            vlSelfRef.soc_top__DOT__i_timer__DOT__tim_mod 
                                = (1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata);
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                            vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena 
                                = (1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata);
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                     >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                        if ((1U & vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata)) {
                            vlSelfRef.soc_top__DOT__i_timer__DOT__wr_clr_hit = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr))) {
                if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                        vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are 
                            = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata;
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr) 
                                 >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr)))) {
                    vlSelfRef.soc_top__DOT__i_timer__DOT__tim_pre 
                        = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wdata;
                }
            }
        }
        if ((((((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready) 
                & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid)))) {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid))) {
            __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid = 0U;
            vlSelfRef.soc_top__DOT__i_timer__DOT__aw_en = 1U;
        }
    } else {
        __Vdly__soc_top__DOT__i_timer__DOT__tim_evn = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rdata = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready = 0U;
        __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__aw_en = 1U;
        __Vdly__soc_top__DOT__i_timer__DOT__write_addr = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__tim_pre = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are = 0xffffffffU;
        vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__tim_mod = 1U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__wr_clr_hit = 0U;
        vlSelfRef.soc_top__DOT__i_timer__DOT__wr_evc_hit = 0U;
    }
    vlSelfRef.soc_top__DOT__i_timer__DOT__prescale_cnt 
        = __Vdly__soc_top__DOT__i_timer__DOT__prescale_cnt;
    vlSelfRef.soc_top__DOT__i_timer__DOT__tim_evn = __Vdly__soc_top__DOT__i_timer__DOT__tim_evn;
    vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt = __Vdly__soc_top__DOT__i_timer__DOT__tim_cnt;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready 
        = __Vdly__soc_top__DOT__i_timer__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid 
        = __Vdly__soc_top__DOT__i_timer__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__timer_rdata = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__timer_arready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__timer_rvalid = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rdata 
        = vlSelfRef.soc_top__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rdata 
        = vlSelfRef.soc_top__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_arready 
        = vlSelfRef.soc_top__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_arready 
        = vlSelfRef.soc_top__DOT__timer_arready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rvalid 
        = vlSelfRef.soc_top__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_rvalid 
        = vlSelfRef.soc_top__DOT__timer_rvalid;
    vlSelfRef.soc_top__DOT__i_timer__DOT__write_addr 
        = __Vdly__soc_top__DOT__i_timer__DOT__write_addr;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready 
        = __Vdly__soc_top__DOT__i_timer__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready 
        = __Vdly__soc_top__DOT__i_timer__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid 
        = __Vdly__soc_top__DOT__i_timer__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__i_chk_timer__DOT__rdata 
        = vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_rdata;
    vlSelfRef.soc_top__DOT__i_timer__DOT__timer_irq_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_timer__DOT__tim_ena) 
           & (vlSelfRef.soc_top__DOT__i_timer__DOT__tim_cnt 
              == vlSelfRef.soc_top__DOT__i_timer__DOT__tim_are));
    vlSelfRef.soc_top__DOT__timer_awready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__timer_wready = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__timer_bvalid = vlSelfRef.soc_top__DOT__i_timer__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__timer_irq = vlSelfRef.soc_top__DOT__i_timer__DOT__timer_irq_o;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_awready 
        = vlSelfRef.soc_top__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_awready 
        = vlSelfRef.soc_top__DOT__timer_awready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_wready 
        = vlSelfRef.soc_top__DOT__timer_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_wready 
        = vlSelfRef.soc_top__DOT__timer_wready;
    vlSelfRef.soc_top__DOT__i_protocol_checkers__DOT__timer_bvalid 
        = vlSelfRef.soc_top__DOT__timer_bvalid;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__timer_bvalid 
        = vlSelfRef.soc_top__DOT__timer_bvalid;
}

void Vsoc_top___024root___nba_sequent__TOP__19(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__19\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_sequent__TOP__20(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__20\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_sequent__TOP__21(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__21\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_id;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.b_id;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata 
        = vlSymsp->TOP__soc_top__DOT__ai_sram_bus.r_data;
    vlSelfRef.soc_top__DOT__ai_m_rid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rid;
    vlSelfRef.soc_top__DOT__ai_m_bid = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bid;
    vlSelfRef.soc_top__DOT__ai_m_rdata = vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rdata;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rid 
        = vlSelfRef.soc_top__DOT__ai_m_rid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bid 
        = vlSelfRef.soc_top__DOT__ai_m_bid;
}

void Vsoc_top___024root___nba_sequent__TOP__22(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__22\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__acc;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__acc = 0;
    QData/*63:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__prod;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__prod = 0;
    QData/*63:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__rounded64;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__rounded64 = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word = 0;
    CData/*1:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word = 0;
    CData/*1:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__acc;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__acc = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__M_q31;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__M_q31 = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__right_shift;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__right_shift = 0;
    QData/*63:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__prod;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__prod = 0;
    QData/*63:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__half;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__half = 0;
    QData/*63:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__rounded64;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__rounded64 = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__r;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__r = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__c;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__c = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__f;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__f = 0;
    CData/*7:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5____Vlvbound_h06b16490__0;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5____Vlvbound_h06b16490__0 = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_idx;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_idx = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx = 0;
    CData/*1:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off = 0;
    IData/*31:0*/ __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w;
    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word = 0;
    CData/*1:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__f;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__f = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kh;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kh = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kw;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kw = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx = 0;
    CData/*7:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__Vfuncout;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word = 0;
    CData/*1:0*/ __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off;
    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done = 0;
    CData/*2:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__state;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy = 0;
    IData/*31:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base = 0;
    SData/*11:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = 0;
    SData/*9:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx = 0;
    CData/*2:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx = 0;
    CData/*2:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = 0;
    CData/*3:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready = 0;
    CData/*4:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready = 0;
    CData/*0:0*/ __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid = 0;
    CData/*7:0*/ __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_ai_accel__DOT__input_mem__v0;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0;
    // Body
    __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__wr_addr_q;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_row_base;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 0U;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 0U;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 = 0U;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 0U;
    __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 0U;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_acc;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state;
    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
    if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni) {
        if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_clear) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc = 0U;
        } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_en) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc 
                = (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_acc 
                   + VL_MULS_III(32, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_a)), 
                                 VL_EXTENDS_II(32,8, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_b))));
        }
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready 
            = ((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arvalid) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready)));
        if ((((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready) 
              & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid)))) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid = 1U;
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rdata 
                = ((0x00000010U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                    ? 0U : ((8U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                             ? ((4U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                 ? ((2U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                     ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                              ? 0U : vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_out_addr))
                                 : ((2U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                     ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                              ? 0U : vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_data_addr)))
                             : ((4U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                 ? ((2U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                     ? 0U : ((1U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_araddr)
                                              ? 0U : 
                                             (((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_result) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy)))))
                                 : 0U)));
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rready))) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid = 0U;
        }
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready 
            = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid 
            = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done = 0U;
        if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0U;
            } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bvalid) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bready = 0U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
                if ((1U & (((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awready) 
                            | (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid))) 
                           & ((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wready) 
                              | (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid)))))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bready = 1U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 4U;
                }
                if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awready) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid = 0U;
                }
                if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wready) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid = 0U;
                }
            } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rvalid) {
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rdata;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rready = 0U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state))) {
            if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arready) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arvalid = 0U;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rready = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 2U;
            }
        } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req) {
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_araddr 
                = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr);
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arvalid = 1U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 1U;
        } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_write_req) {
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awaddr 
                = (0xfffffffcU & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr);
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid = 1U;
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wdata 
                = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wdata_q;
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid = 1U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 3U;
        }
    } else {
        __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rdata = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready 
            = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid 
            = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awaddr = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wdata = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bready = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_araddr = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arvalid = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rready = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done = 0U;
    }
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_state 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_state;
    vlSelfRef.soc_top__DOT__ai_rdata = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rdata;
    vlSelfRef.soc_top__DOT__ai_arready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_arready;
    vlSelfRef.soc_top__DOT__ai_rvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_rvalid;
    vlSelfRef.soc_top__DOT__ai_m_wdata = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wdata;
    vlSelfRef.soc_top__DOT__ai_m_araddr = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_araddr;
    vlSelfRef.soc_top__DOT__ai_m_awaddr = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awaddr;
    vlSelfRef.soc_top__DOT__ai_m_arvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_arvalid;
    vlSelfRef.soc_top__DOT__ai_m_awvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_awvalid;
    vlSelfRef.soc_top__DOT__ai_m_wvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wvalid;
    vlSelfRef.soc_top__DOT__ai_m_rready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rready;
    vlSelfRef.soc_top__DOT__ai_m_bready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_bready;
    if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_clear = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_en = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_write_req = 0U;
        if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_clear_done) {
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0U;
                } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0U;
                } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0U;
                } else {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy = 0U;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done = 1U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0U;
                }
            } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                        if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x18U;
                        }
                    } else {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_out_addr;
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wdata_q 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_result;
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_write_req = 1U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x17U;
                    }
                } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_idx = 0U;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[0U];
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x16U;
                    if (VL_GTS_III(8, vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[1U], (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[1U];
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_idx = 1U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[2U], (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[2U];
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_idx = 2U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[3U], (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val))) {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_val 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[3U];
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_idx = 3U;
                    }
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_result 
                        = (0x0000000fU & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__best_idx);
                } else {
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__acc 
                        = (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_acc 
                           + vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_bias_mem
                           [vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx]);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__prod 
                        = VL_MULS_QQQ(64, 0x00000000732b0c78ULL, 
                                      VL_EXTENDS_QI(64,32, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__acc));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__rounded64 
                        = VL_SHIFTRS_QQI(64,64,32, 
                                         (0x0000020000000000ULL 
                                          + __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__prod), 0x0000002aU);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased 
                        = ((IData)(0x0000000eU) + (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__rounded64));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT____VlemCall_0__tflite_requant 
                        = (VL_LTS_III(32, 0x0000007fU, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased)
                            ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased)
                                              ? 0x00000080U
                                              : (0x000000ffU 
                                                 & __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__0__biased)));
                    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT____VlemCall_0__tflite_requant;
                    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx;
                    __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0 = 1U;
                    if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x15U;
                    } else {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx)));
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base 
                            = ((IData)(0x00000fa0U) 
                               + vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_row_base);
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0fU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x14U;
                } else {
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off 
                        = (3U & __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i);
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_en = 1U;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word 
                        = ((0x03e7U >= (0x000003ffU 
                                        & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i 
                                           >> 2U)))
                            ? vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_mem
                           [(0x000003ffU & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__i 
                                            >> 2U))]
                            : 0U);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off))
                                           ? ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word 
                                                  >> 0x18U)
                                               : (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word 
                                                  >> 8U)
                                               : __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__word)));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__Vfuncout 
                        = __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__2__Vfuncout;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_pix 
                        = __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_out_byte__1__Vfuncout;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off 
                        = (3U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off))
                                           ? ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word 
                                                  >> 0x18U)
                                               : (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word 
                                                  >> 8U)
                                               : __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__word)));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_pix 
                        = __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__3__Vfuncout;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_a 
                        = (0x0000ffffU & (VL_EXTENDS_II(16,8, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_pix)) 
                                          - (IData)(0xff80U)));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_b 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_pix;
                    if ((0x0f9fU == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x13U;
                    } else {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx 
                            = (0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx)));
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x10U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x12U;
                }
            } else {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                    = (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_row_base 
                       + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx));
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x11U;
            }
        } else if ((8U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_clear = 1U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x10U;
                    } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                        __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
                        __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 
                            = (3U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx));
                        __VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0 = 1U;
                        if ((3U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))) {
                            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx = 0U;
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base = 0x00031bc8U;
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = 0U;
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0fU;
                        } else {
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
                                = (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)));
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0dU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                        = ((IData)(0x00035a48U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx), 2U));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0eU;
                } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                    if ((0x03e7U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0dU;
                    } else {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)));
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0bU;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                        = ((IData)(0x000307a8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx), 2U));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_write_req = 1U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0cU;
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wdata_q 
                        = ((0x03e7U >= (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))
                            ? vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_mem
                           [vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx]
                            : 0U);
                } else {
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__right_shift 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__SHIFT_CONV
                        [vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx];
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__M_q31 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__M_CONV_Q31
                        [vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx];
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__acc 
                        = (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_acc 
                           + vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_bias_mem
                           [vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx]);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__prod 
                        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__acc), 
                                      VL_EXTENDS_QI(64,32, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__M_q31));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__half 
                        = VL_SHIFTL_QQI(64,64,32, 1ULL, 
                                        (__Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__right_shift 
                                         - (IData)(1U)));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__rounded64 
                        = VL_SHIFTRS_QQI(64,64,32, 
                                         (__Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__prod 
                                          + __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__half), __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__right_shift);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased 
                        = ((IData)(0xffffff80U) + (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__rounded64));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__Vfuncout 
                        = (VL_LTS_III(32, 0x0000007fU, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased)
                            ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased)
                                              ? 0x00000080U
                                              : (0x000000ffU 
                                                 & __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__biased)));
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__result_byte 
                        = __Vfunc_soc_top__DOT__i_ai_accel__DOT__tflite_requant__4__Vfuncout;
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__result_byte;
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__f 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx;
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__c 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx;
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__r 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx;
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_idx 
                        = ((VL_MULS_III(32, (IData)(0x000000a0U), __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__r) 
                            + VL_MULS_III(32, (IData)(8U), __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__c)) 
                           + __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__f);
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx 
                        = VL_SHIFTR_III(32,32,32, __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_idx, 2U);
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off 
                        = (3U & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_idx);
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w 
                        = ((0x03e7U >= (0x000003ffU 
                                        & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx))
                            ? vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_mem
                           [(0x000003ffU & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx)]
                            : 0U);
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w 
                        = ((2U & (IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off))
                            ? ((1U & (IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off))
                                ? ((0x00ffffffU & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w) 
                                   | ((IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val) 
                                      << 0x00000018U))
                                : ((0xff00ffffU & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w) 
                                   | ((IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val) 
                                      << 0x00000010U)))
                            : ((1U & (IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__byte_off))
                                ? ((0xffff00ffU & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w) 
                                   | ((IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val) 
                                      << 8U)) : ((0xffffff00U 
                                                  & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w) 
                                                 | (IData)(__Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__val))));
                    __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5____Vlvbound_h06b16490__0 
                        = __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__w;
                    if (VL_LIKELY(((0x03e7U >= (0x000003ffU 
                                                & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx))))) {
                        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_out_mem[(0x000003ffU 
                                                                               & __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5__word_idx)] 
                            = __Vtask_soc_top__DOT__i_ai_accel__DOT__write_conv_out_byte__5____Vlvbound_h06b16490__0;
                    }
                    if ((0x13U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx = 0U;
                        if ((0x18U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx))) {
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx = 0U;
                            if ((7U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx))) {
                                __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                                __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx = 0U;
                                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0bU;
                            } else {
                                __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx 
                                    = (7U & ((IData)(1U) 
                                             + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx)));
                                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 7U;
                            }
                        } else {
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx 
                                = (0x0000001fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx)));
                            __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 7U;
                        }
                    } else {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx 
                            = (0x0000001fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx)));
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0x0aU;
            } else {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__ir 
                    = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx), 1U) 
                        + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx)) 
                       - (IData)(4U));
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__ic 
                    = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx), 1U) 
                        + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx)) 
                       - (IData)(3U));
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__ic;
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__ir;
                {
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout = 0;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx = 0U;
                    if ((((VL_GTS_III(32, 0U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir) 
                           | VL_LTES_III(32, 0x00000031U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir)) 
                          | VL_GTS_III(32, 0U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic)) 
                         | VL_LTES_III(32, 0x00000028U, __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic))) {
                        __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout = 0x80U;
                        goto __Vlabel0;
                    }
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx 
                        = (VL_MULS_III(32, (IData)(0x00000028U), __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ir) 
                           + __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__ic);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off 
                        = (3U & __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word 
                        = ((0x01e9U >= (0x000001ffU 
                                        & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx 
                                           >> 2U)))
                            ? vlSelfRef.soc_top__DOT__i_ai_accel__DOT__input_mem
                           [(0x000001ffU & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__byte_idx 
                                            >> 2U))]
                            : 0U);
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__Vfuncout = 0;
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off))
                                           ? ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word 
                                                  >> 0x18U)
                                               : (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__byte_off))
                                               ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word 
                                                  >> 8U)
                                               : __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__word)));
                    __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout 
                        = __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__7__Vfuncout;
                    __Vlabel0: ;
                }
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__input_pix 
                    = __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_input_pixel__6__Vfuncout;
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kw 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx;
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kh 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx;
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__f 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx;
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx 
                    = ((VL_MULS_III(32, (IData)(0x00000050U), __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__f) 
                        + VL_MULS_III(32, (IData)(8U), __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kh)) 
                       + __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__kw);
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off 
                    = (3U & __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx);
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word 
                    = ((0x9fU >= (0x000000ffU & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx 
                                                 >> 2U)))
                        ? vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_w_mem
                       [(0x000000ffU & (__Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__byte_idx 
                                        >> 2U))] : 0U);
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__Vfuncout 
                    = (0x000000ffU & ((2U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off))
                                       ? ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off))
                                           ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word 
                                              >> 0x18U)
                                           : (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word 
                                              >> 0x10U))
                                       : ((1U & (IData)(__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__byte_off))
                                           ? (__Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word 
                                              >> 8U)
                                           : __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__word)));
                __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__Vfuncout 
                    = __Vfunc_soc_top__DOT__i_ai_accel__DOT__get_byte_from_word__9__Vfuncout;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__weight_pix 
                    = __Vfunc_soc_top__DOT__i_ai_accel__DOT__read_conv_weight__8__Vfuncout;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_a 
                    = (0x0000ffffU & (VL_EXTENDS_II(16,8, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__input_pix)) 
                                      - (IData)(0xff80U)));
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_b 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__weight_pix;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_en = 1U;
                if ((7U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = 0U;
                    if ((9U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 9U;
                    } else {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx)));
                    }
                } else {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_clear = 1U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = 0U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = 0U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 8U;
                } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
                    if (VL_LIKELY(((0x01e9U >= (0x000001ffU 
                                                & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)))))) {
                        __VdlyVal__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 
                            = vlSelfRef.soc_top__DOT__i_ai_accel__DOT____Vlvbound_h0b69a956__0;
                        __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 
                            = (0x000001ffU & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx));
                        __VdlySet__soc_top__DOT__i_ai_accel__DOT__input_mem__v0 = 1U;
                    }
                    if ((0x01e9U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))) {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = 0U;
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 7U;
                    } else {
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)));
                        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 5U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                    = (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_data_addr 
                       + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx), 2U));
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 6U;
            } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
                __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 
                    = (7U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx));
                __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0 = 1U;
                if ((7U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 5U;
                } else {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)));
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                    = ((IData)(0x00031ba8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx), 2U));
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 4U;
            } else if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata;
                if (VL_LIKELY(((0x9fU >= (0x000000ffU 
                                          & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)))))) {
                    __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 
                        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT____Vlvbound_h7a32ea8c__0;
                    __VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx));
                    __VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0 = 1U;
                }
                if ((0x009fU == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx))) {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 3U;
                } else {
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx 
                        = (0x000003ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx)));
                    __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state))) {
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr 
                = ((IData)(0x000317a8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx), 2U));
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 2U;
        } else {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy = 0U;
            if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_start) {
                __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy = 1U;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done = 0U;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_result = 0U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr = 0x000317a8U;
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 1U;
                __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 2U;
            }
        }
    } else {
        __Vdly__soc_top__DOT__i_ai_accel__DOT__state = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_result = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__out_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_clear = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_en = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_a = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_b = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_read_req = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_write_req = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_addr = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wdata_q = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wstrb_q = 0x0fU;
    }
    if (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__rst_ni) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_start = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_clear_done = 0U;
        if ((((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awvalid) 
              & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wvalid)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__aw_en))) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready = 1U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready = 1U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q 
                = (0x0000001fU & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awaddr);
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__aw_en = 0U;
        } else {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready = 0U;
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready = 0U;
        }
        if (((((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready) 
               & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wvalid)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready)) 
             & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awvalid))) {
            if ((0U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__wr_addr_q))) {
                if ((1U & (vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wdata 
                           & (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy))))) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_start = 1U;
                }
                if ((2U & vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wdata)) {
                    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_clear_done = 1U;
                }
            } else if ((8U == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__wr_addr_q))) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_data_addr 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wdata;
            } else if ((0x0cU == (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__wr_addr_q))) {
                vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_out_addr 
                    = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wdata;
            }
        }
        if ((((((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready) 
                & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wvalid)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready)) 
              & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awvalid)) 
             & (~ (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid)))) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid = 1U;
        } else if (((IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bready) 
                    & (IData)(vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid))) {
            __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid = 0U;
            vlSelfRef.soc_top__DOT__i_ai_accel__DOT__aw_en = 1U;
        }
    } else {
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready = 0U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__aw_en = 1U;
        __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_start = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_clear_done = 0U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_data_addr = 0x00030000U;
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__csr_out_addr = 0x00035a58U;
    }
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rdata 
        = vlSelfRef.soc_top__DOT__ai_rdata;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_arready 
        = vlSelfRef.soc_top__DOT__ai_arready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_rvalid 
        = vlSelfRef.soc_top__DOT__ai_rvalid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wdata 
        = vlSelfRef.soc_top__DOT__ai_m_wdata;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_araddr 
        = vlSelfRef.soc_top__DOT__ai_m_araddr;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awaddr 
        = vlSelfRef.soc_top__DOT__ai_m_awaddr;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_arvalid 
        = vlSelfRef.soc_top__DOT__ai_m_arvalid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_awvalid 
        = vlSelfRef.soc_top__DOT__ai_m_awvalid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wvalid 
        = vlSelfRef.soc_top__DOT__ai_m_wvalid;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_rready 
        = vlSelfRef.soc_top__DOT__ai_m_rready;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_bready 
        = vlSelfRef.soc_top__DOT__ai_m_bready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_done 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_done;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_rdata 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__mem_rdata;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__state 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__state;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mac_acc 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__mac_acc;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_w_row_base 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__fc_w_row_base;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__in_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__in_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__load_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__load_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__c_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__c_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__r_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__r_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__f_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__f_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kw_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__kw_idx;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__kh_idx 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__kh_idx;
    if (__VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_out_mem[__VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0] 
            = __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_out_mem__v0;
    }
    if (__VdlySet__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__fc_bias_mem[__VdlyDim0__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0] 
            = __VdlyVal__soc_top__DOT__i_ai_accel__DOT__fc_bias_mem__v0;
    }
    if (__VdlySet__soc_top__DOT__i_ai_accel__DOT__input_mem__v0) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__input_mem[__VdlyDim0__soc_top__DOT__i_ai_accel__DOT__input_mem__v0] 
            = __VdlyVal__soc_top__DOT__i_ai_accel__DOT__input_mem__v0;
    }
    if (__VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_bias_mem[__VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0] 
            = __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_bias_mem__v0;
    }
    if (__VdlySet__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0) {
        vlSelfRef.soc_top__DOT__i_ai_accel__DOT__conv_w_mem[__VdlyDim0__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0] 
            = __VdlyVal__soc_top__DOT__i_ai_accel__DOT__conv_w_mem__v0;
    }
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wstrb 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__mem_wstrb_q;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__irq_o 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_done;
    vlSelfRef.soc_top__DOT__ai_m_wstrb = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_wstrb;
    vlSelfRef.soc_top__DOT__ai_irq = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__irq_o;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__wr_addr_q 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__wr_addr_q;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy 
        = __Vdly__soc_top__DOT__i_ai_accel__DOT__status_busy;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_wstrb 
        = vlSelfRef.soc_top__DOT__ai_m_wstrb;
    vlSelfRef.soc_top__DOT__ai_awready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_awready;
    vlSelfRef.soc_top__DOT__ai_wready = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_wready;
    vlSelfRef.soc_top__DOT__ai_bvalid = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__s_axi_bvalid;
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__busy_o 
        = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__status_busy;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_awready 
        = vlSelfRef.soc_top__DOT__ai_awready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_wready 
        = vlSelfRef.soc_top__DOT__ai_wready;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__ai_bvalid 
        = vlSelfRef.soc_top__DOT__ai_bvalid;
    vlSelfRef.soc_top__DOT__ai_busy = vlSelfRef.soc_top__DOT__i_ai_accel__DOT__busy_o;
    vlSelfRef.soc_top__DOT__i_ai_arb__DOT__ai_active 
        = vlSelfRef.soc_top__DOT__ai_busy;
}

void Vsoc_top___024root___nba_sequent__TOP__23(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__23\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__24(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__24\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__25(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__25\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__26(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__26\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__27(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__27\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__28(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__28\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

extern const VlUnpacked<CData/*3:0*/, 512> Vsoc_top__ConstPool__TABLE_h84b64dae_0;

void Vsoc_top___024root___nba_sequent__TOP__29(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__29\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_17;
    __VdfgRegularize_h6e95ff9d_0_17 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_37;
    __VdfgRegularize_h6e95ff9d_0_37 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_38;
    __VdfgRegularize_h6e95ff9d_0_38 = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_40;
    __VdfgRegularize_h6e95ff9d_0_40 = 0;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_pipeline_stall));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__perf_imiss_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
                & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id)) 
               & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & ((1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                  | (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i)));
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o 
            = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__jr_stall) 
                & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o 
            = (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__load_stall) 
                & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__halt_id))) 
               & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q));
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U] 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[0U];
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U] 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[1U];
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U] 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands[2U];
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat;
                    }
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_id;
                    }
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                    }
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_en) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_clpx;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o 
                            = (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0dU));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o 
                            = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x19U));
                    }
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_clpx;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_id;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_subrot;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o 
                            = (3U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
                                     >> 0x0dU));
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator;
                    }
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o 
                        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id) 
                           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_id));
                    if (((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id)) 
                         | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id))) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
                    }
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o 
                        = (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id));
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en;
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
                    }
                    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_id) {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 1U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_id;
                    } else {
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en;
                        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o 
                            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op;
                    }
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_id;
                } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o = 1U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o = 0U;
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o = 3U;
                }
            }
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_c_fw_id;
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_int_en) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c;
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_id;
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i)))) {
            if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access;
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 1U;
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o = 4U;
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__operand_a_fw_id;
                }
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o = 1U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_multicycle_i)))) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
                if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en) {
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o 
                        = (((0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel)) 
                            & ((0x16U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator)) 
                               | (0x17U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator))))
                            ? (0x7fffffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b)
                            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b);
                    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o 
                        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a;
                }
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o 
                    = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr;
            } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ex_ready_i) {
                vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
            }
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o = 3U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o = 0U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_pipe_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_pipe_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_imiss_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_minstret_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_store_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_load_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_compressed_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jump_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_taken_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__minstret) 
               & (3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__ctrl_transfer_insn_in_id))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_jr_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_ld_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_q 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__rst_n) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__id_valid_o));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_operands_ex_o[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_op_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_op_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_flags_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_sign_ext_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__atop_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_reg_offset_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_imm_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_c_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_c_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operand_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_sel_subword_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_sel_subword_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__imm_vec_ext_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_load_event_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_load_event_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_is_clpx_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_signed_mode_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_lat_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_clpx_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_op_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_dot_signed_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_operator_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_type_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_type_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__bmask_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__apu_en_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_op_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_vec_mode_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_waddr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_waddr_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_waddr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_is_subrot_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_req_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_req_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_shift_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mult_clpx_img_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_clpx_shift_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operator_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_b_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_a_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__alu_operand_a_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_pipe_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_pipe_stall;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_imiss_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_imiss;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_minstret_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_minstret;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_store_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_store;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_load_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_load;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_compressed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_compressed;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jump_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jump;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_taken_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch_taken;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_jr_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_jr_stall;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_ld_stall_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_ld_stall;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[0U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[0U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[1U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[1U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_operands_i[2U] 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_operands_ex[2U];
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_op_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_op_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_sign_ext_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_sign_ext_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_reg_offset_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_reg_offset_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_c_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_imm_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operand_c_ex;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_load_event_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_load_event_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_is_clpx_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_signed_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_signed_mode_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_lat_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_lat_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_clpx_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_clpx_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_op_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_signed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_dot_signed_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_a_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_operator_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_in_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_in_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_type_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_type_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__bmask_b_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_en_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_vec_mode_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_is_subrot_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__lsu_en_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_req_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_req_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_shift_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mult_clpx_img_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_clpx_shift_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_misaligned_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operator_ex;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__mhpmevent_branch_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__apu_flags = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__apu_flags_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_dot_op_c_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_imm_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__op_c_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operand_c_i;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_operator_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__bmask_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_en_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_en_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_op;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__vector_mode_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_vec_mode_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_subrot_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_is_subrot_i;
    __VdfgRegularize_h6e95ff9d_0_40 = ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__apu_en_i)) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__csr_access_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_shift_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_clpx_img_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_clpx_shift_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__misaligned_st 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_misaligned_ex_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operator_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operator_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_operand_a_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__prepost_useincr_ex_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_branch_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mhpmevent_branch;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_atop;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp 
        = ((IData)(1U) << (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__imm_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__jump_target_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__radix_mux_sel 
        = (3U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_first 
        = ((IData)(0xfffffffeU) << (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_a_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__int_is_msu 
        = (1U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_we;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_fw 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_waddr_fw_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_op_i)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_mie_we = 0U;
        }
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o 
        = __VdfgRegularize_h6e95ff9d_0_40;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o 
        = __VdfgRegularize_h6e95ff9d_0_40;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__csr_access_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr_int 
        = (0x00000fffU & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__alu_operand_b_ex 
                          & (- (IData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_access_ex)))));
    __VdfgRegularize_h6e95ff9d_0_56 = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i) 
                                       & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_i;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OpA_DI 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_byte_sel = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg_sel = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg1_sel = 1U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_reg0_sel = 2U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shuffle_through = 0x0fU;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_neg 
        = (~ vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_b_i);
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__useincr_addr_ex;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_atop_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round 
        = ((- (IData)((3U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__operator_i)))) 
           & VL_SHIFTR_III(32,32,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__short_round_tmp, 1U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__jump_target_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__jump_target_ex;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_we_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_waddr_fw;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw_power 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_power_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__regfile_alu_we_fw_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr_int;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__shift_amt_norm 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__is_clpx_i)
            ? (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex) 
                << 0x00000010U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__clpx_shift_ex))
            : (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                << 0x00000018U) | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                    << 0x00000010U) 
                                   | (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i) 
                                       << 8U) | (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_b_i)))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_int 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__addr_useincr_ex_i)
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i 
               + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_b_ex_i)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__operand_a_ex_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_atop_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_fw_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw_power;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__regfile_alu_we_fw;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__csr_addr;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_atop_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_atop_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bclr_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__operand_a_i 
           & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__bmask_inv);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__waddr_b_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_power_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_we_fw_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_we_fw_i;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0] = 0U;
    vlSelfRef.__VdfgBinToOneHot_Tab_ha725b4a8_0_0[vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i] = 1U;
    vlSelfRef.__VdfgBinToOneHot_Pre_ha725b4a8_0_0 = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_addr_i;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__is_clpx_i)
            ? (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_op_b_ext 
               & (- (IData)((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_img_i))))))
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_op_c_i);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_we_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_we_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o 
        = (1U & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__cmp_result) 
                 >> 3U));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
        = (0x00000001ffffffffULL & (VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[0U]) 
                                    + (VL_EXTENDS_QI(33,32, 
                                                     ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[2U] 
                                                       << 0x0000001eU) 
                                                      | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_mul[1U] 
                                                         >> 2U))) 
                                       + VL_EXTENDS_QI(33,32, vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__accumulator))));
    vlSelfRef.soc_top__DOT__data_we = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_we_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__comparison_result_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__result_o 
        = (0x0000003fU & ((0x0000001fU & ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4) 
                                          >> 5U)) + 
                          (0x0000001fU & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__popcnt_i__DOT__cnt_l4))));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_result 
        = (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
           + vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__adder_round_value);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_be_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__trans_wdata;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__data_misaligned_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_result 
        = (0x0000ffffU & VL_SHIFTRS_III(17,17,2, (0x0001ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__dot_short_result 
                                                             >> 0x0000000fU))), (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__mult_i__DOT__clpx_shift_i)));
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_we_i 
        = vlSelfRef.soc_top__DOT__data_we;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_cmp_result;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__trans_wdata_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__data_misaligned_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_pmp 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_decision 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__branch_decision_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_be_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_obi_i__DOT__obi_wdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__misaligned_stall 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__misaligned_stall_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_pmp;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__branch_decision;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_be_o = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__load_store_unit_i__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_addr_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_in_ex_o) 
           & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_decision_i));
    vlSelfRef.soc_top__DOT__data_be = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_be_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__data_wdata_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__data_addr = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_addr_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__branch_taken_ex_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__branch_taken_ex;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_be_i 
        = vlSelfRef.soc_top__DOT__data_be;
    vlSelfRef.soc_top__DOT__data_wdata = vlSelfRef.soc_top__DOT__i_cpu__DOT__data_wdata_o;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_addr_i 
        = vlSelfRef.soc_top__DOT__data_addr;
    vlSelfRef.soc_top__DOT__i_obi_axi_data__DOT__obi_wdata_i 
        = vlSelfRef.soc_top__DOT__data_wdata;
}

void Vsoc_top___024root___nba_sequent__TOP__30(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__30\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rst_ni) {
        if ((1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__gate_clock)))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_n;
        }
        if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i))))) {
            if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: cv32e40p_fifo.sv:117: Assertion failed in %m: unique case, but multiple matches found for '1'h1'\n",3, 'M',vlSymsp->name(),"soc_top.i_cpu.core_i.if_stage_i.prefetch_buffer_i.fifo_i", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("rtl/core/cv32e40p/rtl/cv32e40p_fifo.sv", 117, "");
                }
            }
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__flush_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
        } else {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_n;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_n;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_n;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q = 0ULL;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__write_pointer_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q = 0U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o 
        = (IData)((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__mem_q 
                   >> ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__read_pointer_q) 
                       << 5U)));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__full_o 
        = (2U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o 
        = (0U == (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__status_cnt_q));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__data_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__cnt_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__empty_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_cnt_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_cnt;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__fifo_empty;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_valid 
        = (1U & (~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__prefetch_controller_i__DOT__fifo_empty_i)));
}

void Vsoc_top___024root___nba_sequent__TOP__31(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__31\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_26;
    __VdfgRegularize_h6e95ff9d_0_26 = 0;
    // Body
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__rst_n) {
        if (((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__if_valid) 
             & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid))) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_compressed_int;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 1U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_if_o;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_decompressed;
        } else if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__clear_instr_valid_i) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 0U;
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o = 0U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_compressed_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_valid_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__is_fetch_failed_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__illegal_c_insn_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__pc_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__instr_rdata_id_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_compressed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_compressed_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_valid_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__is_fetch_failed_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__illegal_c_insn_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__pc_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__instr_rdata_id;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_valid_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_valid_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__is_fetch_failed_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__is_fetch_failed_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_c_insn_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__illegal_c_insn_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__pc_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__pc_id_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__instr_rdata_i;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vec_ext_id 
        = (3U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__imm_vu_type);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__regfile_alu_waddr_id_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__regfile_alu_waddr_id;
}

void Vsoc_top___024root___nba_sequent__TOP__32(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__32\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__33(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__33\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DN;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DN;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SN;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DN;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DN;
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__BReg_DP = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__State_SP = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP = 0U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SP 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CompInv_SN));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SN));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Rst_RBI) 
           && (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SN));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__CntZero_S 
        = (1U & (~ (0U != (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Cnt_DP))));
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__RemSel_SP)
            ? vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__AReg_DP
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResReg_DP_rev);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO 
        = ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__ResInv_SP)
            ? (- vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D)
            : vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__OutMux_D);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__result_div 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__ex_stage_i__DOT__alu_i__DOT__alu_div_i__DOT__Res_DO;
}

extern const VlWide<32>/*1023:0*/ Vsoc_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<64>/*2047:0*/ Vsoc_top__ConstPool__CONST_h6be9aa18_0;

void Vsoc_top___024root___nba_sequent__TOP__34(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__34\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_23;
    __VdfgRegularize_h6e95ff9d_0_23 = 0;
    VlWide<64>/*2047:0*/ __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<64>/*2047:0*/ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q;
    VL_ZERO_W(2048, __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VlWide<32>/*1023:0*/ __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    VlWide<32>/*1023:0*/ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q;
    VL_ZERO_W(1024, __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q);
    IData/*31:0*/ __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    IData/*31:0*/ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q;
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0;
    // Body
    __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                    | vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (1U | __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffbU & __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (4U & (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                     << 2U) | (0xfffffffcU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (4U | __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff7U & __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (8U & (((~ (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)) 
                     << 3U) | (0xfffffff8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_n))));
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (8U | __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q);
    __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n)
               ? (0x0000ffffU & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = (0xffffU | __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]);
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__rst_n) {
        if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        } else if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        } else if ((1U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = (IData)((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = (IData)(((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                           >> 0x00000020U));
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        }
        if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = (IData)((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = (IData)(((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                           >> 0x00000020U));
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        }
        if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = (IData)((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
            __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = (IData)(((((QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                           >> 0x00000020U));
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
            __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_n;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q 
            = (6U | (0x00000028U & (IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_n)));
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_n;
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_we) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q 
                = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 2U));
        }
        if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_we) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
            = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_n;
    } else {
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0xffffffffU;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0xffffffffU;
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0xffffffffU;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0xffffffffU;
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        __Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0xffffffffU;
        __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0xffffffffU;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch1_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dscratch0_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mscratch_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcause_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q = 1U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mstatus_q = 6U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mie_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q = 0x40000003U;
    }
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q)));
    __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[0U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[1U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[2U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[3U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[4U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[5U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[6U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[7U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[8U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[9U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[10U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[11U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[12U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[13U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[14U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[15U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[16U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[17U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[18U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[19U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[20U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[21U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[22U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[23U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[24U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[25U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[26U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[27U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[28U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[29U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[30U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q[31U])));
    VL_ASSIGN_W(1024, __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmevent_q, Vsoc_top__ConstPool__CONST_hd6b7ba52_0);
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[10U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[11U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[12U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[13U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[14U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[15U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[16U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[17U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[18U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[19U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[20U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[21U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[22U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[23U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[24U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[25U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[26U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[27U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[28U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[29U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[30U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[31U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[32U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[33U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[34U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[35U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[36U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[37U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[38U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[39U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[40U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[41U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[42U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[43U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[44U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[45U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[46U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[47U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[48U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[49U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[50U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[51U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[52U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[53U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[54U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[55U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[56U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[57U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[58U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[59U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[60U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[61U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[62U])));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
        = ((__Vdly__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
            & __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U]) 
           | (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U] 
              & (~ __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q[63U])));
    VL_ASSIGN_W(2048, __VdlyMask__soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mhpmcounter_q, Vsoc_top__ConstPool__CONST_h6be9aa18_0);
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_o 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_q;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_control_rdata 
        = (0x28001040U | ((IData)(vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_control_exec_q) 
                          << 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__tmatch_value_rdata 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o 
        = (1U & (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__dcsr_q 
                 >> 2U));
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec_mode 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mtvec_mode_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mepc 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__mepc_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__depc 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__depc_o;
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
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_single_step 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__debug_single_step_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__m_trap_base_addr_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mtvec;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__mepc_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__mepc;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__if_stage_i__DOT__depc_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__depc;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreakm;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_ebreaku;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__u_irq_enable_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__cs_registers_i__DOT__m_irq_enable_o;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__debug_single_step;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreakm_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreakm_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_ebreaku_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_ebreaku_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__u_irq_enable;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__m_irq_enable;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_single_step_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__debug_single_step_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__u_ie_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__u_irq_enable_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__m_irq_enable_i;
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__global_irq_enable 
        = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__int_controller_i__DOT__m_ie_i;
}

void Vsoc_top___024root___nba_sequent__TOP__35(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__35\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__36(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__36\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_sequent__TOP__37(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__37\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__38(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__38\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__39(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__39\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__40(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__40\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    if (vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__rst_n) {
        if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((2U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((4U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((8U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000010U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000010U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000020U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000040U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000040U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000080U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000080U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000100U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000100U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000200U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000200U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000400U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000400U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00000800U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00000800U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00001000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00002000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00004000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00008000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00010000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00010000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00020000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00020000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00040000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00040000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00080000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00080000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00100000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00100000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00200000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00200000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00400000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00400000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x00800000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x00800000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x01000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x01000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x02000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x02000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x04000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x04000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x08000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x08000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x10000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x10000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x20000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x20000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((0x40000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((0x40000000U & vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
        if ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_b_dec 
             >> 0x1fU)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_b_i;
        } else if ((vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__we_a_dec 
                    >> 0x1fU)) {
            vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] 
                = vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__wdata_a_i;
        }
    } else {
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[1U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[2U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[3U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[4U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[5U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[6U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[7U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[8U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[9U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[10U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[11U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[12U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[13U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[14U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[15U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[16U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[17U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[18U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[19U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[20U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[21U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[22U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[23U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[24U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[25U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[26U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[27U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[28U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[29U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[30U] = 0U;
        vlSelfRef.soc_top__DOT__i_cpu__DOT__core_i__DOT__id_stage_i__DOT__register_file_i__DOT__mem[31U] = 0U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vsoc_top__ConstPool__TABLE_h11d5385c_0;

void Vsoc_top___024root___nba_sequent__TOP__41(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__41\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
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
    __Vtableidx5 = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__rd_sel_q;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_rresp 
        = Vsoc_top__ConstPool__TABLE_h11d5385c_0[__Vtableidx5];
    __Vtableidx4 = vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__wr_sel_q;
    vlSelfRef.soc_top__DOT__i_periph_decoder__DOT__s_bresp 
        = Vsoc_top__ConstPool__TABLE_h11d5385c_0[__Vtableidx4];
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
}

void Vsoc_top___024root___nba_sequent__TOP__42(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__42\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__43(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__43\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_boot_rom__DOT__write_en 
        = ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_valid) 
           & ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_valid) 
              & ((IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.aw_ready) 
                 & (IData)(vlSymsp->TOP__soc_top__DOT__boot_rom_bus.w_ready))));
}

void Vsoc_top___024root___nba_sequent__TOP__44(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__44\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__45(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__45\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__46(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__46\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__47(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__47\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__48(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__48\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__49(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__49\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__50(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__50\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_data_out 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tdata;
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__rx_valid 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_rx__DOT__m_axis_tvalid;
}

void Vsoc_top___024root___nba_sequent__TOP__51(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__51\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_uart_0__DOT__tx_busy 
        = vlSelfRef.soc_top__DOT__i_uart_0__DOT__i_uart_tx__DOT__busy;
}

void Vsoc_top___024root___nba_sequent__TOP__52(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__52\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__53(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__53\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_sequent__TOP__54(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_sequent__TOP__54\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.soc_top__DOT__i_ai_accel__DOT__m_axi_rdata 
        = vlSelfRef.soc_top__DOT__ai_m_rdata;
}

void Vsoc_top___024root___nba_comb__TOP__0(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__0\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_comb__TOP__1(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__1\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vsoc_top___024root___nba_comb__TOP__2(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__2\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vsoc_top___024root___nba_comb__TOP__4(Vsoc_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___nba_comb__TOP__4\n"); );
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
}
