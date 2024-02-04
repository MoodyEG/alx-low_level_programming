#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @value: the value associated with the key.
 * @key: the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (addnode(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}

/**
 * addnode - creates a node in the index
 * @head: head of the list at index
 * @value: the value associated with the key.
 * @key: the key
 * Return: the node or NULL if failed
 */
hash_node_t *addnode(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp;

	temp = *head;
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));
	if (!temp)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *head;
	*head = temp;
	return (*head);
}
