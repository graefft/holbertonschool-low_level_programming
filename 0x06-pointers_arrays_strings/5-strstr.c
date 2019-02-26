#include "holberton.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to check
 * @needle: substring to look for
 *
 * Return: pointer to beginning of located substring, or NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{

	char *begin = haystack;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (!*needle)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
