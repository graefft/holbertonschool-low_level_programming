#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @n: bytes to be filled in
 * @s: pointer
 * @b: constant byte
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
