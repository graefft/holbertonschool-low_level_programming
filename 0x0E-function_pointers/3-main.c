#include "3-calc.h"

/**
 * main - prints result of operation
 * @argc: number of arguments
 * @argv: integer, operation, integer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n"), exit(99);
	}
	printf("%d\n", (get_op_func(argv[2])(a, b)));
	return (0);
}
