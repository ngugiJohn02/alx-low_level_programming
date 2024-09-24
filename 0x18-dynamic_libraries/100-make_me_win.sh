#!/bin/bash
gcc -shared -fPIC srand.c rand.c -o randgen.so
