#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table with a given size
 *
 * @size: Size of the hash table
 * Return: The created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tab;
	hash_node_t **array;
	unsigned long int a;

	tab = malloc(sizeof(hash_table_t));
	if (tab == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		array[a] = NULL;

	tab->array = array;
	tab->size = size;

	return (tab);
}
