#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to pointer of head
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	/* create new head pointer */
	listint_t *newhead = *head;
	int x = newhead->n;

	/* if linked list is empty return 0 */
	if (!head || !(*head))
		return (0);

	/* set head to next node */
	*head = (*head)->next;
	/* free head */
	free(newhead);

	return (x);
}
