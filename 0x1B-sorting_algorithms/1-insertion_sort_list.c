#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly-linked list of integers using
 * Insertion Sort algorithm
 * @list: pointer to head of linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *x, *y, *z;

	x = *list;

	if (!list || !*list)
		return;

	while (x && x->next)
	{
		if (x->n > x->next->n)
		{
			swap_list(x, x->next);
			print_list(*list);
			y = x;
			x = x->prev;
			while (x && x->prev)
			{
				z = x;
				if (z->n < z->prev->n)
				{
					swap_list(z->prev, z);
					if (!z->prev)
						*list = z;
					print_list(*list);
				}
				else
				{
					break;
				}
			}
			x = y;
		}
		else
			x = x->next;
	}
}

/**
 * swap_list - swaps two elements in linked list
 * @x: first element
 * @y: second element
 * Return: void
 */
void swap_list(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->next = x;
	y->prev = x->prev;
	x->prev = y;
}
