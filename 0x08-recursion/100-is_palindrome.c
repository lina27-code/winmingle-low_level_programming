#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string (our own)
 * @s: The string
 *
 * Return: Length
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_helper - Recursively checks if a substring is palindrome
 * @s: The string
 * @start: Starting index
 * @end: Ending index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return (1);
    if (s[start] != s[end])
        return (0);
    return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return (palindrome_helper(s, 0, len - 1));
}
