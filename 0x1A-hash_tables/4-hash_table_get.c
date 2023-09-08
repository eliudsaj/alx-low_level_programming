#include "hash_tables.h"

/**
 * hash_table_get - gets a value for a given key
 * @ht: hash table search
 * @key: key to find the value of
 * Return: Success(value), not found(NULL)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
