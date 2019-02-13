#include <stdio.h>

/**
 * main - compute and print sum of all multiples of 3 or 5
 *
 * Return: 0
 *
 */

int main(void)
{
	int x, y, z, sum;

	sum = 0;
	for (x = 0; x < 1024; x++)
	{
		y = (x % 3);
		z = (x % 5);
		if (y == 0 || z == 0)
		{
			sum = sum + x;
		}
	}
	printf("%d\n", sum);

	return (0);
}
