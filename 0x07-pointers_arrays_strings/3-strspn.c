#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The string containing allowed characters
 *
 * Return: Number of bytes in initial segment of s consisting of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int i, j;
    int found;

    /* Loop through each character in s */
    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;  /* Reset found flag for each character in s */
        
        /* Check if current character exists in accept */
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;  /* Character found in accept */
                break;      /* No need to continue searching accept */
            }
        }
        
        /* If character was NOT found in accept, stop counting */
        if (found == 0)
        {
            break;  /* Exit the loop - we've reached a non-matching character */
        }
        
        count++;  /* Character matched, increment count */
    }
    
    return (count);
}
