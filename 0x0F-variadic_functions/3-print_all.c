#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - prints char
 * @c: char to print
 * Return: void
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints int
 * @i: int to print
 * Return: void
 */

void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - prints float
 * @f: float to print
 * Return: void
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints string
 * @s: string to print
 * Return: void
 */

void print_string(va_list s)
{
	char *string;

	string = va_arg(s, char *);

	if (!string)
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
	unsigned int i, j;

	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list pa;
	char *sep = "";

	va_start(pa, format);
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (funcs[j].t)
		{
			if (*funcs[j].t == format[i])
			{
				printf("%s", sep);
				funcs[j].f(pa);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
