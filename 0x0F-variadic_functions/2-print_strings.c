#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	const char * string;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ps, const char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != n -1)
			printf("%s", separator);
	}
	printf("\n");
}
