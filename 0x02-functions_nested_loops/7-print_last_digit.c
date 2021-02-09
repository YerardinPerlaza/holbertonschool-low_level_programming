#include <stdio.h>
#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 *
 *@i: int
 *
 * Return: Always 0.
 */
int print_last_digit(int i)
{
	int lastDigit;

	lastDigit = (i % 10);
	if (lastDigit < 0)
	{
		_putchar((-1 * lastDigit) + '0');
		return (-1 * lastDigit);
	}
	else
	{
		_putchar((lastDigit + '0'));
		return (lastDigit);
	}
}
