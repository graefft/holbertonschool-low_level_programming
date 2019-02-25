#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: substring
 * @accept: source of bytes
 *
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int match = 0;

	for (i = 0; s[i] > ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				match += 1;
		}
	}
	return (match);
}
