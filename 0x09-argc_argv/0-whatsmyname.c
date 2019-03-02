#include "holberton.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: number of arguments
 * @argv: pointers to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
