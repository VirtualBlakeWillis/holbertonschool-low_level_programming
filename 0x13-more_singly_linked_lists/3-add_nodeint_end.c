#include "lists.h"

/**
 * add_nodeint_end - add node at end of list
 * @head: head of list
 * @n: number to store in new node
 * Return: address of new node, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}


	return (new);
}
