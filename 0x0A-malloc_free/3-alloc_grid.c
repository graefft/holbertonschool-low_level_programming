#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns pointer to a 2d array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL if 0 or negative, otherwise pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **s;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	s = malloc(height * sizeof(*s));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
