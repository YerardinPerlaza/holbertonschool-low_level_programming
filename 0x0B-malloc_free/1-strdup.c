#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code for Holberton School students.
 *@str: char
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, largo = 0;

	if (str == NULL)
		return (NULL);

	while (str[largo] != '\0')
	{
		largo++;
	}

	copy = malloc(sizeof(char) * largo + 1);
	for (i = 0; i <= largo; i++)
		copy[i] = str[i];

	if (copy == NULL)
		return (NULL);

	return (copy);
}
