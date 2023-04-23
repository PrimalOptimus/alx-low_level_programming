#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmemb: value 1
 * @size: value 2
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mempoint;
	unsigned int i = 0;


	if (nmemb == 0 || size == 0)
		return (NULL);

	mempoint = malloc(nmemb * size);

	if (mempoint == NULL)
		return (NULL);
/*
 * looop
 */
	for (; i < nmemb * size; i++)
	{
		mempoint[i] = 0;
	}

	return (mempoint);
}
