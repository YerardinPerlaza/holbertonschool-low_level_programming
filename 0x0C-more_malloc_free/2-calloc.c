#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - check the code for Holberton School students.
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 0;

	return (array);
}
