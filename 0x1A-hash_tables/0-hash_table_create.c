#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 *
 * @size: size of hash table array
 * Return: address of new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **node_array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	node_array = malloc(sizeof(hash_node_t *) * size);
	if (node_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		node_array[i] = NULL;

	table->size = size;
	table->array = node_array;
	return (table);
}
