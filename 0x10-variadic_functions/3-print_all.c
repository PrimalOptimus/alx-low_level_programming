#include "variadic_functions.h"

/**
 * integer_print - print integers.
*@args: the list of parameters
*Return:no return a void func.
*/
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * char_print - print chars.
*@args: the list of parameters
* Return:no return a void func.
 */

void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * string_print - print strings
 * @args: the parameter
* Return:no return a void func.
*/

void string_print(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * float_print - prints floats
*@args: the list of parameters
* Return:no return a void func.
 */

void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - print anything.
(* a blank line
*@format: the paramaters
* Return: this function no return
*/


void print_all(const char * const format, ...)
{
	va_list arguments;
	typeprint_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i = 0, j = 0, a = 0;

	va_start(arguments, format);
	while (format && format[j])
	{
		printf(a == 1 ? ", " : "");
		a = 0;
		while (types[i].type_p)
		{
			if (*(types[i].type_p) == format[j])
			{
			types[i].function(arguments);
			a = 1;
			}
			i++;
		}
		i = 0;
		j++;
	}
	va_end(arguments);
	printf("\n");
}
