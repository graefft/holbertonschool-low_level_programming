#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	unsigned int i = 0, fmt;

	va_start(ap, format);
	while (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
					printf("(nil)");
				printf("%s", string);
				break;
		}
		fmt = format[i];
		if (fmt == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (format[i + 1] != 0)
				printf(", ");
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
