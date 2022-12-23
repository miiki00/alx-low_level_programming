#!/bin/bash
curl https://github.com/miiki00/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libhij.so 2> /dev/null
export LD_PRELOAD=$PWD/libhij.so
