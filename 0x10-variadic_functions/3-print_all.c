#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list element);
void print_integer(va_list element);
void print_float(va_list element);
void print_string(va_list element);

/**
 * print_all - check the code for Holberton School students.
 *@format: list of types of arguments
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', '\0'}
	};
	va_list ap;
	int i = 0, j = 0;
	char* separator = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (ops[j].op == format[i])
			{
				printf("%s", separator);
				ops[j].f(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(ap);
	printf("\n");

}

void print_char(va_list element)
{
	printf("%c", va_arg(element, int));
}
void print_integer(va_list element)
{
	printf("%d", va_arg(element, int));
}
void print_float(va_list element)
{
	printf("%f", va_arg(element, double));
}
void print_string(va_list element)
{
	char *s = va_arg(element, char*);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
