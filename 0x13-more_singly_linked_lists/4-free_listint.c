#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - a function that frees a list_t list.
 * @head: struct
 * Return: free
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
