#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 *
 *@c: int
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	int upper;

	if (c >= 65 && c <= 90)
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}
	return (upper);
}
