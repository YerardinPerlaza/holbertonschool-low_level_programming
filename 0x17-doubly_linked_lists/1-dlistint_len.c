#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - lenght of list
 * @h: head
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
