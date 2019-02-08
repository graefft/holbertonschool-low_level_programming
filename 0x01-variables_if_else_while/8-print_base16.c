#include <stdio.h>

/**
 * main - print all numbers of base 16
 *
 * Return: 0
 */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	x = 'a';
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
