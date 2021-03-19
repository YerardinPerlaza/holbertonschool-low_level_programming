#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Entry point
 *@h: list_t
 * Return: Always 0 (Success)
 */

size_t print_list(const list_t *h)
{
	int l = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		l++;
	}
	return (l);
}
