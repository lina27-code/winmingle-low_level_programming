#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
    char i;
    int lower = 0;

    for (i = 'a'; i <= 'z'; i++)
   {
     if (i == c)
{
    lower = 1;
}

}

	return (lower);
}
