#include "main.h"

/**
 * sqrt_helper - Recursively finds the square root
 * @n: The number
 * @guess: Current guess (starts at 0)
 *
 * Return: Square root if found, otherwise -1
 */
int sqrt_helper(int n, int guess)
{
    if (guess * guess > n)
        return (-1);
    if (guess * guess == n)
        return (guess);
    return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of n
 * @n: The number
 *
 * Return: Square root, or -1 if none
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (sqrt_helper(n, 0));
}
