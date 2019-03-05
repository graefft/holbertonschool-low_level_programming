#include <stdio.h>
#include <stdlib.h>
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

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, or pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	size_t p1, p2, p3, i = 0;
	char *s;

	if (s1 == 0)
		s1 = " ";
	if (s2 == 0)
		s2 = " ";

	p1 = _strlen(s1);
	p2 = _strlen(s2);
	p3 = p1 + p2 + 1;
	s = malloc(p3);

	if (s == 0)
		return (NULL);
	while (*s1)
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	s[i] = '\0';
	return (s);
}
