#include "lists.h"

/**
 *  free_listint - free a linked list
 *  @head: address of list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;
	while (temp->next)
	{
		free(head);
		temp = temp->next;
		head = temp;
	}
	free(temp);
}
