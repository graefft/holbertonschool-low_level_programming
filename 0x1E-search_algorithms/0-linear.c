#include "search_algos.h"

/**
 * linear_search - function that searches for value in array of integers
 * using Linear Search
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
