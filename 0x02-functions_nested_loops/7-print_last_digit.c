#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: number to check print last digit
 *
 * Return: value of last digit
 *
 */

int print_last_digit(int x)
{
	int z;

	if (x < 0)
	{
		x = x * -1;
	}

	z = x % 10;
	_putchar(z + '0');
	return (z);
}
