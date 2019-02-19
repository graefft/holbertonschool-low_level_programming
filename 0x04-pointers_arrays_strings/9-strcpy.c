#include "holberton.h"

/**
 * _strcpy - copies string pointed to by src
 * to buffer pointed to by dest
 * @dest: points to buffer
 * @src: points to string
 *
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
