#!/bin/bash
#
cp fem1d_bvp_linear.hpp /$HOME/include
#
g++ -c -g -I /$HOME/include fem1d_bvp_linear.cpp >& compiler.txt
if [ $? -ne 0 ]; then
  echo "Errors compiling fem1d_bvp_linear.cpp"
  exit
fi
rm compiler.txt
#
mv fem1d_bvp_linear.o ~/libcpp/$ARCH/fem1d_bvp_linear.o
#
echo "Library installed as ~/libcpp/$ARCH/fem1d_bvp_linear.o"
