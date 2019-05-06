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

	if (!h || !new)
		return (NULL);

	/* put data into new node */
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	/* iterate until idx */
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
			i++;
	}
	free(new);
	return (NULL);
}
