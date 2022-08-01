#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of list
 *
 * @h: head
 * @n: data for new node
 * Return: head, or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Malloc Fail\n");
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;

	if (*h == NULL)
	{
		new->next = NULL;
	}
	else
	{
		(*h)->prev = new;
		new->next = *h;
	}

	*h = new;
	return (*h);
}
