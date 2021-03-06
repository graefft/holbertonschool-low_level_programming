#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @accept: bytes to look for
 * @s: string to search in
 *
 * Return: pointer to byte in s that matches one of the bytes
 * in accept, or NULL if none are found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
