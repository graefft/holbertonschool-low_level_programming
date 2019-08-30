#include "search_algos.h"

/**
 * jump_search - searches for value in sorted array using Jump Search
 * @array: pointer to first element in array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump;
	}
	jump = i - sqrt(size);
	printf("Value found between indexes [%lu] and [%lu]\n", jump, i);

	if (i >= size)
		i = size - 1;

	while (jump <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
		jump++;
	}
	return (-1);
}
