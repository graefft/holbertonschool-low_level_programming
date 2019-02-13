#include <stdio.h>
#include "holberton.h"

/**
 * main - compute and print sum of all multiples of 3 or 5
 * below 1024
 * 
 * Return: 0
 *
 */

int main(void)
{
	int x, y, z, sum;

	for (x = 0; x < 1024; x++)
	{
		y = (x % 3);
		z = (x % 5);
		if (y == 0 || z == 0)
			sum = sum +1;
	}
	printf("%d\n", sum);
	return (0);
}
