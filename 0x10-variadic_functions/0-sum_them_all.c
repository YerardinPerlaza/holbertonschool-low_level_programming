#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 *@n: unsigned int
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, suma;

	va_start(ap, n);

	if (n == 0)
		return (0);

	suma = 0;
	for (i = 0; i < n; i++)
	{
		suma += va_arg(ap, int);
	}
	va_end(ap);
	return (suma);
}
