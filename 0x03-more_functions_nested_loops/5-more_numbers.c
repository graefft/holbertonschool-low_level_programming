#include "holberton.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			int y = (b / 10);
			int z = (b % 10);

			if (y != 0)
			{
				_putchar(y + '0');
			}
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}
