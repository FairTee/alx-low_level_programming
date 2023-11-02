#include "hash_tables.h"

/**
 * key_index - Get the index for a given key
 * @y: The key string to hash
 * @z: The size of the hash table array
 * Return: The index where the key should be stored
 */
unsigned long int key_index(const unsigned char *y, unsigned long int z)
{
	unsigned long int hash;

	if (y == NULL || z == 0)
		return (0);

	hash = hash_djb2(y);
	return (hash % z);
}
