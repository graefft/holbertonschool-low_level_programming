#include "sort.h"

/**
 * counting_sort - sorts array using Counting Sort algorithm
 * Description: sorts using keys, counts number with key value to
 * determine placement in output
 * @array: pointer to array
 * @size: size of array
 * Return: void
 */
void counting_sort(int *array, size_t size)
{
	int i, max, *count, *output, value;
	size_t j;

	if (!array || size < 2)
		return;

	max = find_max(array, size);
	count = malloc(sizeof(size_t) * max + 1);
	if (!count)
		return;
	output = malloc(sizeof(int) * size);
	if (!output)
		return;

	/* store count of each character */
	for (j = 0; j < size; j++)
	{
		value = array[j];
		count[value] += 1;
	}
	/* change array to store actual position of character in output */
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];

	print_array(count, max + 1);

	/* build output character array */
	for (j = 0; j < size; j++)
	{
		output[count[array[j]] - 1] = array[j];
		count[array[j]]--;
	}
	/* copy sorted output array to array */
	for (j = 0; j < size; j++)
		array[j] = output[j];
	free(count);
	free(output);
}

/**
 * find_max - finds max key in array
 * @array: array to be sorted
 * @size: size of array
 * Return: max value
 */
int find_max(int *array, size_t size)
{
	size_t i;
	int max = 0;

	for (i = 0; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}
