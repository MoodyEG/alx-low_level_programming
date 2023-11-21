#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the head od list
 * @idx: is the index of the list where the new node should be added
 * @n: the data to be added
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 1;

	if ((*head) == NULL && idx != 0)
		return (NULL);
	temp = *head;
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		i++;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
