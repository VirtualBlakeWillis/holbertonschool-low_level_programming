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

	if (new == NULL)
		return (NULL);

	for (; idx > 1; idx--)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new->n = n;
	new->next = temp->next;

	temp->next = new;

	return (new);
}
