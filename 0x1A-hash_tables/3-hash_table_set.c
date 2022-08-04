#include "hash_tables.h"

/**
 * hash_table_set - add an element to hash table
 *
 * @ht: hash table
 * @key: key of element
 * @value: value of element
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new;

	if (!ht || !key || !value)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	if (ht->array[i] == NULL)
		new->next = NULL;
	else
		new->next = ht->array[i];

	ht->array[i] = new;
	new->key = (char *)key;
	new->value = strdup(value);

	return (1);
}
