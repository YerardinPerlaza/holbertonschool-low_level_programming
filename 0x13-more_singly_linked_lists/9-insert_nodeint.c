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

	if (*head == NULL)
		return (NULL);

	temp = *head;

	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			else
			{
				new->n = n;
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
		}
		if (temp->next != NULL)
			temp = temp->next;
		i++;
	}
	return (NULL);

}
