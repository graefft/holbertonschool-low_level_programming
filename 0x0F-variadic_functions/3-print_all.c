#include "variadic_functions.h"

/**
 * print_char - prints char
 * @pa: char to print
 * Return: void
 */

void print_char(va_list pa)
{
	printf("%c", va_arg(pa, int));
}

/**
 * print_int - prints int
 * @pa: int to print
 * Return: void
 */

void print_int(va_list pa)
{
	printf("%i", va_arg(pa, int));
}

/**
 * print_float - prints float
 * @pa: float to print
 * Return: void
 */

void print_float(va_list pa)
{
	printf("%f", va_arg(pa, double));
}

/**
 * print_string - prints string
 * @pa: string to print
 * Return: void
 */

void print_string(va_list pa)
{
	char *string;

	string = va_arg(pa, char *);

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
	i = 0;
	while (format[i] && format)
	{
		j = 0;
		while (va[j].t)
		{
			if (*(va[j].t) == format[i])
			{
				printf("%s", sep);
				va[j].f(pa);
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
