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
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
