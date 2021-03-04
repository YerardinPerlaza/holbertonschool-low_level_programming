#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *@argc: int
 *@argv: char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if (!atoi(argv[1]) || !atoi(argv[2]))
	{
		printf("%s\n", "Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = (num1 * num2);
	printf("%d\n", mul);
	return (mul);
}
