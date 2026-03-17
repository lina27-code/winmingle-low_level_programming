#include "main.h"
#include <stdio.h>

/**
 * main - Test the _strspn function
 *
 * Return: Always 0
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    printf("String s: \"%s\"\n", s);
    printf("Accept set: \"%s\"\n", f);
    
    n = _strspn(s, f);
    printf("Length of initial segment with only chars from accept: %u\n", n);
    
    /* Test with different accept string */
    f = "abcdefghijklmnopqrstuvwxyz";
    n = _strspn(s, f);
    printf("\nAccept set: \"%s\"\n", f);
    printf("Length until non-letter (comma): %u\n", n);
    
    /* Test with empty accept */
    f = "";
    n = _strspn(s, f);
    printf("\nAccept set: (empty)\n");
    printf("Length: %u\n", n);
    
    return (0);
}
