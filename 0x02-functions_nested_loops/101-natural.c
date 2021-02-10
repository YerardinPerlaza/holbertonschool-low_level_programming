#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, a;

	n = 0;
	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			a = (a + n);
		}
		n++;
	}
	printf("%d", a);
	printf("\n");
}
