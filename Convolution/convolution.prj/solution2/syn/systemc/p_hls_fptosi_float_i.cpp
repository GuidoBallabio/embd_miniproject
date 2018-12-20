// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "p_hls_fptosi_float_i.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic p_hls_fptosi_float_i::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic p_hls_fptosi_float_i::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> p_hls_fptosi_float_i::ap_ST_fsm_state1 = "1";
const sc_lv<3> p_hls_fptosi_float_i::ap_ST_fsm_state2 = "10";
const sc_lv<3> p_hls_fptosi_float_i::ap_ST_fsm_state3 = "100";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_1 = "1";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_1F = "11111";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_17 = "10111";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_1E = "11110";
const sc_lv<9> p_hls_fptosi_float_i::ap_const_lv9_181 = "110000001";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_8 = "1000";
const sc_lv<8> p_hls_fptosi_float_i::ap_const_lv8_7F = "1111111";
const sc_lv<1> p_hls_fptosi_float_i::ap_const_lv1_1 = "1";
const sc_lv<1> p_hls_fptosi_float_i::ap_const_lv1_0 = "0";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_18 = "11000";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_26 = "100110";
const sc_lv<32> p_hls_fptosi_float_i::ap_const_lv32_2 = "10";
const sc_lv<16> p_hls_fptosi_float_i::ap_const_lv16_0 = "0000000000000000";
const bool p_hls_fptosi_float_i::ap_const_boolean_1 = true;

p_hls_fptosi_float_i::p_hls_fptosi_float_i(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_return);
    sensitive << ( p_Result_s_reg_186 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_7_i_i_fu_170_p1 );
    sensitive << ( tmp_10_i_i_fu_173_p2 );

    SC_METHOD(thread_isNeg_fu_80_p3);
    sensitive << ( sh_assign_fu_74_p2 );

    SC_METHOD(thread_loc_V_1_fu_66_p1);
    sensitive << ( p_Val2_s_fu_44_p1 );

    SC_METHOD(thread_loc_V_fu_56_p4);
    sensitive << ( p_Val2_s_fu_44_p1 );

    SC_METHOD(thread_p_Val2_2_fu_163_p3);
    sensitive << ( isNeg_reg_196 );
    sensitive << ( tmp_16_fu_149_p1 );
    sensitive << ( tmp_s_fu_153_p4 );

    SC_METHOD(thread_p_Val2_s_fu_44_p1);
    sensitive << ( x );

    SC_METHOD(thread_sh_assign_1_cast_cas_fu_122_p1);
    sensitive << ( sh_assign_1_reg_201 );

    SC_METHOD(thread_sh_assign_1_cast_fu_119_p1);
    sensitive << ( sh_assign_1_reg_201 );

    SC_METHOD(thread_sh_assign_1_fu_98_p3);
    sensitive << ( isNeg_fu_80_p3 );
    sensitive << ( sh_assign_fu_74_p2 );
    sensitive << ( tmp_2_i_i_cast_fu_94_p1 );

    SC_METHOD(thread_sh_assign_fu_74_p2);
    sensitive << ( tmp_i_i_i_cast1_fu_70_p1 );

    SC_METHOD(thread_tmp_10_i_i_fu_173_p2);
    sensitive << ( tmp_7_i_i_fu_170_p1 );

    SC_METHOD(thread_tmp_16_fu_149_p1);
    sensitive << ( tmp_fu_141_p3 );

    SC_METHOD(thread_tmp_1_i_i_cast2_fu_115_p1);
    sensitive << ( tmp_1_i_i_fu_106_p4 );

    SC_METHOD(thread_tmp_1_i_i_fu_106_p4);
    sensitive << ( loc_V_1_reg_191 );

    SC_METHOD(thread_tmp_2_i_i_cast_fu_94_p1);
    sensitive << ( tmp_2_i_i_fu_88_p2 );

    SC_METHOD(thread_tmp_2_i_i_fu_88_p2);
    sensitive << ( loc_V_fu_56_p4 );

    SC_METHOD(thread_tmp_3_i_i_fu_125_p1);
    sensitive << ( sh_assign_1_cast_fu_119_p1 );

    SC_METHOD(thread_tmp_4_i_i_fu_129_p2);
    sensitive << ( tmp_1_i_i_fu_106_p4 );
    sensitive << ( sh_assign_1_cast_cas_fu_122_p1 );

    SC_METHOD(thread_tmp_5_i_i_fu_135_p2);
    sensitive << ( tmp_1_i_i_cast2_fu_115_p1 );
    sensitive << ( tmp_3_i_i_fu_125_p1 );

    SC_METHOD(thread_tmp_7_i_i_fu_170_p1);
    sensitive << ( p_Val2_2_reg_207 );

    SC_METHOD(thread_tmp_fu_141_p3);
    sensitive << ( tmp_4_i_i_fu_129_p2 );

    SC_METHOD(thread_tmp_i_i_i_cast1_fu_70_p1);
    sensitive << ( loc_V_fu_56_p4 );

    SC_METHOD(thread_tmp_s_fu_153_p4);
    sensitive << ( tmp_5_i_i_fu_135_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    ap_CS_fsm = "001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "p_hls_fptosi_float_i_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, x, "(port)x");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, p_Result_s_reg_186, "p_Result_s_reg_186");
    sc_trace(mVcdFile, loc_V_1_fu_66_p1, "loc_V_1_fu_66_p1");
    sc_trace(mVcdFile, loc_V_1_reg_191, "loc_V_1_reg_191");
    sc_trace(mVcdFile, isNeg_fu_80_p3, "isNeg_fu_80_p3");
    sc_trace(mVcdFile, isNeg_reg_196, "isNeg_reg_196");
    sc_trace(mVcdFile, sh_assign_1_fu_98_p3, "sh_assign_1_fu_98_p3");
    sc_trace(mVcdFile, sh_assign_1_reg_201, "sh_assign_1_reg_201");
    sc_trace(mVcdFile, p_Val2_2_fu_163_p3, "p_Val2_2_fu_163_p3");
    sc_trace(mVcdFile, p_Val2_2_reg_207, "p_Val2_2_reg_207");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, p_Val2_s_fu_44_p1, "p_Val2_s_fu_44_p1");
    sc_trace(mVcdFile, loc_V_fu_56_p4, "loc_V_fu_56_p4");
    sc_trace(mVcdFile, tmp_i_i_i_cast1_fu_70_p1, "tmp_i_i_i_cast1_fu_70_p1");
    sc_trace(mVcdFile, sh_assign_fu_74_p2, "sh_assign_fu_74_p2");
    sc_trace(mVcdFile, tmp_2_i_i_fu_88_p2, "tmp_2_i_i_fu_88_p2");
    sc_trace(mVcdFile, tmp_2_i_i_cast_fu_94_p1, "tmp_2_i_i_cast_fu_94_p1");
    sc_trace(mVcdFile, tmp_1_i_i_fu_106_p4, "tmp_1_i_i_fu_106_p4");
    sc_trace(mVcdFile, sh_assign_1_cast_fu_119_p1, "sh_assign_1_cast_fu_119_p1");
    sc_trace(mVcdFile, sh_assign_1_cast_cas_fu_122_p1, "sh_assign_1_cast_cas_fu_122_p1");
    sc_trace(mVcdFile, tmp_1_i_i_cast2_fu_115_p1, "tmp_1_i_i_cast2_fu_115_p1");
    sc_trace(mVcdFile, tmp_3_i_i_fu_125_p1, "tmp_3_i_i_fu_125_p1");
    sc_trace(mVcdFile, tmp_4_i_i_fu_129_p2, "tmp_4_i_i_fu_129_p2");
    sc_trace(mVcdFile, tmp_fu_141_p3, "tmp_fu_141_p3");
    sc_trace(mVcdFile, tmp_5_i_i_fu_135_p2, "tmp_5_i_i_fu_135_p2");
    sc_trace(mVcdFile, tmp_16_fu_149_p1, "tmp_16_fu_149_p1");
    sc_trace(mVcdFile, tmp_s_fu_153_p4, "tmp_s_fu_153_p4");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_7_i_i_fu_170_p1, "tmp_7_i_i_fu_170_p1");
    sc_trace(mVcdFile, tmp_10_i_i_fu_173_p2, "tmp_10_i_i_fu_173_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

p_hls_fptosi_float_i::~p_hls_fptosi_float_i() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void p_hls_fptosi_float_i::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        isNeg_reg_196 = sh_assign_fu_74_p2.read().range(8, 8);
        loc_V_1_reg_191 = loc_V_1_fu_66_p1.read();
        p_Result_s_reg_186 = p_Val2_s_fu_44_p1.read().range(31, 31);
        sh_assign_1_reg_201 = sh_assign_1_fu_98_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        p_Val2_2_reg_207 = p_Val2_2_fu_163_p3.read();
    }
}

void p_hls_fptosi_float_i::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void p_hls_fptosi_float_i::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void p_hls_fptosi_float_i::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void p_hls_fptosi_float_i::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void p_hls_fptosi_float_i::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void p_hls_fptosi_float_i::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void p_hls_fptosi_float_i::thread_ap_return() {
    ap_return = (!p_Result_s_reg_186.read()[0].is_01())? sc_lv<16>(): ((p_Result_s_reg_186.read()[0].to_bool())? tmp_10_i_i_fu_173_p2.read(): tmp_7_i_i_fu_170_p1.read());
}

void p_hls_fptosi_float_i::thread_isNeg_fu_80_p3() {
    isNeg_fu_80_p3 = sh_assign_fu_74_p2.read().range(8, 8);
}

void p_hls_fptosi_float_i::thread_loc_V_1_fu_66_p1() {
    loc_V_1_fu_66_p1 = p_Val2_s_fu_44_p1.read().range(23-1, 0);
}

void p_hls_fptosi_float_i::thread_loc_V_fu_56_p4() {
    loc_V_fu_56_p4 = p_Val2_s_fu_44_p1.read().range(30, 23);
}

void p_hls_fptosi_float_i::thread_p_Val2_2_fu_163_p3() {
    p_Val2_2_fu_163_p3 = (!isNeg_reg_196.read()[0].is_01())? sc_lv<15>(): ((isNeg_reg_196.read()[0].to_bool())? tmp_16_fu_149_p1.read(): tmp_s_fu_153_p4.read());
}

void p_hls_fptosi_float_i::thread_p_Val2_s_fu_44_p1() {
    p_Val2_s_fu_44_p1 = x.read();
}

void p_hls_fptosi_float_i::thread_sh_assign_1_cast_cas_fu_122_p1() {
    sh_assign_1_cast_cas_fu_122_p1 = esl_sext<25,9>(sh_assign_1_reg_201.read());
}

void p_hls_fptosi_float_i::thread_sh_assign_1_cast_fu_119_p1() {
    sh_assign_1_cast_fu_119_p1 = esl_sext<32,9>(sh_assign_1_reg_201.read());
}

void p_hls_fptosi_float_i::thread_sh_assign_1_fu_98_p3() {
    sh_assign_1_fu_98_p3 = (!isNeg_fu_80_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_fu_80_p3.read()[0].to_bool())? tmp_2_i_i_cast_fu_94_p1.read(): sh_assign_fu_74_p2.read());
}

void p_hls_fptosi_float_i::thread_sh_assign_fu_74_p2() {
    sh_assign_fu_74_p2 = (!ap_const_lv9_181.is_01() || !tmp_i_i_i_cast1_fu_70_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_181) + sc_biguint<9>(tmp_i_i_i_cast1_fu_70_p1.read()));
}

void p_hls_fptosi_float_i::thread_tmp_10_i_i_fu_173_p2() {
    tmp_10_i_i_fu_173_p2 = (!ap_const_lv16_0.is_01() || !tmp_7_i_i_fu_170_p1.read().is_01())? sc_lv<16>(): (sc_biguint<16>(ap_const_lv16_0) - sc_biguint<16>(tmp_7_i_i_fu_170_p1.read()));
}

void p_hls_fptosi_float_i::thread_tmp_16_fu_149_p1() {
    tmp_16_fu_149_p1 = esl_zext<15,1>(tmp_fu_141_p3.read());
}

void p_hls_fptosi_float_i::thread_tmp_1_i_i_cast2_fu_115_p1() {
    tmp_1_i_i_cast2_fu_115_p1 = esl_zext<63,25>(tmp_1_i_i_fu_106_p4.read());
}

void p_hls_fptosi_float_i::thread_tmp_1_i_i_fu_106_p4() {
    tmp_1_i_i_fu_106_p4 = esl_concat<24,1>(esl_concat<1,23>(ap_const_lv1_1, loc_V_1_reg_191.read()), ap_const_lv1_0);
}

void p_hls_fptosi_float_i::thread_tmp_2_i_i_cast_fu_94_p1() {
    tmp_2_i_i_cast_fu_94_p1 = esl_sext<9,8>(tmp_2_i_i_fu_88_p2.read());
}

void p_hls_fptosi_float_i::thread_tmp_2_i_i_fu_88_p2() {
    tmp_2_i_i_fu_88_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_fu_56_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_fu_56_p4.read()));
}

void p_hls_fptosi_float_i::thread_tmp_3_i_i_fu_125_p1() {
    tmp_3_i_i_fu_125_p1 = esl_zext<63,32>(sh_assign_1_cast_fu_119_p1.read());
}

void p_hls_fptosi_float_i::thread_tmp_4_i_i_fu_129_p2() {
    tmp_4_i_i_fu_129_p2 = (!sh_assign_1_cast_cas_fu_122_p1.read().is_01())? sc_lv<25>(): tmp_1_i_i_fu_106_p4.read() >> (unsigned short)sh_assign_1_cast_cas_fu_122_p1.read().to_uint();
}

void p_hls_fptosi_float_i::thread_tmp_5_i_i_fu_135_p2() {
    tmp_5_i_i_fu_135_p2 = (!tmp_3_i_i_fu_125_p1.read().is_01())? sc_lv<63>(): tmp_1_i_i_cast2_fu_115_p1.read() << (unsigned short)tmp_3_i_i_fu_125_p1.read().to_uint();
}

void p_hls_fptosi_float_i::thread_tmp_7_i_i_fu_170_p1() {
    tmp_7_i_i_fu_170_p1 = esl_zext<16,15>(p_Val2_2_reg_207.read());
}

void p_hls_fptosi_float_i::thread_tmp_fu_141_p3() {
    tmp_fu_141_p3 = tmp_4_i_i_fu_129_p2.read().range(24, 24);
}

void p_hls_fptosi_float_i::thread_tmp_i_i_i_cast1_fu_70_p1() {
    tmp_i_i_i_cast1_fu_70_p1 = esl_zext<9,8>(loc_V_fu_56_p4.read());
}

void p_hls_fptosi_float_i::thread_tmp_s_fu_153_p4() {
    tmp_s_fu_153_p4 = tmp_5_i_i_fu_135_p2.read().range(38, 24);
}

void p_hls_fptosi_float_i::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

