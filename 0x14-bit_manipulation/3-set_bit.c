#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (n == NULL)
		return (-1);
/* Left shift 1, n times and perform bitwise OR with num */
	num = (1 << index) | *n;

	return (num);
}
