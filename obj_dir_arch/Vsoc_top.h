// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSOC_TOP_H_
#define VERILATED_VSOC_TOP_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vsoc_top__Syms;
class Vsoc_top___024root;
class Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1;
class Vsoc_top_axi_pkg;
class Vsoc_top_cv32e40p_apu_core_pkg;
class Vsoc_top_cv32e40p_fpu_pkg;
class Vsoc_top_cv32e40p_pkg;
class Vsoc_top_fpnew_pkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vsoc_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vsoc_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_IN8(&uart_rxd_i,0,0);
    VL_OUT8(&uart_txd_o,0,0);
    VL_OUT8(&qspi_sclk_o,0,0);
    VL_OUT8(&qspi_cs_no,0,0);
    VL_OUT8(&qspi_io_o,3,0);
    VL_IN8(&qspi_io_i,3,0);
    VL_OUT8(&qspi_io_oe,3,0);
    VL_IN(&gpio_in_i,31,0);
    VL_OUT(&gpio_out_o,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vsoc_top_axi_pkg* const __PVT__axi_pkg;
    Vsoc_top_fpnew_pkg* const __PVT__fpnew_pkg;
    Vsoc_top_cv32e40p_apu_core_pkg* const __PVT__cv32e40p_apu_core_pkg;
    Vsoc_top_cv32e40p_fpu_pkg* const __PVT__cv32e40p_fpu_pkg;
    Vsoc_top_cv32e40p_pkg* const __PVT__cv32e40p_pkg;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__cpu_instr_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__cpu_data_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__boot_rom_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__instr_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__data_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__cpu_to_ai_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__ai_sram_bus;
    Vsoc_top_AXI_BUS__A20_AB20_AC4_AD1* const __PVT__soc_top__DOT__periph_bus;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vsoc_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vsoc_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vsoc_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vsoc_top();
  private:
    VL_UNCOPYABLE(Vsoc_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
