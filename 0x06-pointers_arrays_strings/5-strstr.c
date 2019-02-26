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
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			needle++;
		}
		if (!*pattern)
			return (begin);
		haystack = begin + 1;
	}
	return (0);
}
