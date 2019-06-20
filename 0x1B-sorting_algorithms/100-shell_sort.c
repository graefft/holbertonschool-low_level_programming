#include "sort.h"

/**
 * shell_sort - sorts array of integers using Shell Sort algorithm
 * with Knuth sequence
 * @array: pointer to array to sort
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;
	size_t n = 1;

	if (!array || size < 2)
		return;

	/* start with Knuth gap */
	while (n * 3 + 1 < size)
		n = n * 3 + 1;

	while (n)
	{
		i = n;
		while (i < size)
		{
			/* add a[i] to elements that have been gap-sorted */
			/* save a[i] in temp and make a hole at position i */
			temp = array[i];

			/* shift earlier gap-sorted elements up to correct location */
			for (j = i; j >= n && array[j - n] > temp; j -= n)
				array[j] = array[j - n];

			/* put temp (original a[i]) in its correct location */
			array[j] = temp;
			i++;
		}
		print_array(array, size);
		n = (n - 1) / 3;
	}
}
