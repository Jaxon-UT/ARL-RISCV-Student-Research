// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _Vservant_sim_servant_ram__M0_D8000_H_
#define _Vservant_sim_servant_ram__M0_D8000_H_

#include "verilated_heavy.h"
#include "Vservant_sim__Dpi.h"

class Vservant_sim__Syms;
class VerilatedVcd;

//----------

VL_MODULE(Vservant_sim_servant_ram__M0_D8000) {
  public:
    
    // PORTS
    // Begin mtask footprint  all: 
    VL_IN8(__PVT__i_wb_clk,0,0);
    VL_IN8(__PVT__i_wb_sel,3,0);
    VL_IN8(__PVT__i_wb_we,0,0);
    VL_IN8(__PVT__i_wb_cyc,0,0);
    VL_OUT8(__PVT__o_wb_ack,0,0);
    VL_IN16(__PVT__i_wb_adr,14,2);
    VL_IN(__PVT__i_wb_dat,31,0);
    VL_OUT(__PVT__o_wb_rdt,31,0);
    
    // LOCAL SIGNALS
    // Begin mtask footprint  all: 
    VL_SIG8(__PVT__we,3,0);
    VL_SIG(mem[8192],31,0);
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_servant_ram__M0_D8000);  ///< Copying not allowed
  public:
    Vservant_sim_servant_ram__M0_D8000(const char* name="TOP");
    ~Vservant_sim_servant_ram__M0_D8000();
    void trace(VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__servant_sim__dut__ram__1(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__ram__2(Vservant_sim__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
