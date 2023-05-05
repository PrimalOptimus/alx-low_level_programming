#include "main.h"

/**
*flip_bits - gets the number of bits to flip to get from n to m
*@n: initial number
*@m: final number
*
*Return: the number of flipped bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff;

	diff = 0;

	for (; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			diff++;
	}

	return (diff);
}
