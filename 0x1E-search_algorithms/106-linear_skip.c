#include "search_algos.h"


/**
 * linear_skip - linear search function for a skip list
 *
 * @list: singly linked list to search
 * @value: value to search for
 * Return: pointer to first node where value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int r;
	skiplist_t *prev, *next;

	if (!list)
		return (NULL);
	prev = list;
	next = prev->express;

	while (prev->express && prev->n < value)
	{
		printf("Value checked at index [%zu] = [%d]\n", next->index, next->n);
		if (next->n >= value)
			break;
		prev = next;
		next = next->express;
	}
	if (!next)
	{
		next = prev;
		while(next->next)
			next = next->next;
	}
	printf("Value found between indexes [%zu] and [%zu]\n", prev->index, next->index);

	size_t upper = next->index;
	while(prev->index <= upper && prev->n <= value)
	{
		printf("Value checked at index [%zu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return prev;

		if (prev->index == upper)
			break;
		prev = prev->next;

	}
	return (NULL);
}
