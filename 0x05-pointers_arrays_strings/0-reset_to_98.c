#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - update value
 *
 *@n: int
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int reset = *n;

	reset = 98;
	*n = reset;
}
