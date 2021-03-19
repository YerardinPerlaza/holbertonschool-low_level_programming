#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len  - Entry point
 *@h: list_t
 * Return: Always 0 (Success)
 */

size_t list_len(const list_t *h)
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
