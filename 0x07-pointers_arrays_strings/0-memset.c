#include "main.h"

/**
 * _memset -fills a memory with a spesific value
 * @s:  -starting address of a memory
 * @b: -value wanted
 * @n: -intgers to be changed
 * Return: - return a changed array
 *
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
