#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - function that converts a binary to unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 *
 */

unsigned int binary_to_uint(const char *b)
{

unsigned int decimal = 0;

if (b == NULL)
	return (0);

while (*b != '\0'){
if (*b != '0' && *b != '1'){
	return (0);
}
	decimal = (decimal << 1) + (*b - '0');
	b++;

}
return (decimal);

}
