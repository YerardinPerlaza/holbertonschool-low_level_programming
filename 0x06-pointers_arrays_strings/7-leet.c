#include "holberton.h"
#include <stdio.h>

/**
 * *leet - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	char letter[] = "aAeEoOtTlL";
	char number[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = number[j];
			}
		}
	}
	return (str);
}
