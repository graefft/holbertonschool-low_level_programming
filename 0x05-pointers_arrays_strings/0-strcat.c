#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @src: string to be appended
 * @dest: string to be appended to
 *
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (a);
}
