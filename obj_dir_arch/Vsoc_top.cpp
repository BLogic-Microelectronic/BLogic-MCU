// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsoc_top__pch.h"

//============================================================
// Constructors

Vsoc_top::Vsoc_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsoc_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , uart_rxd_i{vlSymsp->TOP.uart_rxd_i}
    , uart_txd_o{vlSymsp->TOP.uart_txd_o}
    , qspi_sclk_o{vlSymsp->TOP.qspi_sclk_o}
    , qspi_cs_no{vlSymsp->TOP.qspi_cs_no}
    , qspi_io_o{vlSymsp->TOP.qspi_io_o}
    , qspi_io_i{vlSymsp->TOP.qspi_io_i}
    , qspi_io_oe{vlSymsp->TOP.qspi_io_oe}
    , gpio_in_i{vlSymsp->TOP.gpio_in_i}
    , gpio_out_o{vlSymsp->TOP.gpio_out_o}
    , __PVT__axi_pkg{vlSymsp->TOP.__PVT__axi_pkg}
    , __PVT__fpnew_pkg{vlSymsp->TOP.__PVT__fpnew_pkg}
    , __PVT__cv32e40p_apu_core_pkg{vlSymsp->TOP.__PVT__cv32e40p_apu_core_pkg}
    , __PVT__cv32e40p_fpu_pkg{vlSymsp->TOP.__PVT__cv32e40p_fpu_pkg}
    , __PVT__cv32e40p_pkg{vlSymsp->TOP.__PVT__cv32e40p_pkg}
    , __PVT__soc_top__DOT__cpu_instr_bus{vlSymsp->TOP.__PVT__soc_top__DOT__cpu_instr_bus}
    , __PVT__soc_top__DOT__cpu_data_bus{vlSymsp->TOP.__PVT__soc_top__DOT__cpu_data_bus}
    , __PVT__soc_top__DOT__boot_rom_bus{vlSymsp->TOP.__PVT__soc_top__DOT__boot_rom_bus}
    , __PVT__soc_top__DOT__instr_sram_bus{vlSymsp->TOP.__PVT__soc_top__DOT__instr_sram_bus}
    , __PVT__soc_top__DOT__data_sram_bus{vlSymsp->TOP.__PVT__soc_top__DOT__data_sram_bus}
    , __PVT__soc_top__DOT__cpu_to_ai_sram_bus{vlSymsp->TOP.__PVT__soc_top__DOT__cpu_to_ai_sram_bus}
    , __PVT__soc_top__DOT__ai_sram_bus{vlSymsp->TOP.__PVT__soc_top__DOT__ai_sram_bus}
    , __PVT__soc_top__DOT__periph_bus{vlSymsp->TOP.__PVT__soc_top__DOT__periph_bus}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsoc_top::Vsoc_top(const char* _vcname__)
    : Vsoc_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsoc_top::~Vsoc_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsoc_top___024root___eval_static(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf);
void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf);

void Vsoc_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsoc_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsoc_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsoc_top___024root___eval_static(&(vlSymsp->TOP));
        Vsoc_top___024root___eval_initial(&(vlSymsp->TOP));
        Vsoc_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsoc_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsoc_top::eventsPending() { return false; }

uint64_t Vsoc_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsoc_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsoc_top___024root___eval_final(Vsoc_top___024root* vlSelf);

VL_ATTR_COLD void Vsoc_top::final() {
    contextp()->executingFinal(true);
    Vsoc_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsoc_top::hierName() const { return vlSymsp->name(); }
const char* Vsoc_top::modelName() const { return "Vsoc_top"; }
unsigned Vsoc_top::threads() const { return 1; }
void Vsoc_top::prepareClone() const { contextp()->prepareClone(); }
void Vsoc_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
