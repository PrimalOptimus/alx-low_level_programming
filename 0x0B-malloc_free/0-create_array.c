#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of chars
 * @size: number of elements
 * @c: size of one unit
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *polo;
	unsigned int i;

	polo = malloc(sizeof(char) * size);

	if (size == 0 || polo == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		polo[i] = c;
	return (polo);
}
