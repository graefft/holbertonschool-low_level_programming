#include "sort.h"

/**
 * cocktail_sort_list - sorts doubly-linked list of integers with Shaker Sort
 * Description: sorts bidirectionally Bubble Sort
 * @list: pointer to head of linked list
 * Return: void
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *a;
	int sorted = 0;

	if (!list || !(*list) || !(*list)->next)
		return;

	a = *list;
	while (!sorted)
	{
		sorted = 1;
		while (a->next)
		{
			if (a->n > a->next->n)
			{
				sorted = 0;
				swap_list(*&list, a, a->next);
			}
			else
				a = a->next;
		}
		if (sorted)
			break;
		sorted = 1;
		while (a->prev != NULL)
		{
			if (a->n < a->prev->n)
			{
				sorted = 0;
				swap_list(*&list, a->prev, a);
			}
			else
				a = a->prev;
		}
		if (sorted)
			break;
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
	x->prev = y;
	y->next = x;

	print_list(*list);
}
