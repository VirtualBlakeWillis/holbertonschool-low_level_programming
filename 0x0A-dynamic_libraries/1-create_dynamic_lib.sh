#!/bin/bashgcc
gcc -c *.c -fPIC
gcc -shared *.o -o liball.so
