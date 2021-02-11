#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int fila;
	int columna;

	if (n > 0)
	{
		for (fila = 0; fila < n; fila++)
		{
			for (columna = 0; columna < n; columna++)
			{
				if (fila > columna)
					_putchar(' ');
				if (fila == columna)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
