#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to a new hash table
 * Otherwise, NULL if an error occurs
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table_created;
	unsigned long int i;

	/* allocate space for the hash table */

	hash_table_created = malloc(sizeof(hash_table_t));

	/* check if space was successfully allocated to hash table */
	if (hash_table_created == NULL)
		return (NULL);

	hash_table_created->size = size;

	hash_table_created->array = malloc(sizeof(hash_node_t *) * size);

	/* check for malloc allocation for array */

	if (hash_table_created->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table_created->array[i] = NULL;
	}

	return (hash_table_created);
}
