#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	/* transverse through list */
	while (head)
	{
		count++;
		if (head - head->next > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		/* if head is NULL */
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (count);
}
