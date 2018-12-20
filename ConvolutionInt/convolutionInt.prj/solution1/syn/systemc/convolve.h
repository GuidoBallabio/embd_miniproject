// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _convolve_HH_
#define _convolve_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "convolve_mul_6ns_bkb.h"
#include "convolve_ama_addmcud.h"
#include "convolve_mac_muladEe.h"
#include "convolve_conv_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_CONV_ADDR_WIDTH = 15,
         unsigned int C_S_AXI_CONV_DATA_WIDTH = 32>
struct convolve : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > s_axi_conv_AWVALID;
    sc_out< sc_logic > s_axi_conv_AWREADY;
    sc_in< sc_uint<C_S_AXI_CONV_ADDR_WIDTH> > s_axi_conv_AWADDR;
    sc_in< sc_logic > s_axi_conv_WVALID;
    sc_out< sc_logic > s_axi_conv_WREADY;
    sc_in< sc_uint<C_S_AXI_CONV_DATA_WIDTH> > s_axi_conv_WDATA;
    sc_in< sc_uint<C_S_AXI_CONV_DATA_WIDTH/8> > s_axi_conv_WSTRB;
    sc_in< sc_logic > s_axi_conv_ARVALID;
    sc_out< sc_logic > s_axi_conv_ARREADY;
    sc_in< sc_uint<C_S_AXI_CONV_ADDR_WIDTH> > s_axi_conv_ARADDR;
    sc_out< sc_logic > s_axi_conv_RVALID;
    sc_in< sc_logic > s_axi_conv_RREADY;
    sc_out< sc_uint<C_S_AXI_CONV_DATA_WIDTH> > s_axi_conv_RDATA;
    sc_out< sc_lv<2> > s_axi_conv_RRESP;
    sc_out< sc_logic > s_axi_conv_BVALID;
    sc_in< sc_logic > s_axi_conv_BREADY;
    sc_out< sc_lv<2> > s_axi_conv_BRESP;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    convolve(sc_module_name name);
    SC_HAS_PROCESS(convolve);

    ~convolve();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    convolve_conv_s_axi<C_S_AXI_CONV_ADDR_WIDTH,C_S_AXI_CONV_DATA_WIDTH>* convolve_conv_s_axi_U;
    convolve_mul_6ns_bkb<1,2,6,7,12>* convolve_mul_6ns_bkb_U0;
    convolve_ama_addmcud<1,1,6,2,7,6,12>* convolve_ama_addmcud_U1;
    convolve_mac_muladEe<1,1,8,16,16,16>* convolve_mac_muladEe_U2;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<12> > in_r_address0;
    sc_signal< sc_logic > in_r_ce0;
    sc_signal< sc_lv<16> > in_r_q0;
    sc_signal< sc_logic > out_r_ce0;
    sc_signal< sc_logic > out_r_we0;
    sc_signal< sc_logic > krnl_ce0;
    sc_signal< sc_lv<8> > krnl_q0;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<12> > grp_fu_177_p2;
    sc_signal< sc_lv<12> > tmp_4_reg_339;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<12> > out_addr_reg_347;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > r_fu_209_p2;
    sc_signal< sc_lv<1> > exitcond_fu_203_p2;
    sc_signal< sc_lv<5> > kc_cast3_cast_fu_215_p1;
    sc_signal< sc_lv<5> > kc_cast3_cast_reg_360;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<2> > kc_1_fu_225_p2;
    sc_signal< sc_lv<2> > kc_1_reg_368;
    sc_signal< sc_lv<12> > col_offset_cast_cast_fu_247_p1;
    sc_signal< sc_lv<12> > col_offset_cast_cast_reg_373;
    sc_signal< sc_lv<1> > tmp_2_fu_219_p2;
    sc_signal< sc_lv<6> > c_1_fu_251_p2;
    sc_signal< sc_lv<4> > krnl_addr_reg_383;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > kr_1_fu_295_p2;
    sc_signal< sc_lv<2> > kr_1_reg_391;
    sc_signal< sc_lv<2> > tmp1_fu_301_p2;
    sc_signal< sc_lv<2> > tmp1_reg_396;
    sc_signal< sc_lv<1> > tmp_5_fu_289_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > in_load_reg_406;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<8> > krnl_load_reg_411;
    sc_signal< sc_lv<16> > grp_fu_327_p3;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<6> > r1_reg_102;
    sc_signal< sc_lv<6> > c_reg_114;
    sc_signal< sc_lv<1> > exitcond9_fu_183_p2;
    sc_signal< sc_lv<16> > sum_reg_126;
    sc_signal< sc_lv<2> > kc_reg_139;
    sc_signal< sc_lv<16> > sum_1_reg_150;
    sc_signal< sc_lv<2> > kr_reg_162;
    sc_signal< sc_lv<32> > tmp_6_cast_fu_198_p1;
    sc_signal< sc_lv<32> > tmp_11_cast_fu_284_p1;
    sc_signal< sc_lv<32> > tmp_13_cast_fu_310_p1;
    sc_signal< sc_lv<6> > grp_fu_177_p0;
    sc_signal< sc_lv<7> > grp_fu_177_p1;
    sc_signal< sc_lv<12> > c_cast4_cast_fu_189_p1;
    sc_signal< sc_lv<12> > tmp_6_fu_193_p2;
    sc_signal< sc_lv<2> > tmp_fu_231_p2;
    sc_signal< sc_lv<6> > tmp_cast_fu_237_p1;
    sc_signal< sc_lv<6> > col_offset_fu_241_p2;
    sc_signal< sc_lv<4> > tmp_9_fu_261_p3;
    sc_signal< sc_lv<5> > p_shl_cast_fu_269_p1;
    sc_signal< sc_lv<5> > kr_cast2_cast_fu_257_p1;
    sc_signal< sc_lv<5> > tmp_s_fu_273_p2;
    sc_signal< sc_lv<5> > tmp_10_fu_279_p2;
    sc_signal< sc_lv<12> > grp_fu_317_p4;
    sc_signal< sc_lv<7> > grp_fu_317_p2;
    sc_signal< sc_lv<6> > grp_fu_317_p3;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    sc_signal< sc_lv<12> > grp_fu_177_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<16> ap_const_lv16_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<12> ap_const_lv12_32;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_c_1_fu_251_p2();
    void thread_c_cast4_cast_fu_189_p1();
    void thread_col_offset_cast_cast_fu_247_p1();
    void thread_col_offset_fu_241_p2();
    void thread_exitcond9_fu_183_p2();
    void thread_exitcond_fu_203_p2();
    void thread_grp_fu_177_p0();
    void thread_grp_fu_177_p00();
    void thread_grp_fu_177_p1();
    void thread_grp_fu_317_p2();
    void thread_grp_fu_317_p3();
    void thread_in_r_address0();
    void thread_in_r_ce0();
    void thread_kc_1_fu_225_p2();
    void thread_kc_cast3_cast_fu_215_p1();
    void thread_kr_1_fu_295_p2();
    void thread_kr_cast2_cast_fu_257_p1();
    void thread_krnl_ce0();
    void thread_out_r_ce0();
    void thread_out_r_we0();
    void thread_p_shl_cast_fu_269_p1();
    void thread_r_fu_209_p2();
    void thread_tmp1_fu_301_p2();
    void thread_tmp_10_fu_279_p2();
    void thread_tmp_11_cast_fu_284_p1();
    void thread_tmp_13_cast_fu_310_p1();
    void thread_tmp_2_fu_219_p2();
    void thread_tmp_5_fu_289_p2();
    void thread_tmp_6_cast_fu_198_p1();
    void thread_tmp_6_fu_193_p2();
    void thread_tmp_9_fu_261_p3();
    void thread_tmp_cast_fu_237_p1();
    void thread_tmp_fu_231_p2();
    void thread_tmp_s_fu_273_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
