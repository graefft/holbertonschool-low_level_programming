#include "holberton.h"

/**
 * helper - finds square root
 *
 * @n: number to square
 * @q: number to check
 *
 * Return: square root or -1 if n does not have a natural sqrt
 */

int helper(int n, int q)
{
	if (n * n > q)
	{
		return (-1);
	}
	if (n * n == q)
	{
		return (n);
	}
	return (helper(n + 1, q));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to square
 *
 * Return: square root or -1 if n does not have a natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
