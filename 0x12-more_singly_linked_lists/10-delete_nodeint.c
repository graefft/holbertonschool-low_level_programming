#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: pointer to pointer of head
 * @index: index of node
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	/* create new node */
	listint_t *delete = NULL;
	unsigned int i = 0;

	/* check if no head */
	if (*head == NULL)
		return (-1);

	/* check if index is 0 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	/* if no temp or temp->next return fail */
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		/* move temp to next node */
		temp = temp->next;
		i++;
	}

	/* set current node to pointer of next node */
	delete = temp->next;
	/* set temp next to current node next */
	temp->next = delete->next;
	/* free deleted node */
	free(delete);

	return (1);
}
