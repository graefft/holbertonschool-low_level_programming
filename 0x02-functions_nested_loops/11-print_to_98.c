#include "holberton.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n < 99)
	{
		_putchar(n + '0');
		_putchar(',');
		n++;
	}
}
