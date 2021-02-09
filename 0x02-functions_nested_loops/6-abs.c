#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _abs(int i)
{
	int solve;

	if (i > 0)
		solve = i;
	else if (i < 0)
		solve = (i * (-1));
	else
		solve = 0;
	return (solve);
}
