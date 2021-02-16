#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 *
 *@s: char
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, n;
	int temp = 0;

	for (n = 0; s[n] != 0; n++)
	{
	}
	for (i = 0; i < n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = temp;
	}
	for (i = 0; i < n; i++)
	{
	}
}
