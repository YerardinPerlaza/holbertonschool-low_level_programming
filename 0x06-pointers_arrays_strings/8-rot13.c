#include "holberton.h"
#include <stdio.h>

/**
 * *rot13 - check the code for Holberton School students.
 *
 *@str: char
 *
 * Return: Always 0.
 */
char *rot13(char *str)
{
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
