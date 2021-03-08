#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
char **strtow(char *str)
{
	char **array;
	char phrase[100];
	int word, len = 0;
	int i = 0, j = 0, k = 0, z = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if(str[i] != ' ' && str[i + 1] == ' ')
			word++;
	}

	array = malloc(sizeof(char *) * word);

	if (array == NULL)
		return (NULL);

	for(i = 0; i < word; i++)
		array[i] = malloc(sizeof(char));

	for (i = 0; i <= len; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			phrase[j++] = str[i];
		else if (((str[i] == ' ' && str[i + 1] != ' ')) || (str[i] == 0))
		{
			for (z = 0; z < j; z++)
				array[k][z] = phrase[z];
			array[k++][j] = '\0';
			j = 0;
		}
		else continue;
	}
	return (array);
}
