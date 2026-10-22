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
 * print_fib - prints a Fibonacci number split into high and low parts
 * @high: upper part (multiplied by 10^9)
 * @low: lower part (0 to 999,999,999)
 */
static void print_fib(unsigned long high, unsigned long low)
{
    unsigned long temp;
    int digits;

    if (high > 0)
    {
        print_ulong(high);
        temp = low;
        digits = 1;
        while (temp >= 10)
        {
            digits++;
            temp /= 10;
        }
        while (digits < 9)
        {
            _putchar('0');
            digits++;
        }
    }
    print_ulong(low);
}

/**
 * main - prints the first 98 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
    const unsigned long BASE = 1000000000;
    unsigned long a_high = 0, a_low = 1;
    unsigned long b_high = 0, b_low = 2;
    unsigned long c_high, c_low;
    int i;

    print_fib(a_high, a_low);
    _putchar(',');
    _putchar(' ');
    print_fib(b_high, b_low);

    for (i = 0; i < 96; i++)
    {
        c_low = a_low + b_low;
        c_high = a_high + b_high;
        if (c_low >= BASE)
        {
            c_low -= BASE;
            c_high++;
        }
        _putchar(',');
        _putchar(' ');
        print_fib(c_high, c_low);
        a_high = b_high;
        a_low = b_low;
        b_high = c_high;
        b_low = c_low;
    }
    _putchar('\n');
    return (0);
}
