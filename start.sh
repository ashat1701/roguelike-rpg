#!/bin/bash
cmake .
make
cd build/src/build/bin
./main
