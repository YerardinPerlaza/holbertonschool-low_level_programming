#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 *
 *@s: char
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length = length + 1;
		s++;
	}
	for (i = 0; i <= length; i++)
	{
		_putchar(*(s - i));
	}
	_putchar('\n');
}
