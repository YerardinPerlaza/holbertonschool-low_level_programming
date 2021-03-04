#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - check the code for Holberton School students.
 *@min: int
 *@max: int
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	len = 0;
	while (len < (max - min))
	{
		len++;
	}

	array = malloc(sizeof(int) * (len + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		array[i] = min++;

	return (array);
}
