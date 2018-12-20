// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module p_hls_fptosi_float_i (
        ap_clk,
        ap_rst,
        x,
        ap_return,
        ap_ce
);


input   ap_clk;
input   ap_rst;
input  [31:0] x;
output  [15:0] ap_return;
input   ap_ce;

reg   [0:0] p_Result_s_reg_186;
wire    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_flag00011001;
reg   [0:0] ap_reg_pp0_iter1_p_Result_s_reg_186;
wire   [22:0] loc_V_1_fu_66_p1;
reg   [22:0] loc_V_1_reg_191;
wire   [0:0] isNeg_fu_80_p3;
reg   [0:0] isNeg_reg_196;
wire   [8:0] sh_assign_1_fu_98_p3;
reg   [8:0] sh_assign_1_reg_201;
wire   [14:0] p_Val2_2_fu_163_p3;
reg   [14:0] p_Val2_2_reg_207;
wire    ap_block_pp0_stage0_flag00000000;
wire   [31:0] p_Val2_s_fu_44_p1;
wire   [7:0] loc_V_fu_56_p4;
wire   [8:0] tmp_i_i_i_cast1_fu_70_p1;
wire   [8:0] sh_assign_fu_74_p2;
wire   [7:0] tmp_2_i_i_fu_88_p2;
wire  signed [8:0] tmp_2_i_i_cast_fu_94_p1;
wire   [24:0] tmp_1_i_i_fu_106_p4;
wire  signed [31:0] sh_assign_1_cast_fu_119_p1;
wire  signed [24:0] sh_assign_1_cast_cas_fu_122_p1;
wire   [62:0] tmp_1_i_i_cast2_fu_115_p1;
wire   [62:0] tmp_3_i_i_fu_125_p1;
wire   [24:0] tmp_4_i_i_fu_129_p2;
wire   [0:0] tmp_fu_141_p3;
wire   [62:0] tmp_5_i_i_fu_135_p2;
wire   [14:0] tmp_42_fu_149_p1;
wire   [14:0] tmp_s_fu_153_p4;
wire   [15:0] tmp_7_i_i_fu_170_p1;
wire   [15:0] tmp_10_i_i_fu_173_p2;

always @ (posedge ap_clk) begin
    if (((ap_block_pp0_stage0_flag00011001 == 1'b0) & (ap_ce == 1'b1))) begin
        ap_reg_pp0_iter1_p_Result_s_reg_186 <= p_Result_s_reg_186;
        isNeg_reg_196 <= sh_assign_fu_74_p2[32'd8];
        loc_V_1_reg_191 <= loc_V_1_fu_66_p1;
        p_Result_s_reg_186 <= p_Val2_s_fu_44_p1[32'd31];
        p_Val2_2_reg_207 <= p_Val2_2_fu_163_p3;
        sh_assign_1_reg_201 <= sh_assign_1_fu_98_p3;
    end
end

assign ap_block_pp0_stage0_flag00000000 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_flag00011001 = ~(1'b1 == 1'b1);

assign ap_block_state1_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_return = ((ap_reg_pp0_iter1_p_Result_s_reg_186[0:0] === 1'b1) ? tmp_10_i_i_fu_173_p2 : tmp_7_i_i_fu_170_p1);

assign isNeg_fu_80_p3 = sh_assign_fu_74_p2[32'd8];

assign loc_V_1_fu_66_p1 = p_Val2_s_fu_44_p1[22:0];

assign loc_V_fu_56_p4 = {{p_Val2_s_fu_44_p1[30:23]}};

assign p_Val2_2_fu_163_p3 = ((isNeg_reg_196[0:0] === 1'b1) ? tmp_42_fu_149_p1 : tmp_s_fu_153_p4);

assign p_Val2_s_fu_44_p1 = x;

assign sh_assign_1_cast_cas_fu_122_p1 = $signed(sh_assign_1_reg_201);

assign sh_assign_1_cast_fu_119_p1 = $signed(sh_assign_1_reg_201);

assign sh_assign_1_fu_98_p3 = ((isNeg_fu_80_p3[0:0] === 1'b1) ? tmp_2_i_i_cast_fu_94_p1 : sh_assign_fu_74_p2);

assign sh_assign_fu_74_p2 = ($signed(9'd385) + $signed(tmp_i_i_i_cast1_fu_70_p1));

assign tmp_10_i_i_fu_173_p2 = (16'd0 - tmp_7_i_i_fu_170_p1);

assign tmp_1_i_i_cast2_fu_115_p1 = tmp_1_i_i_fu_106_p4;

assign tmp_1_i_i_fu_106_p4 = {{{{1'd1}, {loc_V_1_reg_191}}}, {1'd0}};

assign tmp_2_i_i_cast_fu_94_p1 = $signed(tmp_2_i_i_fu_88_p2);

assign tmp_2_i_i_fu_88_p2 = (8'd127 - loc_V_fu_56_p4);

assign tmp_3_i_i_fu_125_p1 = $unsigned(sh_assign_1_cast_fu_119_p1);

assign tmp_42_fu_149_p1 = tmp_fu_141_p3;

assign tmp_4_i_i_fu_129_p2 = tmp_1_i_i_fu_106_p4 >> sh_assign_1_cast_cas_fu_122_p1;

assign tmp_5_i_i_fu_135_p2 = tmp_1_i_i_cast2_fu_115_p1 << tmp_3_i_i_fu_125_p1;

assign tmp_7_i_i_fu_170_p1 = p_Val2_2_reg_207;

assign tmp_fu_141_p3 = tmp_4_i_i_fu_129_p2[32'd24];

assign tmp_i_i_i_cast1_fu_70_p1 = loc_V_fu_56_p4;

assign tmp_s_fu_153_p4 = {{tmp_5_i_i_fu_135_p2[38:24]}};

endmodule //p_hls_fptosi_float_i
