#include "holberton.h"
/**
 * print_sign - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
