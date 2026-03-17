#include "main.h"
#include <stdio.h>

/**
 * main - Test the _strpbrk function
 *
 * Return: Always 0
 */
int main(void)
{
    char *s = "hello, world";
    char *accept = "world";
    char *result;

    printf("String s: \"%s\"\n", s);
    printf("Search set: \"%s\"\n", accept);
    
    result = _strpbrk(s, accept);
    if (result != NULL)
    {
        printf("First match found at: \"%s\"\n", result);
        printf("Character found: '%c' at position %ld\n", 
               *result, result - s);
    }
    else
    {
        printf("No match found\n");
    }
    
    /* Test with different search set */
    accept = "xyz";
    printf("\nSearch set: \"%s\"\n", accept);
    result = _strpbrk(s, accept);
    if (result != NULL)
    {
        printf("First match found at: \"%s\"\n", result);
    }
    else
    {
        printf("No match found (returned NULL)\n");
    }
    
    /* Test with empty search set */
    accept = "";
    printf("\nSearch set: (empty)\n");
    result = _strpbrk(s, accept);
    if (result != NULL)
    {
        printf("First match found at: \"%s\"\n", result);
    }
    else
    {
        printf("No match found (returned NULL)\n");
    }
    
    return (0);
}
