#include <stdio.h>
#include "main.h"

int main(void)
{
	char src[] = "First, solve the problem. Then, write the code";
	char dest[100];

	_strcpy(dest, src);

	printf("%s\n", src);
	printf("%s\n", dest);

	return (0);
}
