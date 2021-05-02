#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum a doubly linked list.
 * @head: node
 * Return: sum of node
 */
int sum_dlistint(dlistint_t *head)
{
	size_t suma = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}

	return (suma);
}
