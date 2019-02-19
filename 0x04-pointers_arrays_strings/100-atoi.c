#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: number
 */

int _atoi(char *s)
{
	int res = 0;
	int neg = -1;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 - (s[i] - '0');
		}
		if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
			break;
		i++;
	}
	return (res * neg);
}
