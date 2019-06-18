#include "sort.h"

/**
 * selection_sort - sorts array of integers using Selection Sort
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
		{
			/* if this element is less, then it is the new min */
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}

/**
 * swap - swaps two ints
 * @x: first int
 * @y: second int
 * Return: void
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
