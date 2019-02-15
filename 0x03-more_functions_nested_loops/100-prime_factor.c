#include <stdio.h>

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
