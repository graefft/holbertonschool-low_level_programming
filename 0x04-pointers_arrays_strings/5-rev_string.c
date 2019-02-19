#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char x;

	for (i = 0; s[i] != 0; i++)

	j = 0;
	i = i - 1;
	while (j < i)
	{
		x = s[i];
		s[i] = s[j];
		s[j] = x;
		j++;
		i--;
	}
}
