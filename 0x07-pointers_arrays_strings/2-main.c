#include "main.h"
#include <stdio.h>

/**
 * main - Test the _strchr function
 *
 * Return: Always 0
 */
int main(void)
{
    char *s = "hello, world";
    char *f;

    printf("String: \"%s\"\n", s);
    
    /* Test 1: Find first 'l' */
    f = _strchr(s, 'l');
    if (f != NULL)
        printf("First 'l' found at: \"%s\"\n", f);
    else
        printf("'l' not found\n");
    
    /* Test 2: Find 'z' (not in string) */
    f = _strchr(s, 'z');
    if (f != NULL)
        printf("First 'z' found at: \"%s\"\n", f);
    else
        printf("'z' not found (NULL returned)\n");
    
    /* Test 3: Find null terminator */
    f = _strchr(s, '\0');
    if (f != NULL)
        printf("Null terminator found (returns empty string): \"%s\"\n", f);
    
    return (0);
}
