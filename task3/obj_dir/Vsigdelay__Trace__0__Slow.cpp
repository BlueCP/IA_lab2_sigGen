// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsigdelay__Syms.h"


VL_ATTR_COLD void Vsigdelay___024root__trace_init_sub__TOP__0(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"wr", false,-1);
    tracep->declBit(c+4,"rd", false,-1);
    tracep->declBus(c+5,"offset", false,-1, 7,0);
    tracep->declBus(c+6,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+7,"delayed_signal", false,-1, 7,0);
    tracep->pushNamePrefix("sigdelay ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"wr", false,-1);
    tracep->declBit(c+4,"rd", false,-1);
    tracep->declBus(c+5,"offset", false,-1, 7,0);
    tracep->declBus(c+6,"mic_signal", false,-1, 7,0);
    tracep->declBus(c+7,"delayed_signal", false,-1, 7,0);
    tracep->declBus(c+8,"write_addr", false,-1, 8,0);
    tracep->declBus(c+9,"read_addr", false,-1, 8,0);
    tracep->pushNamePrefix("myCounter ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+8,"count", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myRam ");
    tracep->declBus(c+10,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+11,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+3,"wr_en", false,-1);
    tracep->declBit(c+4,"rd_en", false,-1);
    tracep->declBus(c+8,"wr_addr", false,-1, 8,0);
    tracep->declBus(c+9,"rd_addr", false,-1, 8,0);
    tracep->declBus(c+6,"din", false,-1, 7,0);
    tracep->declBus(c+7,"dout", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_init_top(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_init_top\n"); );
    // Body
    Vsigdelay___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsigdelay___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsigdelay___024root__trace_register(Vsigdelay___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsigdelay___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsigdelay___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsigdelay___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsigdelay___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_top_0\n"); );
    // Init
    Vsigdelay___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsigdelay___024root*>(voidSelf);
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsigdelay___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsigdelay___024root__trace_full_sub_0(Vsigdelay___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hca6e72a7__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->wr));
    bufp->fullBit(oldp+4,(vlSelf->rd));
    bufp->fullCData(oldp+5,(vlSelf->offset),8);
    bufp->fullCData(oldp+6,(vlSelf->mic_signal),8);
    bufp->fullCData(oldp+7,(vlSelf->delayed_signal),8);
    bufp->fullSData(oldp+8,(vlSelf->sigdelay__DOT__write_addr),9);
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
    bufp->fullSData(oldp+9,((0x1ffU & ((IData)(vlSelf->sigdelay__DOT__write_addr) 
                                       - __Vtemp_hca6e72a7__0[0U]))),9);
    bufp->fullIData(oldp+10,(9U),32);
    bufp->fullIData(oldp+11,(8U),32);
}
