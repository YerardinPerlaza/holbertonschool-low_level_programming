#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len  - Entry point
 *@h: list_t
 * Return: Always 0 (Success)
 */
size_t listint_len(const listint_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return (l);
}
