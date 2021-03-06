// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module scaled_fixed2ieee (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        in_V,
        prescale,
        ap_return
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;
parameter    ap_const_lv32_0 = 32'd0;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [62:0] in_V;
input  [12:0] prescale;
output  [63:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[63:0] ap_return;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [1:0] i_1_fu_274_p2;
reg   [1:0] i_1_reg_795;
wire    ap_CS_fsm_state2;
wire   [5:0] Hi_assign_fu_288_p2;
reg   [5:0] Hi_assign_reg_800;
wire   [0:0] exitcond1_fu_268_p2;
wire   [5:0] Lo_assign_fu_294_p2;
reg   [5:0] Lo_assign_reg_806;
wire   [0:0] tmp_20_fu_300_p2;
reg   [0:0] tmp_20_reg_814;
wire   [31:0] p_Result_29_fu_317_p5;
reg   [31:0] p_Result_29_reg_821;
wire   [5:0] tmp_28_fu_370_p2;
reg   [5:0] tmp_28_reg_826;
wire    ap_CS_fsm_state3;
wire   [62:0] tmp_31_fu_380_p2;
reg   [62:0] tmp_31_reg_831;
wire   [31:0] out_bits_2_V_1_fu_460_p3;
wire    ap_CS_fsm_state4;
wire   [31:0] out_bits_2_V_6_fu_476_p3;
wire   [31:0] out_bits_2_V_8_fu_484_p3;
wire   [2:0] i_2_fu_498_p2;
reg   [2:0] i_2_reg_854;
wire    ap_CS_fsm_state5;
wire   [1:0] tmp_35_fu_504_p1;
reg   [1:0] tmp_35_reg_859;
wire   [0:0] exitcond_fu_492_p2;
reg   [31:0] p_Result_30_fu_521_p4;
reg   [31:0] p_Result_30_reg_866;
wire   [31:0] c_3_fu_567_p3;
wire    ap_CS_fsm_state6;
wire   [31:0] c_3_3_fu_583_p3;
wire   [31:0] c_3_5_fu_591_p3;
wire   [31:0] c_3_6_fu_607_p3;
wire   [0:0] tmp_36_fu_615_p3;
reg   [0:0] tmp_36_reg_891;
wire    ap_CS_fsm_state7;
wire   [2:0] i_3_fu_623_p2;
reg   [2:0] i_3_reg_895;
wire   [31:0] sh_assign_fu_633_p6;
reg   [31:0] sh_assign_reg_900;
wire   [0:0] isNeg_fu_647_p3;
reg   [0:0] isNeg_reg_906;
wire   [31:0] sh_assign_1_fu_661_p3;
reg   [31:0] sh_assign_1_reg_911;
wire   [31:0] shift_2_fu_669_p2;
wire    ap_CS_fsm_state8;
wire   [62:0] in_shift_V_fu_689_p3;
wire   [11:0] tmp_7_fu_704_p2;
reg   [11:0] tmp_7_reg_931;
wire   [0:0] tmp_6_fu_696_p2;
wire   [0:0] tmp_8_fu_710_p2;
reg   [0:0] tmp_8_reg_936;
wire   [0:0] or_cond_59_fu_732_p2;
reg   [0:0] or_cond_59_reg_941;
wire    ap_CS_fsm_state9;
wire   [10:0] tmp_41_fu_737_p1;
reg   [10:0] tmp_41_reg_947;
reg   [31:0] out_bits_2_V_s_reg_108;
reg   [31:0] out_bits_1_V_s_reg_120;
reg   [31:0] out_bits_2_V_7_reg_132;
reg   [1:0] i_reg_144;
reg   [31:0] c_2_s_reg_156;
reg   [31:0] c_3_1_reg_168;
reg   [31:0] c_3_4_reg_180;
reg   [31:0] c_3_s_reg_192;
reg   [2:0] i1_reg_204;
reg   [62:0] in_shift_reg_215;
reg   [31:0] shift_reg_225;
reg   [2:0] i2_reg_237;
reg   [31:0] shift_1_reg_248;
reg   [62:0] p_Val2_s_reg_258;
wire   [5:0] tmp_fu_280_p3;
wire   [14:0] tmp_19_fu_306_p1;
wire   [15:0] tmp_1_fu_309_p3;
wire   [5:0] tmp_22_fu_338_p2;
wire   [5:0] tmp_24_fu_347_p2;
reg   [62:0] tmp_21_fu_329_p4;
wire   [5:0] tmp_23_fu_342_p2;
wire   [5:0] tmp_25_fu_351_p3;
wire   [5:0] tmp_27_fu_364_p3;
wire   [62:0] tmp_26_fu_358_p3;
wire   [62:0] tmp_29_fu_376_p1;
wire   [62:0] tmp_30_fu_386_p1;
wire   [62:0] tmp_32_fu_389_p2;
wire   [0:0] sel_tmp_fu_400_p2;
wire   [0:0] sel_tmp9_fu_414_p2;
wire   [31:0] out_bits_2_V_fu_406_p3;
wire   [62:0] p_Result_s_fu_395_p2;
wire   [15:0] tmp_34_fu_428_p1;
wire   [31:0] out_bits_2_V_9_fu_420_p3;
wire   [16:0] tmp_3_fu_432_p3;
wire   [31:0] p_Result_28_fu_440_p5;
wire   [31:0] out_bits_2_V_4_fu_452_p3;
wire   [31:0] out_bits_2_V_5_fu_468_p3;
wire   [1:0] p_Val2_31_fu_508_p5;
wire   [31:0] p_Val2_31_fu_508_p6;
wire   [0:0] sel_tmp5_fu_548_p2;
wire   [0:0] sel_tmp4_fu_543_p2;
wire   [0:0] sel_tmp3_fu_538_p2;
reg   [31:0] c_3_8_fu_531_p3;
wire   [0:0] or_cond_fu_553_p2;
wire   [31:0] newSel_fu_559_p3;
wire   [31:0] c_3_2_fu_575_p3;
wire   [31:0] newSel2_fu_599_p3;
wire   [1:0] sh_assign_fu_633_p5;
wire   [31:0] tmp_s_fu_655_p2;
wire   [62:0] tmp_2_fu_674_p1;
wire   [62:0] tmp_5_fu_683_p2;
wire   [62:0] tmp_4_fu_677_p2;
wire   [11:0] tmp_39_fu_701_p1;
wire  signed [31:0] tmp_51_cast_fu_715_p1;
wire   [31:0] newexp_fu_718_p2;
wire   [0:0] tmp_40_fu_724_p3;
wire    ap_CS_fsm_state10;
wire   [51:0] phitmp2_fu_741_p4;
wire   [10:0] out_exp_V_fu_758_p3;
wire   [51:0] p_Val2_32_fu_751_p3;
wire   [63:0] p_Result_31_fu_764_p4;
wire   [63:0] result_write_assign_fu_774_p1;
reg   [63:0] ap_return_preg;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 ap_return_preg = 64'd0;
end

houghTransform_mubkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 2 ),
    .dout_WIDTH( 32 ))
houghTransform_mubkb_U0(
    .din1(out_bits_2_V_7_reg_132),
    .din2(out_bits_1_V_s_reg_120),
    .din3(out_bits_2_V_s_reg_108),
    .din4(p_Result_29_reg_821),
    .din5(p_Val2_31_fu_508_p5),
    .dout(p_Val2_31_fu_508_p6)
);

houghTransform_mubkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 32 ),
    .din5_WIDTH( 2 ),
    .dout_WIDTH( 32 ))
houghTransform_mubkb_U1(
    .din1(c_3_4_reg_180),
    .din2(c_3_1_reg_168),
    .din3(c_2_s_reg_156),
    .din4(c_3_s_reg_192),
    .din5(sh_assign_fu_633_p5),
    .dout(sh_assign_fu_633_p6)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
                ap_return_preg[0] <= 1'b0;
        ap_return_preg[1] <= 1'b0;
        ap_return_preg[2] <= 1'b0;
        ap_return_preg[3] <= 1'b0;
        ap_return_preg[4] <= 1'b0;
        ap_return_preg[5] <= 1'b0;
        ap_return_preg[6] <= 1'b0;
        ap_return_preg[7] <= 1'b0;
        ap_return_preg[8] <= 1'b0;
        ap_return_preg[9] <= 1'b0;
        ap_return_preg[10] <= 1'b0;
        ap_return_preg[11] <= 1'b0;
        ap_return_preg[12] <= 1'b0;
        ap_return_preg[13] <= 1'b0;
        ap_return_preg[14] <= 1'b0;
        ap_return_preg[15] <= 1'b0;
        ap_return_preg[16] <= 1'b0;
        ap_return_preg[17] <= 1'b0;
        ap_return_preg[18] <= 1'b0;
        ap_return_preg[19] <= 1'b0;
        ap_return_preg[20] <= 1'b0;
        ap_return_preg[21] <= 1'b0;
        ap_return_preg[22] <= 1'b0;
        ap_return_preg[23] <= 1'b0;
        ap_return_preg[24] <= 1'b0;
        ap_return_preg[25] <= 1'b0;
        ap_return_preg[26] <= 1'b0;
        ap_return_preg[27] <= 1'b0;
        ap_return_preg[28] <= 1'b0;
        ap_return_preg[29] <= 1'b0;
        ap_return_preg[30] <= 1'b0;
        ap_return_preg[31] <= 1'b0;
        ap_return_preg[32] <= 1'b0;
        ap_return_preg[33] <= 1'b0;
        ap_return_preg[34] <= 1'b0;
        ap_return_preg[35] <= 1'b0;
        ap_return_preg[36] <= 1'b0;
        ap_return_preg[37] <= 1'b0;
        ap_return_preg[38] <= 1'b0;
        ap_return_preg[39] <= 1'b0;
        ap_return_preg[40] <= 1'b0;
        ap_return_preg[41] <= 1'b0;
        ap_return_preg[42] <= 1'b0;
        ap_return_preg[43] <= 1'b0;
        ap_return_preg[44] <= 1'b0;
        ap_return_preg[45] <= 1'b0;
        ap_return_preg[46] <= 1'b0;
        ap_return_preg[47] <= 1'b0;
        ap_return_preg[48] <= 1'b0;
        ap_return_preg[49] <= 1'b0;
        ap_return_preg[50] <= 1'b0;
        ap_return_preg[51] <= 1'b0;
        ap_return_preg[52] <= 1'b0;
        ap_return_preg[53] <= 1'b0;
        ap_return_preg[54] <= 1'b0;
        ap_return_preg[55] <= 1'b0;
        ap_return_preg[56] <= 1'b0;
        ap_return_preg[57] <= 1'b0;
        ap_return_preg[58] <= 1'b0;
        ap_return_preg[59] <= 1'b0;
        ap_return_preg[60] <= 1'b0;
        ap_return_preg[61] <= 1'b0;
        ap_return_preg[62] <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state10)) begin
                        ap_return_preg[62 : 0] <= result_write_assign_fu_774_p1[62 : 0];
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i1_reg_204 <= i_2_reg_854;
    end else if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_268_p2 == 1'd1))) begin
        i1_reg_204 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond_fu_492_p2))) begin
        i2_reg_237 <= 3'd0;
    end else if (((1'b1 == ap_CS_fsm_state8) & (1'd0 == tmp_36_reg_891) & (1'd1 == tmp_6_fu_696_p2))) begin
        i2_reg_237 <= i_3_reg_895;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_144 <= i_1_reg_795;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_144 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond_fu_492_p2))) begin
        in_shift_reg_215 <= in_V;
    end else if (((1'b1 == ap_CS_fsm_state8) & (1'd0 == tmp_36_reg_891) & (1'd1 == tmp_6_fu_696_p2))) begin
        in_shift_reg_215 <= in_shift_V_fu_689_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (1'd0 == tmp_36_reg_891) & (1'd0 == tmp_6_fu_696_p2))) begin
        p_Val2_s_reg_258 <= in_shift_V_fu_689_p3;
    end else if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == tmp_36_fu_615_p3))) begin
        p_Val2_s_reg_258 <= in_shift_reg_215;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (1'd0 == tmp_36_reg_891) & (1'd0 == tmp_6_fu_696_p2))) begin
        shift_1_reg_248 <= shift_2_fu_669_p2;
    end else if (((1'b1 == ap_CS_fsm_state7) & (1'd1 == tmp_36_fu_615_p3))) begin
        shift_1_reg_248 <= shift_reg_225;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond_fu_492_p2))) begin
        shift_reg_225 <= 32'd0;
    end else if (((1'b1 == ap_CS_fsm_state8) & (1'd0 == tmp_36_reg_891) & (1'd1 == tmp_6_fu_696_p2))) begin
        shift_reg_225 <= shift_2_fu_669_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_268_p2 == 1'd0))) begin
        Hi_assign_reg_800[5 : 4] <= Hi_assign_fu_288_p2[5 : 4];
        Lo_assign_reg_806[5 : 4] <= Lo_assign_fu_294_p2[5 : 4];
        tmp_20_reg_814 <= tmp_20_fu_300_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        c_2_s_reg_156 <= c_3_fu_567_p3;
        c_3_1_reg_168 <= c_3_3_fu_583_p3;
        c_3_4_reg_180 <= c_3_5_fu_591_p3;
        c_3_s_reg_192 <= c_3_6_fu_607_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_795 <= i_1_fu_274_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_2_reg_854 <= i_2_fu_498_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        i_3_reg_895 <= i_3_fu_623_p2;
        tmp_36_reg_891 <= i2_reg_237[32'd2];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state7) & (1'd0 == tmp_36_fu_615_p3))) begin
        isNeg_reg_906 <= sh_assign_fu_633_p6[32'd31];
        sh_assign_1_reg_911 <= sh_assign_1_fu_661_p3;
        sh_assign_reg_900 <= sh_assign_fu_633_p6;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        or_cond_59_reg_941 <= or_cond_59_fu_732_p2;
        tmp_41_reg_947 <= tmp_41_fu_737_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        out_bits_1_V_s_reg_120 <= out_bits_2_V_6_fu_476_p3;
        out_bits_2_V_7_reg_132 <= out_bits_2_V_8_fu_484_p3;
        out_bits_2_V_s_reg_108 <= out_bits_2_V_1_fu_460_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_268_p2 == 1'd1))) begin
        p_Result_29_reg_821 <= p_Result_29_fu_317_p5;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (1'd0 == exitcond_fu_492_p2))) begin
        p_Result_30_reg_866 <= p_Result_30_fu_521_p4;
        tmp_35_reg_859 <= tmp_35_fu_504_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_28_reg_826[5 : 1] <= tmp_28_fu_370_p2[5 : 1];
        tmp_31_reg_831[47 : 0] <= tmp_31_fu_380_p2[47 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & ((1'd1 == tmp_36_reg_891) | (1'd0 == tmp_6_fu_696_p2)))) begin
        tmp_7_reg_931 <= tmp_7_fu_704_p2;
        tmp_8_reg_936 <= tmp_8_fu_710_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) | (1'b1 == ap_CS_fsm_state10))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        ap_return = result_write_assign_fu_774_p1;
    end else begin
        ap_return = ap_return_preg;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (exitcond1_fu_268_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (1'd1 == exitcond_fu_492_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & ((1'd1 == tmp_36_reg_891) | (1'd0 == tmp_6_fu_696_p2)))) begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign Hi_assign_fu_288_p2 = ($signed(6'd62) - $signed(tmp_fu_280_p3));

assign Lo_assign_fu_294_p2 = ($signed(6'd47) - $signed(tmp_fu_280_p3));

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign c_3_2_fu_575_p3 = ((sel_tmp4_fu_543_p2[0:0] === 1'b1) ? c_3_8_fu_531_p3 : c_3_1_reg_168);

assign c_3_3_fu_583_p3 = ((sel_tmp5_fu_548_p2[0:0] === 1'b1) ? c_3_1_reg_168 : c_3_2_fu_575_p3);

assign c_3_5_fu_591_p3 = ((sel_tmp5_fu_548_p2[0:0] === 1'b1) ? c_3_8_fu_531_p3 : c_3_4_reg_180);

assign c_3_6_fu_607_p3 = ((or_cond_fu_553_p2[0:0] === 1'b1) ? c_3_s_reg_192 : newSel2_fu_599_p3);


always @ (p_Result_30_reg_866) begin
    if (p_Result_30_reg_866[0] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd0;
    end else if (p_Result_30_reg_866[1] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd1;
    end else if (p_Result_30_reg_866[2] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd2;
    end else if (p_Result_30_reg_866[3] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd3;
    end else if (p_Result_30_reg_866[4] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd4;
    end else if (p_Result_30_reg_866[5] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd5;
    end else if (p_Result_30_reg_866[6] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd6;
    end else if (p_Result_30_reg_866[7] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd7;
    end else if (p_Result_30_reg_866[8] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd8;
    end else if (p_Result_30_reg_866[9] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd9;
    end else if (p_Result_30_reg_866[10] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd10;
    end else if (p_Result_30_reg_866[11] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd11;
    end else if (p_Result_30_reg_866[12] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd12;
    end else if (p_Result_30_reg_866[13] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd13;
    end else if (p_Result_30_reg_866[14] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd14;
    end else if (p_Result_30_reg_866[15] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd15;
    end else if (p_Result_30_reg_866[16] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd16;
    end else if (p_Result_30_reg_866[17] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd17;
    end else if (p_Result_30_reg_866[18] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd18;
    end else if (p_Result_30_reg_866[19] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd19;
    end else if (p_Result_30_reg_866[20] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd20;
    end else if (p_Result_30_reg_866[21] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd21;
    end else if (p_Result_30_reg_866[22] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd22;
    end else if (p_Result_30_reg_866[23] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd23;
    end else if (p_Result_30_reg_866[24] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd24;
    end else if (p_Result_30_reg_866[25] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd25;
    end else if (p_Result_30_reg_866[26] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd26;
    end else if (p_Result_30_reg_866[27] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd27;
    end else if (p_Result_30_reg_866[28] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd28;
    end else if (p_Result_30_reg_866[29] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd29;
    end else if (p_Result_30_reg_866[30] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd30;
    end else if (p_Result_30_reg_866[31] == 1'b1) begin
        c_3_8_fu_531_p3 = 32'd31;
    end else begin
        c_3_8_fu_531_p3 = 32'd32;
    end
end

assign c_3_fu_567_p3 = ((or_cond_fu_553_p2[0:0] === 1'b1) ? c_2_s_reg_156 : newSel_fu_559_p3);

assign exitcond1_fu_268_p2 = ((i_reg_144 == 2'd3) ? 1'b1 : 1'b0);

assign exitcond_fu_492_p2 = ((i1_reg_204 == 3'd4) ? 1'b1 : 1'b0);

assign i_1_fu_274_p2 = (i_reg_144 + 2'd1);

assign i_2_fu_498_p2 = (i1_reg_204 + 3'd1);

assign i_3_fu_623_p2 = (i2_reg_237 + 3'd1);

assign in_shift_V_fu_689_p3 = ((isNeg_reg_906[0:0] === 1'b1) ? tmp_5_fu_683_p2 : tmp_4_fu_677_p2);

assign isNeg_fu_647_p3 = sh_assign_fu_633_p6[32'd31];

assign newSel2_fu_599_p3 = ((sel_tmp3_fu_538_p2[0:0] === 1'b1) ? c_3_s_reg_192 : c_3_8_fu_531_p3);

assign newSel_fu_559_p3 = ((sel_tmp3_fu_538_p2[0:0] === 1'b1) ? c_3_8_fu_531_p3 : c_2_s_reg_156);

assign newexp_fu_718_p2 = ($signed(tmp_51_cast_fu_715_p1) - $signed(shift_1_reg_248));

assign or_cond_59_fu_732_p2 = (tmp_40_fu_724_p3 | tmp_8_reg_936);

assign or_cond_fu_553_p2 = (sel_tmp5_fu_548_p2 | sel_tmp4_fu_543_p2);

assign out_bits_2_V_1_fu_460_p3 = ((sel_tmp_fu_400_p2[0:0] === 1'b1) ? out_bits_2_V_s_reg_108 : out_bits_2_V_4_fu_452_p3);

assign out_bits_2_V_4_fu_452_p3 = ((sel_tmp9_fu_414_p2[0:0] === 1'b1) ? out_bits_2_V_s_reg_108 : p_Result_28_fu_440_p5);

assign out_bits_2_V_5_fu_468_p3 = ((sel_tmp9_fu_414_p2[0:0] === 1'b1) ? p_Result_28_fu_440_p5 : out_bits_1_V_s_reg_120);

assign out_bits_2_V_6_fu_476_p3 = ((sel_tmp_fu_400_p2[0:0] === 1'b1) ? out_bits_1_V_s_reg_120 : out_bits_2_V_5_fu_468_p3);

assign out_bits_2_V_8_fu_484_p3 = ((sel_tmp_fu_400_p2[0:0] === 1'b1) ? p_Result_28_fu_440_p5 : out_bits_2_V_7_reg_132);

assign out_bits_2_V_9_fu_420_p3 = ((sel_tmp9_fu_414_p2[0:0] === 1'b1) ? out_bits_1_V_s_reg_120 : out_bits_2_V_fu_406_p3);

assign out_bits_2_V_fu_406_p3 = ((sel_tmp_fu_400_p2[0:0] === 1'b1) ? out_bits_2_V_7_reg_132 : out_bits_2_V_s_reg_108);

assign out_exp_V_fu_758_p3 = ((or_cond_59_reg_941[0:0] === 1'b1) ? 11'd0 : tmp_41_reg_947);

assign p_Result_28_fu_440_p5 = {{tmp_3_fu_432_p3}, {out_bits_2_V_9_fu_420_p3[14:0]}};

assign p_Result_29_fu_317_p5 = {{tmp_1_fu_309_p3}, {ap_const_lv32_0[15:0]}};

integer ap_tvar_int_0;

always @ (p_Val2_31_fu_508_p6) begin
    for (ap_tvar_int_0 = 32 - 1; ap_tvar_int_0 >= 0; ap_tvar_int_0 = ap_tvar_int_0 - 1) begin
        if (ap_tvar_int_0 > 31 - 0) begin
            p_Result_30_fu_521_p4[ap_tvar_int_0] = 1'b0;
        end else begin
            p_Result_30_fu_521_p4[ap_tvar_int_0] = p_Val2_31_fu_508_p6[31 - ap_tvar_int_0];
        end
    end
end

assign p_Result_31_fu_764_p4 = {{{{1'd0}, {out_exp_V_fu_758_p3}}}, {p_Val2_32_fu_751_p3}};

assign p_Result_s_fu_395_p2 = (tmp_31_reg_831 & tmp_32_fu_389_p2);

assign p_Val2_31_fu_508_p5 = i1_reg_204[1:0];

assign p_Val2_32_fu_751_p3 = ((or_cond_59_reg_941[0:0] === 1'b1) ? 52'd0 : phitmp2_fu_741_p4);

assign phitmp2_fu_741_p4 = {{p_Val2_s_reg_258[61:10]}};

assign result_write_assign_fu_774_p1 = p_Result_31_fu_764_p4;

assign sel_tmp3_fu_538_p2 = ((tmp_35_reg_859 == 2'd2) ? 1'b1 : 1'b0);

assign sel_tmp4_fu_543_p2 = ((tmp_35_reg_859 == 2'd1) ? 1'b1 : 1'b0);

assign sel_tmp5_fu_548_p2 = ((tmp_35_reg_859 == 2'd0) ? 1'b1 : 1'b0);

assign sel_tmp9_fu_414_p2 = ((i_reg_144 == 2'd1) ? 1'b1 : 1'b0);

assign sel_tmp_fu_400_p2 = ((i_reg_144 == 2'd0) ? 1'b1 : 1'b0);

assign sh_assign_1_fu_661_p3 = ((isNeg_fu_647_p3[0:0] === 1'b1) ? tmp_s_fu_655_p2 : sh_assign_fu_633_p6);

assign sh_assign_fu_633_p5 = i2_reg_237[1:0];

assign shift_2_fu_669_p2 = (sh_assign_reg_900 + shift_reg_225);

assign tmp_19_fu_306_p1 = in_V[14:0];

assign tmp_1_fu_309_p3 = {{tmp_19_fu_306_p1}, {1'd1}};

assign tmp_20_fu_300_p2 = ((Lo_assign_fu_294_p2 > Hi_assign_fu_288_p2) ? 1'b1 : 1'b0);

integer ap_tvar_int_1;

always @ (in_V) begin
    for (ap_tvar_int_1 = 63 - 1; ap_tvar_int_1 >= 0; ap_tvar_int_1 = ap_tvar_int_1 - 1) begin
        if (ap_tvar_int_1 > 62 - 0) begin
            tmp_21_fu_329_p4[ap_tvar_int_1] = 1'b0;
        end else begin
            tmp_21_fu_329_p4[ap_tvar_int_1] = in_V[62 - ap_tvar_int_1];
        end
    end
end

assign tmp_22_fu_338_p2 = (Lo_assign_reg_806 - Hi_assign_reg_800);

assign tmp_23_fu_342_p2 = ($signed(6'd62) - $signed(Lo_assign_reg_806));

assign tmp_24_fu_347_p2 = (Hi_assign_reg_800 - Lo_assign_reg_806);

assign tmp_25_fu_351_p3 = ((tmp_20_reg_814[0:0] === 1'b1) ? tmp_22_fu_338_p2 : tmp_24_fu_347_p2);

assign tmp_26_fu_358_p3 = ((tmp_20_reg_814[0:0] === 1'b1) ? tmp_21_fu_329_p4 : in_V);

assign tmp_27_fu_364_p3 = ((tmp_20_reg_814[0:0] === 1'b1) ? tmp_23_fu_342_p2 : Lo_assign_reg_806);

assign tmp_28_fu_370_p2 = ($signed(6'd62) - $signed(tmp_25_fu_351_p3));

assign tmp_29_fu_376_p1 = tmp_27_fu_364_p3;

assign tmp_2_fu_674_p1 = sh_assign_1_reg_911;

assign tmp_30_fu_386_p1 = tmp_28_reg_826;

assign tmp_31_fu_380_p2 = tmp_26_fu_358_p3 >> tmp_29_fu_376_p1;

assign tmp_32_fu_389_p2 = 63'd9223372036854775807 >> tmp_30_fu_386_p1;

assign tmp_34_fu_428_p1 = p_Result_s_fu_395_p2[15:0];

assign tmp_35_fu_504_p1 = i1_reg_204[1:0];

assign tmp_36_fu_615_p3 = i2_reg_237[32'd2];

assign tmp_39_fu_701_p1 = prescale[11:0];

assign tmp_3_fu_432_p3 = {{tmp_34_fu_428_p1}, {1'd1}};

assign tmp_40_fu_724_p3 = newexp_fu_718_p2[32'd31];

assign tmp_41_fu_737_p1 = newexp_fu_718_p2[10:0];

assign tmp_4_fu_677_p2 = in_shift_reg_215 << tmp_2_fu_674_p1;

assign tmp_51_cast_fu_715_p1 = $signed(tmp_7_reg_931);

assign tmp_5_fu_683_p2 = $signed(in_shift_reg_215) >>> tmp_2_fu_674_p1;

assign tmp_6_fu_696_p2 = ((sh_assign_reg_900 == 32'd16) ? 1'b1 : 1'b0);

assign tmp_7_fu_704_p2 = (12'd1023 - tmp_39_fu_701_p1);

assign tmp_8_fu_710_p2 = ((in_V == 63'd0) ? 1'b1 : 1'b0);

assign tmp_fu_280_p3 = {{i_reg_144}, {4'd0}};

assign tmp_s_fu_655_p2 = (32'd0 - sh_assign_fu_633_p6);

always @ (posedge ap_clk) begin
    Hi_assign_reg_800[3:0] <= 4'b1110;
    Lo_assign_reg_806[3:0] <= 4'b1111;
    tmp_28_reg_826[0] <= 1'b1;
    tmp_31_reg_831[62:48] <= 15'b000000000000000;
    ap_return_preg[63] <= 1'b0;
end

endmodule //scaled_fixed2ieee
