#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @x: variable for integer
 *
 * Return: 0
 *
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		(x *= -1);
		return (x);
	}
}
