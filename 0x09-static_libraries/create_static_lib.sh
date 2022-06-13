#!/bin/bash
# Create a script that creates a library from all .c files in library
gcc -c *.c
ar rc liball.a *.o
