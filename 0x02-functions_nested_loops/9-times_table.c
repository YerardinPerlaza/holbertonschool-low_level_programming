#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int fila;
	int columna;
	int mult;

	for (fila = 0; fila <= 9; fila++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (columna = 1; columna <= 9; columna++)
		{

			mult = (fila * columna);
			if ((mult / 10) > 0)
			{
				_putchar((mult / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((mult % 10) + '0');

			if (columna < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
