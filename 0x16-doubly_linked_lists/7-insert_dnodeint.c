#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 * @h: double pointer to head of list
 * @idx: index of where the new node should be added
 * @n: data for new node
 * Return: address of new node, or NULL if failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);

	/* put data into new node */
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	/* iterate until idx */
	while (temp && i < idx)
	{
		new->next = temp->next;
		if (i == idx - 1)
		{
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	i++;
	}

	return (NULL);
}
