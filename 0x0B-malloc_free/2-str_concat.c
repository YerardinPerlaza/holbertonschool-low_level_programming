#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 *@s1: char
 *@s2: char
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, l1, l2;

	for (l1 = 0; l1 <= *s1; l1++)
	{
	}
	for (l2 = 0; l2 <= *s2; l2++)
	{
	}

	array = malloc(sizeof(char) * (l1 + l2 + 1));

	if (array == NULL)
		return (NULL);

	i = 0;
	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}

	return (array);
}
