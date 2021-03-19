#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code for Holberton School students.
 *@head: double pointer
 *@str: string pointer
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, l = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		l++;

	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}
