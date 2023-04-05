#include "main.h"
/**
 * _puts_recursion - function main
 * @s: input character
 * Return: zero or new line
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
