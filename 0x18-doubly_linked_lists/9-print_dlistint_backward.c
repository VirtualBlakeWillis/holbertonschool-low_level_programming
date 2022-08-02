#include "lists.h"

/**
 * print_dlistint_backward - print a doubly liked list backwards
 *
 * @head: head of list
 * Return: # of nodes
 */

size_t print_dlistint_backward(const dlistint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (n);

	while (head->next != NULL)
		head = head->next;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->prev;
		n++;
	}
	return (n);
}
