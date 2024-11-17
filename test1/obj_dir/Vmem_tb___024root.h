// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmem_tb.h for the primary calling header

#ifndef VERILATED_VMEM_TB___024ROOT_H_
#define VERILATED_VMEM_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vmem_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmem_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ mem_tb__DOT__clk;
    CData/*0:0*/ mem_tb__DOT__reset;
    CData/*0:0*/ mem_tb__DOT__en;
    CData/*3:0*/ mem_tb__DOT__address;
    CData/*7:0*/ mem_tb__DOT__out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mem_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__mem_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7063975f__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmem_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmem_tb___024root(Vmem_tb__Syms* symsp, const char* v__name);
    ~Vmem_tb___024root();
    VL_UNCOPYABLE(Vmem_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
