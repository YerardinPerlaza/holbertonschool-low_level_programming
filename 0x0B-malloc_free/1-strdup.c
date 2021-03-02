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
	int i, largo;

	if (str == NULL)
		return (NULL);

	for (largo = 0; largo <= *str; largo++)
	{
	}
	largo += 1;

	copy = malloc(sizeof(char) * largo);
	for (i = 0; i < largo; i++)
		copy[i] = str[i];

	if (copy == NULL)
		return (NULL);
	return (copy);

}
