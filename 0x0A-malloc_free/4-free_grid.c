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

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
