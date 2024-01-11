#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: our list
 * @index: the index of the node
 * Return: the nth node or NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}
