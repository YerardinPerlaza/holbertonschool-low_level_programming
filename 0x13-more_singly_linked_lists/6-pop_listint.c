#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Entry Point
 * @head: head
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	/*save the data to return*/
	node_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
