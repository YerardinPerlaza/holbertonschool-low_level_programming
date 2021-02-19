#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 *
 *@a: int
 *@n: int
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int *start = a;
	int temp;

	a += n - 1;

	while (start <= a)
	{
		temp = *start;
		*start = *a;
		*a = temp;
		start++;
		a--;
	}
}
