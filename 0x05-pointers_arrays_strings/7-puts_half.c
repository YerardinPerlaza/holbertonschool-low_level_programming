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
	int l;

	while (*str != '\0')
	{
		l = l + 1;
		str++;
	}
	if ((l % 2) == 0)
		str = str - (l / 2);
	else
		str = str - ((l - 1) / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
     	_putchar('\n');
}
