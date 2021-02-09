#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - check the code for Holberton School students.
 *
 *@n: int
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
