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

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		array[i] = i;

	return (array);
}
