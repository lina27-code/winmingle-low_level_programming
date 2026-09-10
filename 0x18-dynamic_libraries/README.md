# 0x18 - C - Dynamic libraries

This project introduces dynamic libraries in C.

## Learning Objectives
- What is a dynamic library and how it works
- How to create and use dynamic libraries
- LD_LIBRARY_PATH environment variable
- Differences between static and shared libraries
- nm, ldd, ldconfig usage

## Files
- `libdynamic.so` - Dynamic library with helper functions
- `main.h` - Header file with function prototypes
- `1-create_dynamic_lib.sh` - Script to create liball.so
- `100-operations.so` - Dynamic library for Python
- `101-make_me_win.sh` - LD_PRELOAD hack script

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -shared -o libdynamic.so *.c
