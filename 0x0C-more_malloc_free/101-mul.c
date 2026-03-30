#include <stdlib.h>
#include <unistd.h>  /* not strictly needed, but for _putchar we'll provide */

int _putchar(char c);

/**
 * is_digit - check if a string contains only digits
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (*s < '0' || *s > '9')
            return (0);
        s++;
    }
    return (1);
}

/**
 * print_error - print "Error\n" and exit with 98
 */
void print_error(void)
{
    char *err = "Error\n";
    while (*err)
        _putchar(*err++);
    exit(98);
}

/**
 * main - multiplies two positive numbers
 */
int main(int ac, char **av)
{
    char *num1, *num2;
    int len1, len2, i, j, carry;
    int *result;
    int res_len;

    if (ac != 3)
        print_error();

    num1 = av[1];
    num2 = av[2];

    if (!is_digit(num1) || !is_digit(num2))
        print_error();

    /* get lengths */
    len1 = 0;
    while (num1[len1])
        len1++;
    len2 = 0;
    while (num2[len2])
        len2++;

    res_len = len1 + len2;
    result = malloc(res_len * sizeof(int));
    if (result == NULL)
        return (1);   /* allocation failure; could also exit, but return is fine */

    /* zero the result array */
    for (i = 0; i < res_len; i++)
        result[i] = 0;

    /* multiply digit by digit (least significant first) */
    for (i = 0; i < len1; i++)
    {
        int d1 = num1[len1 - 1 - i] - '0';
        for (j = 0; j < len2; j++)
        {
            int d2 = num2[len2 - 1 - j] - '0';
            result[i + j] += d1 * d2;
        }
    }

    /* handle carries */
    carry = 0;
    for (i = 0; i < res_len; i++)
    {
        result[i] += carry;
        carry = result[i] / 10;
        result[i] %= 10;
    }

    /* print result (skip leading zeros) */
    i = res_len - 1;
    while (i > 0 && result[i] == 0)
        i--;

    for ( ; i >= 0; i--)
        _putchar(result[i] + '0');
    _putchar('\n');

    free(result);
    return (0);
}
