#include "hash_tables.h"

/**
 * hash_table_delete - deletes a given hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *topple, *prev;
	unsigned long int size, index;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (index = 0, size = ht->size; index < size; index++)
	{
		topple = ht->array[index];
		while (topple)
		{
			prev = topple;
			topple = topple->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
