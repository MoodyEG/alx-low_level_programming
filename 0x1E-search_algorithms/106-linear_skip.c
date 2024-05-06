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
	node = list;
	exp = node->express;
	if (!(node->n < value && exp->n < value))
		printf("Value checked at index [%lu] = [%d]\n",
		exp->index, exp->n);
	while (node->n < value && exp->n < value)
	{
		node = exp;
		printf("Value checked at index [%lu] = [%d]\n",
		node->index, node->n);
		if (exp->express == NULL)
		{
			while (exp->next != NULL)
				exp = exp->next;
			break;
		}
		exp = exp->express;
		if (exp->n > value)
			printf("Value checked at index [%lu] = [%d]\n",
			exp->index, exp->n);
	}
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
