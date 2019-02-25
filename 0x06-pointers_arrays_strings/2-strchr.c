#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: character to check for
 * @s: string to check
 *
 * Return: pointer to c or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
