#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: the head od list
 * @index: the index of the node
 * Return: the nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	temp = head;

	return (temp);
}
