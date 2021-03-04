#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - check the code for Holberton School students.
 *@b: unsigned int
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
