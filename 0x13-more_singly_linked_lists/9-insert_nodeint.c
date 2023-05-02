#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to begin of the list
 * @idx: is the index of the position where the new node is insert.
 * @n: data of the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *tmp;

	tmp = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0 || *head == NULL)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}
	for (; i < idx; i++)
	{
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);


}
