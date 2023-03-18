#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char loer = 'a';

	while (loer <= 'z')
	{
		putchar(loer);
		loer++;
	}

	char uper = 'A';

	while (uper <= 'Z')
	{
		putchar(uper);
		uper++;
	}

	putchar('\n');

	return (0);
}
