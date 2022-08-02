#include "lists.h"
int index_is_0(dlistint_t **head);
/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: head of list
 * @index: index of node to delete
 * Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node_before, *node_after, *temp;
	int success = 1, failure = -1;

	temp = *head;

	if (*head == NULL)
	{
		return (failure);
	}

	if (index == 0)
		index_is_0(head);
	else
	{
		/* itterate to index */
		for (i = 0; i < index; i++)
		{
			if (temp->next == NULL)
				return (failure);
			temp = temp->next;
		}
		/* index is last node */
		if (temp->next == NULL)
		{
			node_before = temp->prev;
			node_before->next = NULL;
		}
		else
		{
			/* index is in sandwhich spot */
			node_before = temp->prev;
			node_after = temp->next;
			node_before->next = temp->next;
			node_after->prev = temp->prev;
		}
	}
	/* free node, return */
	if (*head != NULL)
		free(temp);
	return (success);
}

/**
 * index_is_0 - functionality for deleting a node at index 0
 *
 * @head: head of list
 * Return: always 1
 */
int index_is_0(dlistint_t **head)
{
	dlistint_t *node_after, *temp = *head;

	if (temp->next)
	{
		/* set head to node at index 1 */
		node_after = temp->next;
		node_after->prev = NULL;
		*head = node_after;
	}
	else
	{
		if (*head != NULL)
		{
			free(temp);
			*head = NULL;
		}
	}

	return (1);
}
