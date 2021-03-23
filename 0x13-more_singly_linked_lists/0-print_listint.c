#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Entry point
 *@h: list_t
 * Return: Always 0 (Success)
 */

size_t print_listint(const listint_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
