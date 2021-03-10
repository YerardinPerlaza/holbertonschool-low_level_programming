#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - f points
 * @name: name
 * @f: void
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
