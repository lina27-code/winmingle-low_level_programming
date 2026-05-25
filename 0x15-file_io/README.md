# 0x15 - File I/O

This project introduces file system calls in C.

## Learning Objectives
- File descriptors (STDIN_FILENO, STDOUT_FILENO, STDERR_FILENO)
- System calls: open, close, read, write
- File permissions and flags (O_RDONLY, O_WRONLY, O_RDWR, O_CREAT, O_TRUNC, O_APPEND)
- Difference between functions and system calls

## Files
- `main.h` – header with prototypes
- `0-read_textfile.c` – read and print file content
- `1-create_file.c` – create a file with permissions
- `2-append_text_to_file.c` – append text to file
- `3-cp.c` – copy file content
- `100-elf_header.c` – display ELF header information

## Compilation:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
