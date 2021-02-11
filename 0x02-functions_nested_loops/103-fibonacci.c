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
	int fib;
	a = 0;
	b = 1;
	n = 50;

	for (n = 0; n <=  50; n++)
	{
		fib = (a + b);

		if ((fib % 2) == 0 && fib < 4000000)
		{
			fib1 = fib;
			fib2 = fib2 + fib1;
			printf("%d", fib);
			printf(", ");
		}
		a = b;
		b = fib;
	}
	printf("\n");
	return (0);
}
