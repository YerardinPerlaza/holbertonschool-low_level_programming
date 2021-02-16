#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 *
 *@a: int
 *@b: int
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
