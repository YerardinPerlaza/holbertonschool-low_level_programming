#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 *
 *@c: int
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	int letter;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		letter = 1;
	else
		letter = 0;
	return (letter);
}
