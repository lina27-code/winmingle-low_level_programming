#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or exit with error code
 */
int main(int ac, char **av)
{
    int bytes, i;
    unsigned char *main_ptr;

    if (ac != 2)
    {
        printf("Error\n");
        exit(1);
    }

    bytes = atoi(av[1]);
    if (bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    main_ptr = (unsigned char *)main;

    for (i = 0; i < bytes; i++)
    {
        printf("%02x", main_ptr[i]);
        if (i < bytes - 1)
            printf(" ");
    }
    printf("\n");

    return (0);
}
