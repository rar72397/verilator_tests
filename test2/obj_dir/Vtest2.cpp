// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest2__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest2::Vtest2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtest2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtest2::Vtest2(const char* _vcname__)
    : Vtest2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtest2::~Vtest2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtest2___024root___eval_debug_assertions(Vtest2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest2___024root___eval_static(Vtest2___024root* vlSelf);
void Vtest2___024root___eval_initial(Vtest2___024root* vlSelf);
void Vtest2___024root___eval_settle(Vtest2___024root* vlSelf);
void Vtest2___024root___eval(Vtest2___024root* vlSelf);

void Vtest2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtest2___024root___eval_static(&(vlSymsp->TOP));
        Vtest2___024root___eval_initial(&(vlSymsp->TOP));
        Vtest2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtest2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtest2::eventsPending() { return false; }

uint64_t Vtest2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtest2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtest2___024root___eval_final(Vtest2___024root* vlSelf);

VL_ATTR_COLD void Vtest2::final() {
    Vtest2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtest2::hierName() const { return vlSymsp->name(); }
const char* Vtest2::modelName() const { return "Vtest2"; }
unsigned Vtest2::threads() const { return 1; }
void Vtest2::prepareClone() const { contextp()->prepareClone(); }
void Vtest2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtest2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtest2___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtest2___024root__trace_init_top(Vtest2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest2___024root*>(voidSelf);
    Vtest2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtest2___024root__trace_decl_types(tracep);
    Vtest2___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vtest2___024root__trace_register(Vtest2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest2::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtest2::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest2___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
