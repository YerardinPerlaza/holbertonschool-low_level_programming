#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 *@argc: int
 *@argv: char
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*operation)(int, int);
	char *operator;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	operation = get_op_func(operator);
	calc = (*operation)(num1, num2);

	printf("%d\n", calc);
	return (0);
}
