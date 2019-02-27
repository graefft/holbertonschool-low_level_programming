#include "holberton.h"

/**
 * _pow_recursion - return value of x raised to power of y
 *
 * @x: first value
 * @y: power
 *
 * Return: powered value (or -1 if y is less than 0)
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y-1));
	}
}
