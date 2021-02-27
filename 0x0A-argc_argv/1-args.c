#include <stdio.h>

/**
 * main - Entry point
 *@argc: int
 *@argv: char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, largo;

	for (i = 1; i < argc; i++)
	{
		largo++;
	}
	(void)argv;
	printf("%d\n", largo);

	return (0);
}
