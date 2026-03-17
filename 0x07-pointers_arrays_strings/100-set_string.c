#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char (we want to change the pointer it points to)
 * @to: Pointer to char (the new string to point to)
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;   /* Make the original pointer point to 'to' */
}
