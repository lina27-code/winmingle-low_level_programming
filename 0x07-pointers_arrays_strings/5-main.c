#include "main.h"
#include <stdio.h>

/**
 * main - Test the _strstr function
 *
 * Return: Always 0
 */
int main(void)
{
    char *haystack = "hello, world";
    char *needle = "world";
    char *result;

    printf("Haystack: \"%s\"\n", haystack);
    printf("Needle: \"%s\"\n", needle);

    result = _strstr(haystack, needle);
    if (result)
        printf("Found: \"%s\"\n", result);
    else
        printf("Not found\n");

    /* Test with needle not present */
    needle = "xyz";
    printf("\nNeedle: \"%s\"\n", needle);
    result = _strstr(haystack, needle);
    if (result)
        printf("Found: \"%s\"\n", result);
    else
        printf("Not found (NULL)\n");

    /* Test with empty needle */
    needle = "";
    printf("\nNeedle: (empty)\n");
    result = _strstr(haystack, needle);
    if (result)
        printf("Found: \"%s\" (should return haystack)\n", result);
    else
        printf("Not found\n");

    /* Test with needle at the beginning */
    needle = "hello";
    printf("\nNeedle: \"%s\"\n", needle);
    result = _strstr(haystack, needle);
    if (result)
        printf("Found: \"%s\"\n", result);
    else
        printf("Not found\n");

    return (0);
}
