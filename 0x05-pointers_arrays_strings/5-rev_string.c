#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 *
 *@s: char
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l;
	int i;

	while (*s != '\0')
	{
		l = l + 1;
		s++;
	}

	for (i = 0; i >= l; i--)
	{
		_putchar(s[i]);
	}
}
