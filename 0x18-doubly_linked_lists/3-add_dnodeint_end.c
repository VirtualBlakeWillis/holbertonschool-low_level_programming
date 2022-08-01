#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 *
 * @head: head of list
 * @n: data for new
 * Return: new, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("Malloc Fail\n");
		return (NULL);
	}

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		new->prev = tmp;
		tmp->next = new;
	}

	new->n = n;
	new->next = NULL;
	return (new);

}
