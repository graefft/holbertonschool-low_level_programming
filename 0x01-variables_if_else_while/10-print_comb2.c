#include <stdio.h>

/**
 * main - print numbers 00 to 99 with commas
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x > 100)
	{
		putchar(x / 10 + '0');
		putchar(x % 10 + '0');
		if (x == 99)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		x++;
	}
	return (0);
}
