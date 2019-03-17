#include "variadic_functions.h"

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
	char *string = va_arg(s, char *);

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
	char *sep = "";

	print_type va[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};

	va_list pa;

	va_start(pa, format);
	while (format[i] && format)
	{
		j = 0;
		while (va[j].type != NULL)
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
	va_end(pa);
	printf("\n");
}
