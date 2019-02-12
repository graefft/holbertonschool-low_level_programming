#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n++;
			}
			else
			{
				printf("98\n");
				break;
			}
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
				n--;
			}
			else
			{
				printf("98\n");
				break;
			}
		}
	}
}
