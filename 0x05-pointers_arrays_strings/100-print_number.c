#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 *
 */

void print_number(int n)
{
	int i = 1;
	int pow = 1000000000;

	if (n > 0)
	{
		n *= -1;
		i *= -1;
	}
	if (n != 0)
	{
		while ((n / pow) == 0)
		{
			pow = pow / 10;
		}
		if (i == 1)
			_putchar('-');
		while (pow >= 1)
		{
			_putchar(-(n / pow) + '0');
			n = n % pow;
			pow = pow / 10;
		}
	}
	else
	{
		_putchar('0');
	}
}
