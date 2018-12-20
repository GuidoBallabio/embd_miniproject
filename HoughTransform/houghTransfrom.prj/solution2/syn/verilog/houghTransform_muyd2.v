// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================


`timescale 1 ns / 1 ps

module houghTransform_muyd2_MulnS_9(clk, ce, a, b, p);
input clk;
input ce;
input [23 - 1 : 0] a; // synthesis attribute keep a "true"
input [35 - 1 : 0] b; // synthesis attribute keep b "true"
output[58 - 1 : 0] p;
reg signed [58 - 1 : 0] p;
wire [58 - 1 : 0] tmp_product;

assign tmp_product = a * b;
always @ (posedge clk) begin
    if (ce) begin
        p <= tmp_product;
    end
end
endmodule

`timescale 1 ns / 1 ps
module houghTransform_muyd2(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



houghTransform_muyd2_MulnS_9 houghTransform_muyd2_MulnS_9_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

