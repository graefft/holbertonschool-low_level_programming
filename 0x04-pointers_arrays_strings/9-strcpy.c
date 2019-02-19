#include "holberton.h"
#include <stdio.h>

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
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
