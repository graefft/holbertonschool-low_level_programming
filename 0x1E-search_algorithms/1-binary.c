#include "search_algos.h"

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
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (array && l <= r)
	{
		m = (l + r) / 2;
		printf("Seaching in array: ");
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
