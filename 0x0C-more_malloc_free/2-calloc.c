#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, set to zero; NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total, i;
    char *p;

    if (nmemb == 0 || size == 0)
        return (NULL);

    /* optional overflow check */
    if (nmemb > (unsigned int)-1 / size)
        return (NULL);

    total = nmemb * size;
    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);

    p = ptr;
    for (i = 0; i < total; i++)
        p[i] = 0;

    return (ptr);
}
