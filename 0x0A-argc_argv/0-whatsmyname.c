#include <stdio.h>

/**
 * main - prints its own program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    (void)argc;   /* unused parameter – suppress compiler warning */
    printf("%s\n", argv[0]);
    return (0);
}
