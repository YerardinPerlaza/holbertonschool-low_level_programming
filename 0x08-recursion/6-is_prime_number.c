#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
        if (((((factorial(n - 1)) + 1) / n) % 10) == 0)
                return (1);
        else
                return (0);
}

int factorial(int n)
{
        if (n < 0)
                return (0);
        else if (n == 0)
                return (1);
        else
                return (n * factorial(n - 1));
}
