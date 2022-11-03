// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->data_out = 0U;
        vlSelf->top__DOT__current_state = 0U;
    } else if (vlSelf->en) {
        if (((((((((0U == vlSelf->top__DOT__current_state) 
                   | (1U == vlSelf->top__DOT__current_state)) 
                  | (2U == vlSelf->top__DOT__current_state)) 
                 | (3U == vlSelf->top__DOT__current_state)) 
                | (4U == vlSelf->top__DOT__current_state)) 
               | (5U == vlSelf->top__DOT__current_state)) 
              | (6U == vlSelf->top__DOT__current_state)) 
             | (7U == vlSelf->top__DOT__current_state))) {
            vlSelf->data_out = ((0U == vlSelf->top__DOT__current_state)
                                 ? 1U : ((1U == vlSelf->top__DOT__current_state)
                                          ? 3U : ((2U 
                                                   == vlSelf->top__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->top__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((4U 
                                                     == vlSelf->top__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((5U 
                                                      == vlSelf->top__DOT__current_state)
                                                      ? 0x3fU
                                                      : 
                                                     ((6U 
                                                       == vlSelf->top__DOT__current_state)
                                                       ? 0x7fU
                                                       : 0xffU)))))));
        } else if ((8U == vlSelf->top__DOT__current_state)) {
            vlSelf->data_out = 0U;
        }
        vlSelf->top__DOT__current_state = vlSelf->top__DOT__next_state;
    }
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__current_state) 
               | (1U == vlSelf->top__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->top__DOT__current_state)) {
            if (vlSelf->en) {
                vlSelf->top__DOT__next_state = 7U;
            }
        } else if (vlSelf->en) {
            vlSelf->top__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->top__DOT__current_state)) {
        if (vlSelf->en) {
            vlSelf->top__DOT__next_state = 0U;
        }
    }
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
