#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: start of list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
