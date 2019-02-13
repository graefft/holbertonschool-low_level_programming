#include "holberton.h"

/**
 * times_table - print the 9 times table starting with 0
 *
 *
 * Return: void
 *
 */

void times_table(void)
{
	int x, y, a, b, res;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
		res = (x * y);
		a = res / 10;
		b = res % 10;
			if (y < 9)
			{
				if (y != 0 && a < 1)
				{
					_putchar(' ');
				}
				if (a > 0)
				{
				_putchar(a + '0');
				}
				_putchar(b + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (y != 0 && a < 1)
					_putchar(' ');
				if (a > 0)
				{
					_putchar(a + '0');
				}
				_putchar(b + '0');
				_putchar('\n');
			}
		}
	}
}
