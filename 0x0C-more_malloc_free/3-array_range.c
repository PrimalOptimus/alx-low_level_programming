#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: value 1
 * @max: value 2
 *
 * Return: pointer integer
 */
int *array_range(int min, int max)
{
	int *mempoint;
	int i, j;

	if (min > max)
		return (NULL);
	j = max - min;
	mempoint = malloc((j + 1) * sizeof(int));
	if (mempoint == NULL)
		return (NULL);
	for (i = 0; i < j + 1; min++, i++)
	{
		*(mempoint + i) = min;
	}
	return (mempoint);
}
