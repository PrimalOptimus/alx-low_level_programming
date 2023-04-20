#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - function that returns the summation/jumla
 * @n: first value
 *
 *
 * * Return: always suceess
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list jumla;
	unsigned int count = 0;
	unsigned int result = 0;

	if (n == 0)
		return (0);
	va_start(jumla, n);
	for (; count < n; count++)
	{
		result += va_arg(jumla, int);
	}
	va_end(jumla);
	return (result);
}
