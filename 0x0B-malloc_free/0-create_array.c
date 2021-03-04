#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Entry point
 *@size: unsigned int
 *@c: char
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
