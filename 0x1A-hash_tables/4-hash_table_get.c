#include "hash_tables.h"

/**
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	unsigned int i;

	i = key_index((unsigned char *)key, ht->size);

	head = ht->array[i];

	while(head)
	{
	if (strcmp(head->key, key) == 0)
		return (head->value);

	head = head->next;
	}
	
	return (NULL);
}
