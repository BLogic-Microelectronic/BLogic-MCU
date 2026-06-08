// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vai_accel_tb.h for the primary calling header

#include "Vai_accel_tb__pch.h"

void Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0(Vai_accel_tb___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_4__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_4__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_5__sync);
VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_5__sync);

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __PVT__unnamedblk5__DOT__i;
    __PVT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ unnamedblk1_2__DOT____Vrepeat1;
    unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s;
    __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s = 0;
    IData/*31:0*/ __Vtask_preload_static_weights__2__base;
    __Vtask_preload_static_weights__2__base = 0;
    IData/*31:0*/ __Vfunc_word_idx__3__Vfuncout;
    __Vfunc_word_idx__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__3__byte_addr;
    __Vfunc_word_idx__3__byte_addr = 0;
    IData/*31:0*/ __Vfunc_word_idx__4__Vfuncout;
    __Vfunc_word_idx__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__4__byte_addr;
    __Vfunc_word_idx__4__byte_addr = 0;
    IData/*31:0*/ __Vfunc_word_idx__5__Vfuncout;
    __Vfunc_word_idx__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__5__byte_addr;
    __Vfunc_word_idx__5__byte_addr = 0;
    IData/*31:0*/ __Vfunc_word_idx__6__Vfuncout;
    __Vfunc_word_idx__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__6__byte_addr;
    __Vfunc_word_idx__6__byte_addr = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7____VlefCall_1__word_idx;
    __Vtask_verify_preload_spot_checks__7____VlefCall_1__word_idx = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7____VlefCall_0__word_idx;
    __Vtask_verify_preload_spot_checks__7____VlefCall_0__word_idx = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7__expected_first_conv_w;
    __Vtask_verify_preload_spot_checks__7__expected_first_conv_w = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7__expected_first_fc_w;
    __Vtask_verify_preload_spot_checks__7__expected_first_fc_w = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7__got;
    __Vtask_verify_preload_spot_checks__7__got = 0;
    IData/*31:0*/ __Vtask_verify_preload_spot_checks__7__spot_err;
    __Vtask_verify_preload_spot_checks__7__spot_err = 0;
    IData/*31:0*/ __Vfunc_word_idx__8__Vfuncout;
    __Vfunc_word_idx__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__8__byte_addr;
    __Vfunc_word_idx__8__byte_addr = 0;
    IData/*31:0*/ __Vfunc_word_idx__9__Vfuncout;
    __Vfunc_word_idx__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__9__byte_addr;
    __Vfunc_word_idx__9__byte_addr = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__local_errors;
    __Vtask_run_scenario__10__local_errors = 0;
    IData/*31:0*/ __Vtask_run_scenario__10____VlefCall_0__word_idx;
    __Vtask_run_scenario__10____VlefCall_0__word_idx = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__unnamedblk3__DOT__ce;
    __Vtask_run_scenario__10__unnamedblk3__DOT__ce = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__st;
    __Vtask_run_scenario__10__st = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__result_word;
    __Vtask_run_scenario__10__result_word = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__rtl_argmax;
    __Vtask_run_scenario__10__rtl_argmax = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__expected_argmax;
    __Vtask_run_scenario__10__expected_argmax = 0;
    IData/*31:0*/ __Vtask_run_scenario__10__mem_argmax;
    __Vtask_run_scenario__10__mem_argmax = 0;
    IData/*31:0*/ __Vtask_preload_input__12__base;
    __Vtask_preload_input__12__base = 0;
    IData/*31:0*/ __Vfunc_word_idx__13__Vfuncout;
    __Vfunc_word_idx__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__13__byte_addr;
    __Vfunc_word_idx__13__byte_addr = 0;
    CData/*4:0*/ __Vtask_csr_read__18__addr;
    __Vtask_csr_read__18__addr = 0;
    IData/*31:0*/ __Vtask_csr_read__18__data;
    __Vtask_csr_read__18__data = 0;
    IData/*31:0*/ __Vfunc_word_idx__19__Vfuncout;
    __Vfunc_word_idx__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__19__byte_addr;
    __Vfunc_word_idx__19__byte_addr = 0;
    IData/*31:0*/ __Vfunc_read_expected_argmax__20__Vfuncout;
    __Vfunc_read_expected_argmax__20__Vfuncout = 0;
    VlUnpacked<IData/*31:0*/, 1> __Vfunc_read_expected_argmax__20__tmp_mem;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vfunc_read_expected_argmax__20__tmp_mem[__Vi0] = 0;
    }
    VlUnpacked<CData/*7:0*/, 4> __Vfunc_read_expected_argmax__20__b;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        __Vfunc_read_expected_argmax__20__b[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_read_expected_argmax__20__argmax;
    __Vfunc_read_expected_argmax__20__argmax = 0;
    CData/*7:0*/ __Vfunc_read_expected_argmax__20__best;
    __Vfunc_read_expected_argmax__20__best = 0;
    IData/*31:0*/ __Vtask_verify_conv_out__21__conv_errors;
    __Vtask_verify_conv_out__21__conv_errors = 0;
    IData/*31:0*/ __Vtask_verify_conv_out__21__unnamedblk4__DOT__i;
    __Vtask_verify_conv_out__21__unnamedblk4__DOT__i = 0;
    IData/*31:0*/ __Vtask_verify_conv_out__21__got;
    __Vtask_verify_conv_out__21__got = 0;
    IData/*31:0*/ __Vtask_verify_conv_out__21__base;
    __Vtask_verify_conv_out__21__base = 0;
    IData/*31:0*/ __Vtask_verify_conv_out__21__first_mismatch;
    __Vtask_verify_conv_out__21__first_mismatch = 0;
    IData/*31:0*/ __Vfunc_word_idx__22__Vfuncout;
    __Vfunc_word_idx__22__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__22__byte_addr;
    __Vfunc_word_idx__22__byte_addr = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSelfRef.__PVT__s_awaddr = 0U;
    vlSelfRef.__PVT__s_awvalid = 0U;
    vlSelfRef.__PVT__s_wdata = 0U;
    vlSelfRef.__PVT__s_wvalid = 0U;
    vlSelfRef.__PVT__s_bready = 0U;
    vlSelfRef.__PVT__s_araddr = 0U;
    vlSelfRef.__PVT__s_arvalid = 0U;
    vlSelfRef.__PVT__s_rready = 0U;
    __PVT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00002000U, __PVT__unnamedblk5__DOT__i)) {
        vlSelfRef.__PVT__ai_mem[(0x00001fffU & __PVT__unnamedblk5__DOT__i)] = 0U;
        __PVT__unnamedblk5__DOT__i = ((IData)(1U) + __PVT__unnamedblk5__DOT__i);
    }
    vlSelfRef.__PVT__rst_n = 0U;
    unnamedblk1_1__DOT____Vrepeat0 = 0x0000000aU;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                550);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    vlSelfRef.__PVT__rst_n = 1U;
    unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, unnamedblk1_2__DOT____Vrepeat1)) {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                552);
        unnamedblk1_2__DOT____Vrepeat1 = (unnamedblk1_2__DOT____Vrepeat1 
                                          - (IData)(1U));
    }
    VL_WRITEF_NX("[INFO] Reset bitti, preload ba\305\237l\304\261yor...\n",0);
    __Vtask_preload_static_weights__2__base = 0U;
    __Vfunc_word_idx__3__byte_addr = 0x000317a8U;
    __Vfunc_word_idx__3__Vfuncout = 0U;
    __Vfunc_word_idx__3__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__3__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_preload_static_weights__2__base = __Vfunc_word_idx__3__Vfuncout;
    VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/weights_conv.hex"s
                 ,  &(vlSelfRef.__PVT__ai_mem), __Vtask_preload_static_weights__2__base
                 , ((IData)(0x0000009fU) + __Vtask_preload_static_weights__2__base));
    __Vfunc_word_idx__4__byte_addr = 0x00031ba8U;
    __Vfunc_word_idx__4__Vfuncout = 0U;
    __Vfunc_word_idx__4__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__4__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_preload_static_weights__2__base = __Vfunc_word_idx__4__Vfuncout;
    VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/bias_conv.hex"s
                 ,  &(vlSelfRef.__PVT__ai_mem), __Vtask_preload_static_weights__2__base
                 , ((IData)(7U) + __Vtask_preload_static_weights__2__base));
    __Vfunc_word_idx__5__byte_addr = 0x00031bc8U;
    __Vfunc_word_idx__5__Vfuncout = 0U;
    __Vfunc_word_idx__5__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__5__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_preload_static_weights__2__base = __Vfunc_word_idx__5__Vfuncout;
    VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/weights_fc.hex"s
                 ,  &(vlSelfRef.__PVT__ai_mem), __Vtask_preload_static_weights__2__base
                 , ((IData)(0x00000f9fU) + __Vtask_preload_static_weights__2__base));
    __Vfunc_word_idx__6__byte_addr = 0x00035a48U;
    __Vfunc_word_idx__6__Vfuncout = 0U;
    __Vfunc_word_idx__6__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__6__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_preload_static_weights__2__base = __Vfunc_word_idx__6__Vfuncout;
    VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/bias_fc.hex"s
                 ,  &(vlSelfRef.__PVT__ai_mem), __Vtask_preload_static_weights__2__base
                 , ((IData)(3U) + __Vtask_preload_static_weights__2__base));
    VL_WRITEF_NX("[PRELOAD] statik agirliklar yuklendi (conv_w@17A8, conv_bias@1BA8, fc_w@1BC8, fc_bias@5A48)\n",0);
    __Vtask_verify_preload_spot_checks__7__expected_first_conv_w = 0xff0cc8efU;
    __Vtask_verify_preload_spot_checks__7__expected_first_fc_w = 0xd2de2523U;
    __Vtask_verify_preload_spot_checks__7__got = 0;
    __Vtask_verify_preload_spot_checks__7__spot_err = 0U;
    __Vfunc_word_idx__8__byte_addr = 0x000317a8U;
    __Vfunc_word_idx__8__Vfuncout = 0U;
    __Vfunc_word_idx__8__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__8__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_verify_preload_spot_checks__7____VlefCall_0__word_idx 
        = __Vfunc_word_idx__8__Vfuncout;
    __Vtask_verify_preload_spot_checks__7__got = vlSelfRef.__PVT__ai_mem
        [(0x00001fffU & __Vtask_verify_preload_spot_checks__7____VlefCall_0__word_idx)];
    if (VL_UNLIKELY(((__Vtask_verify_preload_spot_checks__7__got 
                      != __Vtask_verify_preload_spot_checks__7__expected_first_conv_w)))) {
        VL_WRITEF_NX("[SPOT] FAIL conv_w ilk word: got=0x%08h exp=0x%08h\n",2
                     , '#',32,__Vtask_verify_preload_spot_checks__7__got
                     , '#',32,__Vtask_verify_preload_spot_checks__7__expected_first_conv_w);
        __Vtask_verify_preload_spot_checks__7__spot_err 
            = ((IData)(1U) + __Vtask_verify_preload_spot_checks__7__spot_err);
    }
    __Vfunc_word_idx__9__byte_addr = 0x00031bc8U;
    __Vfunc_word_idx__9__Vfuncout = 0U;
    __Vfunc_word_idx__9__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                  (__Vfunc_word_idx__9__byte_addr 
                                                   - (IData)(0x00030000U)), 2U);
    __Vtask_verify_preload_spot_checks__7____VlefCall_1__word_idx 
        = __Vfunc_word_idx__9__Vfuncout;
    __Vtask_verify_preload_spot_checks__7__got = vlSelfRef.__PVT__ai_mem
        [(0x00001fffU & __Vtask_verify_preload_spot_checks__7____VlefCall_1__word_idx)];
    if (VL_UNLIKELY(((__Vtask_verify_preload_spot_checks__7__got 
                      != __Vtask_verify_preload_spot_checks__7__expected_first_fc_w)))) {
        VL_WRITEF_NX("[SPOT] FAIL fc_w ilk word: got=0x%08h exp=0x%08h\n",2
                     , '#',32,__Vtask_verify_preload_spot_checks__7__got
                     , '#',32,__Vtask_verify_preload_spot_checks__7__expected_first_fc_w);
        __Vtask_verify_preload_spot_checks__7__spot_err 
            = ((IData)(1U) + __Vtask_verify_preload_spot_checks__7__spot_err);
    }
    if (VL_LIKELY(((0U == __Vtask_verify_preload_spot_checks__7__spot_err)))) {
        VL_WRITEF_NX("[SPOT] PASS preload spot-check'leri tutuyor\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Fatal: ai_accel_tb.sv:529: Assertion failed in %m: [SPOT] Preload verisi yuklenememis, dosya yollarini kontrol et (repo kokunden mi calistiriyorsun?)\n",3, 'M',vlSymsp->name(),"ai_accel_tb.verify_preload_spot_checks", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
        VL_STOP_MT("verif/tb/ai_accel_tb.sv", 529, "", false);
    }
    vlSelfRef.__PVT__unnamedblk6__DOT__scen[0U] = "yes"s;
    vlSelfRef.__PVT__unnamedblk6__DOT__scen[1U] = "no"s;
    vlSelfRef.__PVT__unnamedblk6__DOT__scen[2U] = "unknown"s;
    vlSelfRef.__PVT__unnamedblk6__DOT__scen[3U] = "silence"s;
    __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s = 0U;
    while (VL_GTS_III(32, 4U, __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s)) {
        vlSelfRef.__Vtask_run_scenario__10__scenario 
            = VL_CVT_PACK_STR_NN(vlSelfRef.__PVT__unnamedblk6__DOT__scen
                                 [(3U & __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s)]);
        vlSelfRef.__Vtask_run_scenario__10____VDynScope_run_scenario_16 
            = VL_NEW(Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16, vlSymsp);
        {
            __Vtask_run_scenario__10__local_errors = 0U;
            __Vtask_run_scenario__10__st = 0;
            __Vtask_run_scenario__10__result_word = 0;
            __Vtask_run_scenario__10__rtl_argmax = 0U;
            __Vtask_run_scenario__10__expected_argmax = 0U;
            __Vtask_run_scenario__10__mem_argmax = 0U;
            VL_NULL_CHECK(vlSelfRef.__Vtask_run_scenario__10____VDynScope_run_scenario_16, "verif/tb/ai_accel_tb.sv", 379)->__PVT__irq_seen = 0U;
            __Vtask_run_scenario__10__local_errors = 0U;
            VL_WRITEF_NX("\n========== SENARYO: %s ==========\n",1
                         , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario));
            vlSelfRef.__Vtask_preload_input__12__scenario 
                = vlSelfRef.__Vtask_run_scenario__10__scenario;
            __Vtask_preload_input__12__base = 0U;
            __Vfunc_word_idx__13__byte_addr = 0x00030000U;
            __Vfunc_word_idx__13__Vfuncout = 0U;
            __Vfunc_word_idx__13__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                           (__Vfunc_word_idx__13__byte_addr 
                                                            - (IData)(0x00030000U)), 2U);
            __Vtask_preload_input__12__base = __Vfunc_word_idx__13__Vfuncout;
            if (VL_UNLIKELY((("yes"s == vlSelfRef.__Vtask_preload_input__12__scenario)))) {
                VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/input_yes.hex"s
                             ,  &(vlSelfRef.__PVT__ai_mem)
                             , __Vtask_preload_input__12__base
                             , ((IData)(0x000001e9U) 
                                + __Vtask_preload_input__12__base));
            } else if (VL_UNLIKELY((("no"s == vlSelfRef.__Vtask_preload_input__12__scenario)))) {
                VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/input_no.hex"s
                             ,  &(vlSelfRef.__PVT__ai_mem)
                             , __Vtask_preload_input__12__base
                             , ((IData)(0x000001e9U) 
                                + __Vtask_preload_input__12__base));
            } else if (VL_UNLIKELY((("unknown"s == vlSelfRef.__Vtask_preload_input__12__scenario)))) {
                VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/input_unknown.hex"s
                             ,  &(vlSelfRef.__PVT__ai_mem)
                             , __Vtask_preload_input__12__base
                             , ((IData)(0x000001e9U) 
                                + __Vtask_preload_input__12__base));
            } else if (VL_LIKELY((("silence"s == vlSelfRef.__Vtask_preload_input__12__scenario)))) {
                VL_READMEM_N(true, 32, 8192, 0, "sw/ai_model/golden_vectors/input_silence.hex"s
                             ,  &(vlSelfRef.__PVT__ai_mem)
                             , __Vtask_preload_input__12__base
                             , ((IData)(0x000001e9U) 
                                + __Vtask_preload_input__12__base));
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: ai_accel_tb.sv:316: Assertion failed in %m: [PRELOAD] bilinmeyen senaryo: %s\n",4, 'M',vlSymsp->name(),"ai_accel_tb.preload_input", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , 'S',&(vlSelfRef.__Vtask_preload_input__12__scenario));
                VL_STOP_MT("verif/tb/ai_accel_tb.sv", 316, "", false);
            }
            VL_WRITEF_NX("[PRELOAD] %s input'u y\303\274klendi (0x30000'den 1960 byte)\n",1
                         , 'S',&(vlSelfRef.__Vtask_preload_input__12__scenario));
            vlSelfRef.__Vtask_csr_write__14__data = 0x00030000U;
            vlSelfRef.__Vtask_csr_write__14__addr = 8U;
            {
                VlForkSync __Vfork_1__sync;
                __Vfork_1__sync.init(2U, vlProcess);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_1__sync);
                co_await __Vfork_1__sync.join(vlProcess, 
                                              "verif/tb/ai_accel_tb.sv", 
                                              237);
            }
            vlSelfRef.__VdlySet__s_bready__v0 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        255);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_bvalid))));
            vlSelfRef.__VdlySet__s_bready__v1 = 1U;
            vlSelfRef.__Vtask_csr_write__15__data = 0x00035a58U;
            vlSelfRef.__Vtask_csr_write__15__addr = 0x0cU;
            {
                VlForkSync __Vfork_2__sync;
                __Vfork_2__sync.init(2U, vlProcess);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
                co_await __Vfork_2__sync.join(vlProcess, 
                                              "verif/tb/ai_accel_tb.sv", 
                                              237);
            }
            vlSelfRef.__VdlySet__s_bready__v2 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        255);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_bvalid))));
            vlSelfRef.__VdlySet__s_bready__v3 = 1U;
            VL_WRITEF_NX("[%s] CTRL.START yaz\304\261l\304\261yor...\n",1
                         , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario));
            vlSelfRef.__Vtask_csr_write__16__data = 1U;
            vlSelfRef.__Vtask_csr_write__16__addr = 0U;
            {
                VlForkSync __Vfork_3__sync;
                __Vfork_3__sync.init(2U, vlProcess);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_3__sync);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_3__sync);
                co_await __Vfork_3__sync.join(vlProcess, 
                                              "verif/tb/ai_accel_tb.sv", 
                                              237);
            }
            vlSelfRef.__VdlySet__s_bready__v4 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        255);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_bvalid))));
            vlSelfRef.__VdlySet__s_bready__v5 = 1U;
            VL_NULL_CHECK(vlSelfRef.__Vtask_run_scenario__10____VDynScope_run_scenario_16, "verif/tb/ai_accel_tb.sv", 396)->__PVT__irq_seen = 0U;
            {
                VlForkSync __Vfork_4__sync;
                __Vfork_4__sync.init(1U, vlProcess);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_4__sync);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_4__sync);
                co_await __Vfork_4__sync.join(vlProcess, 
                                              "verif/tb/ai_accel_tb.sv", 
                                              397);
            }
            vlProcess->disableFork();
            if (VL_UNLIKELY(((1U & (~ VL_NULL_CHECK(vlSelfRef.__Vtask_run_scenario__10____VDynScope_run_scenario_16, "verif/tb/ai_accel_tb.sv", 408)
                                    ->__PVT__irq_seen))))) {
                VL_WRITEF_NX("[%s] FAIL: IRQ 10ms i\303\247inde gelmedi (timeout)\n",1
                             , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario));
                __Vtask_run_scenario__10__local_errors 
                    = ((IData)(1U) + __Vtask_run_scenario__10__local_errors);
                goto __Vlabel0;
            }
            VL_WRITEF_NX("[%s] IRQ al\304\261nd\304\261, sonu\303\247 okunuyor...\n",1
                         , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario));
            __Vtask_csr_read__18__addr = 4U;
            __Vtask_csr_read__18__data = 0;
            Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                               "@(posedge ai_accel_tb.clk)");
            co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                    vlProcess, 
                                                                    "@(posedge ai_accel_tb.clk)", 
                                                                    "verif/tb/ai_accel_tb.sv", 
                                                                    260);
            vlSelfRef.__VdlyVal__s_araddr__v0 = __Vtask_csr_read__18__addr;
            vlSelfRef.__VdlySet__s_araddr__v0 = 1U;
            vlSelfRef.__VdlySet__s_arvalid__v0 = 1U;
            vlSelfRef.__VdlySet__s_rready__v0 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        264);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_arready))));
            vlSelfRef.__VdlySet__s_arvalid__v1 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        266);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_rvalid))));
            __Vtask_csr_read__18__data = vlSelfRef.__PVT__s_rdata;
            Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                               "@(posedge ai_accel_tb.clk)");
            co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                    vlProcess, 
                                                                    "@(posedge ai_accel_tb.clk)", 
                                                                    "verif/tb/ai_accel_tb.sv", 
                                                                    268);
            vlSelfRef.__VdlySet__s_rready__v1 = 1U;
            __Vtask_run_scenario__10__st = __Vtask_csr_read__18__data;
            VL_WRITEF_NX("[%s] STATUS = 0x%08h (BUSY=%0d DONE=%0d RESULT=%0d)\n",5
                         , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario)
                         , '#',32,__Vtask_run_scenario__10__st
                         , '#',1,(1U & __Vtask_run_scenario__10__st)
                         , '#',1,(1U & (__Vtask_run_scenario__10__st 
                                        >> 1U)), '#',4,
                         (0x0000000fU & (__Vtask_run_scenario__10__st 
                                         >> 4U)));
            if (VL_UNLIKELY(((1U & (~ (__Vtask_run_scenario__10__st 
                                       >> 1U)))))) {
                VL_WRITEF_NX("[%s] FAIL: STATUS.DONE 1 de\304\237il\n",1
                             , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario));
                __Vtask_run_scenario__10__local_errors 
                    = ((IData)(1U) + __Vtask_run_scenario__10__local_errors);
            }
            __Vtask_run_scenario__10__rtl_argmax = 
                (0x0000000fU & (__Vtask_run_scenario__10__st 
                                >> 4U));
            __Vfunc_word_idx__19__byte_addr = 0x00035a58U;
            __Vfunc_word_idx__19__Vfuncout = 0U;
            __Vfunc_word_idx__19__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                           (__Vfunc_word_idx__19__byte_addr 
                                                            - (IData)(0x00030000U)), 2U);
            __Vtask_run_scenario__10____VlefCall_0__word_idx 
                = __Vfunc_word_idx__19__Vfuncout;
            __Vtask_run_scenario__10__result_word = vlSelfRef.__PVT__ai_mem
                [(0x00001fffU & __Vtask_run_scenario__10____VlefCall_0__word_idx)];
            __Vtask_run_scenario__10__mem_argmax = 
                (0x000000ffU & __Vtask_run_scenario__10__result_word);
            VL_WRITEF_NX("[%s] mem[0x35A58] = 0x%08h (argmax byte=%0d)\n",3
                         , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario)
                         , '#',32,__Vtask_run_scenario__10__result_word
                         , '#',32,__Vtask_run_scenario__10__mem_argmax);
            if (VL_UNLIKELY(((__Vtask_run_scenario__10__mem_argmax 
                              != __Vtask_run_scenario__10__rtl_argmax)))) {
                VL_WRITEF_NX("[%s] FAIL: STATUS.RESULT (%0d) ile mem.RESULT (%0d) uyu\305\237muyor\n",3
                             , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario)
                             , '#',32,__Vtask_run_scenario__10__rtl_argmax
                             , '#',32,__Vtask_run_scenario__10__mem_argmax);
                __Vtask_run_scenario__10__local_errors 
                    = ((IData)(1U) + __Vtask_run_scenario__10__local_errors);
            }
            vlSelfRef.__Vfunc_read_expected_argmax__20__scenario 
                = vlSelfRef.__Vtask_run_scenario__10__scenario;
            __Vfunc_read_expected_argmax__20__Vfuncout = 0U;
            for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
                __Vfunc_read_expected_argmax__20__tmp_mem[__Vi0] = 0;
            }
            for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
                __Vfunc_read_expected_argmax__20__b[__Vi0] = 0;
            }
            __Vfunc_read_expected_argmax__20__argmax = 0U;
            __Vfunc_read_expected_argmax__20__best = 0;
            if (VL_UNLIKELY((("yes"s == vlSelfRef.__Vfunc_read_expected_argmax__20__scenario)))) {
                VL_READMEM_N(true, 32, 1, 0, "sw/ai_model/golden_vectors/output_yes.hex"s
                             ,  &(__Vfunc_read_expected_argmax__20__tmp_mem)
                             , 0, ~0ULL);
            } else if (VL_UNLIKELY((("no"s == vlSelfRef.__Vfunc_read_expected_argmax__20__scenario)))) {
                VL_READMEM_N(true, 32, 1, 0, "sw/ai_model/golden_vectors/output_no.hex"s
                             ,  &(__Vfunc_read_expected_argmax__20__tmp_mem)
                             , 0, ~0ULL);
            } else if (VL_UNLIKELY((("unknown"s == vlSelfRef.__Vfunc_read_expected_argmax__20__scenario)))) {
                VL_READMEM_N(true, 32, 1, 0, "sw/ai_model/golden_vectors/output_unknown.hex"s
                             ,  &(__Vfunc_read_expected_argmax__20__tmp_mem)
                             , 0, ~0ULL);
            } else if (VL_LIKELY((("silence"s == vlSelfRef.__Vfunc_read_expected_argmax__20__scenario)))) {
                VL_READMEM_N(true, 32, 1, 0, "sw/ai_model/golden_vectors/output_silence.hex"s
                             ,  &(__Vfunc_read_expected_argmax__20__tmp_mem)
                             , 0, ~0ULL);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: ai_accel_tb.sv:340: Assertion failed in %m: [GOLDEN] bilinmeyen senaryo: %s\n",4, 'M',vlSymsp->name(),"ai_accel_tb.read_expected_argmax", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , 'S',&(vlSelfRef.__Vfunc_read_expected_argmax__20__scenario));
                VL_STOP_MT("verif/tb/ai_accel_tb.sv", 340, "", false);
            }
            __Vfunc_read_expected_argmax__20__b[0U] 
                = (0x000000ffU & __Vfunc_read_expected_argmax__20__tmp_mem[0U]);
            __Vfunc_read_expected_argmax__20__b[1U] 
                = (0x000000ffU & (__Vfunc_read_expected_argmax__20__tmp_mem[0U] 
                                  >> 8U));
            __Vfunc_read_expected_argmax__20__b[2U] 
                = (0x000000ffU & (__Vfunc_read_expected_argmax__20__tmp_mem[0U] 
                                  >> 0x10U));
            __Vfunc_read_expected_argmax__20__b[3U] 
                = (__Vfunc_read_expected_argmax__20__tmp_mem[0U] 
                   >> 0x18U);
            __Vfunc_read_expected_argmax__20__argmax = 0U;
            __Vfunc_read_expected_argmax__20__best 
                = __Vfunc_read_expected_argmax__20__b[0U];
            if (VL_GTS_III(8, __Vfunc_read_expected_argmax__20__b[1U], (IData)(__Vfunc_read_expected_argmax__20__best))) {
                __Vfunc_read_expected_argmax__20__best 
                    = __Vfunc_read_expected_argmax__20__b[1U];
                __Vfunc_read_expected_argmax__20__argmax = 1U;
            }
            if (VL_GTS_III(8, __Vfunc_read_expected_argmax__20__b[2U], (IData)(__Vfunc_read_expected_argmax__20__best))) {
                __Vfunc_read_expected_argmax__20__best 
                    = __Vfunc_read_expected_argmax__20__b[2U];
                __Vfunc_read_expected_argmax__20__argmax = 2U;
            }
            if (VL_GTS_III(8, __Vfunc_read_expected_argmax__20__b[3U], (IData)(__Vfunc_read_expected_argmax__20__best))) {
                __Vfunc_read_expected_argmax__20__best 
                    = __Vfunc_read_expected_argmax__20__b[3U];
                __Vfunc_read_expected_argmax__20__argmax = 3U;
            }
            VL_WRITEF_NX("[GOLDEN-%s] fc_out = [%0d, %0d, %0d, %0d] \342\206\222 argmax=%0d\n",6
                         , 'S',&(vlSelfRef.__Vfunc_read_expected_argmax__20__scenario)
                         , '~',8,__Vfunc_read_expected_argmax__20__b[0U]
                         , '~',8,__Vfunc_read_expected_argmax__20__b[1U]
                         , '~',8,__Vfunc_read_expected_argmax__20__b[2U]
                         , '~',8,__Vfunc_read_expected_argmax__20__b[3U]
                         , '#',32,__Vfunc_read_expected_argmax__20__argmax);
            __Vfunc_read_expected_argmax__20__Vfuncout 
                = __Vfunc_read_expected_argmax__20__argmax;
            __Vtask_run_scenario__10__expected_argmax 
                = __Vfunc_read_expected_argmax__20__Vfuncout;
            if ((__Vtask_run_scenario__10__rtl_argmax 
                 == __Vtask_run_scenario__10__expected_argmax)) {
                VL_WRITEF_NX("[%s] PASS: rtl_argmax=%0d, expected=%0d \342\234\223\n",3
                             , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario)
                             , '#',32,__Vtask_run_scenario__10__rtl_argmax
                             , '#',32,__Vtask_run_scenario__10__expected_argmax);
            } else {
                VL_WRITEF_NX("[%s] FAIL: rtl_argmax=%0d, expected=%0d \342\234\227\n",3
                             , 'S',&(vlSelfRef.__Vtask_run_scenario__10__scenario)
                             , '#',32,__Vtask_run_scenario__10__rtl_argmax
                             , '#',32,__Vtask_run_scenario__10__expected_argmax);
                __Vtask_run_scenario__10__local_errors 
                    = ((IData)(1U) + __Vtask_run_scenario__10__local_errors);
            }
            __Vtask_run_scenario__10__unnamedblk3__DOT__ce = 0U;
            vlSelfRef.__Vtask_verify_conv_out__21__scenario 
                = vlSelfRef.__Vtask_run_scenario__10__scenario;
            __Vtask_verify_conv_out__21__conv_errors = 0U;
            for (int __Vi0 = 0; __Vi0 < 1000; ++__Vi0) {
                vlSelf->__Vtask_verify_conv_out__21__golden_conv[__Vi0] = 0;
            }
            __Vtask_verify_conv_out__21__got = 0;
            __Vtask_verify_conv_out__21__base = 0U;
            __Vtask_verify_conv_out__21__first_mismatch = 0U;
            __Vtask_verify_conv_out__21__conv_errors = 0U;
            __Vtask_verify_conv_out__21__first_mismatch = 0xffffffffU;
            if (VL_UNLIKELY((("yes"s == vlSelfRef.__Vtask_verify_conv_out__21__scenario)))) {
                VL_READMEM_N(true, 32, 1000, 0, "sw/ai_model/golden_vectors/conv_out_yes.hex"s
                             ,  &(vlSelfRef.__Vtask_verify_conv_out__21__golden_conv)
                             , 0, ~0ULL);
            } else if (VL_UNLIKELY((("no"s == vlSelfRef.__Vtask_verify_conv_out__21__scenario)))) {
                VL_READMEM_N(true, 32, 1000, 0, "sw/ai_model/golden_vectors/conv_out_no.hex"s
                             ,  &(vlSelfRef.__Vtask_verify_conv_out__21__golden_conv)
                             , 0, ~0ULL);
            } else if (VL_UNLIKELY((("unknown"s == vlSelfRef.__Vtask_verify_conv_out__21__scenario)))) {
                VL_READMEM_N(true, 32, 1000, 0, "sw/ai_model/golden_vectors/conv_out_unknown.hex"s
                             ,  &(vlSelfRef.__Vtask_verify_conv_out__21__golden_conv)
                             , 0, ~0ULL);
            } else if (VL_LIKELY((("silence"s == vlSelfRef.__Vtask_verify_conv_out__21__scenario)))) {
                VL_READMEM_N(true, 32, 1000, 0, "sw/ai_model/golden_vectors/conv_out_silence.hex"s
                             ,  &(vlSelfRef.__Vtask_verify_conv_out__21__golden_conv)
                             , 0, ~0ULL);
            } else {
                VL_WRITEF_NX("[%0t] %%Fatal: ai_accel_tb.sv:480: Assertion failed in %m: [CONVDIFF] bilinmeyen senaryo: %s\n",4, 'M',vlSymsp->name(),"ai_accel_tb.verify_conv_out", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , 'S',&(vlSelfRef.__Vtask_verify_conv_out__21__scenario));
                VL_STOP_MT("verif/tb/ai_accel_tb.sv", 480, "", false);
            }
            __Vfunc_word_idx__22__byte_addr = 0x000307a8U;
            __Vfunc_word_idx__22__Vfuncout = 0U;
            __Vfunc_word_idx__22__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                           (__Vfunc_word_idx__22__byte_addr 
                                                            - (IData)(0x00030000U)), 2U);
            __Vtask_verify_conv_out__21__base = __Vfunc_word_idx__22__Vfuncout;
            __Vtask_verify_conv_out__21__unnamedblk4__DOT__i = 0U;
            __Vtask_verify_conv_out__21__unnamedblk4__DOT__i = 0U;
            while (VL_GTS_III(32, 0x000003e8U, __Vtask_verify_conv_out__21__unnamedblk4__DOT__i)) {
                __Vtask_verify_conv_out__21__got = vlSelfRef.__PVT__ai_mem
                    [(0x00001fffU & (__Vtask_verify_conv_out__21__base 
                                     + __Vtask_verify_conv_out__21__unnamedblk4__DOT__i))];
                if ((__Vtask_verify_conv_out__21__got 
                     != ((0x03e7U >= (0x000003ffU & __Vtask_verify_conv_out__21__unnamedblk4__DOT__i))
                          ? vlSelfRef.__Vtask_verify_conv_out__21__golden_conv
                         [(0x000003ffU & __Vtask_verify_conv_out__21__unnamedblk4__DOT__i)]
                          : 0U))) {
                    __Vtask_verify_conv_out__21__conv_errors 
                        = ((IData)(1U) + __Vtask_verify_conv_out__21__conv_errors);
                    if (VL_GTS_III(32, 0U, __Vtask_verify_conv_out__21__first_mismatch)) {
                        __Vtask_verify_conv_out__21__first_mismatch 
                            = __Vtask_verify_conv_out__21__unnamedblk4__DOT__i;
                    }
                }
                __Vtask_verify_conv_out__21__unnamedblk4__DOT__i 
                    = ((IData)(1U) + __Vtask_verify_conv_out__21__unnamedblk4__DOT__i);
            }
            if ((0U == __Vtask_verify_conv_out__21__conv_errors)) {
                VL_WRITEF_NX("[%s] CONV_OUT tensor diff: PASS (1000/1000 word eslesti)\n",1
                             , 'S',&(vlSelfRef.__Vtask_verify_conv_out__21__scenario));
            } else {
                VL_WRITEF_NX("[%s] CONV_OUT tensor diff: FAIL (%0d/1000 farkli, ilk fark word[%0d] got=0x%08h exp=0x%08h)\n",5
                             , 'S',&(vlSelfRef.__Vtask_verify_conv_out__21__scenario)
                             , '~',32,__Vtask_verify_conv_out__21__conv_errors
                             , '~',32,__Vtask_verify_conv_out__21__first_mismatch
                             , '#',32,vlSelfRef.__PVT__ai_mem
                             [(0x00001fffU & (__Vtask_verify_conv_out__21__base 
                                              + __Vtask_verify_conv_out__21__first_mismatch))]
                             , '#',32,((0x03e7U >= 
                                        (0x000003ffU 
                                         & __Vtask_verify_conv_out__21__first_mismatch))
                                        ? vlSelfRef.__Vtask_verify_conv_out__21__golden_conv
                                       [(0x000003ffU 
                                         & __Vtask_verify_conv_out__21__first_mismatch)]
                                        : 0U));
            }
            __Vtask_run_scenario__10__unnamedblk3__DOT__ce 
                = __Vtask_verify_conv_out__21__conv_errors;
            __Vtask_run_scenario__10__local_errors 
                = (__Vtask_run_scenario__10__local_errors 
                   + __Vtask_run_scenario__10__unnamedblk3__DOT__ce);
            vlSelfRef.__Vtask_csr_write__23__data = 2U;
            vlSelfRef.__Vtask_csr_write__23__addr = 0U;
            {
                VlForkSync __Vfork_5__sync;
                __Vfork_5__sync.init(2U, vlProcess);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_5__sync);
                Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_5__sync);
                co_await __Vfork_5__sync.join(vlProcess, 
                                              "verif/tb/ai_accel_tb.sv", 
                                              237);
            }
            vlSelfRef.__VdlySet__s_bready__v6 = 1U;
            do {
                Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                                   "@(posedge ai_accel_tb.clk)");
                co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                        vlProcess, 
                                                                        "@(posedge ai_accel_tb.clk)", 
                                                                        "verif/tb/ai_accel_tb.sv", 
                                                                        255);
            } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_bvalid))));
            vlSelfRef.__VdlySet__s_bready__v7 = 1U;
            __Vlabel0: ;
        }
        vlSelfRef.__PVT__unnamedblk6__DOT__e = __Vtask_run_scenario__10__local_errors;
        vlSelfRef.__PVT__total_errors = (vlSelfRef.__PVT__total_errors 
                                         + vlSelfRef.__PVT__unnamedblk6__DOT__e);
        __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s 
            = ((IData)(1U) + __PVT__unnamedblk6__DOT__unnamedblk7__DOT__s);
    }
    if ((0U == vlSelfRef.__PVT__total_errors)) {
        VL_WRITEF_NX("\n[ADIM E] PASS \342\200\224 4/4 senaryo argmax + conv_out tensor diff TEMIZ. Min #4 fazlasiyla kapandi.\n\n",0);
    } else {
        VL_WRITEF_NX("\n[ADIM E] FAIL: toplam %0d hata\n\n",1
                     , '~',32,vlSelfRef.__PVT__total_errors);
    }
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000000000186a0ULL, 
                                            vlProcess, 
                                            "verif/tb/ai_accel_tb.sv", 
                                            577);
    vlProcess->disableFork();
    VL_FINISH_MT("verif/tb/ai_accel_tb.sv", 578, "");
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_5__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            246);
    vlSelfRef.__VdlyVal__s_wdata__v3 = vlSelfRef.__Vtask_csr_write__23__data;
    vlSelfRef.__VdlySet__s_wdata__v3 = 1U;
    vlSelfRef.__VdlySet__s_wvalid__v6 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                250);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_wready))));
    vlSelfRef.__VdlySet__s_wvalid__v7 = 1U;
    __Vfork_5__sync.done("verif/tb/ai_accel_tb.sv", 
                         245);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_5__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_5__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            239);
    vlSelfRef.__VdlyVal__s_awaddr__v3 = vlSelfRef.__Vtask_csr_write__23__addr;
    vlSelfRef.__VdlySet__s_awaddr__v3 = 1U;
    vlSelfRef.__VdlySet__s_awvalid__v6 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                242);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_awready))));
    vlSelfRef.__VdlySet__s_awvalid__v7 = 1U;
    __Vfork_5__sync.done("verif/tb/ai_accel_tb.sv", 
                         238);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_4__sync.onKill(vlProcess);
    co_await vlSymsp->TOP.__VdlySched.delay(0x00000002540be400ULL, 
                                            vlProcess, 
                                            "verif/tb/ai_accel_tb.sv", 
                                            403);
    __Vfork_4__sync.done("verif/tb/ai_accel_tb.sv", 
                         402);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vai_accel_tb___024root____VbeforeTrig_h255dd428__0(Vai_accel_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_4__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vai_accel_tb_ai_accel_tb__03a__03a__VDynScope_16> __Vtask___VforkTask_0__17____VDynScope_run_scenario_16;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_4__sync.onKill(vlProcess);
    __Vtask___VforkTask_0__17____VDynScope_run_scenario_16 
        = vlSelfRef.__Vtask_run_scenario__10____VDynScope_run_scenario_16;
    while ((1U & (~ (IData)(vlSelfRef.__PVT__dut__DOT__status_done)))) {
        Vai_accel_tb___024root____VbeforeTrig_h255dd428__0((&vlSymsp->TOP), 
                                                           "@( ai_accel_tb.dut.status_done)");
        co_await vlSymsp->TOP.__VtrigSched_h255dd428__0.trigger(1U, 
                                                                vlProcess, 
                                                                "@( ai_accel_tb.dut.status_done)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                399);
    }
    VL_NULL_CHECK(__Vtask___VforkTask_0__17____VDynScope_run_scenario_16, "verif/tb/ai_accel_tb.sv", 400)->__PVT__irq_seen = 1U;
    __Vfork_4__sync.done("verif/tb/ai_accel_tb.sv", 
                         398);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_3__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            246);
    vlSelfRef.__VdlyVal__s_wdata__v2 = vlSelfRef.__Vtask_csr_write__16__data;
    vlSelfRef.__VdlySet__s_wdata__v2 = 1U;
    vlSelfRef.__VdlySet__s_wvalid__v4 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                250);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_wready))));
    vlSelfRef.__VdlySet__s_wvalid__v5 = 1U;
    __Vfork_3__sync.done("verif/tb/ai_accel_tb.sv", 
                         245);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_3__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_3__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            239);
    vlSelfRef.__VdlyVal__s_awaddr__v2 = vlSelfRef.__Vtask_csr_write__16__addr;
    vlSelfRef.__VdlySet__s_awaddr__v2 = 1U;
    vlSelfRef.__VdlySet__s_awvalid__v4 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                242);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_awready))));
    vlSelfRef.__VdlySet__s_awvalid__v5 = 1U;
    __Vfork_3__sync.done("verif/tb/ai_accel_tb.sv", 
                         238);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            246);
    vlSelfRef.__VdlyVal__s_wdata__v1 = vlSelfRef.__Vtask_csr_write__15__data;
    vlSelfRef.__VdlySet__s_wdata__v1 = 1U;
    vlSelfRef.__VdlySet__s_wvalid__v2 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                250);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_wready))));
    vlSelfRef.__VdlySet__s_wvalid__v3 = 1U;
    __Vfork_2__sync.done("verif/tb/ai_accel_tb.sv", 
                         245);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_2__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            239);
    vlSelfRef.__VdlyVal__s_awaddr__v1 = vlSelfRef.__Vtask_csr_write__15__addr;
    vlSelfRef.__VdlySet__s_awaddr__v1 = 1U;
    vlSelfRef.__VdlySet__s_awvalid__v2 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                242);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_awready))));
    vlSelfRef.__VdlySet__s_awvalid__v3 = 1U;
    __Vfork_2__sync.done("verif/tb/ai_accel_tb.sv", 
                         238);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__1(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            246);
    vlSelfRef.__VdlyVal__s_wdata__v0 = vlSelfRef.__Vtask_csr_write__14__data;
    vlSelfRef.__VdlySet__s_wdata__v0 = 1U;
    vlSelfRef.__VdlySet__s_wvalid__v0 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                250);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_wready))));
    vlSelfRef.__VdlySet__s_wvalid__v1 = 1U;
    __Vfork_1__sync.done("verif/tb/ai_accel_tb.sv", 
                         245);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__0(Vai_accel_tb_ai_accel_tb* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__0____Vfork_1__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_1__sync.onKill(vlProcess);
    Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                       "@(posedge ai_accel_tb.clk)");
    co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                            vlProcess, 
                                                            "@(posedge ai_accel_tb.clk)", 
                                                            "verif/tb/ai_accel_tb.sv", 
                                                            239);
    vlSelfRef.__VdlyVal__s_awaddr__v0 = vlSelfRef.__Vtask_csr_write__14__addr;
    vlSelfRef.__VdlySet__s_awaddr__v0 = 1U;
    vlSelfRef.__VdlySet__s_awvalid__v0 = 1U;
    do {
        Vai_accel_tb___024root____VbeforeTrig_h83f6c349__0((&vlSymsp->TOP), 
                                                           "@(posedge ai_accel_tb.clk)");
        co_await vlSymsp->TOP.__VtrigSched_h83f6c349__0.trigger(0U, 
                                                                vlProcess, 
                                                                "@(posedge ai_accel_tb.clk)", 
                                                                "verif/tb/ai_accel_tb.sv", 
                                                                242);
    } while ((1U & (~ (IData)(vlSelfRef.__PVT__s_awready))));
    vlSelfRef.__VdlySet__s_awvalid__v1 = 1U;
    __Vfork_1__sync.done("verif/tb/ai_accel_tb.sv", 
                         238);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__1(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0x0000000ba43b7400ULL, 
                                            nullptr, 
                                            "verif/tb/ai_accel_tb.sv", 
                                            583);
    VL_WRITEF_NX("[WATCHDOG] 50ms genel timeout, $finish\n",0);
    VL_FINISH_MT("verif/tb/ai_accel_tb.sv", 585, "");
    co_return;
}

VlCoroutine Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__2(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___eval_initial__TOP__ai_accel_tb__Vtiming__2\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSymsp->TOP.__VdlySched.delay(0x0000000000001388ULL, 
                                                nullptr, 
                                                "verif/tb/ai_accel_tb.sv", 
                                                24);
        vlSelfRef.__PVT__clk = (1U & (~ (IData)(vlSelfRef.__PVT__clk)));
    }
    co_return;
}

void Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__0(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__0\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vfunc_word_idx__0__Vfuncout;
    __Vfunc_word_idx__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_word_idx__0__byte_addr;
    __Vfunc_word_idx__0__byte_addr = 0;
    IData/*31:0*/ __Vfunc_word_idx__1__byte_addr;
    __Vfunc_word_idx__1__byte_addr = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__requant_no_relu__24__v;
    __Vfunc_dut__DOT__requant_no_relu__24__v = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__requant_no_relu__24__shifted;
    __Vfunc_dut__DOT__requant_no_relu__24__shifted = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__read_conv_out_byte__25__Vfuncout;
    __Vfunc_dut__DOT__read_conv_out_byte__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_conv_out_byte__25__i;
    __Vfunc_dut__DOT__read_conv_out_byte__25__i = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__get_byte_from_word__26__Vfuncout;
    __Vfunc_dut__DOT__get_byte_from_word__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__get_byte_from_word__26__word;
    __Vfunc_dut__DOT__get_byte_from_word__26__word = 0;
    CData/*1:0*/ __Vfunc_dut__DOT__get_byte_from_word__26__byte_off;
    __Vfunc_dut__DOT__get_byte_from_word__26__byte_off = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__get_byte_from_word__27__Vfuncout;
    __Vfunc_dut__DOT__get_byte_from_word__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__get_byte_from_word__27__word;
    __Vfunc_dut__DOT__get_byte_from_word__27__word = 0;
    CData/*1:0*/ __Vfunc_dut__DOT__get_byte_from_word__27__byte_off;
    __Vfunc_dut__DOT__get_byte_from_word__27__byte_off = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__requant_relu__28__Vfuncout;
    __Vfunc_dut__DOT__requant_relu__28__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__requant_relu__28__v;
    __Vfunc_dut__DOT__requant_relu__28__v = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__requant_relu__28__relu_v;
    __Vfunc_dut__DOT__requant_relu__28__relu_v = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__requant_relu__28__shifted;
    __Vfunc_dut__DOT__requant_relu__28__shifted = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__r;
    __Vtask_dut__DOT__write_conv_out_byte__29__r = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__c;
    __Vtask_dut__DOT__write_conv_out_byte__29__c = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__f;
    __Vtask_dut__DOT__write_conv_out_byte__29__f = 0;
    CData/*7:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__val;
    __Vtask_dut__DOT__write_conv_out_byte__29__val = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29____Vlvbound_h06b16490__0;
    __Vtask_dut__DOT__write_conv_out_byte__29____Vlvbound_h06b16490__0 = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__byte_idx;
    __Vtask_dut__DOT__write_conv_out_byte__29__byte_idx = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__word_idx;
    __Vtask_dut__DOT__write_conv_out_byte__29__word_idx = 0;
    CData/*1:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__byte_off;
    __Vtask_dut__DOT__write_conv_out_byte__29__byte_off = 0;
    IData/*31:0*/ __Vtask_dut__DOT__write_conv_out_byte__29__w;
    __Vtask_dut__DOT__write_conv_out_byte__29__w = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout;
    __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_input_pixel__30__ir;
    __Vfunc_dut__DOT__read_input_pixel__30__ir = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_input_pixel__30__ic;
    __Vfunc_dut__DOT__read_input_pixel__30__ic = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_input_pixel__30__byte_idx;
    __Vfunc_dut__DOT__read_input_pixel__30__byte_idx = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__get_byte_from_word__31__Vfuncout;
    __Vfunc_dut__DOT__get_byte_from_word__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__get_byte_from_word__31__word;
    __Vfunc_dut__DOT__get_byte_from_word__31__word = 0;
    CData/*1:0*/ __Vfunc_dut__DOT__get_byte_from_word__31__byte_off;
    __Vfunc_dut__DOT__get_byte_from_word__31__byte_off = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__read_conv_weight__32__Vfuncout;
    __Vfunc_dut__DOT__read_conv_weight__32__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_conv_weight__32__f;
    __Vfunc_dut__DOT__read_conv_weight__32__f = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_conv_weight__32__kh;
    __Vfunc_dut__DOT__read_conv_weight__32__kh = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_conv_weight__32__kw;
    __Vfunc_dut__DOT__read_conv_weight__32__kw = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__read_conv_weight__32__byte_idx;
    __Vfunc_dut__DOT__read_conv_weight__32__byte_idx = 0;
    CData/*7:0*/ __Vfunc_dut__DOT__get_byte_from_word__33__Vfuncout;
    __Vfunc_dut__DOT__get_byte_from_word__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_dut__DOT__get_byte_from_word__33__word;
    __Vfunc_dut__DOT__get_byte_from_word__33__word = 0;
    CData/*1:0*/ __Vfunc_dut__DOT__get_byte_from_word__33__byte_off;
    __Vfunc_dut__DOT__get_byte_from_word__33__byte_off = 0;
    CData/*0:0*/ __Vdly__m_awready;
    __Vdly__m_awready = 0;
    CData/*0:0*/ __Vdly__m_wready;
    __Vdly__m_wready = 0;
    CData/*0:0*/ __Vdly__m_arready;
    __Vdly__m_arready = 0;
    CData/*2:0*/ __Vdly__slv;
    __Vdly__slv = 0;
    CData/*0:0*/ __Vdly__m_bvalid;
    __Vdly__m_bvalid = 0;
    CData/*0:0*/ __Vdly__m_rvalid;
    __Vdly__m_rvalid = 0;
    IData/*31:0*/ __Vdly__m_rdata;
    __Vdly__m_rdata = 0;
    IData/*31:0*/ __Vdly__dut__DOT__mac_acc;
    __Vdly__dut__DOT__mac_acc = 0;
    CData/*0:0*/ __Vdly__dut__DOT__mem_done;
    __Vdly__dut__DOT__mem_done = 0;
    CData/*2:0*/ __Vdly__dut__DOT__mem_state;
    __Vdly__dut__DOT__mem_state = 0;
    IData/*31:0*/ __Vdly__dut__DOT__mem_rdata;
    __Vdly__dut__DOT__mem_rdata = 0;
    CData/*4:0*/ __Vdly__dut__DOT__state;
    __Vdly__dut__DOT__state = 0;
    CData/*0:0*/ __Vdly__dut__DOT__status_busy;
    __Vdly__dut__DOT__status_busy = 0;
    IData/*31:0*/ __Vdly__dut__DOT__fc_w_row_base;
    __Vdly__dut__DOT__fc_w_row_base = 0;
    SData/*11:0*/ __Vdly__dut__DOT__in_idx;
    __Vdly__dut__DOT__in_idx = 0;
    SData/*9:0*/ __Vdly__dut__DOT__load_idx;
    __Vdly__dut__DOT__load_idx = 0;
    CData/*4:0*/ __Vdly__dut__DOT__c_idx;
    __Vdly__dut__DOT__c_idx = 0;
    CData/*4:0*/ __Vdly__dut__DOT__r_idx;
    __Vdly__dut__DOT__r_idx = 0;
    CData/*2:0*/ __Vdly__dut__DOT__f_idx;
    __Vdly__dut__DOT__f_idx = 0;
    CData/*2:0*/ __Vdly__dut__DOT__kw_idx;
    __Vdly__dut__DOT__kw_idx = 0;
    CData/*3:0*/ __Vdly__dut__DOT__kh_idx;
    __Vdly__dut__DOT__kh_idx = 0;
    CData/*0:0*/ __Vdly__s_awready;
    __Vdly__s_awready = 0;
    CData/*0:0*/ __Vdly__s_wready;
    __Vdly__s_wready = 0;
    CData/*4:0*/ __Vdly__dut__DOT__wr_addr_q;
    __Vdly__dut__DOT__wr_addr_q = 0;
    CData/*0:0*/ __Vdly__s_bvalid;
    __Vdly__s_bvalid = 0;
    CData/*0:0*/ __Vdly__s_arready;
    __Vdly__s_arready = 0;
    CData/*0:0*/ __Vdly__s_rvalid;
    __Vdly__s_rvalid = 0;
    CData/*7:0*/ __VdlyVal__ai_mem__v0;
    __VdlyVal__ai_mem__v0 = 0;
    SData/*12:0*/ __VdlyDim0__ai_mem__v0;
    __VdlyDim0__ai_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__ai_mem__v0;
    __VdlySet__ai_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__ai_mem__v1;
    __VdlyVal__ai_mem__v1 = 0;
    SData/*12:0*/ __VdlyDim0__ai_mem__v1;
    __VdlyDim0__ai_mem__v1 = 0;
    CData/*0:0*/ __VdlySet__ai_mem__v1;
    __VdlySet__ai_mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__ai_mem__v2;
    __VdlyVal__ai_mem__v2 = 0;
    SData/*12:0*/ __VdlyDim0__ai_mem__v2;
    __VdlyDim0__ai_mem__v2 = 0;
    CData/*0:0*/ __VdlySet__ai_mem__v2;
    __VdlySet__ai_mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__ai_mem__v3;
    __VdlyVal__ai_mem__v3 = 0;
    SData/*12:0*/ __VdlyDim0__ai_mem__v3;
    __VdlyDim0__ai_mem__v3 = 0;
    CData/*0:0*/ __VdlySet__ai_mem__v3;
    __VdlySet__ai_mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__dut__DOT__fc_out_mem__v0;
    __VdlyVal__dut__DOT__fc_out_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dut__DOT__fc_out_mem__v0;
    __VdlyDim0__dut__DOT__fc_out_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__fc_out_mem__v0;
    __VdlySet__dut__DOT__fc_out_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__dut__DOT__fc_bias_mem__v0;
    __VdlyVal__dut__DOT__fc_bias_mem__v0 = 0;
    CData/*1:0*/ __VdlyDim0__dut__DOT__fc_bias_mem__v0;
    __VdlyDim0__dut__DOT__fc_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__fc_bias_mem__v0;
    __VdlySet__dut__DOT__fc_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__dut__DOT__input_mem__v0;
    __VdlyVal__dut__DOT__input_mem__v0 = 0;
    SData/*8:0*/ __VdlyDim0__dut__DOT__input_mem__v0;
    __VdlyDim0__dut__DOT__input_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__input_mem__v0;
    __VdlySet__dut__DOT__input_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__dut__DOT__conv_bias_mem__v0;
    __VdlyVal__dut__DOT__conv_bias_mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__dut__DOT__conv_bias_mem__v0;
    __VdlyDim0__dut__DOT__conv_bias_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__conv_bias_mem__v0;
    __VdlySet__dut__DOT__conv_bias_mem__v0 = 0;
    IData/*31:0*/ __VdlyVal__dut__DOT__conv_w_mem__v0;
    __VdlyVal__dut__DOT__conv_w_mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__dut__DOT__conv_w_mem__v0;
    __VdlyDim0__dut__DOT__conv_w_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__dut__DOT__conv_w_mem__v0;
    __VdlySet__dut__DOT__conv_w_mem__v0 = 0;
    // Body
    __Vdly__s_awready = vlSelfRef.__PVT__s_awready;
    __Vdly__s_wready = vlSelfRef.__PVT__s_wready;
    __Vdly__dut__DOT__wr_addr_q = vlSelfRef.__PVT__dut__DOT__wr_addr_q;
    __Vdly__s_bvalid = vlSelfRef.__PVT__s_bvalid;
    __Vdly__dut__DOT__state = vlSelfRef.__PVT__dut__DOT__state;
    __Vdly__dut__DOT__status_busy = vlSelfRef.__PVT__dut__DOT__status_busy;
    __Vdly__dut__DOT__fc_w_row_base = vlSelfRef.__PVT__dut__DOT__fc_w_row_base;
    __Vdly__dut__DOT__in_idx = vlSelfRef.__PVT__dut__DOT__in_idx;
    __Vdly__dut__DOT__load_idx = vlSelfRef.__PVT__dut__DOT__load_idx;
    __Vdly__dut__DOT__c_idx = vlSelfRef.__PVT__dut__DOT__c_idx;
    __Vdly__dut__DOT__r_idx = vlSelfRef.__PVT__dut__DOT__r_idx;
    __Vdly__dut__DOT__f_idx = vlSelfRef.__PVT__dut__DOT__f_idx;
    __Vdly__dut__DOT__kw_idx = vlSelfRef.__PVT__dut__DOT__kw_idx;
    __Vdly__dut__DOT__kh_idx = vlSelfRef.__PVT__dut__DOT__kh_idx;
    __VdlySet__dut__DOT__fc_out_mem__v0 = 0U;
    __VdlySet__dut__DOT__fc_bias_mem__v0 = 0U;
    __VdlySet__dut__DOT__input_mem__v0 = 0U;
    __VdlySet__dut__DOT__conv_bias_mem__v0 = 0U;
    __VdlySet__dut__DOT__conv_w_mem__v0 = 0U;
    __Vdly__s_arready = vlSelfRef.__PVT__s_arready;
    __Vdly__s_rvalid = vlSelfRef.__PVT__s_rvalid;
    __Vdly__dut__DOT__mac_acc = vlSelfRef.__PVT__dut__DOT__mac_acc;
    __Vdly__dut__DOT__mem_done = vlSelfRef.__PVT__dut__DOT__mem_done;
    __Vdly__dut__DOT__mem_state = vlSelfRef.__PVT__dut__DOT__mem_state;
    __Vdly__dut__DOT__mem_rdata = vlSelfRef.__PVT__dut__DOT__mem_rdata;
    __Vdly__m_awready = vlSelfRef.__PVT__m_awready;
    __Vdly__m_wready = vlSelfRef.__PVT__m_wready;
    __Vdly__m_arready = vlSelfRef.__PVT__m_arready;
    __Vdly__slv = vlSelfRef.__PVT__slv;
    __Vdly__m_bvalid = vlSelfRef.__PVT__m_bvalid;
    __Vdly__m_rvalid = vlSelfRef.__PVT__m_rvalid;
    __Vdly__m_rdata = vlSelfRef.__PVT__m_rdata;
    __VdlySet__ai_mem__v0 = 0U;
    __VdlySet__ai_mem__v1 = 0U;
    __VdlySet__ai_mem__v2 = 0U;
    __VdlySet__ai_mem__v3 = 0U;
    if (vlSelfRef.__PVT__rst_n) {
        if (vlSelfRef.__PVT__dut__DOT__mac_clear) {
            __Vdly__dut__DOT__mac_acc = 0U;
        } else if (vlSelfRef.__PVT__dut__DOT__mac_en) {
            __Vdly__dut__DOT__mac_acc = (vlSelfRef.__PVT__dut__DOT__mac_acc 
                                         + VL_MULS_III(32, 
                                                       VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__dut__DOT__mac_a)), 
                                                       VL_EXTENDS_II(32,8, (IData)(vlSelfRef.__PVT__dut__DOT__mac_b))));
        }
        __Vdly__s_arready = ((IData)(vlSelfRef.__PVT__s_arvalid) 
                             & (~ (IData)(vlSelfRef.__PVT__s_arready)));
        if ((((IData)(vlSelfRef.__PVT__s_arready) & (IData)(vlSelfRef.__PVT__s_arvalid)) 
             & (~ (IData)(vlSelfRef.__PVT__s_rvalid)))) {
            __Vdly__s_rvalid = 1U;
            vlSelfRef.__PVT__s_rdata = ((0x00000010U 
                                         & vlSelfRef.__PVT__s_araddr)
                                         ? 0U : ((8U 
                                                  & vlSelfRef.__PVT__s_araddr)
                                                  ? 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__s_araddr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__s_araddr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__s_araddr)
                                                     ? 0U
                                                     : vlSelfRef.__PVT__dut__DOT__csr_out_addr))
                                                   : 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__s_araddr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__s_araddr)
                                                     ? 0U
                                                     : vlSelfRef.__PVT__dut__DOT__csr_data_addr)))
                                                  : 
                                                 ((4U 
                                                   & vlSelfRef.__PVT__s_araddr)
                                                   ? 
                                                  ((2U 
                                                    & vlSelfRef.__PVT__s_araddr)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelfRef.__PVT__s_araddr)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelfRef.__PVT__dut__DOT__status_result) 
                                                      << 4U) 
                                                     | (((IData)(vlSelfRef.__PVT__dut__DOT__status_done) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__dut__DOT__status_busy)))))
                                                   : 0U)));
        } else if (((IData)(vlSelfRef.__PVT__s_rvalid) 
                    & (IData)(vlSelfRef.__PVT__s_rready))) {
            __Vdly__s_rvalid = 0U;
        }
        vlSelfRef.__PVT__s_arready = __Vdly__s_arready;
        vlSelfRef.__PVT__s_rvalid = __Vdly__s_rvalid;
        __Vdly__m_awready = 0U;
        __Vdly__m_wready = 0U;
        __Vdly__m_arready = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__slv))) {
            __Vdly__slv = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__slv))) {
            if ((1U & (IData)(vlSelfRef.__PVT__slv))) {
                __Vdly__m_bvalid = 1U;
                if (((IData)(vlSelfRef.__PVT__m_bvalid) 
                     & (IData)(vlSelfRef.__PVT__m_bready))) {
                    __Vdly__m_bvalid = 0U;
                    __Vdly__slv = 0U;
                }
            } else if (vlSelfRef.__PVT__m_wvalid) {
                __Vfunc_word_idx__0__byte_addr = vlSelfRef.__PVT__saved_awaddr;
                __Vfunc_word_idx__0__Vfuncout = VL_SHIFTR_III(32,32,32, 
                                                              (__Vfunc_word_idx__0__byte_addr 
                                                               - (IData)(0x00030000U)), 2U);
                vlSelfRef.__PVT__unnamedblk1__DOT__idx 
                    = __Vfunc_word_idx__0__Vfuncout;
                __Vdly__m_wready = 1U;
                __Vdly__slv = 3U;
                if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_wstrb_q))) {
                    __VdlyVal__ai_mem__v0 = (0x000000ffU 
                                             & vlSelfRef.__PVT__m_wdata);
                    __VdlyDim0__ai_mem__v0 = (0x00001fffU 
                                              & vlSelfRef.__PVT__unnamedblk1__DOT__idx);
                    __VdlySet__ai_mem__v0 = 1U;
                }
                if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_wstrb_q))) {
                    __VdlyVal__ai_mem__v1 = (0x000000ffU 
                                             & (vlSelfRef.__PVT__m_wdata 
                                                >> 8U));
                    __VdlyDim0__ai_mem__v1 = (0x00001fffU 
                                              & vlSelfRef.__PVT__unnamedblk1__DOT__idx);
                    __VdlySet__ai_mem__v1 = 1U;
                }
                if ((4U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_wstrb_q))) {
                    __VdlyVal__ai_mem__v2 = (0x000000ffU 
                                             & (vlSelfRef.__PVT__m_wdata 
                                                >> 0x10U));
                    __VdlyDim0__ai_mem__v2 = (0x00001fffU 
                                              & vlSelfRef.__PVT__unnamedblk1__DOT__idx);
                    __VdlySet__ai_mem__v2 = 1U;
                }
                if ((8U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_wstrb_q))) {
                    __VdlyVal__ai_mem__v3 = (vlSelfRef.__PVT__m_wdata 
                                             >> 0x18U);
                    __VdlyDim0__ai_mem__v3 = (0x00001fffU 
                                              & vlSelfRef.__PVT__unnamedblk1__DOT__idx);
                    __VdlySet__ai_mem__v3 = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__slv))) {
            __Vfunc_word_idx__1__byte_addr = vlSelfRef.__PVT__saved_araddr;
            vlSelfRef.__VlemCall_0__word_idx = VL_SHIFTR_III(32,32,32, 
                                                             (__Vfunc_word_idx__1__byte_addr 
                                                              - (IData)(0x00030000U)), 2U);
            __Vdly__m_rvalid = 1U;
            __Vdly__m_rdata = vlSelfRef.__PVT__ai_mem
                [(0x00001fffU & vlSelfRef.__VlemCall_0__word_idx)];
            if (((IData)(vlSelfRef.__PVT__m_rvalid) 
                 & (IData)(vlSelfRef.__PVT__m_rready))) {
                __Vdly__m_rvalid = 0U;
                __Vdly__slv = 0U;
            }
        } else if (vlSelfRef.__PVT__m_arvalid) {
            vlSelfRef.__PVT__saved_araddr = vlSelfRef.__PVT__m_araddr;
            __Vdly__m_arready = 1U;
            __Vdly__slv = 1U;
        } else if (vlSelfRef.__PVT__m_awvalid) {
            vlSelfRef.__PVT__saved_awaddr = vlSelfRef.__PVT__m_awaddr;
            __Vdly__m_awready = 1U;
            __Vdly__slv = 2U;
        }
    } else {
        __Vdly__dut__DOT__mac_acc = 0U;
        __Vdly__s_arready = 0U;
        __Vdly__s_rvalid = 0U;
        vlSelfRef.__PVT__s_rdata = 0U;
        vlSelfRef.__PVT__s_arready = __Vdly__s_arready;
        vlSelfRef.__PVT__s_rvalid = __Vdly__s_rvalid;
        __Vdly__m_bvalid = 0U;
        __Vdly__m_rvalid = 0U;
        __Vdly__slv = 0U;
        __Vdly__m_awready = 0U;
        __Vdly__m_wready = 0U;
        __Vdly__m_arready = 0U;
        __Vdly__m_rdata = 0U;
    }
    vlSelfRef.__PVT__slv = __Vdly__slv;
    if (__VdlySet__ai_mem__v0) {
        vlSelfRef.__PVT__ai_mem[__VdlyDim0__ai_mem__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__ai_mem
                [__VdlyDim0__ai_mem__v0]) | (IData)(__VdlyVal__ai_mem__v0));
    }
    if (__VdlySet__ai_mem__v1) {
        vlSelfRef.__PVT__ai_mem[__VdlyDim0__ai_mem__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__ai_mem
                [__VdlyDim0__ai_mem__v1]) | ((IData)(__VdlyVal__ai_mem__v1) 
                                             << 8U));
    }
    if (__VdlySet__ai_mem__v2) {
        vlSelfRef.__PVT__ai_mem[__VdlyDim0__ai_mem__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__ai_mem
                [__VdlyDim0__ai_mem__v2]) | ((IData)(__VdlyVal__ai_mem__v2) 
                                             << 0x00000010U));
    }
    if (__VdlySet__ai_mem__v3) {
        vlSelfRef.__PVT__ai_mem[__VdlyDim0__ai_mem__v3] 
            = ((0x00ffffffU & vlSelfRef.__PVT__ai_mem
                [__VdlyDim0__ai_mem__v3]) | ((IData)(__VdlyVal__ai_mem__v3) 
                                             << 0x00000018U));
    }
    if (vlSelfRef.__PVT__rst_n) {
        __Vdly__dut__DOT__mem_done = 0U;
        if ((4U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
                __Vdly__dut__DOT__mem_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
                __Vdly__dut__DOT__mem_state = 0U;
            } else if (vlSelfRef.__PVT__m_bvalid) {
                vlSelfRef.__PVT__m_bready = 0U;
                __Vdly__dut__DOT__mem_done = 1U;
                __Vdly__dut__DOT__mem_state = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
                if ((1U & (((IData)(vlSelfRef.__PVT__m_awready) 
                            | (~ (IData)(vlSelfRef.__PVT__m_awvalid))) 
                           & ((IData)(vlSelfRef.__PVT__m_wready) 
                              | (~ (IData)(vlSelfRef.__PVT__m_wvalid)))))) {
                    vlSelfRef.__PVT__m_bready = 1U;
                    __Vdly__dut__DOT__mem_state = 4U;
                }
                if (vlSelfRef.__PVT__m_awready) {
                    vlSelfRef.__PVT__m_awvalid = 0U;
                }
                if (vlSelfRef.__PVT__m_wready) {
                    vlSelfRef.__PVT__m_wvalid = 0U;
                }
            } else if (vlSelfRef.__PVT__m_rvalid) {
                __Vdly__dut__DOT__mem_rdata = vlSelfRef.__PVT__m_rdata;
                vlSelfRef.__PVT__m_rready = 0U;
                __Vdly__dut__DOT__mem_done = 1U;
                __Vdly__dut__DOT__mem_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__mem_state))) {
            if (vlSelfRef.__PVT__m_arready) {
                vlSelfRef.__PVT__m_arvalid = 0U;
                vlSelfRef.__PVT__m_rready = 1U;
                __Vdly__dut__DOT__mem_state = 2U;
            }
        } else if (vlSelfRef.__PVT__dut__DOT__mem_read_req) {
            vlSelfRef.__PVT__m_araddr = (0xfffffffcU 
                                         & vlSelfRef.__PVT__dut__DOT__mem_addr);
            vlSelfRef.__PVT__m_arvalid = 1U;
            __Vdly__dut__DOT__mem_state = 1U;
        } else if (vlSelfRef.__PVT__dut__DOT__mem_write_req) {
            vlSelfRef.__PVT__m_awaddr = (0xfffffffcU 
                                         & vlSelfRef.__PVT__dut__DOT__mem_addr);
            vlSelfRef.__PVT__m_awvalid = 1U;
            vlSelfRef.__PVT__m_wdata = vlSelfRef.__PVT__dut__DOT__mem_wdata_q;
            vlSelfRef.__PVT__m_wvalid = 1U;
            __Vdly__dut__DOT__mem_state = 3U;
        }
    } else {
        __Vdly__dut__DOT__mem_state = 0U;
        vlSelfRef.__PVT__m_awaddr = 0U;
        vlSelfRef.__PVT__m_awvalid = 0U;
        vlSelfRef.__PVT__m_wdata = 0U;
        vlSelfRef.__PVT__m_wvalid = 0U;
        vlSelfRef.__PVT__m_bready = 0U;
        vlSelfRef.__PVT__m_araddr = 0U;
        vlSelfRef.__PVT__m_arvalid = 0U;
        vlSelfRef.__PVT__m_rready = 0U;
        __Vdly__dut__DOT__mem_rdata = 0U;
        __Vdly__dut__DOT__mem_done = 0U;
    }
    vlSelfRef.__PVT__m_awready = __Vdly__m_awready;
    vlSelfRef.__PVT__m_wready = __Vdly__m_wready;
    vlSelfRef.__PVT__m_rdata = __Vdly__m_rdata;
    vlSelfRef.__PVT__m_arready = __Vdly__m_arready;
    vlSelfRef.__PVT__dut__DOT__mem_state = __Vdly__dut__DOT__mem_state;
    vlSelfRef.__PVT__m_bvalid = __Vdly__m_bvalid;
    vlSelfRef.__PVT__m_rvalid = __Vdly__m_rvalid;
    if (vlSelfRef.__PVT__rst_n) {
        vlSelfRef.__PVT__dut__DOT__mac_clear = 0U;
        vlSelfRef.__PVT__dut__DOT__mac_en = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_read_req = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_write_req = 0U;
        if (vlSelfRef.__PVT__dut__DOT__csr_clear_done) {
            vlSelfRef.__PVT__dut__DOT__status_done = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                __Vdly__dut__DOT__state = 0U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                        __Vdly__dut__DOT__state = 0U;
                    } else {
                        __Vdly__dut__DOT__status_busy = 0U;
                        vlSelfRef.__PVT__dut__DOT__status_done = 1U;
                        __Vdly__dut__DOT__state = 0U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                        __Vdly__dut__DOT__state = 0x16U;
                    }
                } else {
                    vlSelfRef.__PVT__dut__DOT__mem_addr 
                        = vlSelfRef.__PVT__dut__DOT__csr_out_addr;
                    vlSelfRef.__PVT__dut__DOT__mem_wdata_q 
                        = vlSelfRef.__PVT__dut__DOT__status_result;
                    vlSelfRef.__PVT__dut__DOT__mem_wstrb_q = 0x0fU;
                    vlSelfRef.__PVT__dut__DOT__mem_write_req = 1U;
                    __Vdly__dut__DOT__state = 0x15U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    vlSelfRef.__PVT__dut__DOT__best_idx = 0U;
                    vlSelfRef.__PVT__dut__DOT__best_val 
                        = vlSelfRef.__PVT__dut__DOT__fc_out_mem[0U];
                    __Vdly__dut__DOT__state = 0x14U;
                    if (VL_GTS_III(8, vlSelfRef.__PVT__dut__DOT__fc_out_mem[1U], (IData)(vlSelfRef.__PVT__dut__DOT__best_val))) {
                        vlSelfRef.__PVT__dut__DOT__best_val 
                            = vlSelfRef.__PVT__dut__DOT__fc_out_mem[1U];
                        vlSelfRef.__PVT__dut__DOT__best_idx = 1U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.__PVT__dut__DOT__fc_out_mem[2U], (IData)(vlSelfRef.__PVT__dut__DOT__best_val))) {
                        vlSelfRef.__PVT__dut__DOT__best_val 
                            = vlSelfRef.__PVT__dut__DOT__fc_out_mem[2U];
                        vlSelfRef.__PVT__dut__DOT__best_idx = 2U;
                    }
                    if (VL_GTS_III(8, vlSelfRef.__PVT__dut__DOT__fc_out_mem[3U], (IData)(vlSelfRef.__PVT__dut__DOT__best_val))) {
                        vlSelfRef.__PVT__dut__DOT__best_val 
                            = vlSelfRef.__PVT__dut__DOT__fc_out_mem[3U];
                        vlSelfRef.__PVT__dut__DOT__best_idx = 3U;
                    }
                    vlSelfRef.__PVT__dut__DOT__status_result 
                        = (0x0000000fU & vlSelfRef.__PVT__dut__DOT__best_idx);
                } else {
                    __Vfunc_dut__DOT__requant_no_relu__24__v 
                        = (vlSelfRef.__PVT__dut__DOT__mac_acc 
                           + vlSelfRef.__PVT__dut__DOT__fc_bias_mem
                           [vlSelfRef.__PVT__dut__DOT__out_idx]);
                    __Vfunc_dut__DOT__requant_no_relu__24__shifted 
                        = VL_SHIFTRS_III(32,32,32, __Vfunc_dut__DOT__requant_no_relu__24__v, 0x0000000bU);
                    vlSelfRef.dut__DOT____VlemCall_0__requant_no_relu 
                        = (VL_LTS_III(32, 0x0000007fU, __Vfunc_dut__DOT__requant_no_relu__24__shifted)
                            ? 0x0000007fU : (VL_GTS_III(32, 0xffffff80U, __Vfunc_dut__DOT__requant_no_relu__24__shifted)
                                              ? 0x00000080U
                                              : (0x000000ffU 
                                                 & __Vfunc_dut__DOT__requant_no_relu__24__shifted)));
                    __VdlyVal__dut__DOT__fc_out_mem__v0 
                        = vlSelfRef.dut__DOT____VlemCall_0__requant_no_relu;
                    __VdlyDim0__dut__DOT__fc_out_mem__v0 
                        = vlSelfRef.__PVT__dut__DOT__out_idx;
                    __VdlySet__dut__DOT__fc_out_mem__v0 = 1U;
                    if ((3U == (IData)(vlSelfRef.__PVT__dut__DOT__out_idx))) {
                        __Vdly__dut__DOT__state = 0x13U;
                    } else {
                        vlSelfRef.__PVT__dut__DOT__out_idx 
                            = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__dut__DOT__out_idx)));
                        __Vdly__dut__DOT__fc_w_row_base 
                            = ((IData)(0x00000fa0U) 
                               + vlSelfRef.__PVT__dut__DOT__fc_w_row_base);
                        __Vdly__dut__DOT__in_idx = 0U;
                        __Vdly__dut__DOT__state = 0x0eU;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                __Vfunc_dut__DOT__read_conv_out_byte__25__i 
                    = vlSelfRef.__PVT__dut__DOT__in_idx;
                __Vfunc_dut__DOT__get_byte_from_word__26__byte_off 
                    = (3U & __Vfunc_dut__DOT__read_conv_out_byte__25__i);
                vlSelfRef.__PVT__dut__DOT__mac_en = 1U;
                __Vfunc_dut__DOT__get_byte_from_word__26__word 
                    = ((0x03e7U >= (0x000003ffU & (__Vfunc_dut__DOT__read_conv_out_byte__25__i 
                                                   >> 2U)))
                        ? vlSelfRef.__PVT__dut__DOT__conv_out_mem
                       [(0x000003ffU & (__Vfunc_dut__DOT__read_conv_out_byte__25__i 
                                        >> 2U))] : 0U);
                __Vfunc_dut__DOT__get_byte_from_word__26__Vfuncout 
                    = (0x000000ffU & ((2U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__26__byte_off))
                                       ? ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__26__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__26__word 
                                              >> 0x18U)
                                           : (__Vfunc_dut__DOT__get_byte_from_word__26__word 
                                              >> 0x10U))
                                       : ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__26__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__26__word 
                                              >> 8U)
                                           : __Vfunc_dut__DOT__get_byte_from_word__26__word)));
                __Vfunc_dut__DOT__read_conv_out_byte__25__Vfuncout 
                    = __Vfunc_dut__DOT__get_byte_from_word__26__Vfuncout;
                vlSelfRef.__PVT__dut__DOT__conv_out_pix 
                    = __Vfunc_dut__DOT__read_conv_out_byte__25__Vfuncout;
                __Vfunc_dut__DOT__get_byte_from_word__27__byte_off 
                    = (3U & (IData)(vlSelfRef.__PVT__dut__DOT__in_idx));
                __Vfunc_dut__DOT__get_byte_from_word__27__word 
                    = vlSelfRef.__PVT__dut__DOT__mem_rdata;
                __Vfunc_dut__DOT__get_byte_from_word__27__Vfuncout 
                    = (0x000000ffU & ((2U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__27__byte_off))
                                       ? ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__27__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__27__word 
                                              >> 0x18U)
                                           : (__Vfunc_dut__DOT__get_byte_from_word__27__word 
                                              >> 0x10U))
                                       : ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__27__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__27__word 
                                              >> 8U)
                                           : __Vfunc_dut__DOT__get_byte_from_word__27__word)));
                vlSelfRef.__PVT__dut__DOT__fc_w_pix 
                    = __Vfunc_dut__DOT__get_byte_from_word__27__Vfuncout;
                vlSelfRef.__PVT__dut__DOT__mac_a = vlSelfRef.__PVT__dut__DOT__conv_out_pix;
                vlSelfRef.__PVT__dut__DOT__mac_b = vlSelfRef.__PVT__dut__DOT__fc_w_pix;
                if ((0x0f9fU == (IData)(vlSelfRef.__PVT__dut__DOT__in_idx))) {
                    __Vdly__dut__DOT__state = 0x12U;
                } else {
                    __Vdly__dut__DOT__in_idx = (0x00000fffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dut__DOT__in_idx)));
                    __Vdly__dut__DOT__state = 0x0fU;
                }
            } else if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                __Vdly__dut__DOT__state = 0x11U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                        vlSelfRef.__PVT__dut__DOT__mem_addr 
                            = (vlSelfRef.__PVT__dut__DOT__fc_w_row_base 
                               + (IData)(vlSelfRef.__PVT__dut__DOT__in_idx));
                        vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
                        __Vdly__dut__DOT__state = 0x10U;
                    } else {
                        vlSelfRef.__PVT__dut__DOT__mac_clear = 1U;
                        __Vdly__dut__DOT__in_idx = 0U;
                        __Vdly__dut__DOT__state = 0x0fU;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                        __VdlyVal__dut__DOT__fc_bias_mem__v0 
                            = vlSelfRef.__PVT__dut__DOT__mem_rdata;
                        __VdlyDim0__dut__DOT__fc_bias_mem__v0 
                            = (3U & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx));
                        __VdlySet__dut__DOT__fc_bias_mem__v0 = 1U;
                        if ((3U == (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))) {
                            vlSelfRef.__PVT__dut__DOT__out_idx = 0U;
                            __Vdly__dut__DOT__fc_w_row_base = 0x00031bc8U;
                            __Vdly__dut__DOT__in_idx = 0U;
                            __Vdly__dut__DOT__state = 0x0eU;
                        } else {
                            __Vdly__dut__DOT__load_idx 
                                = (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)));
                            __Vdly__dut__DOT__state = 0x0cU;
                        }
                    }
                } else {
                    vlSelfRef.__PVT__dut__DOT__mem_addr 
                        = ((IData)(0x00035a48U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__load_idx), 2U));
                    vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
                    __Vdly__dut__DOT__state = 0x0dU;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                        if ((0x03e7U == (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))) {
                            __Vdly__dut__DOT__load_idx = 0U;
                            __Vdly__dut__DOT__state = 0x0cU;
                        } else {
                            __Vdly__dut__DOT__load_idx 
                                = (0x000003ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)));
                            __Vdly__dut__DOT__state = 0x0aU;
                        }
                    }
                } else {
                    vlSelfRef.__PVT__dut__DOT__mem_addr 
                        = ((IData)(0x000307a8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__load_idx), 2U));
                    vlSelfRef.__PVT__dut__DOT__mem_wstrb_q = 0x0fU;
                    vlSelfRef.__PVT__dut__DOT__mem_write_req = 1U;
                    __Vdly__dut__DOT__state = 0x0bU;
                    vlSelfRef.__PVT__dut__DOT__mem_wdata_q 
                        = ((0x03e7U >= (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))
                            ? vlSelfRef.__PVT__dut__DOT__conv_out_mem
                           [vlSelfRef.__PVT__dut__DOT__load_idx]
                            : 0U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                __Vfunc_dut__DOT__requant_relu__28__v 
                    = (vlSelfRef.__PVT__dut__DOT__mac_acc 
                       + vlSelfRef.__PVT__dut__DOT__conv_bias_mem
                       [vlSelfRef.__PVT__dut__DOT__f_idx]);
                __Vfunc_dut__DOT__requant_relu__28__relu_v 
                    = (VL_GTS_III(32, 0U, __Vfunc_dut__DOT__requant_relu__28__v)
                        ? 0U : __Vfunc_dut__DOT__requant_relu__28__v);
                __Vfunc_dut__DOT__requant_relu__28__shifted 
                    = VL_SHIFTRS_III(32,32,32, __Vfunc_dut__DOT__requant_relu__28__relu_v, 0x0000000bU);
                __Vfunc_dut__DOT__requant_relu__28__Vfuncout 
                    = (VL_LTS_III(32, 0x0000007fU, __Vfunc_dut__DOT__requant_relu__28__shifted)
                        ? 0x0000007fU : (0x000000ffU 
                                         & __Vfunc_dut__DOT__requant_relu__28__shifted));
                vlSelfRef.__PVT__dut__DOT__result_byte 
                    = __Vfunc_dut__DOT__requant_relu__28__Vfuncout;
                __Vtask_dut__DOT__write_conv_out_byte__29__val 
                    = vlSelfRef.__PVT__dut__DOT__result_byte;
                __Vtask_dut__DOT__write_conv_out_byte__29__f 
                    = vlSelfRef.__PVT__dut__DOT__f_idx;
                __Vtask_dut__DOT__write_conv_out_byte__29__c 
                    = vlSelfRef.__PVT__dut__DOT__c_idx;
                __Vtask_dut__DOT__write_conv_out_byte__29__r 
                    = vlSelfRef.__PVT__dut__DOT__r_idx;
                __Vtask_dut__DOT__write_conv_out_byte__29__byte_idx 
                    = ((VL_MULS_III(32, (IData)(0x000000a0U), __Vtask_dut__DOT__write_conv_out_byte__29__r) 
                        + VL_MULS_III(32, (IData)(8U), __Vtask_dut__DOT__write_conv_out_byte__29__c)) 
                       + __Vtask_dut__DOT__write_conv_out_byte__29__f);
                __Vtask_dut__DOT__write_conv_out_byte__29__word_idx 
                    = VL_SHIFTR_III(32,32,32, __Vtask_dut__DOT__write_conv_out_byte__29__byte_idx, 2U);
                __Vtask_dut__DOT__write_conv_out_byte__29__byte_off 
                    = (3U & __Vtask_dut__DOT__write_conv_out_byte__29__byte_idx);
                __Vtask_dut__DOT__write_conv_out_byte__29__w 
                    = ((0x03e7U >= (0x000003ffU & __Vtask_dut__DOT__write_conv_out_byte__29__word_idx))
                        ? vlSelfRef.__PVT__dut__DOT__conv_out_mem
                       [(0x000003ffU & __Vtask_dut__DOT__write_conv_out_byte__29__word_idx)]
                        : 0U);
                __Vtask_dut__DOT__write_conv_out_byte__29__w 
                    = ((2U & (IData)(__Vtask_dut__DOT__write_conv_out_byte__29__byte_off))
                        ? ((1U & (IData)(__Vtask_dut__DOT__write_conv_out_byte__29__byte_off))
                            ? ((0x00ffffffU & __Vtask_dut__DOT__write_conv_out_byte__29__w) 
                               | ((IData)(__Vtask_dut__DOT__write_conv_out_byte__29__val) 
                                  << 0x00000018U)) : 
                           ((0xff00ffffU & __Vtask_dut__DOT__write_conv_out_byte__29__w) 
                            | ((IData)(__Vtask_dut__DOT__write_conv_out_byte__29__val) 
                               << 0x00000010U))) : 
                       ((1U & (IData)(__Vtask_dut__DOT__write_conv_out_byte__29__byte_off))
                         ? ((0xffff00ffU & __Vtask_dut__DOT__write_conv_out_byte__29__w) 
                            | ((IData)(__Vtask_dut__DOT__write_conv_out_byte__29__val) 
                               << 8U)) : ((0xffffff00U 
                                           & __Vtask_dut__DOT__write_conv_out_byte__29__w) 
                                          | (IData)(__Vtask_dut__DOT__write_conv_out_byte__29__val))));
                __Vtask_dut__DOT__write_conv_out_byte__29____Vlvbound_h06b16490__0 
                    = __Vtask_dut__DOT__write_conv_out_byte__29__w;
                if (VL_LIKELY(((0x03e7U >= (0x000003ffU 
                                            & __Vtask_dut__DOT__write_conv_out_byte__29__word_idx))))) {
                    vlSelfRef.__PVT__dut__DOT__conv_out_mem[(0x000003ffU 
                                                             & __Vtask_dut__DOT__write_conv_out_byte__29__word_idx)] 
                        = __Vtask_dut__DOT__write_conv_out_byte__29____Vlvbound_h06b16490__0;
                }
                if ((0x13U == (IData)(vlSelfRef.__PVT__dut__DOT__c_idx))) {
                    __Vdly__dut__DOT__c_idx = 0U;
                    if ((0x18U == (IData)(vlSelfRef.__PVT__dut__DOT__r_idx))) {
                        __Vdly__dut__DOT__r_idx = 0U;
                        if ((7U == (IData)(vlSelfRef.__PVT__dut__DOT__f_idx))) {
                            __Vdly__dut__DOT__load_idx = 0U;
                            __Vdly__dut__DOT__f_idx = 0U;
                            __Vdly__dut__DOT__state = 0x0aU;
                        } else {
                            __Vdly__dut__DOT__f_idx 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__dut__DOT__f_idx)));
                            __Vdly__dut__DOT__state = 7U;
                        }
                    } else {
                        __Vdly__dut__DOT__r_idx = (0x0000001fU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__dut__DOT__r_idx)));
                        __Vdly__dut__DOT__state = 7U;
                    }
                } else {
                    __Vdly__dut__DOT__c_idx = (0x0000001fU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.__PVT__dut__DOT__c_idx)));
                    __Vdly__dut__DOT__state = 7U;
                }
            } else {
                vlSelfRef.__PVT__dut__DOT__ir = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__r_idx), 1U) 
                                                  + (IData)(vlSelfRef.__PVT__dut__DOT__kh_idx)) 
                                                 - (IData)(4U));
                vlSelfRef.__PVT__dut__DOT__ic = ((VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__c_idx), 1U) 
                                                  + (IData)(vlSelfRef.__PVT__dut__DOT__kw_idx)) 
                                                 - (IData)(3U));
                __Vfunc_dut__DOT__read_input_pixel__30__ic 
                    = vlSelfRef.__PVT__dut__DOT__ic;
                __Vfunc_dut__DOT__read_input_pixel__30__ir 
                    = vlSelfRef.__PVT__dut__DOT__ir;
                {
                    __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout = 0;
                    __Vfunc_dut__DOT__read_input_pixel__30__byte_idx = 0U;
                    if ((((VL_GTS_III(32, 0U, __Vfunc_dut__DOT__read_input_pixel__30__ir) 
                           | VL_LTES_III(32, 0x00000031U, __Vfunc_dut__DOT__read_input_pixel__30__ir)) 
                          | VL_GTS_III(32, 0U, __Vfunc_dut__DOT__read_input_pixel__30__ic)) 
                         | VL_LTES_III(32, 0x00000028U, __Vfunc_dut__DOT__read_input_pixel__30__ic))) {
                        __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout = 0U;
                        goto __Vlabel0;
                    }
                    __Vfunc_dut__DOT__read_input_pixel__30__byte_idx 
                        = (VL_MULS_III(32, (IData)(0x00000028U), __Vfunc_dut__DOT__read_input_pixel__30__ir) 
                           + __Vfunc_dut__DOT__read_input_pixel__30__ic);
                    __Vfunc_dut__DOT__get_byte_from_word__31__byte_off 
                        = (3U & __Vfunc_dut__DOT__read_input_pixel__30__byte_idx);
                    __Vfunc_dut__DOT__get_byte_from_word__31__word 
                        = ((0x01e9U >= (0x000001ffU 
                                        & (__Vfunc_dut__DOT__read_input_pixel__30__byte_idx 
                                           >> 2U)))
                            ? vlSelfRef.__PVT__dut__DOT__input_mem
                           [(0x000001ffU & (__Vfunc_dut__DOT__read_input_pixel__30__byte_idx 
                                            >> 2U))]
                            : 0U);
                    __Vfunc_dut__DOT__get_byte_from_word__31__Vfuncout = 0;
                    __Vfunc_dut__DOT__get_byte_from_word__31__Vfuncout 
                        = (0x000000ffU & ((2U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__31__byte_off))
                                           ? ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__31__byte_off))
                                               ? (__Vfunc_dut__DOT__get_byte_from_word__31__word 
                                                  >> 0x18U)
                                               : (__Vfunc_dut__DOT__get_byte_from_word__31__word 
                                                  >> 0x10U))
                                           : ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__31__byte_off))
                                               ? (__Vfunc_dut__DOT__get_byte_from_word__31__word 
                                                  >> 8U)
                                               : __Vfunc_dut__DOT__get_byte_from_word__31__word)));
                    __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout 
                        = __Vfunc_dut__DOT__get_byte_from_word__31__Vfuncout;
                    __Vlabel0: ;
                }
                vlSelfRef.__PVT__dut__DOT__input_pix 
                    = __Vfunc_dut__DOT__read_input_pixel__30__Vfuncout;
                __Vfunc_dut__DOT__read_conv_weight__32__kw 
                    = vlSelfRef.__PVT__dut__DOT__kw_idx;
                __Vfunc_dut__DOT__read_conv_weight__32__kh 
                    = vlSelfRef.__PVT__dut__DOT__kh_idx;
                __Vfunc_dut__DOT__read_conv_weight__32__f 
                    = vlSelfRef.__PVT__dut__DOT__f_idx;
                __Vfunc_dut__DOT__read_conv_weight__32__byte_idx 
                    = ((VL_MULS_III(32, (IData)(0x00000050U), __Vfunc_dut__DOT__read_conv_weight__32__f) 
                        + VL_MULS_III(32, (IData)(8U), __Vfunc_dut__DOT__read_conv_weight__32__kh)) 
                       + __Vfunc_dut__DOT__read_conv_weight__32__kw);
                __Vfunc_dut__DOT__get_byte_from_word__33__byte_off 
                    = (3U & __Vfunc_dut__DOT__read_conv_weight__32__byte_idx);
                __Vfunc_dut__DOT__get_byte_from_word__33__word 
                    = ((0x9fU >= (0x000000ffU & (__Vfunc_dut__DOT__read_conv_weight__32__byte_idx 
                                                 >> 2U)))
                        ? vlSelfRef.__PVT__dut__DOT__conv_w_mem
                       [(0x000000ffU & (__Vfunc_dut__DOT__read_conv_weight__32__byte_idx 
                                        >> 2U))] : 0U);
                __Vfunc_dut__DOT__get_byte_from_word__33__Vfuncout 
                    = (0x000000ffU & ((2U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__33__byte_off))
                                       ? ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__33__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__33__word 
                                              >> 0x18U)
                                           : (__Vfunc_dut__DOT__get_byte_from_word__33__word 
                                              >> 0x10U))
                                       : ((1U & (IData)(__Vfunc_dut__DOT__get_byte_from_word__33__byte_off))
                                           ? (__Vfunc_dut__DOT__get_byte_from_word__33__word 
                                              >> 8U)
                                           : __Vfunc_dut__DOT__get_byte_from_word__33__word)));
                __Vfunc_dut__DOT__read_conv_weight__32__Vfuncout 
                    = __Vfunc_dut__DOT__get_byte_from_word__33__Vfuncout;
                vlSelfRef.__PVT__dut__DOT__weight_pix 
                    = __Vfunc_dut__DOT__read_conv_weight__32__Vfuncout;
                vlSelfRef.__PVT__dut__DOT__mac_a = vlSelfRef.__PVT__dut__DOT__input_pix;
                vlSelfRef.__PVT__dut__DOT__mac_b = vlSelfRef.__PVT__dut__DOT__weight_pix;
                vlSelfRef.__PVT__dut__DOT__mac_en = 1U;
                if ((7U == (IData)(vlSelfRef.__PVT__dut__DOT__kw_idx))) {
                    __Vdly__dut__DOT__kw_idx = 0U;
                    if ((9U == (IData)(vlSelfRef.__PVT__dut__DOT__kh_idx))) {
                        __Vdly__dut__DOT__kh_idx = 0U;
                        __Vdly__dut__DOT__state = 9U;
                    } else {
                        __Vdly__dut__DOT__kh_idx = 
                            (0x0000000fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.__PVT__dut__DOT__kh_idx)));
                    }
                } else {
                    __Vdly__dut__DOT__kw_idx = (7U 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__dut__DOT__kw_idx)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                    vlSelfRef.__PVT__dut__DOT__mac_clear = 1U;
                    __Vdly__dut__DOT__kh_idx = 0U;
                    __Vdly__dut__DOT__kw_idx = 0U;
                    __Vdly__dut__DOT__state = 8U;
                } else if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                    vlSelfRef.dut__DOT____Vlvbound_h0b69a956__0 
                        = vlSelfRef.__PVT__dut__DOT__mem_rdata;
                    if (VL_LIKELY(((0x01e9U >= (0x000001ffU 
                                                & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)))))) {
                        __VdlyVal__dut__DOT__input_mem__v0 
                            = vlSelfRef.dut__DOT____Vlvbound_h0b69a956__0;
                        __VdlyDim0__dut__DOT__input_mem__v0 
                            = (0x000001ffU & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx));
                        __VdlySet__dut__DOT__input_mem__v0 = 1U;
                    }
                    if ((0x01e9U == (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))) {
                        __Vdly__dut__DOT__load_idx = 0U;
                        __Vdly__dut__DOT__f_idx = 0U;
                        __Vdly__dut__DOT__r_idx = 0U;
                        __Vdly__dut__DOT__c_idx = 0U;
                        __Vdly__dut__DOT__kh_idx = 0U;
                        __Vdly__dut__DOT__kw_idx = 0U;
                        __Vdly__dut__DOT__state = 7U;
                    } else {
                        __Vdly__dut__DOT__load_idx 
                            = (0x000003ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)));
                        __Vdly__dut__DOT__state = 5U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                vlSelfRef.__PVT__dut__DOT__mem_addr 
                    = (vlSelfRef.__PVT__dut__DOT__csr_data_addr 
                       + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__load_idx), 2U));
                vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
                __Vdly__dut__DOT__state = 6U;
            } else if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                __VdlyVal__dut__DOT__conv_bias_mem__v0 
                    = vlSelfRef.__PVT__dut__DOT__mem_rdata;
                __VdlyDim0__dut__DOT__conv_bias_mem__v0 
                    = (7U & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx));
                __VdlySet__dut__DOT__conv_bias_mem__v0 = 1U;
                if ((7U == (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))) {
                    __Vdly__dut__DOT__load_idx = 0U;
                    __Vdly__dut__DOT__state = 5U;
                } else {
                    __Vdly__dut__DOT__load_idx = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)));
                    __Vdly__dut__DOT__state = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
                vlSelfRef.__PVT__dut__DOT__mem_addr 
                    = ((IData)(0x00031ba8U) + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__load_idx), 2U));
                vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
                __Vdly__dut__DOT__state = 4U;
            } else if (vlSelfRef.__PVT__dut__DOT__mem_done) {
                vlSelfRef.dut__DOT____Vlvbound_h7a32ea8c__0 
                    = vlSelfRef.__PVT__dut__DOT__mem_rdata;
                if (VL_LIKELY(((0x9fU >= (0x000000ffU 
                                          & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)))))) {
                    __VdlyVal__dut__DOT__conv_w_mem__v0 
                        = vlSelfRef.dut__DOT____Vlvbound_h7a32ea8c__0;
                    __VdlyDim0__dut__DOT__conv_w_mem__v0 
                        = (0x000000ffU & (IData)(vlSelfRef.__PVT__dut__DOT__load_idx));
                    __VdlySet__dut__DOT__conv_w_mem__v0 = 1U;
                }
                if ((0x009fU == (IData)(vlSelfRef.__PVT__dut__DOT__load_idx))) {
                    __Vdly__dut__DOT__load_idx = 0U;
                    __Vdly__dut__DOT__state = 3U;
                } else {
                    __Vdly__dut__DOT__load_idx = (0x000003ffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__dut__DOT__load_idx)));
                    __Vdly__dut__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__dut__DOT__state))) {
            vlSelfRef.__PVT__dut__DOT__mem_addr = ((IData)(0x000317a8U) 
                                                   + 
                                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__dut__DOT__load_idx), 2U));
            vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
            __Vdly__dut__DOT__state = 2U;
        } else {
            __Vdly__dut__DOT__status_busy = 0U;
            if (vlSelfRef.__PVT__dut__DOT__csr_start) {
                __Vdly__dut__DOT__status_busy = 1U;
                vlSelfRef.__PVT__dut__DOT__status_done = 0U;
                vlSelfRef.__PVT__dut__DOT__status_result = 0U;
                __Vdly__dut__DOT__load_idx = 0U;
                vlSelfRef.__PVT__dut__DOT__mem_addr = 0x000317a8U;
                vlSelfRef.__PVT__dut__DOT__mem_read_req = 1U;
                __Vdly__dut__DOT__state = 2U;
            }
        }
    } else {
        __Vdly__dut__DOT__state = 0U;
        __Vdly__dut__DOT__status_busy = 0U;
        vlSelfRef.__PVT__dut__DOT__status_done = 0U;
        vlSelfRef.__PVT__dut__DOT__status_result = 0U;
        __Vdly__dut__DOT__load_idx = 0U;
        __Vdly__dut__DOT__f_idx = 0U;
        __Vdly__dut__DOT__r_idx = 0U;
        __Vdly__dut__DOT__c_idx = 0U;
        __Vdly__dut__DOT__kh_idx = 0U;
        __Vdly__dut__DOT__kw_idx = 0U;
        vlSelfRef.__PVT__dut__DOT__out_idx = 0U;
        __Vdly__dut__DOT__in_idx = 0U;
        __Vdly__dut__DOT__fc_w_row_base = 0U;
        vlSelfRef.__PVT__dut__DOT__mac_clear = 0U;
        vlSelfRef.__PVT__dut__DOT__mac_en = 0U;
        vlSelfRef.__PVT__dut__DOT__mac_a = 0U;
        vlSelfRef.__PVT__dut__DOT__mac_b = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_read_req = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_write_req = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_addr = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_wdata_q = 0U;
        vlSelfRef.__PVT__dut__DOT__mem_wstrb_q = 0x0fU;
    }
    if (vlSelfRef.__PVT__rst_n) {
        vlSelfRef.__PVT__dut__DOT__csr_start = 0U;
        vlSelfRef.__PVT__dut__DOT__csr_clear_done = 0U;
        if ((((IData)(vlSelfRef.__PVT__s_awvalid) & (IData)(vlSelfRef.__PVT__s_wvalid)) 
             & (IData)(vlSelfRef.__PVT__dut__DOT__aw_en))) {
            __Vdly__s_awready = 1U;
            __Vdly__s_wready = 1U;
            __Vdly__dut__DOT__wr_addr_q = (0x0000001fU 
                                           & vlSelfRef.__PVT__s_awaddr);
            vlSelfRef.__PVT__dut__DOT__aw_en = 0U;
        } else {
            __Vdly__s_awready = 0U;
            __Vdly__s_wready = 0U;
        }
        if (((((IData)(vlSelfRef.__PVT__s_wready) & (IData)(vlSelfRef.__PVT__s_wvalid)) 
              & (IData)(vlSelfRef.__PVT__s_awready)) 
             & (IData)(vlSelfRef.__PVT__s_awvalid))) {
            if ((0U == (IData)(vlSelfRef.__PVT__dut__DOT__wr_addr_q))) {
                if ((1U & (vlSelfRef.__PVT__s_wdata 
                           & (~ (IData)(vlSelfRef.__PVT__dut__DOT__status_busy))))) {
                    vlSelfRef.__PVT__dut__DOT__csr_start = 1U;
                }
                if ((2U & vlSelfRef.__PVT__s_wdata)) {
                    vlSelfRef.__PVT__dut__DOT__csr_clear_done = 1U;
                }
            } else if ((8U == (IData)(vlSelfRef.__PVT__dut__DOT__wr_addr_q))) {
                vlSelfRef.__PVT__dut__DOT__csr_data_addr 
                    = vlSelfRef.__PVT__s_wdata;
            } else if ((0x0cU == (IData)(vlSelfRef.__PVT__dut__DOT__wr_addr_q))) {
                vlSelfRef.__PVT__dut__DOT__csr_out_addr 
                    = vlSelfRef.__PVT__s_wdata;
            }
        }
        if ((((((IData)(vlSelfRef.__PVT__s_wready) 
                & (IData)(vlSelfRef.__PVT__s_wvalid)) 
               & (IData)(vlSelfRef.__PVT__s_awready)) 
              & (IData)(vlSelfRef.__PVT__s_awvalid)) 
             & (~ (IData)(vlSelfRef.__PVT__s_bvalid)))) {
            __Vdly__s_bvalid = 1U;
        } else if (((IData)(vlSelfRef.__PVT__s_bready) 
                    & (IData)(vlSelfRef.__PVT__s_bvalid))) {
            __Vdly__s_bvalid = 0U;
            vlSelfRef.__PVT__dut__DOT__aw_en = 1U;
        }
    } else {
        __Vdly__s_awready = 0U;
        __Vdly__s_wready = 0U;
        __Vdly__s_bvalid = 0U;
        vlSelfRef.__PVT__dut__DOT__aw_en = 1U;
        __Vdly__dut__DOT__wr_addr_q = 0U;
        vlSelfRef.__PVT__dut__DOT__csr_start = 0U;
        vlSelfRef.__PVT__dut__DOT__csr_clear_done = 0U;
        vlSelfRef.__PVT__dut__DOT__csr_data_addr = 0x00030000U;
        vlSelfRef.__PVT__dut__DOT__csr_out_addr = 0x00035a58U;
    }
    vlSelfRef.__PVT__dut__DOT__mem_done = __Vdly__dut__DOT__mem_done;
    vlSelfRef.__PVT__dut__DOT__mem_rdata = __Vdly__dut__DOT__mem_rdata;
    vlSelfRef.__PVT__dut__DOT__state = __Vdly__dut__DOT__state;
    vlSelfRef.__PVT__dut__DOT__mac_acc = __Vdly__dut__DOT__mac_acc;
    vlSelfRef.__PVT__dut__DOT__fc_w_row_base = __Vdly__dut__DOT__fc_w_row_base;
    vlSelfRef.__PVT__dut__DOT__in_idx = __Vdly__dut__DOT__in_idx;
    vlSelfRef.__PVT__dut__DOT__load_idx = __Vdly__dut__DOT__load_idx;
    vlSelfRef.__PVT__dut__DOT__c_idx = __Vdly__dut__DOT__c_idx;
    vlSelfRef.__PVT__dut__DOT__r_idx = __Vdly__dut__DOT__r_idx;
    vlSelfRef.__PVT__dut__DOT__f_idx = __Vdly__dut__DOT__f_idx;
    vlSelfRef.__PVT__dut__DOT__kw_idx = __Vdly__dut__DOT__kw_idx;
    vlSelfRef.__PVT__dut__DOT__kh_idx = __Vdly__dut__DOT__kh_idx;
    if (__VdlySet__dut__DOT__fc_out_mem__v0) {
        vlSelfRef.__PVT__dut__DOT__fc_out_mem[__VdlyDim0__dut__DOT__fc_out_mem__v0] 
            = __VdlyVal__dut__DOT__fc_out_mem__v0;
    }
    if (__VdlySet__dut__DOT__fc_bias_mem__v0) {
        vlSelfRef.__PVT__dut__DOT__fc_bias_mem[__VdlyDim0__dut__DOT__fc_bias_mem__v0] 
            = __VdlyVal__dut__DOT__fc_bias_mem__v0;
    }
    if (__VdlySet__dut__DOT__input_mem__v0) {
        vlSelfRef.__PVT__dut__DOT__input_mem[__VdlyDim0__dut__DOT__input_mem__v0] 
            = __VdlyVal__dut__DOT__input_mem__v0;
    }
    if (__VdlySet__dut__DOT__conv_bias_mem__v0) {
        vlSelfRef.__PVT__dut__DOT__conv_bias_mem[__VdlyDim0__dut__DOT__conv_bias_mem__v0] 
            = __VdlyVal__dut__DOT__conv_bias_mem__v0;
    }
    if (__VdlySet__dut__DOT__conv_w_mem__v0) {
        vlSelfRef.__PVT__dut__DOT__conv_w_mem[__VdlyDim0__dut__DOT__conv_w_mem__v0] 
            = __VdlyVal__dut__DOT__conv_w_mem__v0;
    }
    vlSelfRef.__PVT__s_awready = __Vdly__s_awready;
    vlSelfRef.__PVT__s_wready = __Vdly__s_wready;
    vlSelfRef.__PVT__dut__DOT__wr_addr_q = __Vdly__dut__DOT__wr_addr_q;
    vlSelfRef.__PVT__dut__DOT__status_busy = __Vdly__dut__DOT__status_busy;
    vlSelfRef.__PVT__s_bvalid = __Vdly__s_bvalid;
}

void Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__1(Vai_accel_tb_ai_accel_tb* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vai_accel_tb_ai_accel_tb___nba_sequent__TOP__ai_accel_tb__1\n"); );
    Vai_accel_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__s_araddr__v0) {
        vlSelfRef.__VdlySet__s_araddr__v0 = 0U;
        vlSelfRef.__PVT__s_araddr = vlSelfRef.__VdlyVal__s_araddr__v0;
    }
    if (vlSelfRef.__VdlySet__s_arvalid__v0) {
        vlSelfRef.__VdlySet__s_arvalid__v0 = 0U;
        vlSelfRef.__PVT__s_arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_arvalid__v1) {
        vlSelfRef.__VdlySet__s_arvalid__v1 = 0U;
        vlSelfRef.__PVT__s_arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_rready__v0) {
        vlSelfRef.__VdlySet__s_rready__v0 = 0U;
        vlSelfRef.__PVT__s_rready = 1U;
    }
    if (vlSelfRef.__VdlySet__s_rready__v1) {
        vlSelfRef.__VdlySet__s_rready__v1 = 0U;
        vlSelfRef.__PVT__s_rready = 0U;
    }
    if (vlSelfRef.__VdlySet__s_awaddr__v0) {
        vlSelfRef.__VdlySet__s_awaddr__v0 = 0U;
        vlSelfRef.__PVT__s_awaddr = vlSelfRef.__VdlyVal__s_awaddr__v0;
    }
    if (vlSelfRef.__VdlySet__s_awaddr__v1) {
        vlSelfRef.__VdlySet__s_awaddr__v1 = 0U;
        vlSelfRef.__PVT__s_awaddr = vlSelfRef.__VdlyVal__s_awaddr__v1;
    }
    if (vlSelfRef.__VdlySet__s_awaddr__v2) {
        vlSelfRef.__VdlySet__s_awaddr__v2 = 0U;
        vlSelfRef.__PVT__s_awaddr = vlSelfRef.__VdlyVal__s_awaddr__v2;
    }
    if (vlSelfRef.__VdlySet__s_awaddr__v3) {
        vlSelfRef.__VdlySet__s_awaddr__v3 = 0U;
        vlSelfRef.__PVT__s_awaddr = vlSelfRef.__VdlyVal__s_awaddr__v3;
    }
    if (vlSelfRef.__VdlySet__s_wdata__v0) {
        vlSelfRef.__VdlySet__s_wdata__v0 = 0U;
        vlSelfRef.__PVT__s_wdata = vlSelfRef.__VdlyVal__s_wdata__v0;
    }
    if (vlSelfRef.__VdlySet__s_wdata__v1) {
        vlSelfRef.__VdlySet__s_wdata__v1 = 0U;
        vlSelfRef.__PVT__s_wdata = vlSelfRef.__VdlyVal__s_wdata__v1;
    }
    if (vlSelfRef.__VdlySet__s_wdata__v2) {
        vlSelfRef.__VdlySet__s_wdata__v2 = 0U;
        vlSelfRef.__PVT__s_wdata = vlSelfRef.__VdlyVal__s_wdata__v2;
    }
    if (vlSelfRef.__VdlySet__s_wdata__v3) {
        vlSelfRef.__VdlySet__s_wdata__v3 = 0U;
        vlSelfRef.__PVT__s_wdata = vlSelfRef.__VdlyVal__s_wdata__v3;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v0) {
        vlSelfRef.__VdlySet__s_awvalid__v0 = 0U;
        vlSelfRef.__PVT__s_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v1) {
        vlSelfRef.__VdlySet__s_awvalid__v1 = 0U;
        vlSelfRef.__PVT__s_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v2) {
        vlSelfRef.__VdlySet__s_awvalid__v2 = 0U;
        vlSelfRef.__PVT__s_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v3) {
        vlSelfRef.__VdlySet__s_awvalid__v3 = 0U;
        vlSelfRef.__PVT__s_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v4) {
        vlSelfRef.__VdlySet__s_awvalid__v4 = 0U;
        vlSelfRef.__PVT__s_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v5) {
        vlSelfRef.__VdlySet__s_awvalid__v5 = 0U;
        vlSelfRef.__PVT__s_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v6) {
        vlSelfRef.__VdlySet__s_awvalid__v6 = 0U;
        vlSelfRef.__PVT__s_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_awvalid__v7) {
        vlSelfRef.__VdlySet__s_awvalid__v7 = 0U;
        vlSelfRef.__PVT__s_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v0) {
        vlSelfRef.__VdlySet__s_wvalid__v0 = 0U;
        vlSelfRef.__PVT__s_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v1) {
        vlSelfRef.__VdlySet__s_wvalid__v1 = 0U;
        vlSelfRef.__PVT__s_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v2) {
        vlSelfRef.__VdlySet__s_wvalid__v2 = 0U;
        vlSelfRef.__PVT__s_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v3) {
        vlSelfRef.__VdlySet__s_wvalid__v3 = 0U;
        vlSelfRef.__PVT__s_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v4) {
        vlSelfRef.__VdlySet__s_wvalid__v4 = 0U;
        vlSelfRef.__PVT__s_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v5) {
        vlSelfRef.__VdlySet__s_wvalid__v5 = 0U;
        vlSelfRef.__PVT__s_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v6) {
        vlSelfRef.__VdlySet__s_wvalid__v6 = 0U;
        vlSelfRef.__PVT__s_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__s_wvalid__v7) {
        vlSelfRef.__VdlySet__s_wvalid__v7 = 0U;
        vlSelfRef.__PVT__s_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v0) {
        vlSelfRef.__VdlySet__s_bready__v0 = 0U;
        vlSelfRef.__PVT__s_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v1) {
        vlSelfRef.__VdlySet__s_bready__v1 = 0U;
        vlSelfRef.__PVT__s_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v2) {
        vlSelfRef.__VdlySet__s_bready__v2 = 0U;
        vlSelfRef.__PVT__s_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v3) {
        vlSelfRef.__VdlySet__s_bready__v3 = 0U;
        vlSelfRef.__PVT__s_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v4) {
        vlSelfRef.__VdlySet__s_bready__v4 = 0U;
        vlSelfRef.__PVT__s_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v5) {
        vlSelfRef.__VdlySet__s_bready__v5 = 0U;
        vlSelfRef.__PVT__s_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v6) {
        vlSelfRef.__VdlySet__s_bready__v6 = 0U;
        vlSelfRef.__PVT__s_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__s_bready__v7) {
        vlSelfRef.__VdlySet__s_bready__v7 = 0U;
        vlSelfRef.__PVT__s_bready = 0U;
    }
}
