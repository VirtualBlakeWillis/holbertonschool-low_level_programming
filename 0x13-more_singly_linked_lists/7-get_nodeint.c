#include "lists.h"

/**
 * *get_nodeint_at_index - return node at index
 * @head: pointer to list
 * @index: index
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
