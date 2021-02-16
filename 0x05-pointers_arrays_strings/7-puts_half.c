#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; i < 63; i++)
	{
		if ((i % 2) == 0)
		{
			n = (length_of_the_string - 1) / 2;
			_putchar(n);
		}
	}
	_putchar('\n');
}
