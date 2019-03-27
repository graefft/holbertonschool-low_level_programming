#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at given position
 * @head: pointer to pointer of head
 * @idx: index of list where new node should be added
 * @n: data
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	/* check if malloc worked */
	if (!new)
		return (NULL);

	/* put data into new node */
	new->n = n;

	if (idx == 0)
	{
		/* new node points to where head points */
		new->next = *head;
		/* set head pointer to new node */
		*head = new;
		return (new);
	}
	/* iterate until idx */
	while (temp && i < idx)
	{
		/* put temp ptr value into new node */
		new->next = temp->next;
		if (i == idx - 1)
		{
			/* temp ptr points to new node */
			temp->next = new;
			return (new);
		}
		else
			/* move temp ahead in list */
			temp = temp->next;
	i++;
	}
	return (NULL);
}
