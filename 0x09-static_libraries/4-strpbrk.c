#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - Entry point
 *@s: char
 *@accept: char
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	char *new = NULL;

	if (s == NULL || accept == NULL)
		return (NULL);
	while (*s != '\0')
	{
		new = accept;
		while (*new != '\0')
		{
			if (*s == *new)
			{
				return (s);
			}
			new++;
		}
		s++;
	}
	return (0);
}
