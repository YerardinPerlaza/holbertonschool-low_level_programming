#include "holberton.h"
/**
 * _islower - check the code for Holberton School students.
 *
 *@c: int
 * Return: Always 0.
 */
int _islower(int c)
{
	int lower;

	if (c >= 97 && c <= 122)
		lower = 1;
	else
		lower = 0;
	return (lower);
}
