#include "sort.h"

/**
 * merge_sort - sorts array by using Merge Sort algorithm
 * Description: divide unsorted list into n sublists, each containing
 * one element, repeatedly merge sublists to produce new sorted sublists
 * until there is only one left
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void merge_sort(int *array, size_t size)
{
	int *copy;
	size_t i;

	if (!array || size < 2)
		return;

	copy = malloc(sizeof(int) * size);
	if (!copy)
		return;

	for (i = 0; i < size; i++)
		copy[i] = array[i];

	merge_sort_split(copy, 0, size, array);
	free(copy);
}

/**
 * merge_sort_split - sorts run of array A using array B as source
 * @b: copied array
 * @begin: start of array
 * @end: end of array
 * @a: source array
 * Return: void
 */
void merge_sort_split(int *b, size_t begin, size_t end, int *a)
{
	size_t mid = (begin + end) / 2;

	if (end - begin < 2)
		return;

	merge_sort_split(a, begin, mid, b);
	merge_sort_split(a, mid, end, b);
	top_down_merge(b, begin, mid, end, a);
}

/**
 * top_down_merge - merges resulting runs from array B into A
 * @a: array A
 * @begin: beginning of array
 * @mid: middle of array
 * @end: end of array
 * @b: array B
 * Return: void
 */
void top_down_merge(int *a, size_t begin, size_t mid, size_t end, int *b)
{
	size_t i = begin;
	size_t j = mid;
	size_t k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(a + begin, mid - begin);
	printf("[right]: ");
	print_array(a + mid, end - mid);

	for (k = begin; k < end; k++)
	{
		if (i < mid && (j >= end || a[i] <= a[j]))
		{
			b[k] = a[i];
			i += 1;
		}
		else
		{
			b[k] = a[j];
			j += 1;
		}
	}

	printf("[Done]: ");
	print_array(b + begin, end - begin);
}
