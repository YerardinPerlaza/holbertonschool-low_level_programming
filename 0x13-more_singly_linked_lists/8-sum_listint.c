#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *total;
	int sum = 0;

	total = head;
	while (total != NULL)
	{
		sum += total->n;
		total = total->next;
	}
	return (sum);
}
