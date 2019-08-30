#include "search_algos.h"

/**
 * exponential_search - searches for value in sorted array of
 * integers using Exponential Search algorithm
 * @array: pointer to first element in array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i - 1);
	return (binary_search(array, i, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary Search algorithm
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t m;
	size_t l = size / 2;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (array && l <= r)
	{
		m = (r - l) / 2 + l;
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
