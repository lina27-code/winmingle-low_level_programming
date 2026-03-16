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
 * main - Test the _memcpy function
 *
 * Return: Always 0
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    printf("Before memcpy:\n");
    simple_print_buffer(buffer, 98);
    printf("Source buffer (first 14 bytes):\n");
    simple_print_buffer(buffer2, 14);
    
    /* Copy 10 bytes from buffer2 to buffer starting at position 50 */
    _memcpy(buffer + 50, buffer2, 10);
    
    printf("After memcpy (bytes 50-59 should be 1-10):\n");
    simple_print_buffer(buffer, 98);
    
    return (0);
}
