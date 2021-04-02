#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Entry Point
 * @head: head
 * @index: index
 * Return: 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *copy, *temp;

	if (*head == NULL)
		return (-1);

	copy = *head;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
	}
	else
	{
		for (count = 0; count < index - 1; count++)
		{
			if (copy == NULL)
				return (-1);
			copy = copy->next;
		}
		temp = copy->next;
		copy->next = temp->next;
		free(temp);
	}
	return (1);
}
