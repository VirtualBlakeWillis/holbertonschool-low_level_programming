#include "lists.h"

/**
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;
	for(; h; n++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (n);
}
