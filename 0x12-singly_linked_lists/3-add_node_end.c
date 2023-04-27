#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add new node end
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *lastnode;
	int count = 0;

	new = malloc(sizeof(list_t));
	lastnode = *head;
	if (new == NULL)
		return (NULL);
	while (str[count])
		count++;
	new->len = count;
	new->str = strdup(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	lastnode->next = new;
	return (new);
}
