#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of main function
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 if arg not correct, 2 if bytes is negative, else 0
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n"), exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i < (bytes - 1))
			printf("%.2hhx ", p[i]);
		else
			printf("%.2hhx\n", p[i]);
	}
	return (0);
}
