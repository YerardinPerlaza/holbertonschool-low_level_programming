#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		i++;
		current = current->next;
	}
	return (NULL);
}
