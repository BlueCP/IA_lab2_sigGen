#!/bin/sh

# Cleanup
rm -rf obj_dir
rm -f sinegen.vcd

# Run Verilator to translate Verilog into C++, including C++ testbench
verilator -Wall --cc --trace --exe sinegen.sv top_tb.cpp

# Build C++ project via make automatically generated by Verilator
make -j -C obj_dir/ -f Vsinegen.mk Vsinegen

# Run executable simulation file
obj_dir/Vsinegen