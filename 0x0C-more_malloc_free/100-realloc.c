#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to old memory
 * @old_size: size of old memory block
 * @new_size: size of new memory block
 *
 * Return: pointer to new block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;
    char *old, *new;

    if (new_size == old_size)
        return (ptr);

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
        return (NULL);

    old = ptr;
    new = new_ptr;
    for (i = 0; i < old_size && i < new_size; i++)
        new[i] = old[i];

    free(ptr);
    return (new_ptr);
}
