#!/bin/sh

rm -rf obj_dir
rm -f lfsr4.vcd

verilator -Wall --cc --trace lfsr4.sv --exe top.cpp

make -j -C obj_dir/ -f Vlfsr4.mk Vlfsr4

obj_dir/Vlfsr4
