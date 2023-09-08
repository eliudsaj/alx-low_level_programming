#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht:  the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *topple;
	unsigned long int index;
	int delim;

	if (ht == NULL)
		return;

	printf("{");

	for (index = 0, delim = 0; index < ht->size; index++)
	{
		topple = ht->array[index];
		if (topple != NULL)
		{
			if (delim == 1)
				printf(", ");
			printf("'%s': '%s'", topple->key, topple->value);
			while ((topple = topple->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", topple->key, topple->value);
			}

			delim = 1;
		}
	}

	printf("}\n");
}
