#include "holberton.h"

/**
 * print_triangle - print triangle in the terminal
 * @size: size of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int row, col, space;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				space = size - row - 1;
				if (col < space)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
