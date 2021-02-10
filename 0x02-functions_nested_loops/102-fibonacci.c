#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int b;
	int n;

	a = 1;
	b = 2;
	n = 50;
	printf("%d", a);
	printf(", ");
	printf("%d", b);
	printf(", ");

	for (n = 3; n <= 50; n++)
	{
		if ((n % 2) != 0)
		{
			a = (a + b);
			printf("%d", a);
			printf(", ");
		}
		else
		{
			b = ( b + a);
			printf("%d", b);
			if (n < 50)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
