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
	listint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
