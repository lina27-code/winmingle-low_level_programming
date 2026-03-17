#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find
 *
 * Return: Pointer to first occurrence of c, or 0 if not found
 */
char *_strchr(char *s, char c)
{
    int i = 0;

    /* Loop through the string until we find c or reach the end */
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (&s[i]);  /* Return address of the character */
        }
        i++;
    }

    /* Check if c is the null terminator */
    if (c == '\0')
    {
        return (&s[i]);  /* Return pointer to null terminator */
    }

    return (0);  /* Character not found - return 0 (NULL) */
}
