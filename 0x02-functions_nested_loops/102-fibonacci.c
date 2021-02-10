#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long a;
	long b;
	int n;

	a = 1;
	b = 2;
	n = 50;
	printf("%ld", a);
	printf(", ");
	printf("%ld", b);
	printf(", ");

	for (n = 3; n <= 50; n++)
	{
		if ((n % 2) != 0)
		{
			a = (a + b);
			printf("%ld", a);
			printf(", ");
		}
		else
		{
			b = (b + a);
			printf("%ld", b);
			if (n < 50)
				printf(", ");
		}
	}
	printf("\n");
	return (0);
}
