#include <stdio.h>

/**
 * main - print all combos of 3 digits using putchar
 * without repeating any combos
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar (i);
					putchar (j);
					putchar (k);
					if (!(i == '7' && j == '8' && k == '9'))
					{
						putchar (',');
						putchar (' ');
					}
				}
				k++;
			}
			k = '0';
			j++;
		}
		j  = '0';
		i++;
	}
	return (0);
}
