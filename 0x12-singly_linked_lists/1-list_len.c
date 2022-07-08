#include "lists.h"

/**
 *
 *
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	list_t const *temp = h;

	while (temp)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}
