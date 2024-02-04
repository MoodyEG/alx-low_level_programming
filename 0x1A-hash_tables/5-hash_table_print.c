#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table you want to add or update the key/value to
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *a = "";

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			printf("%s'%s': '%s'", a, temp->key, temp->value);
			a = ", ";
			temp = temp->next;
		}
	}
	printf("}\n");
}
