# 0x08. C - Recursion

This project introduces recursion in C.  
We implement several recursive functions without using loops, static variables, or the standard library (except `_putchar`).

## Learning Objectives
- What is recursion and how to implement it
- When to use recursion and when to avoid it
- How to think recursively

## Requirements
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
- All files end with a newline
- A `README.md` file is mandatory
- No global variables
- No more than 5 functions per file
- No standard library functions (use `_putchar` for output)
- No loops allowed
- No static variables
- Function prototypes and `_putchar` prototype in `main.h`

## Tasks

| Task | Description | Prototype |
|------|-------------|-----------|
| 0 | Print a string followed by a new line | `void _puts_recursion(char *s);` |
| 1 | Print a string in reverse | `void _print_rev_recursion(char *s);` |
| 2 | Return the length of a string | `int _strlen_recursion(char *s);` |
| 3 | Return the factorial of a number | `int factorial(int n);` |
| 4 | Return the value of x raised to the power y | `int _pow_recursion(int x, int y);` |
| 5 | Return the natural square root of a number | `int _sqrt_recursion(int n);` |
| 6 | Return 1 if the input integer is prime, else 0 | `int is_prime_number(int n);` |
| 7 | Return 1 if a string is a palindrome, else 0 | `int is_palindrome(char *s);` |
| 8 | Compare two strings with wildcard `*` | `int wildcmp(char *s1, char *s2);` |

## Compilation

All programs are compiled with: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _putchar.c [main.c] [function.c] -o output

## Notes
- Every function uses recursion only (no loops).
- The `_putchar` function is used for character output.
- Helper functions are used where necessary to carry extra parameters.
- The `wildcmp` function handles the `*` wildcard by exploring possibilities recursively

