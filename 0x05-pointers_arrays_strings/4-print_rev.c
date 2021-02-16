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

	while (*s != '\0')
	{
		length = length + 1;
		s++;
	}
	while (length != 0)
	{
		s--;
		length--;
		_putchar(*s);
	}
	_putchar('\n');
}
