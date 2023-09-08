#include "hash_tables.h"

/**
 * key_index - provides the index of a key
 * @key: for each key as a  pair
 * @size: size of array
 * Return: index where key or value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
