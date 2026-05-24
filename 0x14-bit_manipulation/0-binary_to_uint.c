#include "main.h"

/**
* binary_to_uint - converts a binary string to an unsigned int
* @b: pointer to string of 0 and 1 characters
*
* Return: converted number, or 0 if b is NULL or contains non-binary chars
*/
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return (0);

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
    result = (result << 1) | (b[i] - '0');
    }
    return (result);
}
