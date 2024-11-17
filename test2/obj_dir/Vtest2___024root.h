// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest2.h for the primary calling header

#ifndef VERILATED_VTEST2___024ROOT_H_
#define VERILATED_VTEST2___024ROOT_H_  // guard

#include "verilated.h"


class Vtest2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtest2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(data_in,7,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtest2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtest2___024root(Vtest2__Syms* symsp, const char* v__name);
    ~Vtest2___024root();
    VL_UNCOPYABLE(Vtest2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
