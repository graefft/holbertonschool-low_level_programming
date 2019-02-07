#include <stdio.h>

/**
 *main - print alphabet in lowercase, then uppercase
 *
 *Return: 0
 */

int main(void)
{
	int x = 'a';

		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
	x = 'A';
		while (x <= 'Z')
		{
			putchar(x);
			x++;
		}
		putchar('\n');
		return (0);
}
