#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
    unsigned int num;
    int digits[10];  /* enough for any 32-bit int */
    int i = 0;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num == 0)
    {
        _putchar('0');
        return;
    }

    while (num > 0)
    {
        digits[i++] = num % 10;
        num /= 10;
    }

    while (--i >= 0)
        _putchar('0' + digits[i]);
}

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (number of rows/columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
    int i;
    int sum_main = 0;
    int sum_secondary = 0;

    for (i = 0; i < size; i++)
    {
        /* Main diagonal: row i, column i */
        sum_main += *(a + i * size + i);

        /* Secondary diagonal: row i, column size-1-i */
        sum_secondary += *(a + i * size + (size - 1 - i));
    }

    print_number(sum_main);
    _putchar(',');
    _putchar(' ');
    print_number(sum_secondary);
    _putchar('\n');
}
