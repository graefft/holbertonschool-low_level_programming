#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars
 * and initializes with a specific char
 * @size: size
 * @c: char
 * Return: NULL if fail or 0, otherwise pointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(s));

	if (s == NULL)
	{
		return (NULL);
	}

	while (x < size)
	{
		s[x] = c;
		x++;
	}
	return (s);
}
