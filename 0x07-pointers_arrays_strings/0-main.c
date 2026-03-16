#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - Prints buffer in hexa
 * @buffer: The buffer to print
 * @size: Size of the buffer
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
            printf(" ");
        if (!(i % 10) && i)
            printf("\n");
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - Test the _memset function
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[98] = {0};

    printf("Before memset:\n");
    simple_print_buffer(buffer, 98);
    
    _memset(buffer, 0x01, 95);
    
    printf("After memset (first 95 bytes set to 0x01):\n");
    simple_print_buffer(buffer, 98);
    
    return (0);
}
