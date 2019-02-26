#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: number of rows
 *
 * Return: void
 *
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;

	while (i < 8)
	{
		int j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
