#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, x, r = 0, l = 0;
	char *polo;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (x = 0; av[i][x]; x++)
			l++;
	}
	l += ac;

	polo = malloc(sizeof(char) * l + 1);
	if (polo == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (x = 0; av[i][x]; x++)
	{
		polo[r] = av[i][x];
		r++;
	}
	if (polo[r] == '\0')
	{
		polo[r++] = '\n';
	}
	}
	return (polo);
}
