#!/bin/bash
# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
# Create static library liball.a from all .o files
ar -rc liball.a *.o
# Optionally, index the library
ranlib liball.a
