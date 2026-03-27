#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space containing a copy
 *          of the string given as parameter.
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str == NULL or allocation fails
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int len = 0, i;

    if (str == NULL)
        return (NULL);

    /* compute length */
    while (str[len])
        len++;

    dup = malloc(sizeof(char) * (len + 1));
    if (dup == NULL)
        return (NULL);

    for (i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}
