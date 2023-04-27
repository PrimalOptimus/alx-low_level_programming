#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node
 * @head: pointer of node
 * @str: string with info
 *
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	return (NULL);
	
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	while (str[count])
		count++;
	newnode->len = count;
	return (newnode);
}

