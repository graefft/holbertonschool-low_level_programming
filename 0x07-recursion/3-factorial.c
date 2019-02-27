#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number to find factorial of
 *
 * Return: factorial or -1 if _n_ is lower than 1
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
