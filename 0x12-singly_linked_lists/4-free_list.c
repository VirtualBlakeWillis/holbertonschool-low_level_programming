#include "lists.h"
/**
 * free_list - free a singly linked list
 * @head: address of start
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	
	while(head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
