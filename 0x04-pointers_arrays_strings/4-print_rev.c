#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * 
 * Return: void
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	s--;
	
	while (length)
	{
		_putchar(*s);
		s--;
		length--;
	}
	_putchar('\n');
}
