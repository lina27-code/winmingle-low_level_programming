#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "My School";

	printf("%s\n", str);
	rev_string(str);
	printf("%s\n", str);

	return (0);
}
