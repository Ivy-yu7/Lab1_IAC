// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcounter__Syms.h"


void Vcounter___024root__trace_chg_0_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcounter___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_chg_0\n"); );
    // Init
    Vcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter___024root*>(voidSelf);
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcounter___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcounter___024root__trace_chg_0_sub_0(Vcounter___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.clk));
    bufp->chgBit(oldp+1,(vlSelfRef.rst));
    bufp->chgBit(oldp+2,(vlSelfRef.en));
    bufp->chgSData(oldp+3,(vlSelfRef.bcd),12);
    bufp->chgCData(oldp+4,(vlSelfRef.top__DOT__count),8);
    bufp->chgIData(oldp+5,(vlSelfRef.top__DOT__myDecoder__DOT__result),20);
}

void Vcounter___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root__trace_cleanup\n"); );
    // Init
    Vcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcounter___024root*>(voidSelf);
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
