#include <stdio.h>
#include "main.h"

int main(void)
{
	printf("%d\n", _atoi("98"));
	printf("%d\n", _atoi("-402"));
	printf("%d\n", _atoi("-98"));
	printf("%d\n", _atoi("214748364"));
	printf("%d\n", _atoi("0"));
	printf("%d\n", _atoi("402"));
	printf("%d\n", _atoi("98abc"));

	return (0);
}
