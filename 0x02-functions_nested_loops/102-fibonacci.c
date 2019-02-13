#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	long x, y, z, next;

	x = 0;
	y = 1;

	for (z = 1; z <= 50; z++)
	{
		next = x + y;
		x = y;
		y = next;
		if (z <= 49)
			printf("%ld, ", next);
		else
			printf("%ld\n", next);
	}
	return (0);
}
