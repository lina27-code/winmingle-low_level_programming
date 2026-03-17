#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing characters to look for
 *
 * Return: Pointer to the byte in s that matches one in accept,
 *         or 0 if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    int i, j;

    /* Loop through each character in s */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* Check if current character exists in accept */
        for (j = 0; accept[j] != '\0'; j++)
        {
            /* If we find a match, return pointer to this character in s */
            if (s[i] == accept[j])
            {
                return (&s[i]);  /* Return address of matching character */
            }
        }
    }

    return (0);  /* No match found - return NULL (0) */
}
