#include "lists.h"

/**
 * add_nodeint_end - adds new node at end of a list
 * @head: pointer to pointer of head
 * @n: data to copy to new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev = *head;

	/* check if malloc worked */
	if (!new)
		return (NULL);

	/* put data in new node */
	new->n = n;
	/* set new pointer to NULL */
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* transverse through list */
	while (prev->next)
		prev = prev->next;

	/* set last node to point to new node */
	prev->next = new;

	return (new);
}
