#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of a linked list
 * @head: address of the last node
 * @n: value to insert at the end of the list
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node1;
	listint_t *last_node;

	node1 = malloc(sizeof(listint_t));
	last_node = *head;

	if (node1 == NULL)
		return (NULL);
	node1->n = n;
	node1->next = NULL;
	if (*head == NULL)
	{
		*head = node1;
		return (node1);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = node1;
	return (node1);
}
