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
	int i, sum = 0;

	if (argc < 1)
		printf("%s\n", "0");

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		if (atoi(argv[i]) >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
