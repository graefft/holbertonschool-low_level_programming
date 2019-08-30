#include "search_algos.h"

/**
 * advanced_binary - searches for a value in sorted array of
 * integers using recursive binary search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search_recursion(array, 0, size - 1, value));
}

/**
 * binary_search_recursion - searches for a value in a sorted array of integers
 * using Binary Search (recursive) algorithm
 * @array: pointer to first element in array to search in
 * @l: start of sub-array
 * @r: end of sub-array
 * @value: value to search for
 * Return: index where value is located or -1
 */
int binary_search_recursion(int *array, size_t l, size_t r, int value)
{
	size_t i;
	size_t m;

	if (array == NULL)
		return (-1);

	if (r >= l)
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
			return (binary_search_recursion(array, m + 1, r, value));
		else if (array[m] > value)
			return (binary_search_recursion(array, l, m - 1, value));
		else
			return (m);
	}
	return (-1);
}
