#include <stdio.h>

/**
 * main - find and print largest prime factor of 612852475143
 *
 * Return: 0
 *
 */

int main(void)
{
	long int x = 612852475143;
	long int div = 2;
	int  maxFact;

	while (x != 0)
	{
		if (x % div != 0)
			div = div + 1;
		else
		{
			maxFact = x;
			x = x / div;

			if (x == 1)
			{
				printf("%d\n", maxFact);
				break;
			}
		}
	}
	return (0);
}
