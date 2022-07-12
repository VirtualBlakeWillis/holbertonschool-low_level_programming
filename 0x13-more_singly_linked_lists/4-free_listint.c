#include "lists.h"

/**
 *  free_listint - free a linked list
 *  @head: address of list
 *  Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

        while (head)
        {
		temp = head;
		head = head->next;

		free(temp);
        }











	
}
