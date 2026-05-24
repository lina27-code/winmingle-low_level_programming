#include "main.h"

/**
* get_bit - returns value of a bit at a given index
* @n: number to extract bit from
* @index: index of bit (starting from 0)
*
* Return: bit value (0 or 1), or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int max_bits = sizeof(unsigned long int) * 8;

    if (index >= max_bits)
        return (-1);
    return ((n >> index) & 1);
}
