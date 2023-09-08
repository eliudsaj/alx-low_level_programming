#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table array
 * Return: a pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;

	if (size <= 0)
		return (NULL);
	tbl = malloc(sizeof(*tbl));
	if (tbl == NULL)
		return (NULL);
	tbl->size = size;
	tbl->array = malloc(sizeof(*(tbl->array)) * size);
	if (tbl->array == NULL)
	{
		free(tbl);
		return (NULL);
	}
	return (tbl);
}
