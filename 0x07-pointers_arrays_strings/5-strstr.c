#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or 0 if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j;

    /* If needle is empty, return haystack */
    if (*needle == '\0')
        return (haystack);

    /* Loop through haystack */
    for (i = 0; haystack[i] != '\0'; i++)
    {
        /* Check if needle matches starting at i */
        for (j = 0; needle[j] != '\0'; j++)
        {
            /* If we reach end of haystack before end of needle, no match */
            if (haystack[i + j] == '\0')
                return (0);

            /* If characters don't match, break inner loop */
            if (haystack[i + j] != needle[j])
                break;
        }

        /* If we went through all of needle without breaking, we have a match */
        if (needle[j] == '\0')
            return (&haystack[i]);
    }

    return (0);
}
