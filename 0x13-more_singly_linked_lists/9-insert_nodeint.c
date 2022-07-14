#include "lists.h"

/**
 * insert_nodeint_at_index - create new node at index
 * @head: address of first node
 * @idx: index of new node
 * @n: value of new node
 * Return: address of new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *iterator = *head, *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (new == NULL || iterator == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = iterator;
		iterator = new;
		return (new);
	}
	else
	{
		for (i = 0; i < (idx - 1); i++)
		{
			if (iterator == NULL)
				return (NULL);
			iterator = iterator->next;
		}
		new->next = iterator->next;
		iterator->next = new;

		return (new);
	}
}
