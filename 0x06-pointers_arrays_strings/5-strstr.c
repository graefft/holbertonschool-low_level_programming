#include "holberton.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to check
 * @needle: substring to check for
 *
 * Return: pointer to beginning of located substring or NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *sub = needle;

	if (!haystack || !needle)
	{
		return (0);
	}
	while (*haystack != '\0')
	{
		while (*sub != '\0')
		{
			if (*sub == *haystack)
			{
				sub++;
				haystack++;
				i++;
				if (*sub == '\0')
				{
					return (haystack - i);
				}
			}
			else
			{
				haystack -= i;
				break;
			}
		}
		haystack++;
	}
	return (0);
}
