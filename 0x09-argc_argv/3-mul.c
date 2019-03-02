#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: numbers to multiply
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int result = a * b;

		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
