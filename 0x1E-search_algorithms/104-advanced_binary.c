#include "search_algos.h"

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
	size_t m;

	if (array == NULL)
		return (-1);

	m = (r - l) / 2 + l;

	print_array(array, l, r);

	if (array[m] == value && array[m - 1] != value)
		return (m);
	else if (l == r)
		return (-1);
	else if (array[m] < value)
		return (binary_search_recursion(array, m + 1, r, value));
	else if (array[m] >= value)
		return (binary_search_recursion(array, l, m, value));
	else
		return (-1);
}

/**
 * print_array - prints array
 * @array: array to be searched in
 * @lo: left element
 * @hi: right element
 * Return: void
 */
void print_array(int *array, size_t lo, size_t hi)
{
	size_t i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i < hi)
			printf(", ");
		else
			printf("\n");
	}
}

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
