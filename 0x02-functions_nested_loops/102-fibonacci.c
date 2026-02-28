#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
    unsigned long int a = 1;
    unsigned long int b = 2;
    unsigned long int next;
    int count;

    printf("%lu, %lu", a, b);

    for (count = 3; count <= 50; count++)
    {
        next = a + b;
        printf(", %lu", next);

        a = b;
        b = next;
    }

    printf("\n");

    return (0);
}
