#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *polo;
	unsigned int count = 0;

	while (str[count])
		count++;

	polo = malloc(sizeof(list_t));
	if (!polo)
		return (NULL);

	polo->str = strdup(str);
	polo->count = count;
	polo->next = (*head);
	(*head) = polo;

	return (*head);
}

