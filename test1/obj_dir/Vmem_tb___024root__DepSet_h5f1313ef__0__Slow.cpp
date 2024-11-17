// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_tb.h for the primary calling header

#include "Vmem_tb__pch.h"
#include "Vmem_tb___024root.h"

VL_ATTR_COLD void Vmem_tb___024root___eval_static(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmem_tb___024root___eval_final(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vmem_tb___024root___eval_settle(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_tb___024root___dump_triggers__act(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mem_tb.clk or negedge mem_tb.reset)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge mem_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_tb___024root___dump_triggers__nba(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mem_tb.clk or negedge mem_tb.reset)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge mem_tb.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmem_tb___024root___ctor_var_reset(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->mem_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mem_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->mem_tb__DOT__en = VL_RAND_RESET_I(1);
    vlSelf->mem_tb__DOT__address = VL_RAND_RESET_I(4);
    vlSelf->mem_tb__DOT__out = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__mem_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__mem_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
}
