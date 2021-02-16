#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		if ((l % 2) == 0)
			_putchar(*str);
		str++;
		l++;
	}
	_putchar('\n');
}
