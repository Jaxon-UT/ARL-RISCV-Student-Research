// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _Vservant_sim_servant_sim_H_
#define _Vservant_sim_servant_sim_H_

#include "verilated_heavy.h"
#include "Vservant_sim__Dpi.h"

class Vservant_sim__Syms;
class Vservant_sim_servant__M0_MB2000_S1;
class VerilatedVcd;

//----------

VL_MODULE(Vservant_sim_servant_sim) {
  public:
    // CELLS
    Vservant_sim_servant__M0_MB2000_S1*	dut;
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(wb_clk,0,0);
    VL_IN8(wb_rst,0,0);
    VL_OUT8(q,0,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIGW(__PVT__firmware_file,1023,0,32);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_servant_sim);  ///< Copying not allowed
  public:
    Vservant_sim_servant_sim(const char* name="TOP");
    ~Vservant_sim_servant_sim();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void _initial__TOP__servant_sim__1(Vservant_sim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
