#include "sort.h"

/**
 * insertion_sort_list - sorts doubly-linked list of ints using Insertion Sort
 * @list: list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL;

	if (!list || !(*list)->next)
		return;

	node = (*list)->next;

	while (node)
	{
		while (node->prev && node->n < node->prev->n)
		{
			swap_list(*&list, node->prev, node);
			print_list(*list);
		}
		node = node->next;
	}
}

/**
 * swap_list - swaps two elements in linked list
 * @list: pointer to doubly-linked list
 * @x: first element
 * @y: second element
 * Return: void
 */
void swap_list(listint_t **list, listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	else
		(*list) = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	y->next = x;
	x->prev = y;
}
