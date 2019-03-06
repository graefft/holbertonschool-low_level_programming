#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL on failure, or pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i, j = 0;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1]; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2]; len2++)
			;
	}
	j = len1 + len2 + 1;
	s = malloc(sizeof(char) * j);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		s[i + len1] = s2[i];
	}
	s[len1 + len2] = '\0';
	return (s);
}
