// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _Vservant_sim__Syms_H_
#define _Vservant_sim__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vservant_sim.h"
#include "Vservant_sim_servant_sim.h"
#include "Vservant_sim_servant__M0_MB8000_S1.h"
#include "Vservant_sim_servant_ram__M0_D8000.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vservant_sim__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vservant_sim*                  TOPp;
    Vservant_sim_servant_sim       TOP__servant_sim;
    Vservant_sim_servant__M0_MB8000_S1 TOP__servant_sim__dut;
    Vservant_sim_servant_ram__M0_D8000 TOP__servant_sim__dut__ram;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_servant_sim__dut__ram;
    
    // CREATORS
    Vservant_sim__Syms(Vservant_sim* topp, const char* namep);
    ~Vservant_sim__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
