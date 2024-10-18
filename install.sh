#!/bin/zsh
cd build || mkdir -p build && cd build
cmake ..
make
cd ..