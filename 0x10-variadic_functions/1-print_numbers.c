#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print all the parametes.
 *@separator: the number of parameters
 *@n: the number of parameters
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printo;
	unsigned int x;

	x = 0;

	va_start(printo, n);
	while (x < n)
	{
		printf("%d", va_arg(printo, unsigned int));
		if (x < (n - 1) && separator != NULL)
			printf("%s", separator);
		x++;
	}
	va_end(printo);
	printf("\n");
}
