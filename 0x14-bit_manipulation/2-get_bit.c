#include <stdio.h>
#include "holberton.h"

/**
 * get_bit - check the code for Holberton School students.
 *@n: number
 *@index: position to check
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitstatus;

/* Right shift num, n times and perform bitwise AND with 1 */
	bitstatus = (n >> index) & 1;

	if ((bitstatus == 1) || (bitstatus == 0))
		return (bitstatus);
	else
		return (-1);
}
