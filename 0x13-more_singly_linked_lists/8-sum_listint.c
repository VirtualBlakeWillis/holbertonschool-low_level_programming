#include "lists.h"

/**
 * sum_listint - return sum of all data in list
 * @head: pointer to list
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
