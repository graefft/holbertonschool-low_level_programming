#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @n: bytes to copy
 * @src: string to copy
 * @dest: buffer to copy string to
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
