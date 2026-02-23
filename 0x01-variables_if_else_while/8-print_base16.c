#include <stdio.h>

/**
 * Author: Otu Faith Kokuwa
 * Program: WinMingle Community C Training
 * Description: Prints all hexadecimal digits in lowercase
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
