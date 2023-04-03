#include "main.h"

/**
 *strchr - main entry
 *@s: - input
 *@c: -input
 *Return: always 0
 *
 */
char *strchr(const char *s, int c)
{

	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);








}
