#include "hash_tables.h"

/**
 * hash_table_delete - free a hash table
 * @ht: hash table 2 free
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *head;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			head = ht->array[i];
			while (head)
			{
				temp = head;
				head = head->next;
				free(temp->value);
				free(temp);
			}
			free(head);
		}
	}
	free(ht->array);
	free(ht);
}
