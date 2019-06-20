#include "sort.h"

/**
 * heap_sort - sorts an array of integers using Heap Sort
 * @array: pointer to array to sort
 * @size: size of array
 * Return: void
 */
void heap_sort(int *array, size_t size)
{
	int i, n;

	if (!array || size < 2)
		return;

	n = size;
	for (i = n / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	for (i = n - 1; i  >= 0; i--)
	{
		swap(&array[0], &array[i]);
		if (array[0] != array[i])
			print_array(array, size);
		heapify(array, i, 0, size);
	}
}

/**
 * heapify - heapify a subtree rooted with node i which is an index in array
 * @array: array to sort
 * @n: size of array
 * @i: index
 * @size: size of array
 * Return: void
 */
void heapify(int *array, size_t n, int i, size_t size)
{
	size_t largest = i;
	size_t l = (2 * i + 1);
	size_t r = (2 * i + 2);

	if (l < n && array[l] > array[largest])
		largest = l;

	if (r < n && array[r] > array[largest])
		largest = r;

	if ((int)largest != i)
	{
		swap(&array[i], &array[largest]);
		if (array[i] != array[largest])
			print_array(array, size);
		heapify(array, n, largest, size);
	}
}

/**
 * swap - swaps two values
 * @x: pointer to first value
 * @y: pointer to second value
 * Return: void
 */
void swap(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
