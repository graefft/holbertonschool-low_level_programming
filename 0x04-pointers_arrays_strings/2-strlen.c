#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char to check
 *
 * Return: length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
