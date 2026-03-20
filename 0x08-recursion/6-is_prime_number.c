#include "main.h"

/**
 * prime_helper - Recursively checks if n is prime
 * @n: The number
 * @divisor: Current divisor to test
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_helper(int n, int divisor)
{
    if (n <= 1)
        return (0);
    if (divisor * divisor > n)
        return (1);
    if (n % divisor == 0)
        return (0);
    return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if n is prime, 0 otherwise
 * @n: The number
 *
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
    return (prime_helper(n, 2));
}
