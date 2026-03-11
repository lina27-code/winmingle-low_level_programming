#include <stdio.h>
#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5};

	print_array(a, 6);
	reverse_array(a, 6);
	print_array(a, 6);

	return (0);
}
