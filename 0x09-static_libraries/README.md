# 0x09. C - Static Libraries

## Description
This project demonstrates how to create and use static libraries in C.

## Files
- `libmy.a` – static library containing implementations of various helper functions
- `main.h` – header file with function prototypes
- `create_static_lib.sh` – script to compile all .c files and create a static library liball.a

## Usage
Compile a program with the library: gcc -std=gnu89 main.c -L. -lmy -o program
Create a new static library from all .c files in the current directory: ./create_static_lib.sh
