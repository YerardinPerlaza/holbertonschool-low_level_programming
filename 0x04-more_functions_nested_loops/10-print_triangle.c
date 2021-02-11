#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 *
 *@size: int
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int fila;
	int columna;
	int matriz;

	matriz = size;
	if (size > 0)
	{
		for (fila = 1; fila <= size; fila++)
		{
			for (columna = 1; columna <= size; columna++)
			{
				if (columna < matriz)
					_putchar(' ');
				else
					_putchar('#');
			}
			matriz = (matriz - 1);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
