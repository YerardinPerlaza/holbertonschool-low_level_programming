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
	char *first = str;
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	str--;

	first += ((length) / 2);

	while (first <= str)
	{
		_putchar(*first);
		first++;
	}
	_putchar('\n');
}
