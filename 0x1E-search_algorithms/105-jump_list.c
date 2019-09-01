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

	while (prev && prev->index <= list->index)
	{
		printf("Value checked at index[%ld] = [%d]\n", prev->index,
				prev->n);
		if (prev->n == value)
			return (prev);

		prev = prev->next;
	}
	return (NULL);
}
