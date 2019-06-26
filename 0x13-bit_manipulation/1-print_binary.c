#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to convert
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int c, k;

	if (n == 0)
		_putchar('0');
	else
	{
		for (c = sizeof(n * 8); c >= 0; c--)
		{
			k = n >> c;

			if (k & 1)
				_putchar('1');
			else if (k | 0)
				_putchar('0');
		}
	}
}
