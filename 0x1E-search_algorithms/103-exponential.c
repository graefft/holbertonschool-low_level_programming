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
	size_t l, m, r;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	l = i / 2;
	if (i >= size)
		r = size - 1;
	else
		r = i;
	printf("Value found between indexes [%ld] and [%ld]\n", l, r);
	while (array && l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}
		m = (r - l) / 2 + l;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
