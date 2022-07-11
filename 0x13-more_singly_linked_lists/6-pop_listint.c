#include "lists.h"

/**
 * pop_listint - 'pop' first element of list
 * @head: pointer to list
 * Return: data (n) at start of list
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;

	*head = temp->next;
	free(temp);

	return ((*head)->n);
}
