#include "lists.h"

/**
 * free_listint_safe - frees list and sets head to NULL
 * @h: pointer to pointer of list
 * Return: size of list that is free'd
 */

size_t free_listint_safe(listint_t **h)
{
	/* create new pointer */
	listint_t *next;
	int size = 0;

	if (!h)
		return (0);
	/* go through list */
	while (*h)
	{
		if (*h - (*h)->next > 0)
		{
			/* move pointer down list */
			next = (*h)->next;
			/* free pointer */
			free(*h);
			/* set pointer to next */
			*h = next;
			size++;
		}
		else
		{
			/* free h ptr and set to NULL */
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	/* set head to NULL */
	*h = NULL;
	return (size);
}
