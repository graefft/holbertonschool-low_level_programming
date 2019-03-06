#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argc
 * @av: argv
 * Return: pointer to new string, or NULL if failure
 */

char *argstostr(int ac, char **av)
{
	char *pts;
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
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++; x++)
		{
			pts[x] = av[i][j];
		}
		pts[x++] = '\n';
	}
	pts[x] = '\0';
	return (pts);
}
