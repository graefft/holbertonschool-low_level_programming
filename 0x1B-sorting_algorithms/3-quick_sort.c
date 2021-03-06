#include "sort.h"

/**
 * quick_sort - sorts array using Quick Sort algorithm
 * @array: pointer to array to sort
 * @size: size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	recursive_qs(array, size, 0, size - 1);
}

/**
 * recursive_qs - recursive function to implement lomuto
 * @array: pointer to array to sort
 * @size: size of array
 * @lo: low index
 * @hi: hi index
 * Return: void
 */
void recursive_qs(int *array, size_t size, int lo, int hi)
{
	size_t pi;

	if (lo < hi)
	{
		pi = partition(array, size, lo, hi);

		recursive_qs(array, size, lo, pi - 1);
		recursive_qs(array, size, pi + 1, hi);
	}
}

/**
 * partition - Lomuto's partition
 * Description: takes last element as pivot, places that element in
 * correct position in sorted array, places all smaller to left of pivot
 * and all greater elements to the right of pivot
 * @array: array to sort
 * @size: size of array
 * @lo: low index
 * @hi: hi index
 *
 * Return: partition index
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int pivot = array[hi];
	int i = (lo - 1);
	int j;

	for (j = lo; j <= hi - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap_and_print(array, size, &array[i], &array[j]);
		}
	}
	swap_and_print(array, size, &array[i + 1], &array[hi]);
	return (i + 1);
}

/**
 * swap_and_print - swaps two integers and prints new array
 * @array: pointer to array to sort
 * @size: size of array
 * @x: first int
 * @y: second int
 * Return: void
 */
void swap_and_print(int *array, size_t size, int *x, int *y)
{
	int temp = *x;

	if (*x != *y)
	{
		*x = *y;
		*y = temp;
		print_array(array, size);
	}
}
