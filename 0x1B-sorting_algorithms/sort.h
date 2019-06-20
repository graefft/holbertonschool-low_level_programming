#ifndef __SORT_H__
#define __SORT_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void swap(int *x, int *y);
void swap_and_print(int *array, size_t size, int *x, int *y);

void insertion_sort_list(listint_t **list);
void swap_list(listint_t **list, listint_t *x, listint_t *y);

void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void recursive_qs(int *array, size_t size, int lo, int hi);
int partition(int *array, size_t size, int lo, int hi);
size_t hoare(int *array, size_t size, int lo, int hi);

void recursive_ms(int *array, int l, int r);
void merge(int *array, int l, int m, int r);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void heapify(int *array, size_t n, int i, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /*__SORT_H__*/
