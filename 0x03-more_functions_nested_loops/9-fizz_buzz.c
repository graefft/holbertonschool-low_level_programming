#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints 1 to 100 but
 * "Fizz" on multiples of 3 and "Buzz on multiples of 5
 * and FizzBuzz on multiples of 3 and 5
 *
 * Return: 0
 *
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 != 0 && x % 5 != 0)
		{
			printf("%d ", x);
		}
		else
		{
			if ((x % 3 == 0) && (x % 5 != 0))
			{
				printf("Fizz ");
			}
			else if ((x % 3 != 0) && (x % 5 == 0))
			{
				if (x < 100)
					printf("Buzz ");
				else
					printf("Buzz");
			}
			else
			{
				printf("FizzBuzz ");
			}
		}
	}
	printf("\n");
	return (0);
}
