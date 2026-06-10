// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top__pch.h"

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_instr_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_instr_bus\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aw_id = 0U;
    vlSelfRef.aw_len = 0U;
    vlSelfRef.aw_size = 2U;
    vlSelfRef.aw_burst = 1U;
    vlSelfRef.aw_lock = 0U;
    vlSelfRef.aw_cache = 0U;
    vlSelfRef.aw_prot = 0U;
    vlSelfRef.aw_qos = 0U;
    vlSelfRef.aw_region = 0U;
    vlSelfRef.aw_user = 0U;
    vlSelfRef.aw_atop = 0U;
    vlSelfRef.ar_id = 0U;
    vlSelfRef.ar_len = 0U;
    vlSelfRef.ar_size = 2U;
    vlSelfRef.ar_burst = 1U;
    vlSelfRef.ar_lock = 0U;
    vlSelfRef.ar_cache = 0U;
    vlSelfRef.ar_prot = 0U;
    vlSelfRef.ar_qos = 0U;
    vlSelfRef.ar_region = 0U;
    vlSelfRef.ar_user = 0U;
    vlSelfRef.w_last = 1U;
    vlSelfRef.w_user = 0U;
    vlSelfRef.aw_ready = 0U;
    vlSelfRef.w_ready = 0U;
    vlSelfRef.b_valid = 0U;
    vlSelfRef.b_id = 0U;
    vlSelfRef.b_resp = 0U;
    vlSelfRef.b_user = 0U;
}

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_data_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__cpu_data_bus\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aw_id = 1U;
    vlSelfRef.aw_len = 0U;
    vlSelfRef.aw_size = 2U;
    vlSelfRef.aw_burst = 1U;
    vlSelfRef.aw_lock = 0U;
    vlSelfRef.aw_cache = 0U;
    vlSelfRef.aw_prot = 0U;
    vlSelfRef.aw_qos = 0U;
    vlSelfRef.aw_region = 0U;
    vlSelfRef.aw_user = 0U;
    vlSelfRef.aw_atop = 0U;
    vlSelfRef.ar_id = 1U;
    vlSelfRef.ar_len = 0U;
    vlSelfRef.ar_size = 2U;
    vlSelfRef.ar_burst = 1U;
    vlSelfRef.ar_lock = 0U;
    vlSelfRef.ar_cache = 0U;
    vlSelfRef.ar_prot = 0U;
    vlSelfRef.ar_qos = 0U;
    vlSelfRef.ar_region = 0U;
    vlSelfRef.ar_user = 0U;
    vlSelfRef.w_last = 1U;
    vlSelfRef.w_user = 0U;
}

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__boot_rom_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__boot_rom_bus\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_resp = 0U;
    vlSelfRef.r_last = 1U;
    vlSelfRef.r_user = 0U;
    vlSelfRef.aw_id = 0U;
    vlSelfRef.aw_addr = 0U;
    vlSelfRef.aw_len = 0U;
    vlSelfRef.aw_size = 0U;
    vlSelfRef.aw_burst = 0U;
    vlSelfRef.aw_lock = 0U;
    vlSelfRef.aw_cache = 0U;
    vlSelfRef.aw_prot = 0U;
    vlSelfRef.aw_qos = 0U;
    vlSelfRef.aw_region = 0U;
    vlSelfRef.aw_atop = 0U;
    vlSelfRef.aw_user = 0U;
    vlSelfRef.aw_valid = 0U;
    vlSelfRef.w_valid = 0U;
    vlSelfRef.b_ready = 1U;
    vlSelfRef.w_data = 0U;
    vlSelfRef.w_strb = 0U;
    vlSelfRef.w_last = 0U;
    vlSelfRef.w_user = 0U;
    vlSelfRef.b_resp = 0U;
    vlSelfRef.b_user = 0U;
}

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__instr_sram_bus\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b_resp = 0U;
    vlSelfRef.b_user = 0U;
    vlSelfRef.r_resp = 0U;
    vlSelfRef.r_last = 1U;
    vlSelfRef.r_user = 0U;
}

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__periph_bus(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___eval_initial__TOP__soc_top__DOT__periph_bus\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.r_user = 0U;
    vlSelfRef.r_last = 1U;
    vlSelfRef.b_user = 0U;
}

VL_ATTR_COLD void Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset(Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1___ctor_var_reset\n"); );
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->aw_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9509741160879617630ull);
    vlSelf->aw_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12137323606626064423ull);
    vlSelf->aw_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16300021278433169453ull);
    vlSelf->aw_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11764667420763034620ull);
    vlSelf->aw_burst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14615422922809064475ull);
    vlSelf->aw_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5513716480169310065ull);
    vlSelf->aw_cache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2536301819775126148ull);
    vlSelf->aw_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3216186561156388443ull);
    vlSelf->aw_qos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9857438872559214973ull);
    vlSelf->aw_region = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11398054594063625357ull);
    vlSelf->aw_atop = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1827082198318889367ull);
    vlSelf->aw_user = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12029618475577852809ull);
    vlSelf->aw_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1754404075958931966ull);
    vlSelf->aw_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 191578932042233452ull);
    vlSelf->w_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1356167372520825866ull);
    vlSelf->w_strb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10345301724960173782ull);
    vlSelf->w_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12763562448185919174ull);
    vlSelf->w_user = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15547033559707311037ull);
    vlSelf->w_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1598689714110194787ull);
    vlSelf->w_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6191156139041826059ull);
    vlSelf->b_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 424535470273131788ull);
    vlSelf->b_resp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7335088030936024615ull);
    vlSelf->b_user = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12837897197188378027ull);
    vlSelf->b_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1040118903267060698ull);
    vlSelf->b_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3038769386468159021ull);
    vlSelf->ar_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15502001169105851052ull);
    vlSelf->ar_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11238140989117108765ull);
    vlSelf->ar_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4902451535118909898ull);
    vlSelf->ar_size = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11282350135788612994ull);
    vlSelf->ar_burst = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17362442441177362119ull);
    vlSelf->ar_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10920945089749335590ull);
    vlSelf->ar_cache = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13158524246253694437ull);
    vlSelf->ar_prot = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1896039509384012526ull);
    vlSelf->ar_qos = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9696782033453586254ull);
    vlSelf->ar_region = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9952977621433130430ull);
    vlSelf->ar_user = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15064079834749209561ull);
    vlSelf->ar_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3917887198715823980ull);
    vlSelf->ar_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6480720733453627862ull);
    vlSelf->r_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1076267822237918504ull);
    vlSelf->r_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9282394983452304596ull);
    vlSelf->r_resp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 752958310489873558ull);
    vlSelf->r_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7946493877769508034ull);
    vlSelf->r_user = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10504074843033470163ull);
    vlSelf->r_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716220725288817265ull);
    vlSelf->r_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5812217113783743825ull);
    vlSelf->__Vdly__b_valid = 0;
    vlSelf->__Vdly__r_valid = 0;
}
