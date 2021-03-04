#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *@s1: char
 *@s2: char
 *@n: unsigned int
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *news;
	unsigned int i = 0, j = 0, a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n < j)
		j = n;

	news = malloc(sizeof(char) * (i + j + 1));

	if (news == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
	{
		news[a] = s1[a];
	}
	for (b = 0; b < j; b++)
	{
		news[a + b] = s2[b];
	}
	news[a + b] = '\0';

	return(news);
}
