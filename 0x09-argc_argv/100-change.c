#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: coins
 * Return: 0 or 1 if arguments passed is not exactly 1
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int total = atoi(argv[1]);
	int q = 0;
	int d = 0;
	int n = 0;
	int pp = 0;
	int p = 0;
	int combos = 0;

	if (total >= 25)
		q = (total / 25);
	if (total >= 10)
		d = (total - (q * 25)) / 10;
	if (total >= 5)
		n = (total - (q * 25) - (d * 10)) / 5;
	if (total >= 2)
		pp = (total - (q * 25) - (d * 10) - (n * 5)) / 2;
	if (total >= 1)
		p = (total - (q * 25) - (d * 10) - (n * 5) - (pp * 2));
	combos = (q + d + n + pp + p);
	printf("%d\n", combos);
	return (0);
}
