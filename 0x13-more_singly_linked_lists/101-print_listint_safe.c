#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numb = 0;
	const listint_t *temp = head, *current;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		numb++;

		current = temp;
		temp = temp->next;

		if (current <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}

	return (numb);
}
