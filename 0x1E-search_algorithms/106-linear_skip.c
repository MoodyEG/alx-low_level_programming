#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: a pointer to the head of the list to search in
 * @value: the value to search for
 * Return: a pointer to the first node where value is located
 * or NULL if failed
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *exp;
	size_t index;

	if (list == NULL)
		return (NULL);
	node = exp = list;
	do {
		node = exp;
		exp = exp->express;
		printf("Value checked at index [%lu] = [%d]\n",
		exp->index, exp->n);
		if (exp->express == NULL && exp->n < value)
		{
			node = exp;
			while (exp->next != NULL)
				exp = exp->next;
			break;
		}
	} while (exp->express && exp->n < value);
	printf("Value found between indexes [%lu] and [%lu]\n",
	node->index, exp->index);
	for (index = node->index; index <= exp->index; index++)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}
