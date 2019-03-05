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
	size_t len = _strlen(str);
	char *result = malloc(len + 1);
	
	if (str == 0)
	{
		return (NULL);
	}
	for (size_t i = 0; i <= len; i++)
	{
		result[i] = str[i];
	}
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
