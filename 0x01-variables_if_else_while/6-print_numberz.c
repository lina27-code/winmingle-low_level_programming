#include <stdio.h>

/**
 * Author: Otu Faith Kokuwa
 * Program: WinMingle Community C Training
 * Description: Prints single-digit numbers without using char
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
