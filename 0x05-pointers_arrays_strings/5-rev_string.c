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
	int g, numb;
	int tmpry = 0;

	for(numb=0; s[numb] != 0; numb++);
	{
		for(g = 0; g <numb/2; g++)
		{
			tmpry = s[g];
			s[g]=s[numb - 1 - g];
			s[numb - 1 - g] = tmpry;
		}
	}
}
