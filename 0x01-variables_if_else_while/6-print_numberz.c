#include <stdio.h>

/**
 * main - print all single digit numbers 0-9 with putchar
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
