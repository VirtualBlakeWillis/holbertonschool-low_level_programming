#include "lists.h"

/**
 * print_list - prints a singly linked list
 * @h: first pointer (head)
 * Return: # of elements printed
 */

size_t print_list(const list_t *h)
{
	int n = 0;
	const list_t *tmp = h;

	if (h = NULL)
		return (NULL);
	do {
		if (tmp->str)
			printf("[%d] %s\n", tmp->len, tmp->str);
		else
			printf("[0] (nil)\n");
		n++;
		tmp = tmp->next;

	} while (tmp != NULL);

	return (n);
}
