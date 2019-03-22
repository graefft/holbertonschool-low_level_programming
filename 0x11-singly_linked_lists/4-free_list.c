#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: start of list
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str)
			free(head->str);
		head = head->next;
	}
	free(head);
}
