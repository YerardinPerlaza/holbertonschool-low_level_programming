#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *
 *@c: int
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	int digit;

	if (c >= 48 && c <= 57)
	{
		digit = 1;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}
