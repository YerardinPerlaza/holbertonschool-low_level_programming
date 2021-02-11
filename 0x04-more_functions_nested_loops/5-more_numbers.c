#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int number;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
				_putchar((number / 10) + '0');
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
