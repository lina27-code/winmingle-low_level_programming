#include "main.h"

/**
 * print_uint - prints an unsigned int using _putchar
 * @n: the number to print
 */
static void print_uint(unsigned int n)
{
    if (n >= 10)
        print_uint(n / 10);
    _putchar((n % 10) + '0');
}

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned int i, sum = 0;

    for (i = 1; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    print_uint(sum);
    _putchar('\n');
    return (0);
}
