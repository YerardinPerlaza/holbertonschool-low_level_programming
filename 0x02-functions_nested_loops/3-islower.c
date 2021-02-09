#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	int lower;
	if (c >= 97 && c <=122)
		lower = 1;
	else
		lower = 0;
	return (lower);
}
