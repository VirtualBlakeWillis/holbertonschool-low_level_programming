#include "lists.h"

/**
 * dlistint_len - return # of elements in list
 *
 * @h: head of list
 * Return: int
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
