#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that print all
 * @format: first value
 * @char: second value
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
		typeprint_t types[] = {
		{"c", "%c", char},
		{"i", "%i", int},
		{"f", "%f", float},
		{"s", "%s", char},
		{NULL, NULL}
	};
	int x = 0, j = 0;

	va_start(args, format);
	while (x < 4)
	{
		if (types[x].type_p == format[j])
			printf(char *(types[x].f), va_arg(args, types[x].type_c)
		x++;
	}
	va_end(args);
	printf("\n");
}
