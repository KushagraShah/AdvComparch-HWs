############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline "kernel5/loop"
set_directive_pipeline "kernel5/fill"
set_directive_unroll "kernel5/shift"
set_directive_array_partition -type complete -dim 1 "kernel5" sum
set_directive_array_partition -type complete -dim 1 "kernel5" flag
set_directive_unroll "kernel5/newsh"
set_directive_unroll "kernel5/shift1"
set_directive_unroll "kernel5/shift2"
set_directive_dependence -variable flag -type intra -dependent true "kernel5/loop"
