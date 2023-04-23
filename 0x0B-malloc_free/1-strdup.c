#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - copy or duplicate to new memory space location
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *polo;
	int i, h = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	polo = malloc(sizeof(char) * (i + 1));

	if (polo == NULL)
		return (NULL);

	for (h = 0; str[h]; h++)
		polo[h] = str[h];

	return (polo);
}
