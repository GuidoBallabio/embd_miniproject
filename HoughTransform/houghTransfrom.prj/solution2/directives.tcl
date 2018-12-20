############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_interface -mode s_axilite -bundle hough "houghTransform"
set_directive_interface -mode s_axilite -bundle hough "houghTransform" in
set_directive_interface -mode s_axilite -bundle hough "houghTransform" out
set_directive_interface -mode s_axilite -bundle hough "houghTransform" acc
set_directive_interface -mode s_axilite -bundle hough "houghTransform" dNonZero
set_directive_interface -mode s_axilite -bundle hough "houghTransform" fiNonZero
set_directive_interface -mode s_axilite -bundle hough "houghTransform" threshold
set_directive_pipeline -II 1 "houghTransform/houghTransform_label0"
set_directive_unroll -factor 180 "houghTransform/houghTransform_label0"
set_directive_pipeline -II 1 "houghTransform/houghTransform_label1"
set_directive_unroll -factor 50 "houghTransform/houghTransform_label1"
