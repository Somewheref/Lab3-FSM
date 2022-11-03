// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->top__DOT____Vcellout__fsm__data_out;
    if (((((((((0U == vlSelf->top__DOT__fsm__DOT__current_state) 
               | (1U == vlSelf->top__DOT__fsm__DOT__current_state)) 
              | (2U == vlSelf->top__DOT__fsm__DOT__current_state)) 
             | (3U == vlSelf->top__DOT__fsm__DOT__current_state)) 
            | (4U == vlSelf->top__DOT__fsm__DOT__current_state)) 
           | (5U == vlSelf->top__DOT__fsm__DOT__current_state)) 
          | (6U == vlSelf->top__DOT__fsm__DOT__current_state)) 
         | (7U == vlSelf->top__DOT__fsm__DOT__current_state))) {
        if ((0U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 1U;
            }
        } else if ((1U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 2U;
            }
        } else if ((2U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 3U;
            }
        } else if ((3U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 4U;
            }
        } else if ((4U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 5U;
            }
        } else if ((5U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 6U;
            }
        } else if ((6U == vlSelf->top__DOT__fsm__DOT__current_state)) {
            if (vlSelf->top__DOT__tick) {
                vlSelf->top__DOT__fsm__DOT__next_state = 7U;
            }
        } else if (vlSelf->top__DOT__tick) {
            vlSelf->top__DOT__fsm__DOT__next_state = 8U;
        }
    } else if ((8U == vlSelf->top__DOT__fsm__DOT__current_state)) {
        if (vlSelf->top__DOT__tick) {
            vlSelf->top__DOT__fsm__DOT__next_state = 0U;
        }
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(8);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vcellout__fsm__data_out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__cltick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__fsm__DOT__current_state = 0;
    vlSelf->top__DOT__fsm__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
