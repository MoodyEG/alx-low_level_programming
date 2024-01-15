#!/bin/bash
wget -P /tmp https://github.com/MoodyEG/alx-low_level_programming/raw/main/0x18-dynamic_libraries/script.so
export LD_PRELOAD=/tmp/script.so
