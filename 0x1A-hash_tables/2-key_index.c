#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @size: the size of the array
 * @key: the key
 * Return: a pointer to the newly created hash table
 * or NULL if something went wrong
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL ||  size == 0)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}
