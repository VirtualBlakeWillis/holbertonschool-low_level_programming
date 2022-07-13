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
	listint_t *temp = *head, *new = malloc(sizeof(listint_t));
	unsigned int count;

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	for (count = 1; count < idx; count++)
	{
		if (temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->n = n;
	new->next = temp->next;

	temp->next = new;

	return (new);
}
