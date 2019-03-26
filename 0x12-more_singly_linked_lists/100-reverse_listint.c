#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to pointer of head
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		/* store next */
		next = (*head)->next;

		/* reverse current node's pointer */
		(*head)->next = prev;

		/* move pointers one position ahead */
		prev = *head;
		*head = next;
	}
	/* set pointer of head to end of list */
	*head = prev;
	return (*head);
}
