// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_tb.h for the primary calling header

#include "Vmem_tb__pch.h"
#include "Vmem_tb__Syms.h"
#include "Vmem_tb___024root.h"

void Vmem_tb___024root___ctor_var_reset(Vmem_tb___024root* vlSelf);

Vmem_tb___024root::Vmem_tb___024root(Vmem_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmem_tb___024root___ctor_var_reset(this);
}

void Vmem_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmem_tb___024root::~Vmem_tb___024root() {
}
