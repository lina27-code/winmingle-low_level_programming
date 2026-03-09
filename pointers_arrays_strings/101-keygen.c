#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char password[10];

	srand(time(NULL));

	for (i = 0; i < 9; i++)
	{
		password[i] = (rand() % 94) + 33;
	}

	password[9] = '\0';

	printf("%s\n", password);

	return (0);
}
