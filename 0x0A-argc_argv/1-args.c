#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    (void)argv;  /* suppress unused parameter warning */
    printf("%d\n", argc - 1);
    return (0);
}
