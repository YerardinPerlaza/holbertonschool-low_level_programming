#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - check the code for Holberton School students.
 *@ac: int
 *@av: char
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;

	array = malloc(sizeof(char) * len + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			array[k] = av[i][j];
			k++;
		}
		if (array[k] == '\0')
		{
			array[k++] = '\n';
		}
	}
	return (array);
}
