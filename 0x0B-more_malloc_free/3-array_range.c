#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maxiumum value
 * Return: pointer to newly created array or NULL if failure
 */

int *array_range(int min, int max)
{
	int i;
	int length;
	int *string;

	length = max - min + 1;
	if (min > max)
		return (NULL);
	string = malloc(sizeof(int) * length);
	if (!string)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		string[i] = min++;
	}
	return (string);
}
