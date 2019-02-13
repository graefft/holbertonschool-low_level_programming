#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int x, y, z, next;

	y = 1;
	z = 2;

	for (x = 1; x <= 50; x++)
	{
		printf("%d, ", y);
		next = y + z;
		y = z;
		z = next;
	}
	return (0);
}
