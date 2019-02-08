#include <stdio.h>

/**
 * main - print single digit numbers with commas using putchar
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x == 8)
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
