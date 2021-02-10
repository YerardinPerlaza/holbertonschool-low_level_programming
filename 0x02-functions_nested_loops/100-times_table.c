#include "holberton.h"
/**
 * print_times_table - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int fila, columna, mult;

	if (n > 0 && n <= 15)
	{
		for (fila = 0; fila <= n; fila++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (columna = 1; columna <= n; columna++)
			{
				mult = (fila * columna);
				if ((mult / 100) > 0)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10) % 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else if ((mult / 10) > 0)
				{
					_putchar(' ');
					_putchar((mult / 10) + '0');
					_putchar((mult % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((mult % 10) + '0');
				}
				if (columna < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
