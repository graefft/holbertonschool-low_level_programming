#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head
 * Return: address of node where loop starts or NULL if no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* initialize both to beginning */
	listint_t *slow = head;
	listint_t *fast = head;

	/* check if head is NULL */
	if (!head)
		return (NULL);

	/* loop though list slow by one and fast by two */
	while (fast && slow && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			/* set slow to beginning */
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			/* return address of node where loop starts */
			return (fast);
		}
	}
	return (NULL);
}
