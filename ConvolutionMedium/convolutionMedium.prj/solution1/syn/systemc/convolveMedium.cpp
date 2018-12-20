// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "convolveMedium.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic convolveMedium::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic convolveMedium::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> convolveMedium::ap_ST_fsm_state1 = "1";
const sc_lv<8> convolveMedium::ap_ST_fsm_state2 = "10";
const sc_lv<8> convolveMedium::ap_ST_fsm_state3 = "100";
const sc_lv<8> convolveMedium::ap_ST_fsm_state4 = "1000";
const sc_lv<8> convolveMedium::ap_ST_fsm_state5 = "10000";
const sc_lv<8> convolveMedium::ap_ST_fsm_state6 = "100000";
const sc_lv<8> convolveMedium::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> convolveMedium::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> convolveMedium::ap_const_lv32_0 = "00000000000000000000000000000000";
const int convolveMedium::C_S_AXI_DATA_WIDTH = "100000";
const sc_lv<32> convolveMedium::ap_const_lv32_2 = "10";
const sc_lv<1> convolveMedium::ap_const_lv1_1 = "1";
const sc_lv<32> convolveMedium::ap_const_lv32_3 = "11";
const sc_lv<1> convolveMedium::ap_const_lv1_0 = "0";
const sc_lv<32> convolveMedium::ap_const_lv32_4 = "100";
const sc_lv<32> convolveMedium::ap_const_lv32_5 = "101";
const sc_lv<32> convolveMedium::ap_const_lv32_6 = "110";
const sc_lv<32> convolveMedium::ap_const_lv32_7 = "111";
const sc_lv<8> convolveMedium::ap_const_lv8_1 = "1";
const sc_lv<32> convolveMedium::ap_const_lv32_1 = "1";
const sc_lv<16> convolveMedium::ap_const_lv16_0 = "0000000000000000";
const sc_lv<2> convolveMedium::ap_const_lv2_0 = "00";
const sc_lv<8> convolveMedium::ap_const_lv8_FF = "11111111";
const sc_lv<2> convolveMedium::ap_const_lv2_3 = "11";
const sc_lv<2> convolveMedium::ap_const_lv2_1 = "1";
const bool convolveMedium::ap_const_boolean_1 = true;

convolveMedium::convolveMedium(sc_module_name name) : sc_module(name), mVcdFile(0) {
    convolveMedium_convm_s_axi_U = new convolveMedium_convm_s_axi<C_S_AXI_CONVM_ADDR_WIDTH,C_S_AXI_CONVM_DATA_WIDTH>("convolveMedium_convm_s_axi_U");
    convolveMedium_convm_s_axi_U->AWVALID(s_axi_convm_AWVALID);
    convolveMedium_convm_s_axi_U->AWREADY(s_axi_convm_AWREADY);
    convolveMedium_convm_s_axi_U->AWADDR(s_axi_convm_AWADDR);
    convolveMedium_convm_s_axi_U->WVALID(s_axi_convm_WVALID);
    convolveMedium_convm_s_axi_U->WREADY(s_axi_convm_WREADY);
    convolveMedium_convm_s_axi_U->WDATA(s_axi_convm_WDATA);
    convolveMedium_convm_s_axi_U->WSTRB(s_axi_convm_WSTRB);
    convolveMedium_convm_s_axi_U->ARVALID(s_axi_convm_ARVALID);
    convolveMedium_convm_s_axi_U->ARREADY(s_axi_convm_ARREADY);
    convolveMedium_convm_s_axi_U->ARADDR(s_axi_convm_ARADDR);
    convolveMedium_convm_s_axi_U->RVALID(s_axi_convm_RVALID);
    convolveMedium_convm_s_axi_U->RREADY(s_axi_convm_RREADY);
    convolveMedium_convm_s_axi_U->RDATA(s_axi_convm_RDATA);
    convolveMedium_convm_s_axi_U->RRESP(s_axi_convm_RRESP);
    convolveMedium_convm_s_axi_U->BVALID(s_axi_convm_BVALID);
    convolveMedium_convm_s_axi_U->BREADY(s_axi_convm_BREADY);
    convolveMedium_convm_s_axi_U->BRESP(s_axi_convm_BRESP);
    convolveMedium_convm_s_axi_U->ACLK(ap_clk);
    convolveMedium_convm_s_axi_U->ARESET(ap_rst_n_inv);
    convolveMedium_convm_s_axi_U->ACLK_EN(ap_var_for_const0);
    convolveMedium_convm_s_axi_U->ap_start(ap_start);
    convolveMedium_convm_s_axi_U->interrupt(interrupt);
    convolveMedium_convm_s_axi_U->ap_ready(ap_ready);
    convolveMedium_convm_s_axi_U->ap_done(ap_done);
    convolveMedium_convm_s_axi_U->ap_idle(ap_idle);
    convolveMedium_convm_s_axi_U->in_r_address0(in_r_address0);
    convolveMedium_convm_s_axi_U->in_r_ce0(in_r_ce0);
    convolveMedium_convm_s_axi_U->in_r_q0(in_r_q0);
    convolveMedium_convm_s_axi_U->out_r_address0(out_addr_reg_326);
    convolveMedium_convm_s_axi_U->out_r_ce0(out_r_ce0);
    convolveMedium_convm_s_axi_U->out_r_we0(out_r_we0);
    convolveMedium_convm_s_axi_U->out_r_d0(sum_reg_126);
    convolveMedium_convm_s_axi_U->krnl_address0(krnl_addr_reg_362);
    convolveMedium_convm_s_axi_U->krnl_ce0(krnl_ce0);
    convolveMedium_convm_s_axi_U->krnl_q0(krnl_q0);
    convolveMedium_mabkb_U0 = new convolveMedium_mabkb<1,1,8,16,16,16>("convolveMedium_mabkb_U0");
    convolveMedium_mabkb_U0->din0(krnl_load_reg_390);
    convolveMedium_mabkb_U0->din1(in_load_reg_385);
    convolveMedium_mabkb_U0->din2(sum_1_reg_150);
    convolveMedium_mabkb_U0->dout(grp_fu_316_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond9_fu_173_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond9_fu_173_p2 );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_c_1_fu_236_p2);
    sensitive << ( c_reg_114 );

    SC_METHOD(thread_col_offset_fu_230_p2);
    sensitive << ( c_reg_114 );
    sensitive << ( tmp_cast_fu_226_p1 );

    SC_METHOD(thread_exitcond9_fu_173_p2);
    sensitive << ( r1_reg_102 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_exitcond_fu_192_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( c_reg_114 );

    SC_METHOD(thread_in_r_address0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_12_fu_308_p1 );

    SC_METHOD(thread_in_r_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_kc_1_fu_214_p2);
    sensitive << ( kc_reg_139 );

    SC_METHOD(thread_kc_cast3_cast_fu_204_p1);
    sensitive << ( kc_reg_139 );

    SC_METHOD(thread_kr_1_fu_280_p2);
    sensitive << ( kr_reg_162 );

    SC_METHOD(thread_kr_cast2_cast_fu_242_p1);
    sensitive << ( kr_reg_162 );

    SC_METHOD(thread_krnl_ce0);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_out_r_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_out_r_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_2_fu_208_p2 );

    SC_METHOD(thread_p_shl_cast_fu_254_p1);
    sensitive << ( tmp_9_fu_246_p3 );

    SC_METHOD(thread_r_fu_198_p2);
    sensitive << ( r1_reg_102 );

    SC_METHOD(thread_sum1_fu_296_p2);
    sensitive << ( r1_reg_102 );
    sensitive << ( tmp1_cast_fu_292_p1 );

    SC_METHOD(thread_tmp1_cast_fu_292_p1);
    sensitive << ( tmp1_fu_286_p2 );

    SC_METHOD(thread_tmp1_fu_286_p2);
    sensitive << ( kr_reg_162 );

    SC_METHOD(thread_tmp_10_fu_264_p2);
    sensitive << ( kc_cast3_cast_reg_339 );
    sensitive << ( tmp_s_fu_258_p2 );

    SC_METHOD(thread_tmp_11_cast_fu_269_p1);
    sensitive << ( tmp_10_fu_264_p2 );

    SC_METHOD(thread_tmp_11_fu_302_p3);
    sensitive << ( col_offset_reg_352 );
    sensitive << ( sum1_reg_375 );

    SC_METHOD(thread_tmp_12_fu_308_p1);
    sensitive << ( tmp_11_fu_302_p3 );

    SC_METHOD(thread_tmp_2_fu_208_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( kc_reg_139 );

    SC_METHOD(thread_tmp_4_fu_179_p3);
    sensitive << ( r1_reg_102 );
    sensitive << ( c_reg_114 );

    SC_METHOD(thread_tmp_5_fu_274_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( kr_reg_162 );

    SC_METHOD(thread_tmp_6_fu_187_p1);
    sensitive << ( tmp_4_fu_179_p3 );

    SC_METHOD(thread_tmp_9_fu_246_p3);
    sensitive << ( kr_reg_162 );

    SC_METHOD(thread_tmp_cast_fu_226_p1);
    sensitive << ( tmp_fu_220_p2 );

    SC_METHOD(thread_tmp_fu_220_p2);
    sensitive << ( kc_reg_139 );

    SC_METHOD(thread_tmp_s_fu_258_p2);
    sensitive << ( p_shl_cast_fu_254_p1 );
    sensitive << ( kr_cast2_cast_fu_242_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond_fu_192_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_2_fu_208_p2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_5_fu_274_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond9_fu_173_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "convolveMedium_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, s_axi_convm_AWVALID, "(port)s_axi_convm_AWVALID");
    sc_trace(mVcdFile, s_axi_convm_AWREADY, "(port)s_axi_convm_AWREADY");
    sc_trace(mVcdFile, s_axi_convm_AWADDR, "(port)s_axi_convm_AWADDR");
    sc_trace(mVcdFile, s_axi_convm_WVALID, "(port)s_axi_convm_WVALID");
    sc_trace(mVcdFile, s_axi_convm_WREADY, "(port)s_axi_convm_WREADY");
    sc_trace(mVcdFile, s_axi_convm_WDATA, "(port)s_axi_convm_WDATA");
    sc_trace(mVcdFile, s_axi_convm_WSTRB, "(port)s_axi_convm_WSTRB");
    sc_trace(mVcdFile, s_axi_convm_ARVALID, "(port)s_axi_convm_ARVALID");
    sc_trace(mVcdFile, s_axi_convm_ARREADY, "(port)s_axi_convm_ARREADY");
    sc_trace(mVcdFile, s_axi_convm_ARADDR, "(port)s_axi_convm_ARADDR");
    sc_trace(mVcdFile, s_axi_convm_RVALID, "(port)s_axi_convm_RVALID");
    sc_trace(mVcdFile, s_axi_convm_RREADY, "(port)s_axi_convm_RREADY");
    sc_trace(mVcdFile, s_axi_convm_RDATA, "(port)s_axi_convm_RDATA");
    sc_trace(mVcdFile, s_axi_convm_RRESP, "(port)s_axi_convm_RRESP");
    sc_trace(mVcdFile, s_axi_convm_BVALID, "(port)s_axi_convm_BVALID");
    sc_trace(mVcdFile, s_axi_convm_BREADY, "(port)s_axi_convm_BREADY");
    sc_trace(mVcdFile, s_axi_convm_BRESP, "(port)s_axi_convm_BRESP");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, in_r_address0, "in_r_address0");
    sc_trace(mVcdFile, in_r_ce0, "in_r_ce0");
    sc_trace(mVcdFile, in_r_q0, "in_r_q0");
    sc_trace(mVcdFile, out_r_ce0, "out_r_ce0");
    sc_trace(mVcdFile, out_r_we0, "out_r_we0");
    sc_trace(mVcdFile, krnl_ce0, "krnl_ce0");
    sc_trace(mVcdFile, krnl_q0, "krnl_q0");
    sc_trace(mVcdFile, out_addr_reg_326, "out_addr_reg_326");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, r_fu_198_p2, "r_fu_198_p2");
    sc_trace(mVcdFile, exitcond_fu_192_p2, "exitcond_fu_192_p2");
    sc_trace(mVcdFile, kc_cast3_cast_fu_204_p1, "kc_cast3_cast_fu_204_p1");
    sc_trace(mVcdFile, kc_cast3_cast_reg_339, "kc_cast3_cast_reg_339");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, kc_1_fu_214_p2, "kc_1_fu_214_p2");
    sc_trace(mVcdFile, kc_1_reg_347, "kc_1_reg_347");
    sc_trace(mVcdFile, col_offset_fu_230_p2, "col_offset_fu_230_p2");
    sc_trace(mVcdFile, col_offset_reg_352, "col_offset_reg_352");
    sc_trace(mVcdFile, tmp_2_fu_208_p2, "tmp_2_fu_208_p2");
    sc_trace(mVcdFile, c_1_fu_236_p2, "c_1_fu_236_p2");
    sc_trace(mVcdFile, krnl_addr_reg_362, "krnl_addr_reg_362");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, kr_1_fu_280_p2, "kr_1_fu_280_p2");
    sc_trace(mVcdFile, kr_1_reg_370, "kr_1_reg_370");
    sc_trace(mVcdFile, sum1_fu_296_p2, "sum1_fu_296_p2");
    sc_trace(mVcdFile, sum1_reg_375, "sum1_reg_375");
    sc_trace(mVcdFile, tmp_5_fu_274_p2, "tmp_5_fu_274_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, in_load_reg_385, "in_load_reg_385");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, krnl_load_reg_390, "krnl_load_reg_390");
    sc_trace(mVcdFile, grp_fu_316_p3, "grp_fu_316_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, r1_reg_102, "r1_reg_102");
    sc_trace(mVcdFile, c_reg_114, "c_reg_114");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond9_fu_173_p2, "exitcond9_fu_173_p2");
    sc_trace(mVcdFile, sum_reg_126, "sum_reg_126");
    sc_trace(mVcdFile, kc_reg_139, "kc_reg_139");
    sc_trace(mVcdFile, sum_1_reg_150, "sum_1_reg_150");
    sc_trace(mVcdFile, kr_reg_162, "kr_reg_162");
    sc_trace(mVcdFile, tmp_6_fu_187_p1, "tmp_6_fu_187_p1");
    sc_trace(mVcdFile, tmp_11_cast_fu_269_p1, "tmp_11_cast_fu_269_p1");
    sc_trace(mVcdFile, tmp_12_fu_308_p1, "tmp_12_fu_308_p1");
    sc_trace(mVcdFile, tmp_4_fu_179_p3, "tmp_4_fu_179_p3");
    sc_trace(mVcdFile, tmp_fu_220_p2, "tmp_fu_220_p2");
    sc_trace(mVcdFile, tmp_cast_fu_226_p1, "tmp_cast_fu_226_p1");
    sc_trace(mVcdFile, tmp_9_fu_246_p3, "tmp_9_fu_246_p3");
    sc_trace(mVcdFile, p_shl_cast_fu_254_p1, "p_shl_cast_fu_254_p1");
    sc_trace(mVcdFile, kr_cast2_cast_fu_242_p1, "kr_cast2_cast_fu_242_p1");
    sc_trace(mVcdFile, tmp_s_fu_258_p2, "tmp_s_fu_258_p2");
    sc_trace(mVcdFile, tmp_10_fu_264_p2, "tmp_10_fu_264_p2");
    sc_trace(mVcdFile, tmp1_fu_286_p2, "tmp1_fu_286_p2");
    sc_trace(mVcdFile, tmp1_cast_fu_292_p1, "tmp1_cast_fu_292_p1");
    sc_trace(mVcdFile, tmp_11_fu_302_p3, "tmp_11_fu_302_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("convolveMedium.hdltvin.dat");
    mHdltvoutHandle.open("convolveMedium.hdltvout.dat");
}

convolveMedium::~convolveMedium() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete convolveMedium_convm_s_axi_U;
    delete convolveMedium_mabkb_U0;
}

void convolveMedium::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void convolveMedium::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_fu_173_p2.read()))) {
        c_reg_114 = ap_const_lv8_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_208_p2.read()))) {
        c_reg_114 = c_1_fu_236_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_274_p2.read()))) {
        kc_reg_139 = kc_1_reg_347.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(exitcond_fu_192_p2.read(), ap_const_lv1_0))) {
        kc_reg_139 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        kr_reg_162 = kr_1_reg_370.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_208_p2.read(), ap_const_lv1_0))) {
        kr_reg_162 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_192_p2.read(), ap_const_lv1_1))) {
        r1_reg_102 = r_fu_198_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        r1_reg_102 = ap_const_lv8_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        sum_1_reg_150 = grp_fu_316_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(tmp_2_fu_208_p2.read(), ap_const_lv1_0))) {
        sum_1_reg_150 = sum_reg_126.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_274_p2.read()))) {
        sum_reg_126 = sum_1_reg_150.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
                esl_seteq<1,1,1>(exitcond_fu_192_p2.read(), ap_const_lv1_0))) {
        sum_reg_126 = ap_const_lv16_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(tmp_2_fu_208_p2.read(), ap_const_lv1_0))) {
        col_offset_reg_352 = col_offset_fu_230_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        in_load_reg_385 = in_r_q0.read();
        krnl_load_reg_390 = krnl_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        kc_1_reg_347 = kc_1_fu_214_p2.read();
        kc_cast3_cast_reg_339 = kc_cast3_cast_fu_204_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        kr_1_reg_370 = kr_1_fu_280_p2.read();
        krnl_addr_reg_362 =  (sc_lv<4>) (tmp_11_cast_fu_269_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        out_addr_reg_326 =  (sc_lv<16>) (tmp_6_fu_187_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_5_fu_274_p2.read()))) {
        sum1_reg_375 = sum1_fu_296_p2.read();
    }
}

void convolveMedium::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void convolveMedium::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void convolveMedium::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void convolveMedium::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void convolveMedium::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void convolveMedium::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void convolveMedium::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void convolveMedium::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void convolveMedium::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_173_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void convolveMedium::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void convolveMedium::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_173_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void convolveMedium::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void convolveMedium::thread_c_1_fu_236_p2() {
    c_1_fu_236_p2 = (!c_reg_114.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(c_reg_114.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void convolveMedium::thread_col_offset_fu_230_p2() {
    col_offset_fu_230_p2 = (!tmp_cast_fu_226_p1.read().is_01() || !c_reg_114.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_cast_fu_226_p1.read()) + sc_biguint<8>(c_reg_114.read()));
}

void convolveMedium::thread_exitcond9_fu_173_p2() {
    exitcond9_fu_173_p2 = (!r1_reg_102.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(r1_reg_102.read() == ap_const_lv8_FF);
}

void convolveMedium::thread_exitcond_fu_192_p2() {
    exitcond_fu_192_p2 = (!c_reg_114.read().is_01() || !ap_const_lv8_FF.is_01())? sc_lv<1>(): sc_lv<1>(c_reg_114.read() == ap_const_lv8_FF);
}

void convolveMedium::thread_in_r_address0() {
    in_r_address0 =  (sc_lv<16>) (tmp_12_fu_308_p1.read());
}

void convolveMedium::thread_in_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        in_r_ce0 = ap_const_logic_1;
    } else {
        in_r_ce0 = ap_const_logic_0;
    }
}

void convolveMedium::thread_kc_1_fu_214_p2() {
    kc_1_fu_214_p2 = (!kc_reg_139.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kc_reg_139.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void convolveMedium::thread_kc_cast3_cast_fu_204_p1() {
    kc_cast3_cast_fu_204_p1 = esl_zext<5,2>(kc_reg_139.read());
}

void convolveMedium::thread_kr_1_fu_280_p2() {
    kr_1_fu_280_p2 = (!kr_reg_162.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(kr_reg_162.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void convolveMedium::thread_kr_cast2_cast_fu_242_p1() {
    kr_cast2_cast_fu_242_p1 = esl_zext<5,2>(kr_reg_162.read());
}

void convolveMedium::thread_krnl_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        krnl_ce0 = ap_const_logic_1;
    } else {
        krnl_ce0 = ap_const_logic_0;
    }
}

void convolveMedium::thread_out_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        out_r_ce0 = ap_const_logic_1;
    } else {
        out_r_ce0 = ap_const_logic_0;
    }
}

void convolveMedium::thread_out_r_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_208_p2.read()))) {
        out_r_we0 = ap_const_logic_1;
    } else {
        out_r_we0 = ap_const_logic_0;
    }
}

void convolveMedium::thread_p_shl_cast_fu_254_p1() {
    p_shl_cast_fu_254_p1 = esl_zext<5,4>(tmp_9_fu_246_p3.read());
}

void convolveMedium::thread_r_fu_198_p2() {
    r_fu_198_p2 = (!r1_reg_102.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(r1_reg_102.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void convolveMedium::thread_sum1_fu_296_p2() {
    sum1_fu_296_p2 = (!r1_reg_102.read().is_01() || !tmp1_cast_fu_292_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(r1_reg_102.read()) + sc_bigint<8>(tmp1_cast_fu_292_p1.read()));
}

void convolveMedium::thread_tmp1_cast_fu_292_p1() {
    tmp1_cast_fu_292_p1 = esl_sext<8,2>(tmp1_fu_286_p2.read());
}

void convolveMedium::thread_tmp1_fu_286_p2() {
    tmp1_fu_286_p2 = (!kr_reg_162.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<2>(): (sc_biguint<2>(kr_reg_162.read()) + sc_bigint<2>(ap_const_lv2_3));
}

void convolveMedium::thread_tmp_10_fu_264_p2() {
    tmp_10_fu_264_p2 = (!tmp_s_fu_258_p2.read().is_01() || !kc_cast3_cast_reg_339.read().is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_s_fu_258_p2.read()) + sc_biguint<5>(kc_cast3_cast_reg_339.read()));
}

void convolveMedium::thread_tmp_11_cast_fu_269_p1() {
    tmp_11_cast_fu_269_p1 = esl_sext<32,5>(tmp_10_fu_264_p2.read());
}

void convolveMedium::thread_tmp_11_fu_302_p3() {
    tmp_11_fu_302_p3 = esl_concat<8,8>(sum1_reg_375.read(), col_offset_reg_352.read());
}

void convolveMedium::thread_tmp_12_fu_308_p1() {
    tmp_12_fu_308_p1 = esl_zext<32,16>(tmp_11_fu_302_p3.read());
}

void convolveMedium::thread_tmp_2_fu_208_p2() {
    tmp_2_fu_208_p2 = (!kc_reg_139.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kc_reg_139.read() == ap_const_lv2_3);
}

void convolveMedium::thread_tmp_4_fu_179_p3() {
    tmp_4_fu_179_p3 = esl_concat<8,8>(r1_reg_102.read(), c_reg_114.read());
}

void convolveMedium::thread_tmp_5_fu_274_p2() {
    tmp_5_fu_274_p2 = (!kr_reg_162.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(kr_reg_162.read() == ap_const_lv2_3);
}

void convolveMedium::thread_tmp_6_fu_187_p1() {
    tmp_6_fu_187_p1 = esl_zext<32,16>(tmp_4_fu_179_p3.read());
}

void convolveMedium::thread_tmp_9_fu_246_p3() {
    tmp_9_fu_246_p3 = esl_concat<2,2>(kr_reg_162.read(), ap_const_lv2_0);
}

void convolveMedium::thread_tmp_cast_fu_226_p1() {
    tmp_cast_fu_226_p1 = esl_sext<8,2>(tmp_fu_220_p2.read());
}

void convolveMedium::thread_tmp_fu_220_p2() {
    tmp_fu_220_p2 = (!kc_reg_139.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<2>(): (sc_biguint<2>(kc_reg_139.read()) + sc_bigint<2>(ap_const_lv2_3));
}

void convolveMedium::thread_tmp_s_fu_258_p2() {
    tmp_s_fu_258_p2 = (!p_shl_cast_fu_254_p1.read().is_01() || !kr_cast2_cast_fu_242_p1.read().is_01())? sc_lv<5>(): (sc_biguint<5>(p_shl_cast_fu_254_p1.read()) - sc_biguint<5>(kr_cast2_cast_fu_242_p1.read()));
}

void convolveMedium::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_173_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond_fu_192_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_2_fu_208_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, tmp_5_fu_274_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

void convolveMedium::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_AWVALID\" :  \"" << s_axi_convm_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_convm_AWREADY\" :  \"" << s_axi_convm_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_AWADDR\" :  \"" << s_axi_convm_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_WVALID\" :  \"" << s_axi_convm_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_WREADY\" :  \"" << s_axi_convm_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_WDATA\" :  \"" << s_axi_convm_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_WSTRB\" :  \"" << s_axi_convm_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_ARVALID\" :  \"" << s_axi_convm_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_ARREADY\" :  \"" << s_axi_convm_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_ARADDR\" :  \"" << s_axi_convm_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_RVALID\" :  \"" << s_axi_convm_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_RREADY\" :  \"" << s_axi_convm_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_RDATA\" :  \"" << s_axi_convm_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_RRESP\" :  \"" << s_axi_convm_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_BVALID\" :  \"" << s_axi_convm_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_convm_BREADY\" :  \"" << s_axi_convm_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_convm_BRESP\" :  \"" << s_axi_convm_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

