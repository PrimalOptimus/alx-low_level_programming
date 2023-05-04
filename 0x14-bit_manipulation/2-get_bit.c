#include "main.h"
#include <stdio.h>


/**
 * get_bit - function that returns the value
 *of a bit at a given index.
 * @index: index of the mumber
 * @n: integer unassigned
 * Return: VAlue of tnumber or 0
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (n == 0 && index < 64)
		return (0);

	for (; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
