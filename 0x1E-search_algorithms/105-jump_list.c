#include "search_algos.h"

/**
 * jump_list - searches for a value in sorted list of
 * integers using Jump Search algorithm
 * @list: pointer to head of list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to first node with value, otherwise -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev;
	size_t jump;

	if (!list || size == 0)
		return (NULL);

	prev = list;

	while (list->n < value && list->next)
	{
		jump = sqrt(size);

		for (prev = list; jump > 0 && list->next; jump--)
			list = list->next;

		printf("Value checked at index [%ld] = [%d]\n", list->index,
														list->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev->index,
															list->index);
	list = prev;

	while (list)
	{
		printf("Value checked at index[%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);

		list = list->next;
	}
	return (NULL);
}
