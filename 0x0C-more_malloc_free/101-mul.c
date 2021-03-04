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
	int mul = 0;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	mul = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mul);
	exit(98);
}
