#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function to print all
 * @h: number of elements
 *
 *
 * Return: count of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
		}
	return (num);
}
