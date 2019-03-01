#include "holberton.h"

/**
 * _strlen_recursion - finds length of a string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * start_end - compares starting and ending characters
 *
 * @b: beginning of string
 * @e: end of string
 *
 * Return: start and end
 *
 */

int start_end(char *b, char *e)
{
	if (b >= e)
	{
		return (1);
	}
	if (*b != *e)
	{
		return (0);
	}
	b++;
	e--;
	return (start_end(b, e));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome otherwise 0
 *
 */

int is_palindrome(char *s)
{
	if (start_end(s, s + _strlen_recursion(s) - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
