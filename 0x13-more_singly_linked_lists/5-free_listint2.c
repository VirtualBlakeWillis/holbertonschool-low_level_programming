#include "lists.h"
#include "4-free_listint.c"
/**
 * free_listint2 - free list, set head = NULL
 * @head: address of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	(*head)->next = NULL;
	*head = NULL;
	
}
