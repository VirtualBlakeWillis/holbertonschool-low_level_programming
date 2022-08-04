#include "hash_tables.h"

/**
 * hash_table_get - get value stored at key in hash table
 *
 * @ht: hash table to search
 * @key: key to find
 * Return: value at key, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned int i;

	if (!ht || !key)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);

	head = ht->array[i];

	while (head)
	{
	if (strcmp(head->key, key) == 0)
		return (head->value);

	head = head->next;
	}

	return (NULL);
}
