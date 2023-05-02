#include "lists.h"
#include <stdlib.h>

/**
*pop_listint - deletes the head node of a linked list
*@head: head of the list
*
*
*Return: the deleted node value
*/

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int cont;

	if (*head == NULL)
	return (0);

	pop = *head;
	cont = pop->n;
	free(pop);

	*head = (*head)->next;
	return (cont);

}
