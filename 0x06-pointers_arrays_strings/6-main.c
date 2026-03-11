#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "expect the best. prepare for the worst.\nhello world!";
	char *ptr;

	ptr = cap_string(str);

	printf("%s\n", ptr);

	return (0);
}
