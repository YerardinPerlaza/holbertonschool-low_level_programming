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
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
