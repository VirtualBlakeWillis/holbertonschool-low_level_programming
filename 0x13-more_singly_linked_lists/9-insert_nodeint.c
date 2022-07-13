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
	listint_t *temp, *new = malloc(sizeof(listint_t));
	unsigned int c;

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = (*head)->next;
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;

		for (c = 1; c < idx; c++)
		{
			if (temp->next == NULL)
				return (NULL);

			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
