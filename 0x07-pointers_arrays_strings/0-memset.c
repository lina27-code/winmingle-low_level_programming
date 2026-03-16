#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: The constant byte to fill with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    /* Loop through the first n bytes */
    for (i = 0; i < n; i++)
    {
        /* Set each byte to b */
        s[i] = b;
        /* This is equivalent to: *(s + i) = b; */
    }

    return (s);
}
