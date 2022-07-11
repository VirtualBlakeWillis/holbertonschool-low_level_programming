#include "lists.h"

/**
 * print_listint - print contents of list, return # of elements
 * @h: head of list
 * Return: # of items in list
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	for (; h; n++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (n);
}
