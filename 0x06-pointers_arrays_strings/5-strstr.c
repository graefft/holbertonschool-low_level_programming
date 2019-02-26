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

	char *pattern = needle;
	char *begin = haystack;

		while (*haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
