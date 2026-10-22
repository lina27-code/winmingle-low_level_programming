#include "main.h"

/**
 * print_ulong - prints an unsigned long using _putchar
 * @n: the number to print
 */
static void print_ulong(unsigned long n)
{
    if (n >= 10)
        print_ulong(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long a = 1, b = 2, c;
    int i;

    print_ulong(a);
    _putchar(',');
    _putchar(' ');
    print_ulong(b);

    for (i = 0; i < 48; i++)
    {
        c = a + b;
        _putchar(',');
        _putchar(' ');
        print_ulong(c);
        a = b;
        b = c;
    }
    _putchar('\n');
    return (0);
}
