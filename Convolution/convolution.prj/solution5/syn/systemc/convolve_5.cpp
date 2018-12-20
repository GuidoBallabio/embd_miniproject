#include "convolve.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void convolve::thread_tmp_34_fu_1448_p2() {
    tmp_34_fu_1448_p2 = (!tmp_4_reg_1761.read().is_01() || !col_offset_6_2_cast_s_reg_2482.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_4_reg_1761.read()) + sc_biguint<12>(col_offset_6_2_cast_s_reg_2482.read()));
}

void convolve::thread_tmp_35_cast_fu_1506_p1() {
    tmp_35_cast_fu_1506_p1 = esl_zext<32,12>(tmp_35_fu_1501_p2.read());
}

void convolve::thread_tmp_35_fu_1501_p2() {
    tmp_35_fu_1501_p2 = (!tmp_3_reg_1746.read().is_01() || !col_offset_7_2_cast_s_fu_1498_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_reg_1746.read()) + sc_biguint<12>(col_offset_7_2_cast_s_fu_1498_p1.read()));
}

void convolve::thread_tmp_36_cast_fu_1530_p1() {
    tmp_36_cast_fu_1530_p1 = esl_zext<32,12>(tmp_36_fu_1526_p2.read());
}

void convolve::thread_tmp_36_fu_1526_p2() {
    tmp_36_fu_1526_p2 = (!tmp_reg_1707.read().is_01() || !col_offset_7_2_cast_s_reg_2573.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_reg_1707.read()) + sc_biguint<12>(col_offset_7_2_cast_s_reg_2573.read()));
}

void convolve::thread_tmp_37_cast1_fu_1550_p1() {
    tmp_37_cast1_fu_1550_p1 = esl_zext<32,12>(tmp_37_fu_1546_p2.read());
}

void convolve::thread_tmp_37_cast_cast_fu_720_p1() {
    tmp_37_cast_cast_fu_720_p1 = esl_zext<12,6>(tmp_1_reg_1799.read());
}

void convolve::thread_tmp_37_fu_1546_p2() {
    tmp_37_fu_1546_p2 = (!tmp_4_reg_1761.read().is_01() || !col_offset_7_2_cast_s_reg_2573.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_4_reg_1761.read()) + sc_biguint<12>(col_offset_7_2_cast_s_reg_2573.read()));
}

void convolve::thread_tmp_38_cast_fu_1590_p1() {
    tmp_38_cast_fu_1590_p1 = esl_zext<32,12>(tmp_38_reg_2638.read());
}

void convolve::thread_tmp_38_fu_1575_p2() {
    tmp_38_fu_1575_p2 = (!tmp_3_reg_1746.read().is_01() || !col_offset_8_2_cast_s_fu_1571_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_reg_1746.read()) + sc_biguint<12>(col_offset_8_2_cast_s_fu_1571_p1.read()));
}

void convolve::thread_tmp_39_cast_fu_1594_p1() {
    tmp_39_cast_fu_1594_p1 = esl_zext<32,12>(tmp_39_reg_2643.read());
}

void convolve::thread_tmp_39_fu_1580_p2() {
    tmp_39_fu_1580_p2 = (!tmp_reg_1707.read().is_01() || !col_offset_8_2_cast_s_fu_1571_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_reg_1707.read()) + sc_biguint<12>(col_offset_8_2_cast_s_fu_1571_p1.read()));
}

void convolve::thread_tmp_3_12_fu_1021_p2() {
    tmp_3_12_fu_1021_p2 = (!col_offset_2_2_reg_2112.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_2_2_reg_2112.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_40_0_0_3_fu_766_p1() {
    tmp_40_0_0_3_fu_766_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_0_s_fu_747_p1() {
    tmp_40_0_0_s_fu_747_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_1_3_fu_796_p1() {
    tmp_40_0_1_3_fu_796_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_1_s_fu_786_p1() {
    tmp_40_0_1_s_fu_786_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_2_3_fu_869_p1() {
    tmp_40_0_2_3_fu_869_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_2_s_fu_850_p1() {
    tmp_40_0_2_s_fu_850_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_3_fu_830_p1() {
    tmp_40_0_3_fu_830_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_0_s_fu_776_p1() {
    tmp_40_0_s_fu_776_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_1_2_3_fu_967_p1() {
    tmp_40_1_2_3_fu_967_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_1_2_s_fu_948_p1() {
    tmp_40_1_2_s_fu_948_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_1_s_fu_928_p1() {
    tmp_40_1_s_fu_928_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_2_2_3_fu_1065_p1() {
    tmp_40_2_2_3_fu_1065_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_2_2_s_fu_1046_p1() {
    tmp_40_2_2_s_fu_1046_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_2_s_fu_1026_p1() {
    tmp_40_2_s_fu_1026_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_3_2_3_fu_1163_p1() {
    tmp_40_3_2_3_fu_1163_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_3_2_s_fu_1144_p1() {
    tmp_40_3_2_s_fu_1144_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_3_s_fu_1124_p1() {
    tmp_40_3_s_fu_1124_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_4_2_3_fu_1261_p1() {
    tmp_40_4_2_3_fu_1261_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_4_2_s_fu_1242_p1() {
    tmp_40_4_2_s_fu_1242_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_4_s_fu_1222_p1() {
    tmp_40_4_s_fu_1222_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_5_2_3_fu_1359_p1() {
    tmp_40_5_2_3_fu_1359_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_5_2_s_fu_1340_p1() {
    tmp_40_5_2_s_fu_1340_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_5_s_fu_1320_p1() {
    tmp_40_5_s_fu_1320_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_6_2_3_fu_1457_p1() {
    tmp_40_6_2_3_fu_1457_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_6_2_s_fu_1438_p1() {
    tmp_40_6_2_s_fu_1438_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_6_s_fu_1418_p1() {
    tmp_40_6_s_fu_1418_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_7_2_3_fu_1555_p1() {
    tmp_40_7_2_3_fu_1555_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_7_2_s_fu_1536_p1() {
    tmp_40_7_2_s_fu_1536_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_7_s_fu_1516_p1() {
    tmp_40_7_s_fu_1516_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_8_2_3_fu_1612_p1() {
    tmp_40_8_2_3_fu_1612_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_8_2_s_fu_1607_p1() {
    tmp_40_8_2_s_fu_1607_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_8_s_fu_1602_p1() {
    tmp_40_8_s_fu_1602_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_40_cast_fu_1598_p1() {
    tmp_40_cast_fu_1598_p1 = esl_zext<32,12>(tmp_40_reg_2648.read());
}

void convolve::thread_tmp_40_fu_1585_p2() {
    tmp_40_fu_1585_p2 = (!tmp_4_reg_1761.read().is_01() || !col_offset_8_2_cast_s_fu_1571_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_4_reg_1761.read()) + sc_biguint<12>(col_offset_8_2_cast_s_fu_1571_p1.read()));
}

void convolve::thread_tmp_41_fu_733_p1() {
    tmp_41_fu_733_p1 = esl_sext<32,16>(reg_562.read());
}

void convolve::thread_tmp_42_0_0_3_fu_771_p1() {
    tmp_42_0_0_3_fu_771_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_0_s_fu_752_p1() {
    tmp_42_0_0_s_fu_752_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_1_3_fu_801_p1() {
    tmp_42_0_1_3_fu_801_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_1_s_fu_791_p1() {
    tmp_42_0_1_s_fu_791_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_2_3_fu_874_p1() {
    tmp_42_0_2_3_fu_874_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_2_s_fu_855_p1() {
    tmp_42_0_2_s_fu_855_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_3_fu_835_p1() {
    tmp_42_0_3_fu_835_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_0_s_fu_781_p1() {
    tmp_42_0_s_fu_781_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_0_3_fu_884_p1() {
    tmp_42_1_0_3_fu_884_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_0_s_fu_879_p1() {
    tmp_42_1_0_s_fu_879_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_1_3_fu_899_p1() {
    tmp_42_1_1_3_fu_899_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_1_s_fu_894_p1() {
    tmp_42_1_1_s_fu_894_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_2_3_fu_972_p1() {
    tmp_42_1_2_3_fu_972_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_2_s_fu_953_p1() {
    tmp_42_1_2_s_fu_953_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_3_fu_933_p1() {
    tmp_42_1_3_fu_933_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_1_s_fu_889_p1() {
    tmp_42_1_s_fu_889_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_0_3_fu_982_p1() {
    tmp_42_2_0_3_fu_982_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_0_s_fu_977_p1() {
    tmp_42_2_0_s_fu_977_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_1_3_fu_997_p1() {
    tmp_42_2_1_3_fu_997_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_1_s_fu_992_p1() {
    tmp_42_2_1_s_fu_992_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_2_3_fu_1070_p1() {
    tmp_42_2_2_3_fu_1070_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_2_s_fu_1051_p1() {
    tmp_42_2_2_s_fu_1051_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_3_fu_1031_p1() {
    tmp_42_2_3_fu_1031_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_2_s_fu_987_p1() {
    tmp_42_2_s_fu_987_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_0_3_fu_1080_p1() {
    tmp_42_3_0_3_fu_1080_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_0_s_fu_1075_p1() {
    tmp_42_3_0_s_fu_1075_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_1_3_fu_1095_p1() {
    tmp_42_3_1_3_fu_1095_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_1_s_fu_1090_p1() {
    tmp_42_3_1_s_fu_1090_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_2_3_fu_1168_p1() {
    tmp_42_3_2_3_fu_1168_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_2_s_fu_1149_p1() {
    tmp_42_3_2_s_fu_1149_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_3_fu_1129_p1() {
    tmp_42_3_3_fu_1129_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_3_s_fu_1085_p1() {
    tmp_42_3_s_fu_1085_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_0_3_fu_1178_p1() {
    tmp_42_4_0_3_fu_1178_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_0_s_fu_1173_p1() {
    tmp_42_4_0_s_fu_1173_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_1_3_fu_1193_p1() {
    tmp_42_4_1_3_fu_1193_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_1_s_fu_1188_p1() {
    tmp_42_4_1_s_fu_1188_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_2_3_fu_1266_p1() {
    tmp_42_4_2_3_fu_1266_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_2_s_fu_1247_p1() {
    tmp_42_4_2_s_fu_1247_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_3_fu_1227_p1() {
    tmp_42_4_3_fu_1227_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_4_s_fu_1183_p1() {
    tmp_42_4_s_fu_1183_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_0_3_fu_1276_p1() {
    tmp_42_5_0_3_fu_1276_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_0_s_fu_1271_p1() {
    tmp_42_5_0_s_fu_1271_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_1_3_fu_1291_p1() {
    tmp_42_5_1_3_fu_1291_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_1_s_fu_1286_p1() {
    tmp_42_5_1_s_fu_1286_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_2_3_fu_1364_p1() {
    tmp_42_5_2_3_fu_1364_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_2_s_fu_1345_p1() {
    tmp_42_5_2_s_fu_1345_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_3_fu_1325_p1() {
    tmp_42_5_3_fu_1325_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_5_s_fu_1281_p1() {
    tmp_42_5_s_fu_1281_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_0_3_fu_1374_p1() {
    tmp_42_6_0_3_fu_1374_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_0_s_fu_1369_p1() {
    tmp_42_6_0_s_fu_1369_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_1_3_fu_1389_p1() {
    tmp_42_6_1_3_fu_1389_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_1_s_fu_1384_p1() {
    tmp_42_6_1_s_fu_1384_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_2_3_fu_1462_p1() {
    tmp_42_6_2_3_fu_1462_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_2_s_fu_1443_p1() {
    tmp_42_6_2_s_fu_1443_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_3_fu_1423_p1() {
    tmp_42_6_3_fu_1423_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_6_s_fu_1379_p1() {
    tmp_42_6_s_fu_1379_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_0_3_fu_1472_p1() {
    tmp_42_7_0_3_fu_1472_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_0_s_fu_1467_p1() {
    tmp_42_7_0_s_fu_1467_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_1_3_fu_1487_p1() {
    tmp_42_7_1_3_fu_1487_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_1_s_fu_1482_p1() {
    tmp_42_7_1_s_fu_1482_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_2_3_fu_1560_p1() {
    tmp_42_7_2_3_fu_1560_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_2_s_fu_1541_p1() {
    tmp_42_7_2_s_fu_1541_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_3_fu_1521_p1() {
    tmp_42_7_3_fu_1521_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_7_s_fu_1477_p1() {
    tmp_42_7_s_fu_1477_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_0_3_fu_1622_p1() {
    tmp_42_8_0_3_fu_1622_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_0_s_fu_1617_p1() {
    tmp_42_8_0_s_fu_1617_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_1_3_fu_1637_p1() {
    tmp_42_8_1_3_fu_1637_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_1_s_fu_1632_p1() {
    tmp_42_8_1_s_fu_1632_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_2_3_fu_1652_p1() {
    tmp_42_8_2_3_fu_1652_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_2_s_fu_1647_p1() {
    tmp_42_8_2_s_fu_1647_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_3_fu_1642_p1() {
    tmp_42_8_3_fu_1642_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_42_8_s_fu_1627_p1() {
    tmp_42_8_s_fu_1627_p1 = esl_sext<32,16>(reg_584.read());
}

void convolve::thread_tmp_4_13_fu_1119_p2() {
    tmp_4_13_fu_1119_p2 = (!col_offset_3_2_reg_2203.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_3_2_reg_2203.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_5_14_fu_1217_p2() {
    tmp_5_14_fu_1217_p2 = (!col_offset_4_2_reg_2294.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_4_2_reg_2294.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_5_cast_fu_682_p1() {
    tmp_5_cast_fu_682_p1 = esl_zext<32,12>(tmp_5_fu_677_p2.read());
}

void convolve::thread_tmp_5_fu_677_p2() {
    tmp_5_fu_677_p2 = (!tmp_3_reg_1746.read().is_01() || !c_cast_cast_fu_673_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_reg_1746.read()) + sc_biguint<12>(c_cast_cast_fu_673_p1.read()));
}

void convolve::thread_tmp_6_15_fu_1315_p2() {
    tmp_6_15_fu_1315_p2 = (!col_offset_5_2_reg_2385.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_5_2_reg_2385.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_6_cast_fu_692_p1() {
    tmp_6_cast_fu_692_p1 = esl_zext<32,12>(tmp_6_fu_687_p2.read());
}

void convolve::thread_tmp_6_fu_687_p2() {
    tmp_6_fu_687_p2 = (!tmp_reg_1707.read().is_01() || !c_cast_cast_fu_673_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_reg_1707.read()) + sc_biguint<12>(c_cast_cast_fu_673_p1.read()));
}

void convolve::thread_tmp_7_16_fu_1413_p2() {
    tmp_7_16_fu_1413_p2 = (!col_offset_6_2_reg_2476.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_6_2_reg_2476.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_7_cast_fu_703_p1() {
    tmp_7_cast_fu_703_p1 = esl_zext<32,12>(tmp_7_fu_698_p2.read());
}

void convolve::thread_tmp_7_fu_698_p2() {
    tmp_7_fu_698_p2 = (!tmp_4_reg_1761.read().is_01() || !c_cast_cast_fu_673_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_4_reg_1761.read()) + sc_biguint<12>(c_cast_cast_fu_673_p1.read()));
}

void convolve::thread_tmp_8_17_fu_1511_p2() {
    tmp_8_17_fu_1511_p2 = (!col_offset_7_2_reg_2567.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(col_offset_7_2_reg_2567.read()) < sc_biguint<6>(ap_const_lv6_31));
}

void convolve::thread_tmp_8_cast_fu_728_p1() {
    tmp_8_cast_fu_728_p1 = esl_zext<32,12>(tmp_8_fu_723_p2.read());
}

void convolve::thread_tmp_8_fu_723_p2() {
    tmp_8_fu_723_p2 = (!tmp_3_reg_1746.read().is_01() || !tmp_37_cast_cast_fu_720_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_3_reg_1746.read()) + sc_biguint<12>(tmp_37_cast_cast_fu_720_p1.read()));
}

void convolve::thread_tmp_9_cast_fu_742_p1() {
    tmp_9_cast_fu_742_p1 = esl_zext<32,12>(tmp_9_fu_738_p2.read());
}

void convolve::thread_tmp_9_fu_738_p2() {
    tmp_9_fu_738_p2 = (!tmp_reg_1707.read().is_01() || !tmp_37_cast_cast_reg_1804.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_reg_1707.read()) + sc_biguint<12>(tmp_37_cast_cast_reg_1804.read()));
}

void convolve::thread_tmp_s_fu_708_p2() {
    tmp_s_fu_708_p2 = (!c_reg_512.read().is_01() || !ap_const_lv6_31.is_01())? sc_lv<1>(): (sc_biguint<6>(c_reg_512.read()) < sc_biguint<6>(ap_const_lv6_31));
}

}

