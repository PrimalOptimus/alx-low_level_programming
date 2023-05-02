#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - program that frees all linked list
 * and set the last to null
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *cnode;

	if (head != NULL)
	{
		cnode = *head;
		while ((tempo = cnode) != NULL)
		{
			cnode = cnode->next;
			free(tempo);
		}
		*head = NULL;
	}
}
