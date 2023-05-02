#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: address of the linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t  *tempo;

while (head != NULL)
	{
	tempo = head;
	head = head->next;
	free(tempo);
	}
}
