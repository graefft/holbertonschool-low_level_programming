#include "holberton.h"

/**
 * print_line - draws straight line in terminal
 * @n: number of times to print "_"
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
