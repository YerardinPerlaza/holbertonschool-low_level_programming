  
#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
