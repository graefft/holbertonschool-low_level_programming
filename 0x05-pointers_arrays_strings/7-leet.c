#include "holberton.h"

/**
 * *leet - ecodes a string into 1337
 * @s: string to change
 *
 * Return: string
 *
 */

char *leet(char *s)
{
	int i, j, k;
	char change[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; change[j] != '\0'; j++)
		{
			if (s[i] == change[j])
			{
				k = j;
				s[i] = leet[k];
			}
		}
	}
	return (s);
}
