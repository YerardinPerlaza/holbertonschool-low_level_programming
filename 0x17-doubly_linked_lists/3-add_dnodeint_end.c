#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: double pointer to head
 * @n: const int
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_node, *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	temp_node = *head;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = new_node;
	new_node->prev = temp_node;

	return (new_node);
}
