#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argc
 * @av: argv
 * Return: pointer to new string, or NULL if failure
 */

char *argstostr(int ac, char **av)
{
	char *pts, *pts_copy;
	int i, j, len, x = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	len++;
	pts = malloc(len * sizeof(char));
	if (pts == NULL)
	{
		return (NULL);
	}
	pts_copy = pts;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			pts[x] = av[i][j];
			x++;
		}
		pts[x] = '\n';
		x++;
	}
	pts[x] = '\0';
	return (pts_copy);
}
