#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: pointer to array
 * @size: size of matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int ltrb = 0;
	int lbrt = 0;
	int i = 0;

	while (i < size * size)
	{
		ltrb += *(a + i);
		i += size + 1;
	}
	i = 0;
	while (i < size * size - 1)
	{
		lbrt += *(a + i);
		i += size - 1;
	}
	printf("%d, %d\n", ltrb, lbrt);
}
