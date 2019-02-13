#include "holberton.h"

/**
 * print_times_table - print the n times table starting with 0
 * @n: number of times to print
 *
 * Return: void
 *
 */

void print_times_table(int n)
{
	int x, y, a, b, c, res;

	res = 0;
	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
			res = (x * y);
			a = res % 10;
			b = res / 10 % 10;
			c = res / 100;
				if (c == 0 && y != 0)
				{
					_putchar(' ');
					if (b == 0)
						_putchar(' ');
					else
						_putchar(b + '0');
					_putchar(a + '0');
				}
				else if (c != 0)
				{
					_putchar(c + '0');
					_putchar(b + '0');
					_putchar(a + '0');
				}
				if (y == 0)
					_putchar('0');
				if (y != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
			y = 0;
		}
	}
}
