#include "lists.h"

/**
 * print_dlistint - print data in each node of list
 *
 * @h: head of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
