#include "holberton.h"

/**
 * *_strncat - function that concatenates two strings
 * @n: number of bytes to copy from src
 * @src: source buffer
 * @dest: resulting string
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *x = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (x);
}
