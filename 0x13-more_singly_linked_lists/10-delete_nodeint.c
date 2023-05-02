#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to begin
 * @index: indicate the node that shold be deleted
 *
 * Return: 1 success, -1 failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;
	current = *head;

	listint_t *next_node;
	next_node = current->next->next;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (; current != NULL && i < index - 1; i++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	
	free(current->next);
	current->next = next_node;
	return (1);
}
