#include "main.h"

/**
 * factorial - function that gives the factorial of a number
 * @n: input number to turn the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)

{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
