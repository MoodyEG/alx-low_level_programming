#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table you want to add or update the key/value to
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp1, *temp2;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		temp1 = ht->array[index];
		temp2 = temp1;
		while (temp1)
		{
			temp2 = temp1;
			temp1 = temp1->next;
			free(temp2->key);
			free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
