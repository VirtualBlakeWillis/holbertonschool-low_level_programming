#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 * @head: head of list
 * @n: number stored at node
 * Return: address of new element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	*head = temp;

	return (*head);
}
