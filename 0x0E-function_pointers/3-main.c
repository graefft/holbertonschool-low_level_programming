#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints result of operation
 * @argc: number of arguments
 * @argv: integer, operation, integer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, x;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	x = f(a, b);
	printf("%d\n", x);
	return (0);
}
