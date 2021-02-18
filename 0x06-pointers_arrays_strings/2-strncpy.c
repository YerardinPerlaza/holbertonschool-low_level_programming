#include "holberton.h"
#include <stdio.h>

/**
 * *_strncpy - check the code for Holberton School students.
 *
 *@dest: char
 *@src: char
 *@n: int
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
