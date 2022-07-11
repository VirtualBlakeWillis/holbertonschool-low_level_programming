#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to list
 * @index: index of node to delete
 * Return: 1 of success, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *delete;
	unsigned int n;

	if (*head == NULL)
		return (EXIT_FAILURE);

	for (n = 1; n < index; n++)
		temp = temp->next;

	if (temp->next == NULL)
		return (EXIT_FAILURE);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		delete = temp->next;
		temp->next = delete->next;
		free(delete);
	}

	return (EXIT_SUCCESS);
}
