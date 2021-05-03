#include "calculator.h"

/**
 * add - Entry point
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Entry point
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Entry point
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Entry point
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */
int div(int a, int b)
{
	if (b <= 0)
	{
		return (0);
	}
	return (a / b);
}
/**
 * mod - Entry point
 * @a: int
 * @b: int
 * Return: Always 0 (Success)
 */
int mod(int a, int b)
{
	if (b <= 0)
	{
		return (a);
	}
	return (a % b);
}
