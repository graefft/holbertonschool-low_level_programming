#include <stdio.h>

/**
 * main - print sum of even Fibonacci terms
 *
 * Return: 0
 *
 */

int main(void)
{
	unsigned long x, y, even, next;

	x = 1;
	y = 2;
	even = 0;
	next = 0;

	while (x < 4000000 && y < 4000000)
	{
		if ((y % 2) == 0)
			even += y;
		next = x + y;
		x = y;
		y = next;
	}
	printf("%lu\n", even);
	return (0);
}
