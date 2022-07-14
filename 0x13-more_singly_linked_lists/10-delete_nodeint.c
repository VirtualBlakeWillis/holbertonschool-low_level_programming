#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to list
 * @index: index of node to delete
 * Return: 1 of success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *iterator = *head;
	unsigned int i;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free (temp);
		return (1);
	}
	else
	{
		for (i = 0; i < (index - 1); i++)
		{
			if (!iterator->next)
				return(-1);

			iterator = iterator->next;
		}

		temp = iterator->next;
		iterator->next = temp->next;
		free(temp);
		return (1);
	}


}
