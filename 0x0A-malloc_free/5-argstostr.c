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
	char *s;
	int i, j, x, y = 0;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			x++;
		}
		x++;
	}
	x++;
	s = malloc(x * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[y] = av[i][j];
			y++;
		}
		s[y] = '\n';
		y++;
	}
	s[y] = '\0';
	return (s);
}
