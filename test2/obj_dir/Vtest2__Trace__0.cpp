// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest2__Syms.h"


void Vtest2___024root__trace_chg_0_sub_0(Vtest2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtest2___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest2___024root__trace_chg_0\n"); );
    // Init
    Vtest2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest2___024root*>(voidSelf);
    Vtest2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest2___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtest2___024root__trace_chg_0_sub_0(Vtest2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtest2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest2___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.reset));
    bufp->chgCData(oldp+2,(vlSelfRef.data_in),8);
    bufp->chgCData(oldp+3,(vlSelfRef.data_out),8);
}

void Vtest2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest2___024root__trace_cleanup\n"); );
    // Init
    Vtest2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest2___024root*>(voidSelf);
    Vtest2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
