#include "lists.h"

/**
 *  free_listint - free a linked list
 *  @head: address of list
 *  Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL || head->next == NULL)
	{
		free(head);
	}
	while (temp->next)
	{
		free(head);
		head = temp;
		temp = temp->next;
	}
	free(temp);
}
