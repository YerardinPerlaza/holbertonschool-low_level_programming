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
	void *array;

	if (nmemb == 0 || size == 0)
		return NULL;

	array = malloc(sizeof(size) * nmemb);
	if (array == NULL)
		return NULL;

	return (array);
}
