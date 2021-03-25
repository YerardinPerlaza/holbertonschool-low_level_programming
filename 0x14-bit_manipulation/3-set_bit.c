#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * set_bit - check the code for Holberton School students.
 *@n: puntero to number
 *@index: position
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);
/* Left shift 1, n times and perform bitwise OR with num */
	bits = 1 << index;

	*n = *n | bits;

	return (1);
}
