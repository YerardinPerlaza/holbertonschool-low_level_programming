#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *
 *@size: int
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int lado1;
	int lado2;

	if (size > 0)
	{
		for (lado1 = 0; lado1 < size; lado1++)
		{
			for (lado2 = 0; lado2 < size; lado2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
