// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay___024root.h"

VL_INLINE_OPT void Vsigdelay___024root___sequent__TOP__0(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__sigdelay__DOT__write_addr;
    SData/*8:0*/ __Vdlyvdim0__sigdelay__DOT__myRam__DOT__ram_array__v0;
    CData/*7:0*/ __Vdlyvval__sigdelay__DOT__myRam__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__sigdelay__DOT__myRam__DOT__ram_array__v0;
    VlWide<3>/*95:0*/ __Vtemp_hca6e72a7__0;
    // Body
    __Vdly__sigdelay__DOT__write_addr = vlSelf->sigdelay__DOT__write_addr;
    __Vdlyvset__sigdelay__DOT__myRam__DOT__ram_array__v0 = 0U;
    if (vlSelf->rst) {
        __Vdly__sigdelay__DOT__write_addr = 0U;
    } else if (vlSelf->wr) {
        __Vdly__sigdelay__DOT__write_addr = (0x1ffU 
                                             & ((IData)(vlSelf->sigdelay__DOT__write_addr) 
                                                + (IData)(vlSelf->wr)));
    }
    if (vlSelf->rd) {
        VL_EXTEND_WQ(96,64, __Vtemp_hca6e72a7__0, (
                                                   ((QData)((IData)(vlSelf->offset)) 
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
        vlSelf->delayed_signal = vlSelf->sigdelay__DOT__myRam__DOT__ram_array
            [(0x1ffU & ((IData)(vlSelf->sigdelay__DOT__write_addr) 
                        - __Vtemp_hca6e72a7__0[0U]))];
    }
    if (vlSelf->wr) {
        __Vdlyvval__sigdelay__DOT__myRam__DOT__ram_array__v0 
            = vlSelf->mic_signal;
        __Vdlyvset__sigdelay__DOT__myRam__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__sigdelay__DOT__myRam__DOT__ram_array__v0 
            = vlSelf->sigdelay__DOT__write_addr;
    }
    vlSelf->sigdelay__DOT__write_addr = __Vdly__sigdelay__DOT__write_addr;
    if (__Vdlyvset__sigdelay__DOT__myRam__DOT__ram_array__v0) {
        vlSelf->sigdelay__DOT__myRam__DOT__ram_array[__Vdlyvdim0__sigdelay__DOT__myRam__DOT__ram_array__v0] 
            = __Vdlyvval__sigdelay__DOT__myRam__DOT__ram_array__v0;
    }
}

void Vsigdelay___024root___eval(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsigdelay___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vsigdelay___024root___eval_debug_assertions(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->wr & 0xfeU))) {
        Verilated::overWidthError("wr");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
}
#endif  // VL_DEBUG
