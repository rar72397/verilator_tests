// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_tb.h for the primary calling header

#include "Vmem_tb__pch.h"
#include "Vmem_tb__Syms.h"
#include "Vmem_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_tb___024root___dump_triggers__act(Vmem_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem_tb___024root___eval_triggers__act(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.mem_tb__DOT__clk) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__clk__0))) 
                                       | ((~ (IData)(vlSelfRef.mem_tb__DOT__reset)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__reset__0))));
    vlSelfRef.__VactTriggered.set(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.mem_tb__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__clk__0 
        = vlSelfRef.mem_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__reset__0 
        = vlSelfRef.mem_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmem_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
