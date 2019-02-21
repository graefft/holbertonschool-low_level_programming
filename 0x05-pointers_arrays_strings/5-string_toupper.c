#include "holberton.h"

/**
 * *string_toupper - changes all lowercase letters to uppercase
 * @c: char to change
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);
}
