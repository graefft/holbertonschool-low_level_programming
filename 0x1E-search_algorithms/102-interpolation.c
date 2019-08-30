#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using Interpolation Search algorithm
 * @array: pointer to the first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0;
	size_t hi = size - 1;
	size_t mid;

	if (array == NULL || !size)
		return (-1);

	while ((array[hi] != array[lo]))
	{
		mid = lo +
			  (((double)(hi - lo) / (array[hi] - array[lo])) * (value - array[lo]));

		if (mid >= size)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			lo = mid + 1;
		else if (array[mid] > value)
			hi = mid - 1;
		else
			return (mid);
	}
	if (array[lo] == value)
		return (lo);
	return (-1);
}
