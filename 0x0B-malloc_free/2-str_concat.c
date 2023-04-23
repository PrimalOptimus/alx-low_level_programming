#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two numbers
 * @s1: char 1
 * @s2: char 2
 *
 * Return: char concatenate
 */
char *str_concat(char *s1, char *s2)
{
	char *unga;
	int i = 0, y = 0, cont, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	while (s2[y])
	{
		y++;
	}

	k = i + y + 1;

	unga = malloc(k * sizeof(char));

	if (unga == NULL)
		return (NULL);

	for (cont = 0; cont < i; cont++)
	{
		unga[cont] = s1[cont];
	}

	for (cont = 0; cont <= y; cont++)
	{
		unga[cont + i] = s2[cont];
	}

	return (unga);
}
