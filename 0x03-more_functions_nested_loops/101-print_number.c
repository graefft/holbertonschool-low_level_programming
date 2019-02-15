#include "holberton.h"

/**
 * print_number - print an integer using _putchar
 * @n: character to check
 *
 * Return: void
 *
 */

void print_number(int n)
{
	unsigned int abs;

	if (n < 0)
	{
		_putchar('-');
		abs = -n;
	}
	else
		abs = n;
	if (abs / 10)
		print_number(abs / 10);

	_putchar(abs % 10 + '0');
}
