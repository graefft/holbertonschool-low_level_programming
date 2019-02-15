#include <stdio.h>

/**
 * main - program that finds and prints largest prime factor of
 * 612852475143
 *
 * Return: 0
 *
 */

int main(void)
{
	long int num = 612852475143;
	int x;

	for (x = 2; x < num; x++)
	{
		while ((num % x) == 0)
		{
			num = num / x;
		}
	}
	printf("%ld\n", num);
	return (0);
}
