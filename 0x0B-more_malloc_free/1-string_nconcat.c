#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: how many bytes of s2 to add
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, length = 0;
	unsigned int i;
	char *string;

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
	if (n < len2)
		for (; n < len2; len2--)
	length = len1 + len2 + 1;
	string = malloc(sizeof(char) * length);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		string[i + len1] = s2[i];
	}
	string[len1 + len2] = '\0';
	return (string);
}
