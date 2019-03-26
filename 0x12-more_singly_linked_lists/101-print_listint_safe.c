#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to first node
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	/* check if head is NULL */
	if (!head)
		exit(98);

	/* transverse through list */
	while (head)
	{
		if (head - head->next >= 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
		/* if head is NULL */
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}
	}
	return (count);
}
