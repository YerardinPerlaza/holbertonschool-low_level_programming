#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	temp2 = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = temp2;
		temp2 = *head;
		*head = temp;
	}
	*head = temp2;

	return (*head);
}
