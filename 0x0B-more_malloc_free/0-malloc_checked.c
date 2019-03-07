#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: variable to allocate memory for
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *check = malloc(b);

	if (check == NULL)
		exit(98);
	return (check);
}
