#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates a random valid password for the crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    int c;

    srand(time(NULL));
    while (sum < 2772 - 128)
    {
        c = rand() % 128;
        if (c == 0)
            continue;
        sum += c;
        _putchar(c);
    }
    _putchar(2772 - sum);
    _putchar('\n');
    return (0);
}
