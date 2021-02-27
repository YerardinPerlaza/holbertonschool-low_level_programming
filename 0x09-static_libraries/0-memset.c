#include "holberton.h"
#include <stdio.h>

/**
 * *_memset - fill memory with a constant
 *@s: char
 *@b: char
 *@n: unsigned int
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
