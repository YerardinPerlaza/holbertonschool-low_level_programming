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

	if (size > 0)
	{
		for (fila = 0; fila < size; fila++)
		{
			for (columna = 0; columna < size; columna++)
			{
				_putchar('#');
				while (columna < size)
				{
					_putchar('.');
					columna--;
				}
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
