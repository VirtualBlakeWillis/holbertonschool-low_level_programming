#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 *
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		tmp = head->prev;
		free(tmp);
	}
	free(head);
}
