#include "lists.h"

/**
 * get_dnodeint_at_index - return node at index
 *
 * @head: head of list
 * @index: index of node to return
 *
 * Return: dlistint_t node, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
