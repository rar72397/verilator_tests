// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest2__pch.h"
#include "Vtest2.h"
#include "Vtest2___024root.h"

// FUNCTIONS
Vtest2__Syms::~Vtest2__Syms()
{
}

Vtest2__Syms::Vtest2__Syms(VerilatedContext* contextp, const char* namep, Vtest2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(11);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-10);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
