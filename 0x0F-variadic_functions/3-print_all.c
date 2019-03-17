#include "variadic_functions.h"

/**
 * print_char - prints char
 * @c: char to print
 * Return: void
 */

void print_char(va_list pa)
{
	printf("%c", va_arg(pa, int));
}

/**
 * print_int - prints int
 * @i: int to print
 * Return: void
 */

void print_int(va_list pa)
{
	printf("%d", va_arg(pa, int));
}

/**
 * print_float - prints float
 * @f: float to print
 * Return: void
 */

void print_float(va_list pa)
{
	printf("%f", va_arg(pa, double));
}

/**
 * print_string - prints string
 * @s: string to print
 * Return: void
 */

void print_string(va_list pa)
{
	char *string;

	string = va_arg(pa, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;

	print_t va[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};

	va_list pa;
	char *sep = "";

	va_start(pa, format);
	while (format[i] && format)
	{
		j = 0;
		while (va[j].type)
		{
			if (*va[j].type == format[i])
			{
				printf("%s", sep);
				va[j].f(pa);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
