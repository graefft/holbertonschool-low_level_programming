#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	char *result;
	int len;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i))
		i++;
	len = i;
	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(result + i) = *(str + i);
	}
	return (result);
}
