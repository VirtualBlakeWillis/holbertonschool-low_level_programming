#include "lists.h"

/**
 * listint_len - Return # of elements in linked list
 * @h: head of list
 * Return: int
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
