#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code for Holberton School students.
 *@head: double pointer
 *@n: const int
 * Return: Always 0.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
