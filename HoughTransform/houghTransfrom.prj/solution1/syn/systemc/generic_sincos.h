// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _generic_sincos_HH_
#define _generic_sincos_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scaled_fixed2ieee.h"
#include "houghTransform_muibs.h"
#include "houghTransform_mujbC.h"
#include "houghTransform_muCeG.h"
#include "houghTransform_muDeQ.h"
#include "houghTransform_muEe0.h"
#include "houghTransform_muFfa.h"
#include "houghTransform_muGfk.h"
#include "houghTransform_muHfu.h"
#include "houghTransform_muIfE.h"
#include "houghTransform_muJfO.h"
#include "houghTransform_muKfY.h"
#include "houghTransform_muqcK.h"
#include "houghTransform_mukbM.h"
#include "sin_or_cos_doublecud.h"
#include "generic_sincos_hlsc4.h"
#include "generic_sincos_hltde.h"
#include "generic_sincos_hludo.h"
#include "generic_sincos_hlvdy.h"
#include "generic_sincos_hlwdI.h"
#include "generic_sincos_hlxdS.h"
#include "generic_sincos_hlyd2.h"
#include "generic_sincos_hlzec.h"
#include "generic_sincos_hlAem.h"
#include "generic_sincos_hlBew.h"

namespace ap_rtl {

struct generic_sincos : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<64> > t_in;
    sc_out< sc_lv<64> > ap_return_0;
    sc_out< sc_lv<64> > ap_return_1;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<1> > ap_var_for_const2;
    sc_signal< sc_lv<13> > ap_var_for_const0;
    sc_signal< sc_lv<1> > ap_var_for_const3;


    // Module declarations
    generic_sincos(sc_module_name name);
    SC_HAS_PROCESS(generic_sincos);

    ~generic_sincos();

    sc_trace_file* mVcdFile;

    sin_or_cos_doublecud* hls_ref_4oPi_table_s_U;
    generic_sincos_hlsc4* hls_hotbm_fourth_o_22_U;
    generic_sincos_hltde* hls_hotbm_fourth_o_23_U;
    generic_sincos_hludo* hls_hotbm_fourth_o_24_U;
    generic_sincos_hlvdy* hls_hotbm_fourth_o_25_U;
    generic_sincos_hlwdI* hls_hotbm_fourth_o_26_U;
    generic_sincos_hlxdS* hls_hotbm_fourth_o_9_U;
    generic_sincos_hlyd2* hls_hotbm_fourth_o_15_U;
    generic_sincos_hlzec* hls_hotbm_fourth_o_16_U;
    generic_sincos_hlAem* hls_hotbm_fourth_o_17_U;
    generic_sincos_hlBew* hls_hotbm_fourth_o_18_U;
    scaled_fixed2ieee* grp_scaled_fixed2ieee_fu_338;
    scaled_fixed2ieee* grp_scaled_fixed2ieee_fu_345;
    houghTransform_muibs<1,5,170,53,223>* houghTransform_muibs_x_U24;
    houghTransform_mujbC<1,5,49,49,98>* houghTransform_mujbC_x_U25;
    houghTransform_mujbC<1,5,49,49,98>* houghTransform_mujbC_x_U26;
    houghTransform_mujbC<1,5,49,49,98>* houghTransform_mujbC_x_U27;
    houghTransform_muCeG<1,5,49,44,93>* houghTransform_muCeG_U28;
    houghTransform_muDeQ<1,5,56,51,107>* houghTransform_muDeQ_U29;
    houghTransform_muEe0<1,5,49,43,92>* houghTransform_muEe0_U30;
    houghTransform_muFfa<1,5,56,53,109>* houghTransform_muFfa_U31;
    houghTransform_muGfk<1,2,42,35,77>* houghTransform_muGfk_U32;
    houghTransform_muHfu<1,2,35,27,62>* houghTransform_muHfu_U33;
    houghTransform_muIfE<1,2,42,33,75>* houghTransform_muIfE_U34;
    houghTransform_muJfO<1,2,35,23,58>* houghTransform_muJfO_U35;
    houghTransform_muKfY<1,5,62,63,125>* houghTransform_muKfY_U36;
    houghTransform_muqcK<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* houghTransform_muqcK_x_U37;
    houghTransform_muqcK<1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1>* houghTransform_muqcK_x_U38;
    houghTransform_mukbM<1,1,1,1,1,1,1,1,1,1,3,1>* houghTransform_mukbM_x_U39;
    sc_signal< sc_lv<33> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<4> > hls_ref_4oPi_table_s_address0;
    sc_signal< sc_logic > hls_ref_4oPi_table_s_ce0;
    sc_signal< sc_lv<256> > hls_ref_4oPi_table_s_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_22_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_22_ce0;
    sc_signal< sc_lv<58> > hls_hotbm_fourth_o_22_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_23_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_23_ce0;
    sc_signal< sc_lv<53> > hls_hotbm_fourth_o_23_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_24_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_24_ce0;
    sc_signal< sc_lv<44> > hls_hotbm_fourth_o_24_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_25_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_25_ce0;
    sc_signal< sc_lv<35> > hls_hotbm_fourth_o_25_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_26_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_26_ce0;
    sc_signal< sc_lv<27> > hls_hotbm_fourth_o_26_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_9_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_9_ce0;
    sc_signal< sc_lv<59> > hls_hotbm_fourth_o_9_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_15_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_15_ce0;
    sc_signal< sc_lv<51> > hls_hotbm_fourth_o_15_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_16_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_16_ce0;
    sc_signal< sc_lv<43> > hls_hotbm_fourth_o_16_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_17_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_17_ce0;
    sc_signal< sc_lv<33> > hls_hotbm_fourth_o_17_q0;
    sc_signal< sc_lv<7> > hls_hotbm_fourth_o_18_address0;
    sc_signal< sc_logic > hls_hotbm_fourth_o_18_ce0;
    sc_signal< sc_lv<23> > hls_hotbm_fourth_o_18_q0;
    sc_signal< sc_lv<1> > sin_results_sign_V_1_reg_1365;
    sc_signal< sc_lv<11> > loc_V_fu_363_p4;
    sc_signal< sc_lv<11> > loc_V_reg_1371;
    sc_signal< sc_lv<52> > loc_V_11_fu_373_p1;
    sc_signal< sc_lv<52> > loc_V_11_reg_1378;
    sc_signal< sc_lv<1> > closepath_fu_377_p2;
    sc_signal< sc_lv<1> > closepath_reg_1384;
    sc_signal< sc_lv<11> > expv_op_fu_383_p2;
    sc_signal< sc_lv<11> > expv_op_reg_1391;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > tmp_79_fu_410_p1;
    sc_signal< sc_lv<7> > tmp_79_reg_1401;
    sc_signal< sc_lv<256> > table_256_V_reg_1406;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<170> > ret_V_reg_1411;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_58_fu_452_p2;
    sc_signal< sc_lv<1> > tmp_58_reg_1426;
    sc_signal< sc_lv<124> > p_Val2_59_reg_1432;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<3> > tmp_64_i_reg_1438;
    sc_signal< sc_lv<3> > p_Val2_91_fu_477_p3;
    sc_signal< sc_lv<3> > p_Val2_91_reg_1443;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_80_fu_483_p1;
    sc_signal< sc_lv<1> > tmp_80_reg_1449;
    sc_signal< sc_lv<124> > p_Val2_i_fu_487_p2;
    sc_signal< sc_lv<124> > p_Val2_i_reg_1454;
    sc_signal< sc_lv<124> > p_Val2_61_fu_492_p3;
    sc_signal< sc_lv<124> > p_Val2_61_reg_1459;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<6> > Mx_zeros_V_fu_541_p1;
    sc_signal< sc_lv<6> > Mx_zeros_V_reg_1464;
    sc_signal< sc_lv<63> > Mx_V_reg_1470;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<12> > rhs_V_2_fu_584_p1;
    sc_signal< sc_lv<12> > rhs_V_2_reg_1477;
    sc_signal< sc_lv<1> > isNeg_reg_1482;
    sc_signal< sc_lv<12> > r_V_6_fu_596_p2;
    sc_signal< sc_lv<12> > r_V_6_reg_1488;
    sc_signal< sc_lv<1> > tmp_s_fu_602_p2;
    sc_signal< sc_lv<1> > tmp_s_reg_1494;
    sc_signal< sc_lv<1> > tmp_59_fu_607_p2;
    sc_signal< sc_lv<1> > tmp_59_reg_1500;
    sc_signal< sc_lv<7> > A_V_reg_1506;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<56> > p_Val2_65_fu_652_p1;
    sc_signal< sc_lv<56> > p_Val2_65_reg_1511;
    sc_signal< sc_lv<49> > tmp_i2_reg_1517;
    sc_signal< sc_lv<98> > OP1_V_fu_666_p1;
    sc_signal< sc_lv<98> > OP1_V_reg_1522;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<49> > tmp_75_i_reg_1529;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > tmp_80_i_fu_685_p1;
    sc_signal< sc_lv<32> > tmp_80_i_reg_1536;
    sc_signal< sc_lv<98> > OP2_V_fu_691_p1;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<44> > hls_hotbm_fourth_o_39_reg_1569;
    sc_signal< sc_lv<51> > hls_hotbm_fourth_o_46_reg_1574;
    sc_signal< sc_lv<43> > hls_hotbm_fourth_o_48_reg_1579;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<53> > hls_hotbm_fourth_o_37_reg_1619;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<42> > tmp_77_i_reg_1654;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<35> > tmp_79_i_reg_1660;
    sc_signal< sc_lv<35> > hls_hotbm_fourth_o_41_reg_1666;
    sc_signal< sc_lv<27> > hls_hotbm_fourth_o_43_reg_1671;
    sc_signal< sc_lv<33> > hls_hotbm_fourth_o_50_reg_1681;
    sc_signal< sc_lv<23> > hls_hotbm_fourth_o_52_reg_1686;
    sc_signal< sc_lv<47> > tmp_71_reg_1691;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<59> > p_Val2_71_reg_1716;
    sc_signal< sc_lv<54> > tmp_14_i_reg_1721;
    sc_signal< sc_lv<46> > tmp_16_i_reg_1726;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<38> > tmp_10_i_reg_1756;
    sc_signal< sc_lv<30> > tmp_12_i_reg_1761;
    sc_signal< sc_lv<36> > tmp_18_i_reg_1766;
    sc_signal< sc_lv<26> > tmp_72_reg_1771;
    sc_signal< sc_lv<62> > p_Val2_74_fu_910_p2;
    sc_signal< sc_lv<62> > p_Val2_74_reg_1776;
    sc_signal< sc_lv<58> > p_Val2_69_reg_1781;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<56> > tmp_6_i_reg_1786;
    sc_signal< sc_lv<48> > tmp2_fu_945_p2;
    sc_signal< sc_lv<48> > tmp2_reg_1791;
    sc_signal< sc_lv<62> > r_V_fu_962_p2;
    sc_signal< sc_lv<62> > r_V_reg_1796;
    sc_signal< sc_lv<62> > p_Val2_20_i_fu_991_p2;
    sc_signal< sc_lv<62> > p_Val2_20_i_reg_1801;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<62> > tmp_73_reg_1816;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<63> > cos_result_V_fu_1022_p2;
    sc_signal< sc_lv<63> > cos_result_V_reg_1821;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<63> > sin_result_V_fu_1029_p1;
    sc_signal< sc_lv<63> > sin_result_V_reg_1826;
    sc_signal< sc_lv<13> > tmp_cast_fu_1033_p1;
    sc_signal< sc_lv<13> > tmp_cast_reg_1831;
    sc_signal< sc_lv<1> > or_cond_fu_1037_p2;
    sc_signal< sc_lv<1> > or_cond_reg_1836;
    sc_signal< sc_lv<1> > not_or_cond2_fu_1045_p2;
    sc_signal< sc_lv<1> > not_or_cond2_reg_1844;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_338_ap_start;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_338_ap_done;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_338_ap_idle;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_338_ap_ready;
    sc_signal< sc_lv<64> > grp_scaled_fixed2ieee_fu_338_ap_return;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_345_ap_start;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_345_ap_done;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_345_ap_idle;
    sc_signal< sc_logic > grp_scaled_fixed2ieee_fu_345_ap_ready;
    sc_signal< sc_lv<64> > grp_scaled_fixed2ieee_fu_345_ap_return;
    sc_signal< sc_logic > ap_reg_grp_scaled_fixed2ieee_fu_338_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_reg_grp_scaled_fixed2ieee_fu_345_ap_start;
    sc_signal< sc_lv<32> > tmp_i2_i_fu_405_p1;
    sc_signal< sc_lv<64> > p_Val2_s_fu_351_p1;
    sc_signal< sc_lv<11> > addr_V_fu_389_p3;
    sc_signal< sc_lv<4> > p_Result_i_i_fu_395_p4;
    sc_signal< sc_lv<256> > tmp_52_i_i_fu_414_p1;
    sc_signal< sc_lv<256> > r_V_9_fu_417_p2;
    sc_signal< sc_lv<53> > p_Result_95_fu_432_p3;
    sc_signal< sc_lv<170> > grp_fu_446_p0;
    sc_signal< sc_lv<53> > grp_fu_446_p1;
    sc_signal< sc_lv<223> > grp_fu_446_p2;
    sc_signal< sc_lv<61> > p_Result_i3_i_fu_497_p4;
    sc_signal< sc_lv<62> > p_Result_96_fu_507_p3;
    sc_signal< sc_lv<62> > p_Result_97_fu_515_p4;
    sc_signal< sc_lv<64> > p_Result_98_fu_525_p3;
    sc_signal< sc_lv<64> > tmp_i4_i_fu_533_p3;
    sc_signal< sc_lv<11> > tmp_i_fu_545_p2;
    sc_signal< sc_lv<124> > tmp_65_i_fu_557_p1;
    sc_signal< sc_lv<124> > p_Val2_63_fu_560_p2;
    sc_signal< sc_lv<11> > storemerge_i_fu_550_p3;
    sc_signal< sc_lv<11> > tmp_68_i_fu_575_p1;
    sc_signal< sc_lv<11> > Ex_V_fu_578_p2;
    sc_signal< sc_lv<12> > sh_assign_fu_612_p3;
    sc_signal< sc_lv<32> > sh_assign_5_cast_fu_617_p1;
    sc_signal< sc_lv<63> > tmp_71_i_fu_621_p1;
    sc_signal< sc_lv<63> > tmp_72_i_fu_625_p2;
    sc_signal< sc_lv<63> > tmp_73_i_fu_630_p2;
    sc_signal< sc_lv<63> > p_Val2_64_fu_635_p3;
    sc_signal< sc_lv<49> > grp_fu_669_p0;
    sc_signal< sc_lv<49> > grp_fu_669_p1;
    sc_signal< sc_lv<98> > grp_fu_669_p2;
    sc_signal< sc_lv<49> > grp_fu_694_p0;
    sc_signal< sc_lv<49> > grp_fu_694_p1;
    sc_signal< sc_lv<49> > grp_fu_699_p0;
    sc_signal< sc_lv<49> > grp_fu_699_p1;
    sc_signal< sc_lv<49> > grp_fu_711_p0;
    sc_signal< sc_lv<44> > grp_fu_711_p1;
    sc_signal< sc_lv<56> > grp_fu_723_p0;
    sc_signal< sc_lv<49> > grp_fu_735_p0;
    sc_signal< sc_lv<56> > grp_fu_747_p0;
    sc_signal< sc_lv<98> > grp_fu_694_p2;
    sc_signal< sc_lv<98> > grp_fu_699_p2;
    sc_signal< sc_lv<93> > grp_fu_711_p2;
    sc_signal< sc_lv<42> > grp_fu_789_p0;
    sc_signal< sc_lv<35> > grp_fu_801_p0;
    sc_signal< sc_lv<107> > grp_fu_723_p2;
    sc_signal< sc_lv<92> > grp_fu_735_p2;
    sc_signal< sc_lv<42> > grp_fu_833_p0;
    sc_signal< sc_lv<35> > grp_fu_845_p0;
    sc_signal< sc_lv<23> > grp_fu_845_p1;
    sc_signal< sc_lv<77> > grp_fu_789_p2;
    sc_signal< sc_lv<62> > grp_fu_801_p2;
    sc_signal< sc_lv<75> > grp_fu_833_p2;
    sc_signal< sc_lv<58> > grp_fu_845_p2;
    sc_signal< sc_lv<62> > p_Val2_72_fu_871_p3;
    sc_signal< sc_lv<62> > tmp_85_i_cast_fu_898_p1;
    sc_signal< sc_lv<62> > p_Val2_73_fu_901_p2;
    sc_signal< sc_lv<62> > tmp_87_i_cast_fu_907_p1;
    sc_signal< sc_lv<109> > grp_fu_747_p2;
    sc_signal< sc_lv<39> > p_Val2_97_cast_fu_929_p1;
    sc_signal< sc_lv<39> > tmp_82_i_cast_fu_932_p1;
    sc_signal< sc_lv<39> > tmp3_fu_935_p2;
    sc_signal< sc_lv<48> > tmp3_cast_fu_941_p1;
    sc_signal< sc_lv<48> > tmp_8_i_fu_926_p1;
    sc_signal< sc_lv<62> > tmp_89_i_cast_fu_951_p1;
    sc_signal< sc_lv<62> > p_Val2_75_fu_954_p2;
    sc_signal< sc_lv<62> > tmp_91_i_cast_fu_959_p1;
    sc_signal< sc_lv<61> > p_Val2_70_fu_968_p3;
    sc_signal< sc_lv<62> > p_Val2_94_cast_fu_975_p1;
    sc_signal< sc_lv<62> > p_Val2_95_cast_fu_979_p1;
    sc_signal< sc_lv<62> > tmp2_cast_fu_988_p1;
    sc_signal< sc_lv<62> > tmp1_fu_982_p2;
    sc_signal< sc_lv<62> > grp_fu_1003_p0;
    sc_signal< sc_lv<63> > grp_fu_1003_p1;
    sc_signal< sc_lv<125> > grp_fu_1003_p2;
    sc_signal< sc_lv<63> > p_Val2_20_i_cast_fu_1019_p1;
    sc_signal< sc_lv<1> > not_or_cond2_demorga_fu_1041_p2;
    sc_signal< sc_lv<64> > p_Val2_77_fu_1057_p1;
    sc_signal< sc_lv<64> > p_Val2_78_fu_1083_p1;
    sc_signal< sc_lv<4> > p_Result_99_fu_1051_p3;
    sc_signal< sc_lv<1> > tmp_fu_1109_p18;
    sc_signal< sc_lv<1> > p_Result_100_fu_1061_p3;
    sc_signal< sc_lv<1> > tmp_60_fu_1153_p18;
    sc_signal< sc_lv<1> > p_Result_101_fu_1087_p3;
    sc_signal< sc_lv<1> > p_Result_s_fu_1147_p2;
    sc_signal< sc_lv<1> > not_tmp_s_fu_1197_p2;
    sc_signal< sc_lv<1> > p_Result_s_71_fu_1202_p2;
    sc_signal< sc_lv<1> > tmp_61_fu_1221_p2;
    sc_signal< sc_lv<11> > p_Result_4_cast_fu_1214_p3;
    sc_signal< sc_lv<11> > loc_V_12_fu_1069_p4;
    sc_signal< sc_lv<52> > p_Result_5_cast_fu_1233_p3;
    sc_signal< sc_lv<52> > loc_V_13_fu_1079_p1;
    sc_signal< sc_lv<1> > not_or_cond_fu_1248_p2;
    sc_signal< sc_lv<1> > tmp4_fu_1253_p2;
    sc_signal< sc_lv<1> > cos_results_sign_V_1_fu_1191_p2;
    sc_signal< sc_lv<11> > p_Result_6_fu_1265_p3;
    sc_signal< sc_lv<11> > loc_V_14_fu_1095_p4;
    sc_signal< sc_lv<52> > loc_V_15_fu_1105_p1;
    sc_signal< sc_lv<1> > p_Result_91_fu_1259_p2;
    sc_signal< sc_lv<11> > ret_V_31_fu_1272_p3;
    sc_signal< sc_lv<52> > ret_V_32_fu_1280_p3;
    sc_signal< sc_lv<1> > p_Result_s_72_fu_1208_p3;
    sc_signal< sc_lv<11> > ret_V_29_fu_1225_p3;
    sc_signal< sc_lv<52> > ret_V_30_fu_1240_p3;
    sc_signal< sc_lv<1> > tmp_62_fu_1288_p10;
    sc_signal< sc_lv<64> > p_Result_102_fu_1309_p4;
    sc_signal< sc_lv<64> > p_Result_103_fu_1319_p4;
    sc_signal< sc_lv<64> > c_write_assign_in_fu_1337_p3;
    sc_signal< sc_lv<64> > s_write_assign_in_fu_1329_p3;
    sc_signal< sc_lv<64> > s_out_fu_1349_p1;
    sc_signal< sc_lv<64> > c_out_fu_1345_p1;
    sc_signal< sc_lv<64> > ap_return_0_preg;
    sc_signal< bool > ap_block_state33_on_subcall_done;
    sc_signal< sc_lv<64> > ap_return_1_preg;
    sc_signal< sc_lv<33> > ap_NS_fsm;
    sc_signal< sc_lv<125> > grp_fu_1003_p00;
    sc_signal< sc_lv<125> > grp_fu_1003_p10;
    sc_signal< sc_lv<223> > grp_fu_446_p00;
    sc_signal< sc_lv<223> > grp_fu_446_p10;
    sc_signal< sc_lv<93> > grp_fu_711_p00;
    sc_signal< sc_lv<93> > grp_fu_711_p10;
    sc_signal< sc_lv<107> > grp_fu_723_p00;
    sc_signal< sc_lv<92> > grp_fu_735_p00;
    sc_signal< sc_lv<109> > grp_fu_747_p00;
    sc_signal< sc_lv<77> > grp_fu_789_p00;
    sc_signal< sc_lv<62> > grp_fu_801_p00;
    sc_signal< sc_lv<75> > grp_fu_833_p00;
    sc_signal< sc_lv<58> > grp_fu_845_p00;
    sc_signal< sc_lv<58> > grp_fu_845_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<33> ap_ST_fsm_state1;
    static const sc_lv<33> ap_ST_fsm_state2;
    static const sc_lv<33> ap_ST_fsm_state3;
    static const sc_lv<33> ap_ST_fsm_state4;
    static const sc_lv<33> ap_ST_fsm_state5;
    static const sc_lv<33> ap_ST_fsm_state6;
    static const sc_lv<33> ap_ST_fsm_state7;
    static const sc_lv<33> ap_ST_fsm_state8;
    static const sc_lv<33> ap_ST_fsm_state9;
    static const sc_lv<33> ap_ST_fsm_state10;
    static const sc_lv<33> ap_ST_fsm_state11;
    static const sc_lv<33> ap_ST_fsm_state12;
    static const sc_lv<33> ap_ST_fsm_state13;
    static const sc_lv<33> ap_ST_fsm_state14;
    static const sc_lv<33> ap_ST_fsm_state15;
    static const sc_lv<33> ap_ST_fsm_state16;
    static const sc_lv<33> ap_ST_fsm_state17;
    static const sc_lv<33> ap_ST_fsm_state18;
    static const sc_lv<33> ap_ST_fsm_state19;
    static const sc_lv<33> ap_ST_fsm_state20;
    static const sc_lv<33> ap_ST_fsm_state21;
    static const sc_lv<33> ap_ST_fsm_state22;
    static const sc_lv<33> ap_ST_fsm_state23;
    static const sc_lv<33> ap_ST_fsm_state24;
    static const sc_lv<33> ap_ST_fsm_state25;
    static const sc_lv<33> ap_ST_fsm_state26;
    static const sc_lv<33> ap_ST_fsm_state27;
    static const sc_lv<33> ap_ST_fsm_state28;
    static const sc_lv<33> ap_ST_fsm_state29;
    static const sc_lv<33> ap_ST_fsm_state30;
    static const sc_lv<33> ap_ST_fsm_state31;
    static const sc_lv<33> ap_ST_fsm_state32;
    static const sc_lv<33> ap_ST_fsm_state33;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<11> ap_const_lv11_3FE;
    static const sc_lv<11> ap_const_lv11_44D;
    static const sc_lv<11> ap_const_lv11_4A;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_56;
    static const sc_lv<32> ap_const_lv32_FF;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<52> ap_const_lv52_0;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_A6;
    static const sc_lv<32> ap_const_lv32_A7;
    static const sc_lv<32> ap_const_lv32_A9;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<124> ap_const_lv124_0;
    static const sc_lv<32> ap_const_lv32_7B;
    static const sc_lv<32> ap_const_lv32_3D;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<11> ap_const_lv11_403;
    static const sc_lv<11> ap_const_lv11_0;
    static const sc_lv<12> ap_const_lv12_0;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const sc_lv<32> ap_const_lv32_38;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_61;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_5C;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_6A;
    static const sc_lv<32> ap_const_lv32_5B;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_4C;
    static const sc_lv<32> ap_const_lv32_4A;
    static const sc_lv<32> ap_const_lv32_39;
    static const sc_lv<32> ap_const_lv32_6C;
    static const sc_lv<32> ap_const_lv32_7C;
    static const sc_lv<63> ap_const_lv63_4000000000000000;
    static const sc_lv<52> ap_const_lv52_FFFFFFFFFFFFF;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<64> ap_const_lv64_0;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const3();
    void thread_ap_clk_no_reset_();
    void thread_Ex_V_fu_578_p2();
    void thread_Mx_zeros_V_fu_541_p1();
    void thread_OP1_V_fu_666_p1();
    void thread_OP2_V_fu_691_p1();
    void thread_addr_V_fu_389_p3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state33_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_c_out_fu_1345_p1();
    void thread_c_write_assign_in_fu_1337_p3();
    void thread_closepath_fu_377_p2();
    void thread_cos_result_V_fu_1022_p2();
    void thread_cos_results_sign_V_1_fu_1191_p2();
    void thread_expv_op_fu_383_p2();
    void thread_grp_fu_1003_p0();
    void thread_grp_fu_1003_p00();
    void thread_grp_fu_1003_p1();
    void thread_grp_fu_1003_p10();
    void thread_grp_fu_446_p0();
    void thread_grp_fu_446_p00();
    void thread_grp_fu_446_p1();
    void thread_grp_fu_446_p10();
    void thread_grp_fu_669_p0();
    void thread_grp_fu_669_p1();
    void thread_grp_fu_694_p0();
    void thread_grp_fu_694_p1();
    void thread_grp_fu_699_p0();
    void thread_grp_fu_699_p1();
    void thread_grp_fu_711_p0();
    void thread_grp_fu_711_p00();
    void thread_grp_fu_711_p1();
    void thread_grp_fu_711_p10();
    void thread_grp_fu_723_p0();
    void thread_grp_fu_723_p00();
    void thread_grp_fu_735_p0();
    void thread_grp_fu_735_p00();
    void thread_grp_fu_747_p0();
    void thread_grp_fu_747_p00();
    void thread_grp_fu_789_p0();
    void thread_grp_fu_789_p00();
    void thread_grp_fu_801_p0();
    void thread_grp_fu_801_p00();
    void thread_grp_fu_833_p0();
    void thread_grp_fu_833_p00();
    void thread_grp_fu_845_p0();
    void thread_grp_fu_845_p00();
    void thread_grp_fu_845_p1();
    void thread_grp_fu_845_p10();
    void thread_grp_scaled_fixed2ieee_fu_338_ap_start();
    void thread_grp_scaled_fixed2ieee_fu_345_ap_start();
    void thread_hls_hotbm_fourth_o_15_address0();
    void thread_hls_hotbm_fourth_o_15_ce0();
    void thread_hls_hotbm_fourth_o_16_address0();
    void thread_hls_hotbm_fourth_o_16_ce0();
    void thread_hls_hotbm_fourth_o_17_address0();
    void thread_hls_hotbm_fourth_o_17_ce0();
    void thread_hls_hotbm_fourth_o_18_address0();
    void thread_hls_hotbm_fourth_o_18_ce0();
    void thread_hls_hotbm_fourth_o_22_address0();
    void thread_hls_hotbm_fourth_o_22_ce0();
    void thread_hls_hotbm_fourth_o_23_address0();
    void thread_hls_hotbm_fourth_o_23_ce0();
    void thread_hls_hotbm_fourth_o_24_address0();
    void thread_hls_hotbm_fourth_o_24_ce0();
    void thread_hls_hotbm_fourth_o_25_address0();
    void thread_hls_hotbm_fourth_o_25_ce0();
    void thread_hls_hotbm_fourth_o_26_address0();
    void thread_hls_hotbm_fourth_o_26_ce0();
    void thread_hls_hotbm_fourth_o_9_address0();
    void thread_hls_hotbm_fourth_o_9_ce0();
    void thread_hls_ref_4oPi_table_s_address0();
    void thread_hls_ref_4oPi_table_s_ce0();
    void thread_loc_V_11_fu_373_p1();
    void thread_loc_V_12_fu_1069_p4();
    void thread_loc_V_13_fu_1079_p1();
    void thread_loc_V_14_fu_1095_p4();
    void thread_loc_V_15_fu_1105_p1();
    void thread_loc_V_fu_363_p4();
    void thread_not_or_cond2_demorga_fu_1041_p2();
    void thread_not_or_cond2_fu_1045_p2();
    void thread_not_or_cond_fu_1248_p2();
    void thread_not_tmp_s_fu_1197_p2();
    void thread_or_cond_fu_1037_p2();
    void thread_p_Result_100_fu_1061_p3();
    void thread_p_Result_101_fu_1087_p3();
    void thread_p_Result_102_fu_1309_p4();
    void thread_p_Result_103_fu_1319_p4();
    void thread_p_Result_4_cast_fu_1214_p3();
    void thread_p_Result_5_cast_fu_1233_p3();
    void thread_p_Result_6_fu_1265_p3();
    void thread_p_Result_91_fu_1259_p2();
    void thread_p_Result_95_fu_432_p3();
    void thread_p_Result_96_fu_507_p3();
    void thread_p_Result_97_fu_515_p4();
    void thread_p_Result_98_fu_525_p3();
    void thread_p_Result_99_fu_1051_p3();
    void thread_p_Result_i3_i_fu_497_p4();
    void thread_p_Result_i_i_fu_395_p4();
    void thread_p_Result_s_71_fu_1202_p2();
    void thread_p_Result_s_72_fu_1208_p3();
    void thread_p_Result_s_fu_1147_p2();
    void thread_p_Val2_20_i_cast_fu_1019_p1();
    void thread_p_Val2_20_i_fu_991_p2();
    void thread_p_Val2_61_fu_492_p3();
    void thread_p_Val2_63_fu_560_p2();
    void thread_p_Val2_64_fu_635_p3();
    void thread_p_Val2_65_fu_652_p1();
    void thread_p_Val2_70_fu_968_p3();
    void thread_p_Val2_72_fu_871_p3();
    void thread_p_Val2_73_fu_901_p2();
    void thread_p_Val2_74_fu_910_p2();
    void thread_p_Val2_75_fu_954_p2();
    void thread_p_Val2_77_fu_1057_p1();
    void thread_p_Val2_78_fu_1083_p1();
    void thread_p_Val2_91_fu_477_p3();
    void thread_p_Val2_94_cast_fu_975_p1();
    void thread_p_Val2_95_cast_fu_979_p1();
    void thread_p_Val2_97_cast_fu_929_p1();
    void thread_p_Val2_i_fu_487_p2();
    void thread_p_Val2_s_fu_351_p1();
    void thread_r_V_6_fu_596_p2();
    void thread_r_V_9_fu_417_p2();
    void thread_r_V_fu_962_p2();
    void thread_ret_V_29_fu_1225_p3();
    void thread_ret_V_30_fu_1240_p3();
    void thread_ret_V_31_fu_1272_p3();
    void thread_ret_V_32_fu_1280_p3();
    void thread_rhs_V_2_fu_584_p1();
    void thread_s_out_fu_1349_p1();
    void thread_s_write_assign_in_fu_1329_p3();
    void thread_sh_assign_5_cast_fu_617_p1();
    void thread_sh_assign_fu_612_p3();
    void thread_sin_result_V_fu_1029_p1();
    void thread_storemerge_i_fu_550_p3();
    void thread_tmp1_fu_982_p2();
    void thread_tmp2_cast_fu_988_p1();
    void thread_tmp2_fu_945_p2();
    void thread_tmp3_cast_fu_941_p1();
    void thread_tmp3_fu_935_p2();
    void thread_tmp4_fu_1253_p2();
    void thread_tmp_52_i_i_fu_414_p1();
    void thread_tmp_58_fu_452_p2();
    void thread_tmp_59_fu_607_p2();
    void thread_tmp_61_fu_1221_p2();
    void thread_tmp_65_i_fu_557_p1();
    void thread_tmp_68_i_fu_575_p1();
    void thread_tmp_71_i_fu_621_p1();
    void thread_tmp_72_i_fu_625_p2();
    void thread_tmp_73_i_fu_630_p2();
    void thread_tmp_79_fu_410_p1();
    void thread_tmp_80_fu_483_p1();
    void thread_tmp_80_i_fu_685_p1();
    void thread_tmp_82_i_cast_fu_932_p1();
    void thread_tmp_85_i_cast_fu_898_p1();
    void thread_tmp_87_i_cast_fu_907_p1();
    void thread_tmp_89_i_cast_fu_951_p1();
    void thread_tmp_8_i_fu_926_p1();
    void thread_tmp_91_i_cast_fu_959_p1();
    void thread_tmp_cast_fu_1033_p1();
    void thread_tmp_i2_i_fu_405_p1();
    void thread_tmp_i4_i_fu_533_p3();
    void thread_tmp_i_fu_545_p2();
    void thread_tmp_s_fu_602_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif