#include "holberton.h"

/**
 * *rot13 - encodes string using rot13
 * s: string to encode
 *
 * Return: encoded string
 *
 */

char *rot13(char *s)
{
	int i, j, k;
	char change[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; change[j] != '\0' && k == 0; j++)
		{
			if (s[i] == change[j])
			{
				s[i] = rot[j];
				k = j;
			}
		}
	}
	return (s);
}
