#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data
 * @head: pointer to begin of the lincked list
 *
 * Return: sum of all datas
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	for (; tmp != NULL; tmp = tmp->next)
	{
		sum += tmp->n;
	}
	return (sum);








}
