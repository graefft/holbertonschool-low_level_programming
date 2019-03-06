#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - returns length of a string
 * @s: char to check
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

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *result = malloc(_strlen(str) + 1);
	char *p1 = str;
	char *p2 = result;

	if (result == NULL)
	{
		return (NULL);
	}
	while (*p1 != 0)
	{
		*p2 = *p1;
		p2++;
		p1++;
	}
	*p2 = '\0';
	return (result);
}
