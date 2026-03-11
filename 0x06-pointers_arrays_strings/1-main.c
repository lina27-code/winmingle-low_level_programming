#include <stdio.h>
#include "main.h"

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";

	printf("%s\n", s1);
	printf("%s", s2);

	_strncat(s1, s2, 1);
	printf("%s\n", s1);

	_strncat(s1, s2, 1024);
	printf("%s", s1);

	return (0);
}
