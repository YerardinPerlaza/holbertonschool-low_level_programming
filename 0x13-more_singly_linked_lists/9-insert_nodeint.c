#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 *@head: structure
 *@idx: index
 *@n: new data
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;
	return (new);
}
