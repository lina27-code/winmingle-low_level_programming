#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a_low = 1, b_low = 2;
    unsigned long int a_high = 0, b_high = 0;
    unsigned long int next_low, next_high;
    unsigned long int divider = 10000000000;
    int i;

    printf("1, 2");

    for (i = 3; i <= 98; i++)
    {
        next_low = a_low + b_low;
        next_high = a_high + b_high;

        if (next_low >= divider)
        {
            next_low -= divider;
            next_high += 1;
        }

        if (next_high > 0)
            printf(", %lu%010lu", next_high, next_low);
        else
            printf(", %lu", next_low);

        a_low = b_low;
        a_high = b_high;
        b_low = next_low;
        b_high = next_high;
    }

    printf("\n");

    return (0);
}
