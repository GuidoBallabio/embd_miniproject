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
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        x,
        ap_return
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] x;
output  [63:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [0:0] p_Result_s_reg_186;
wire   [22:0] loc_V_7_fu_66_p1;
reg   [22:0] loc_V_7_reg_191;
wire   [0:0] isNeg_fu_80_p3;
reg   [0:0] isNeg_reg_196;
wire   [8:0] sh_assign_2_fu_98_p3;
reg   [8:0] sh_assign_2_reg_201;
wire   [62:0] p_Val2_104_fu_163_p3;
reg   [62:0] p_Val2_104_reg_207;
wire    ap_CS_fsm_state2;
wire   [31:0] p_Val2_s_fu_44_p1;
wire   [7:0] loc_V_fu_56_p4;
wire   [8:0] tmp_i_i_i_cast1_fu_70_p1;
wire   [8:0] sh_assign_fu_74_p2;
wire   [7:0] tmp_118_i_i_fu_88_p2;
wire  signed [8:0] tmp_118_i_i_cast_fu_94_p1;
wire   [24:0] tmp_117_i_i_fu_106_p4;
wire  signed [31:0] sh_assign_4_cast_fu_119_p1;
wire  signed [24:0] sh_assign_4_cast_cas_fu_122_p1;
wire   [110:0] tmp_117_i_i_cast2_fu_115_p1;
wire   [110:0] tmp_119_i_i_fu_125_p1;
wire   [24:0] tmp_120_i_i_fu_129_p2;
wire   [0:0] tmp_fu_141_p3;
wire   [110:0] tmp_121_i_i_fu_135_p2;
wire   [62:0] tmp_530_fu_149_p1;
wire   [62:0] tmp_531_fu_153_p4;
wire    ap_CS_fsm_state3;
wire   [63:0] tmp_123_i_i_fu_170_p1;
wire   [63:0] tmp_126_i_i_fu_173_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        isNeg_reg_196 <= sh_assign_fu_74_p2[32'd8];
        loc_V_7_reg_191 <= loc_V_7_fu_66_p1;
        p_Result_s_reg_186 <= p_Val2_s_fu_44_p1[32'd31];
        sh_assign_2_reg_201 <= sh_assign_2_fu_98_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        p_Val2_104_reg_207 <= p_Val2_104_fu_163_p3;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1)) | (1'b1 == ap_CS_fsm_state3))) begin
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
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_return = ((p_Result_s_reg_186[0:0] === 1'b1) ? tmp_126_i_i_fu_173_p2 : tmp_123_i_i_fu_170_p1);

assign isNeg_fu_80_p3 = sh_assign_fu_74_p2[32'd8];

assign loc_V_7_fu_66_p1 = p_Val2_s_fu_44_p1[22:0];

assign loc_V_fu_56_p4 = {{p_Val2_s_fu_44_p1[30:23]}};

assign p_Val2_104_fu_163_p3 = ((isNeg_reg_196[0:0] === 1'b1) ? tmp_530_fu_149_p1 : tmp_531_fu_153_p4);

assign p_Val2_s_fu_44_p1 = x;

assign sh_assign_2_fu_98_p3 = ((isNeg_fu_80_p3[0:0] === 1'b1) ? tmp_118_i_i_cast_fu_94_p1 : sh_assign_fu_74_p2);

assign sh_assign_4_cast_cas_fu_122_p1 = $signed(sh_assign_2_reg_201);

assign sh_assign_4_cast_fu_119_p1 = $signed(sh_assign_2_reg_201);

assign sh_assign_fu_74_p2 = ($signed(9'd385) + $signed(tmp_i_i_i_cast1_fu_70_p1));

assign tmp_117_i_i_cast2_fu_115_p1 = tmp_117_i_i_fu_106_p4;

assign tmp_117_i_i_fu_106_p4 = {{{{1'd1}, {loc_V_7_reg_191}}}, {1'd0}};

assign tmp_118_i_i_cast_fu_94_p1 = $signed(tmp_118_i_i_fu_88_p2);

assign tmp_118_i_i_fu_88_p2 = (8'd127 - loc_V_fu_56_p4);

assign tmp_119_i_i_fu_125_p1 = $unsigned(sh_assign_4_cast_fu_119_p1);

assign tmp_120_i_i_fu_129_p2 = tmp_117_i_i_fu_106_p4 >> sh_assign_4_cast_cas_fu_122_p1;

assign tmp_121_i_i_fu_135_p2 = tmp_117_i_i_cast2_fu_115_p1 << tmp_119_i_i_fu_125_p1;

assign tmp_123_i_i_fu_170_p1 = p_Val2_104_reg_207;

assign tmp_126_i_i_fu_173_p2 = (64'd0 - tmp_123_i_i_fu_170_p1);

assign tmp_530_fu_149_p1 = tmp_fu_141_p3;

assign tmp_531_fu_153_p4 = {{tmp_121_i_i_fu_135_p2[86:24]}};

assign tmp_fu_141_p3 = tmp_120_i_i_fu_129_p2[32'd24];

assign tmp_i_i_i_cast1_fu_70_p1 = loc_V_fu_56_p4;

endmodule //p_hls_fptosi_float_i
