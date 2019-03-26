#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
