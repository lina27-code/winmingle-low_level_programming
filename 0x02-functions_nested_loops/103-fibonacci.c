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
 * main - prints the sum of even Fibonacci terms below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long a = 1, b = 2, c;
    unsigned long sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;
        c = a + b;
        a = b;
        b = c;
    }
    print_ulong(sum);
    _putchar('\n');
    return (0);
}
