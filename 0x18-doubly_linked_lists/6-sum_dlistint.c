#include "lists.h"

/**
 * sum_dlistint - return sum of data in list
 *
 * @head: head of list
 * Return: sum, or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;

	}

	return (s);
}
