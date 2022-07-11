#include "lists.h"

/**
 * *get_nodeint_at_index - return node at index
 * @head: pointer to list
 * @index: index
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index > 0; index--)
		head = head->next;

	return (head);
}
