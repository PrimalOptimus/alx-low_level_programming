#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *add_nodeint - Adds a new node at the beginningof list
 *@head: A pointer to the address of the head of the listint_t list
 *@n: the integer for the new node
 *
 *Return: NULL if function fails or address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
