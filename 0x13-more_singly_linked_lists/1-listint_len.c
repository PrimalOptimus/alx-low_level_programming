#include <stdio.h>
#include "lists.h"

/**
 * listint_len- function that prints length of string
 * @h: number of stings
 * Return: return the  Number of strings
 */

size_t listint_len(const listint_t *h)
{
		int num = 0;

		while (h)
		{
			num++;
			h = h->next;
		}
	return (num);





}
