#!/bin/bash
wget https://github.com/MoodyEG/alx-low_level_programming/blob/main/0x18-dynamic_libraries/script.so
export LD_PRELOAD="$PWD/script.so"
