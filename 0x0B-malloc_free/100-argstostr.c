#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    char *str;
    int total_len = 0;
    int i, j, pos = 0;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* compute total length */
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            total_len++;
        total_len++; /* for the newline */
    }
    total_len++; /* for final null terminator */

    str = malloc(sizeof(char) * total_len);
    if (str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            str[pos++] = av[i][j];
        str[pos++] = '\n';
    }
    str[pos] = '\0';

    return (str);
}
