#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @sizex: The size of the array
 *
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int sizex)
{
	hash_table_t *new_table;
	unsigned long int a;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = sizex;
	new_table->array = malloc(sizex * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (a = 0; a < sizex; a++)
		new_table->array[a] = NULL;
	return (new_table);
}
