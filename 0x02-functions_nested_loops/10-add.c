#include "holberton.h"

/**
 * add - add two integers and return result
 * @x: first integer
 * @y: second integer
 *
 * Return: result
 *
 */

int add(int x, int y)
{
	if (x != 0 && y != 0)
		return (x + y);
	else
		return (0);
}
