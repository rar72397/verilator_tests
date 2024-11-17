// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmem_tb.h for the primary calling header

#include "Vmem_tb__pch.h"
#include "Vmem_tb___024root.h"

VL_ATTR_COLD void Vmem_tb___024root___eval_initial__TOP(Vmem_tb___024root* vlSelf);
VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__0(Vmem_tb___024root* vlSelf);
VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__1(Vmem_tb___024root* vlSelf);
VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__2(Vmem_tb___024root* vlSelf);

void Vmem_tb___024root___eval_initial(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmem_tb___024root___eval_initial__TOP(vlSelf);
    Vmem_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmem_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vmem_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__clk__0 
        = vlSelfRef.mem_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__mem_tb__DOT__reset__0 
        = vlSelfRef.mem_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__0(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "mem_tb.v", 
                                             28);
        vlSelfRef.mem_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.mem_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__1(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0ULL, nullptr, 
                                         "mem_tb.v", 
                                         35);
    vlSelfRef.mem_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "mem_tb.v", 
                                         36);
    vlSelfRef.mem_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "mem_tb.v", 
                                         37);
    vlSelfRef.mem_tb__DOT__reset = 1U;
    vlSelfRef.mem_tb__DOT__en = 0U;
}

VL_INLINE_OPT VlCoroutine Vmem_tb___024root___eval_initial__TOP__Vtiming__2(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "mem_tb.v", 
                                         42);
    VL_WRITEF_NX("Hello\n",0);
    co_await vlSelfRef.__VtrigSched_h7063975f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mem_tb.clk)", 
                                                         "mem_tb.v", 
                                                         46);
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "mem_tb.v", 
                                         47);
    vlSelfRef.mem_tb__DOT__address = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "mem_tb.v", 
                                         48);
    VL_WRITEF_NX("out: %b\n",0,8,vlSelfRef.mem_tb__DOT__out);
    co_await vlSelfRef.__VtrigSched_h7063975f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mem_tb.clk)", 
                                                         "mem_tb.v", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "mem_tb.v", 
                                         51);
    vlSelfRef.mem_tb__DOT__en = 1U;
    vlSelfRef.mem_tb__DOT__address = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "mem_tb.v", 
                                         53);
    VL_WRITEF_NX("out: %b\n",0,8,vlSelfRef.mem_tb__DOT__out);
    co_await vlSelfRef.__VtrigSched_h7063975f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mem_tb.clk)", 
                                                         "mem_tb.v", 
                                                         55);
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "mem_tb.v", 
                                         56);
    vlSelfRef.mem_tb__DOT__address = 0xfU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "mem_tb.v", 
                                         57);
    VL_WRITEF_NX("out: %b\n",0,8,vlSelfRef.mem_tb__DOT__out);
    co_await vlSelfRef.__VtrigSched_h7063975f__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge mem_tb.clk)", 
                                                         "mem_tb.v", 
                                                         59);
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "mem_tb.v", 
                                         60);
    vlSelfRef.mem_tb__DOT__address = 0xaU;
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "mem_tb.v", 
                                         61);
    VL_WRITEF_NX("out: %b\n",0,8,vlSelfRef.mem_tb__DOT__out);
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "mem_tb.v", 
                                         63);
    VL_FINISH_MT("mem_tb.v", 63, "");
}

void Vmem_tb___024root___eval_act(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vmem_tb___024root___nba_sequent__TOP__0(Vmem_tb___024root* vlSelf);

void Vmem_tb___024root___eval_nba(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmem_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vmem_tb__ConstPool__TABLE_hfa3362cc_0;
extern const VlUnpacked<CData/*7:0*/, 64> Vmem_tb__ConstPool__TABLE_hd75a7312_0;

VL_INLINE_OPT void Vmem_tb___024root___nba_sequent__TOP__0(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.mem_tb__DOT__address) 
                     << 2U) | (((IData)(vlSelfRef.mem_tb__DOT__en) 
                                << 1U) | (IData)(vlSelfRef.mem_tb__DOT__reset)));
    if (Vmem_tb__ConstPool__TABLE_hfa3362cc_0[__Vtableidx1]) {
        vlSelfRef.mem_tb__DOT__out = Vmem_tb__ConstPool__TABLE_hd75a7312_0
            [__Vtableidx1];
    }
}

void Vmem_tb___024root___timing_resume(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h7063975f__0.resume(
                                                   "@(posedge mem_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmem_tb___024root___timing_commit(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h7063975f__0.commit(
                                                   "@(posedge mem_tb.clk)");
    }
}

void Vmem_tb___024root___eval_triggers__act(Vmem_tb___024root* vlSelf);

bool Vmem_tb___024root___eval_phase__act(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmem_tb___024root___eval_triggers__act(vlSelf);
    Vmem_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmem_tb___024root___timing_resume(vlSelf);
        Vmem_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmem_tb___024root___eval_phase__nba(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmem_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_tb___024root___dump_triggers__nba(Vmem_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmem_tb___024root___dump_triggers__act(Vmem_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmem_tb___024root___eval(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmem_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mem_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmem_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mem_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmem_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmem_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmem_tb___024root___eval_debug_assertions(Vmem_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmem_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmem_tb___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
