#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, n, m;
	n = 3;
	m = 5;
	a = 0;

	while (n < 1024)
	{
		a = (a + n);
		n = (n + 3);
	}
	while (m < 1024)
	{
		a = (a + m);
		m = (m + 5);
	}
	printf("%d", a);
	printf("\n");
}
