#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int ciclo;

	if (n > 0)
	{
		for (ciclo = 0; ciclo < n; ciclo++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
