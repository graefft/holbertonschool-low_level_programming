#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * combinations of two two-digit numbers.
 *
 * Return: 0
 */

int main(void)
{
	int i = 00;
	int j = 00;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				putchar(i / 10 + 48);
				putchar(i % 10 + 48);
				putchar(' ');
				putchar(j / 10 + 48);
				putchar(j % 10 + 48);
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
				putchar('\n');
				}
			}
		}
	}
	return (0);
}
