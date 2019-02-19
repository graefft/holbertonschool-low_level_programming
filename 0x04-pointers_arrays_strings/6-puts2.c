#include "holberton.h"

/**
 * puts2 - puts every other char out of a string
 * @str: string to print from
 *
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (*str)
	{
		if (x % 2 == 0)
			_putchar(*str);
		str++;
		x++;
	}
	_putchar('\n');
}
