#include "main.h"

/**
* clear_bit - sets value of a bit to 0 at a given index
* @n: pointer to number to modify
* @index: index of bit to clear (starting from 0)
*
* Return: 1 if worked, -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned int max_bits = sizeof(unsigned long int) * 8;

    if (n == NULL || index >= max_bits)
        return (-1);
    *n &= ~(1UL << index);
    return (1);
}
