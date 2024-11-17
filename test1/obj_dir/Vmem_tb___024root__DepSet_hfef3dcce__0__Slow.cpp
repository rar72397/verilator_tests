// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_tb.h for the primary calling header

#include "Vmem_tb__pch.h"
#include "Vmem_tb__Syms.h"
#include "Vmem_tb___024root.h"

VL_ATTR_COLD void Vmem_tb___024root___eval_initial__TOP(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6d5f7462U;
    __Vtemp_1[2U] = 0x6d65U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
}
