#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted
 * list of integers using the Jump search algorithm.
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, index, br = 0;
	listint_t *node, *jump_node;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	node = jump_node = list;

	while (jump_node->index < size && jump_node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		jump_node->index, jump_node->n);
		node = jump_node;
		for (i = 0; i < jump; i++)
		{
			if (jump_node->next != NULL)
				jump_node = jump_node->next;
			else
			{
				printf("Value checked at index [%lu] = [%d]\n",
				jump_node->index, jump_node->n);
				br = 1;
			}
		}
		if (br)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	node->index, jump_node->index);
	for (index = node->index; index <= jump_node->index; index++)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}

