#include "hash_tables.h"

/**
 * hash_table_print - print out a hash table
 *
 * @ht: hash table to print
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, isNotFirst = 0;
	hash_node_t *temp;

	printf("{");
	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (ht->array[i] != NULL)
		{
			while (temp)
			{
				if (isNotFirst == 1)
					printf(", ");
				printf("'%s':'%s'", temp->key, temp->value);
				isNotFirst = 1;
				temp = temp->next;
			}
		}
	}

	printf("}\n");
}
