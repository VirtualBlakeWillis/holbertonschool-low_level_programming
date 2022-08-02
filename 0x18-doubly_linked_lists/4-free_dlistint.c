#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head->next != NULL)
	{
		head = head->next;
		tmp = head->prev;
		free(tmp);
	}
	if (head != NULL)
		free(head);
}
