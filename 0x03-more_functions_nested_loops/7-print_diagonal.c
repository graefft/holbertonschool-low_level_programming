#include "holberton.h"

/**
 * print_diagonal - prints diagonal line on terminal
 * @n: number of times to print "\"
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
