#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			_putchar((n + '0'));
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar((n + '0'));
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		_putchar((n + '0'));
	}
	_putchar('\n');
}
