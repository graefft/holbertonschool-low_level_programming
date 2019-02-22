#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: s
 *
 */

char *cap_string(char *s)
{
	int x;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}
	for (x = 1; s[x] != '\0'; x++)
	{
		if ((s[x - 1] == ' ' || s[x - 1] == '\t' ||
		s[x - 1] == '\n' || s[x - 1] == ',' ||
		s[x - 1] == ';' || s[x - 1] == '.' ||
		s[x - 1] == '!' || s[x - 1] == '?' ||
		s[x - 1] == '"' || s[x - 1] == '(' ||
		s[x - 1] == ')' || s[x - 1] == '{' ||
		s[x - 1] == '}') &&
		(s[x] > 'a' && s[x] < 'z'))
		{
			s[x] -= 32;
		}
	}
	return (s);
}
