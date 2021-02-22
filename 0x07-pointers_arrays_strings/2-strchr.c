#include <stdio.h>

/**
 * *_strchr - Entry point
 *@s: char
 *@c: char
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
