#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - check the code for Holberton School students.
 *@ptr: void
 *@old_size: unsigned int
 *@new_size: unsigned int
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reall, *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reall = malloc(new_size);
	if (reall == NULL)
		return (NULL);

	src = ptr;
	for (i = 0; i < new_size && i < old_size; i++)
		reall[i] = src[i];
	free(ptr);

	return (reall);
}
