#!/bin/bash

echo "tring to build the project----------------"

g++ ./cpptiny/cc/simple_start/simple_main.cc ./cpptiny/cc/simple_start/neural/neural.cc  -o ./cpptiny/build/simple_start/simple_main

echo "trying to run the test: ------------------"

./cpptiny/build/simple_start/simple_main


