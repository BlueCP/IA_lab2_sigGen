// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsigdelay___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsigdelay___024root__trace_chg_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hca6e72a7__0;
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->wr));
    bufp->chgBit(oldp+3,(vlSelf->rd));
    bufp->chgCData(oldp+4,(vlSelf->offset),8);
    bufp->chgCData(oldp+5,(vlSelf->mic_signal),8);
    bufp->chgCData(oldp+6,(vlSelf->delayed_signal),8);
    bufp->chgSData(oldp+7,(vlSelf->sigdelay__DOT__write_addr),9);
    VL_EXTEND_WQ(96,64, __Vtemp_hca6e72a7__0, (((QData)((IData)(vlSelf->offset)) 
                                                << 0x38U) 
                                               | (((QData)((IData)(vlSelf->offset)) 
                                                   << 0x30U) 
                                                  | (((QData)((IData)(vlSelf->offset)) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(vlSelf->offset)) 
                                                         << 0x20U) 
                                                        | (((QData)((IData)(vlSelf->offset)) 
                                                            << 0x18U) 
                                                           | (((QData)((IData)(vlSelf->offset)) 
                                                               << 0x10U) 
                                                              | (((QData)((IData)(vlSelf->offset)) 
                                                                  << 8U) 
                                                                 | (QData)((IData)(vlSelf->offset))))))))));
    bufp->chgSData(oldp+8,((0x1ffU & ((IData)(vlSelf->sigdelay__DOT__write_addr) 
                                      - __Vtemp_hca6e72a7__0[0U]))),9);
}

void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_cleanup\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
