#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point for the calculator
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, or exits with error code
 */
int main(int ac, char **av)
{
    int num1, num2, result;
    int (*op_func)(int, int);

    if (ac != 4)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = atoi(av[1]);
    num2 = atoi(av[3]);

    op_func = get_op_func(av[2]);
    if (op_func == NULL || av[2][1] != '\0')
    {
        printf("Error\n");
        exit(99);
    }

    if ((av[2][0] == '/' || av[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        exit(100);
    }

    result = op_func(num1, num2);
    printf("%d\n", result);
    return (0);
}
