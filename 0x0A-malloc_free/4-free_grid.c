#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - returns pointer to a 2d array of integers
 * @grid: pointer to grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != 0)
	{
		for (i = 0; i <= height; i++)
			free(grid[i]);
	}
}
