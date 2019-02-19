#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: array to print from
 * @n: number of elements to be printed
 *
 */

void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
