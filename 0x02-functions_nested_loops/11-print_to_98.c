#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the number to print
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
        num = n;

    if (num >= 10)
        print_number(num / 10);
    _putchar((num % 10) + '0');
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            print_number(n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    else
    {
        for (; n >= 98; n--)
        {
            print_number(n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    _putchar('\n');
}
