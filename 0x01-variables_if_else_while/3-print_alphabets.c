#include <stdio.h>

/**
 * Author: Otu Faith Kokuwa
 * Program: WinMingle Community C Training
 * Description: Prints lowercase and uppercase alphabets
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
