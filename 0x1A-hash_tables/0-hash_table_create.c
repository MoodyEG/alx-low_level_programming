#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(*ht));
	if (!ht)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = NULL;
	ht->array = array;
	ht->size = size;

	return (ht);
}
