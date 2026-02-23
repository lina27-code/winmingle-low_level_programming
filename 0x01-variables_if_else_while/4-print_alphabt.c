#include <stdio.h>

/**
 * Author: Otu Faith Kokuwa
 * Program: WinMingle Community C Training
 * Description: Prints lowercase alphabet except e and q
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
