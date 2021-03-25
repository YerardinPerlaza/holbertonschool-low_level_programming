#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 *@b: string with binary number
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, base = 1, decimal = 0, len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			decimal += base;
		base = base * 2;
	}
	return (decimal);

}
