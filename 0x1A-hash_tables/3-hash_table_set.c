#include "hash_tables.h"

/**
 * hash_table_set - Adds element to the hash table
 * @ht: the hash table to add to
 * @key: key to be added
 * @value: value to store for key
 * Return: 1 on success, 0 upon failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tupple, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	if (tmp != NULL)
	{
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	tupple = malloc(sizeof(hash_node_t));
	if (tupple == NULL)
		return (0);

	tupple->key = strdup(key);
	tupple->value = strdup(value);
	tupple->next = NULL;

	if (ht->array[i] != NULL)
		tupple->next = ht->array[i];

	ht->array[i] = tupple;

	return (1);
}
