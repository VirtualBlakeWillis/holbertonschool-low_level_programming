#include "lists.h"

/** 
 * add_node - adds a new node to the start of a linked list
 * @head: address of first node
 * @str: content to add as new first node
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->next = *head;
	newNode->str = strdup(str);
	newNode->len = strlen(str);

	*head = newNode;
	return (*head);
}
