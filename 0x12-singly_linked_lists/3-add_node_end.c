#include "lists.h"

/**
 * add_node_end - add a node to the end of a singly linked list
 * @head: pointer to first node
 * @str: string to populate new node
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);

	if (*head == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}
