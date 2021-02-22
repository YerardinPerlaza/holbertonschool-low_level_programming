#include "holberton.h"
#include <stdio.h>

/**
 * print_chessboard - Entry point
 *@a: char
 *
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] != 0)
			{
				_putchar(a[i][j]);
			}
		}
		_putchar('\n');
	}
}
