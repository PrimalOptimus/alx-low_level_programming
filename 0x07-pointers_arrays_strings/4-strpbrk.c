#include "main.h"

/**
 * _strpbrk - function that searches a string for any byte
 * @s: input first value
 * @accept: input second value
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
