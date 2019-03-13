#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of elements in array
 * @cmp: pointer to function to compare values
 * Return: index of first element for which cmp doesn't return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j)
			return (i);
	}
	return (-1);
}
